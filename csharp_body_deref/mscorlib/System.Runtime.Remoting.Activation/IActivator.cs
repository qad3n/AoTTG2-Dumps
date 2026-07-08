using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038A")]
[ComVisible(true)]
public interface IActivator
{
	[Token(Token = "0x17000381")]
	IActivator NextActivator
	{
		[Token(Token = "0x6001DBF")]
		get;
	}

	[Token(Token = "0x6001DC0")]
	IConstructionReturnMessage Activate(IConstructionCallMessage msg);
}
