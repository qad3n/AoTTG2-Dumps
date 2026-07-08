using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038C")]
[ComVisible(true)]
public interface IConstructionReturnMessage : IMethodReturnMessage, IMethodMessage, IMessage
{
}
