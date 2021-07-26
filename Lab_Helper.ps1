$choice = Read-Host "enter 1 to make cpp file\nenter 2 to make ppt\nenter 3 to make docx\nenter 4 to sign out\n enter 5 to restart      "
if($choice -eq 1){
	notepad programgenerated.cpp
}
else if($x -eq 2){
   notepad programgenerated.ppt
} 
else if($x -eq 3){
   notepad programgenerated.docx
}
elseif($x -eq 4){
   shutdown -L -t 1
} 
elseif($x -eq 5){
    shutdown -r -t 1
}