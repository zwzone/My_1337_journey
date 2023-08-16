function fillCircle(context, x, y, radius, color) {
    context.beginPath();
    context.arc(x, y, radius, 0, 2 * Math.PI, false);
    context.fillStyle = color;
    context.fill();
}

function fillRect(context, upX, upY, downX, downY, color) {
    context.beginPath();
    context.rect(upX, upY, downX, downY);
    context.fillStyle = color;
    context.fill();
}

function index() {
    const canvas = document.getElementById("Game");
    const context = canvas.getContext("2d");
    const width = canvas.width;
    const height = canvas.height;
    // const width = window.innerWidth;
    // const height = window.innerHeight;
    // canvas.width = width;
    // canvas.height = height;

    const stickLen = 50;
    const stickThick = 5;
    const gap = 0;
    const radius = 5;
    const color = "black";
    const speed = 0.75;

    let cx = width / 2;
    let cy = height / 2;
    let rx;
    let ry;
    let dx = speed;
    let dy = speed;

    let start;

    function step(timestamp) {
        if (start === undefined)
            start = timestamp;
        const dt = (timestamp - start) * 0.001;

        context.clearRect(0, 0, width, height);

        cy += dy;
        cx += dx;

        if (cy + radius + gap >= height || cy - radius - gap <= 0) dy = -dy;
        if (cx + radius + gap + stickThick >= width || cx - radius - gap - stickThick <= 0) dx = -dx;

        if (cx + gap + stickLen / 2 >= width) rx = width - stickLen - gap;
        else if (cx - gap - stickLen / 2 <= 0) rx = gap;
        else rx = cx - stickLen / 2;

        if (cy + gap + stickLen / 2 >= height) ry = height - stickLen - gap;
        else if (cy - gap - stickLen / 2 <= 0) ry = gap;
        else ry = cy - stickLen / 2;

        fillCircle(context, cx, cy, radius, color);

        fillRect(context, gap, ry, stickThick, stickLen, color);
        fillRect(context, width - gap - stickThick, ry, stickThick, stickLen, color);

        // fillRect(context, rx, gap, stickLen, stickThick, color);
        // fillRect(context, rx, height - gap - stickThick, stickLen, stickThick, color);

        window.requestAnimationFrame(step);
    }

    window.requestAnimationFrame(step);
}

index();
