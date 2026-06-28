const express = require("express");

const app = express();

app.get("/", (req,res) => {
    res.send("Hello world");
});
// req = > everything client sends
// res => what you will send back


app.listen(3000);