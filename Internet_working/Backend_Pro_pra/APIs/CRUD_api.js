 // crud simply means create read update delete.

 // create a note 
 // update a note 
 // read a note 
 // deelte a note

//  Create → POST

// Read → GET

// Update → PUT or PATCH

// Delete → DELETE

const express = require("express");
const app = express();

app.get("/notes", (req,res) => {
    res.json(notes);

})
app.get("/notes/:id", (req, res) => {

    const id = Number(req.params.id);

    const note = notes.find(note => note.id === id);

    res.json(note);

});
app.post("/notes", (req, res) => {

    const newNote = {

        id: notes.length + 1,

        text: req.body.text

    };

    notes.push(newNote);

    res.json(newNote);

});
app.delete("/notes/:id", (req, res) => {

    const id = Number(req.params.id);

    notes = notes.filter(note => note.id !== id);

    res.send("Deleted");

});
app.put("/notes/:id", (req, res) => {

    const id = Number(req.params.id);

    const note = notes.find(note => note.id === id);

    note.text = req.body.text;

    res.json(note);

});