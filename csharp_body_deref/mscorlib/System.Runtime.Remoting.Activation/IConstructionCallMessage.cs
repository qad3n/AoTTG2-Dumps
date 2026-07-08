using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Activation;

[Token(Token = "0x200038B")]
[ComVisible(true)]
public interface IConstructionCallMessage : IMessage, IMethodCallMessage, IMethodMessage
{
	[Token(Token = "0x17000382")]
	Type ActivationType
	{
		[Token(Token = "0x6001DC1")]
		get;
	}

	[Token(Token = "0x17000383")]
	string ActivationTypeName
	{
		[Token(Token = "0x6001DC2")]
		get;
	}

	[Token(Token = "0x17000384")]
	IActivator Activator
	{
		[Token(Token = "0x6001DC3")]
		get;
		[Token(Token = "0x6001DC4")]
		set;
	}

	[Token(Token = "0x17000385")]
	object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001DC5")]
		get;
	}

	[Token(Token = "0x17000386")]
	IList ContextProperties
	{
		[Token(Token = "0x6001DC6")]
		get;
	}
}
