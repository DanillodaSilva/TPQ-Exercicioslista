const botao = document.getElementById("botao")
const email = document.getElementById("email")
const senha = document.getElementById("senha")
const mensagem = document.getElementById("mensagem") 

botao.addEventListener("click", () => {
  const senhav = senha.value
  const emailv = email.value

  if(senhav === "" && emailv === ""){
    mensagem.innerHTML = "Preencha todos os campos de login"
  }else if(senhav === "276413Dan!" || emailv === "dssiqueira2016@gmail.com"){
      mensagem.innerHTML = "Seja Bem vinde"
    }else{
      mensagem.innerHTML = "Login e senha não encontrados"
     }
    
})