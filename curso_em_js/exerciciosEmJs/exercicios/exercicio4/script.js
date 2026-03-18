const mensagem = document.getElementById("mensagem");
const botao = document.getElementById("bttn");
const notaluno = document.getElementById("nota");
const namemm = document.getElementById("nome");

botao.addEventListener("click", () => {
  const nota = notaluno.value;
  const nome = namemm.value;

  if(nota === "" || nome === ""){
    mensagem.innerHTML = " Preencha todos os campos";
  }else{
    if(nota >= 7){
    mensagem.innerHTML = "Parabens "+ nome + " voce passou";
    }else if(nota >= 5 && nota < 7){
      mensagem.innerHTML = nome +  " voce está de recuperação";
      }else{
        mensagem.innerHTML = nome + " voce está reprovado";
        }
    }
 
})