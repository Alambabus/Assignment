let st = "This is a sunny day";
st = st.split(" ").reverse().join(" ");
let ans = "";
for (let i = st.length - 1; i >= 0; i--) {
    ans += st[i];
}
console.log(ans);