// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Activation.IConstructionCallMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
