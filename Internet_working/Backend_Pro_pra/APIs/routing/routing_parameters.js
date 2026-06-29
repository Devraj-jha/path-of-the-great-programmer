const express = require("express");
const app = express();
// dyanamic placeholders, in your path that..
// captures values from the url. and make them avaiable to do.


app.get("/notes/:id", (req,res) => {
    console.log(req.params);
    res.send("DOne");
}) 

//:colon indicates a variable.
