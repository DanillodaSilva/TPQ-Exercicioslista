const mensagem = document.getElementById("mensagem")
const botao = document.getElementById("bttn")
const senha = document.getElementById("senha")
const email = document.getElementById("email")

botao.addEventListener("click", () => {
  const senhap = senha.value
  const emailp = email.value

  if(senhap === "" || emailp === ""){
  mensagem.innerHTML = "Preencha todos os campos"
  }else if(emailp.includes("@")){
    const senhaCadastrada = senha.value
    const emailCadastrada = email.value
    mensagem.innerHTML = "Email cadastrado com sucesso"
    console.log("Seu email é: " + emailCadastrada)
    console.log("Sua senha é: " + senhaCadastrada)
    }else{
      mensagem.innerHTML = "Verifique que o email ta sendo escrito da forma correta"
      }

  


})