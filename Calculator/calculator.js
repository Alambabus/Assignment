const buttons = document.querySelectorAll('button');

const screen = document.getElementById('screen');

for (let button of buttons) {
    button.addEventListener('click', (e) => {
        let buttonText = e.target.innerText;

        if (buttonText === 'AC') {
            screen.value = "";
        } else if (buttonText === '=') {
            try {
                screen.value = eval(screen.value);
            } catch (error) {
                screen.value = "Invalid Operator";
            }
        } else {
            screen.value += buttonText;
        }
    })
}