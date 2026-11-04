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

[Token(Token = "0x20003BA")]
[ComVisible(true)]
public interface IConstructionCallMessage : IMessage, IMethodCallMessage, IMethodMessage
{
	[Token(Token = "0x17000384")]
	Type ActivationType
	{
		[Token(Token = "0x6001E30")]
		get;
	}

	[Token(Token = "0x17000385")]
	string ActivationTypeName
	{
		[Token(Token = "0x6001E31")]
		get;
	}

	[Token(Token = "0x17000386")]
	IActivator Activator
	{
		[Token(Token = "0x6001E32")]
		get;
		[Token(Token = "0x6001E33")]
		set;
	}

	[Token(Token = "0x17000387")]
	object[] CallSiteActivationAttributes
	{
		[Token(Token = "0x6001E34")]
		get;
	}

	[Token(Token = "0x17000388")]
	IList ContextProperties
	{
		[Token(Token = "0x6001E35")]
		get;
	}
}
