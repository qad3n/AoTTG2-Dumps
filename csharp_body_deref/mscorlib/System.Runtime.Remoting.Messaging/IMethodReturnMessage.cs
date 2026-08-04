// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003B2")]
[ComVisible(true)]
public interface IMethodReturnMessage : IMethodMessage, IMessage
{
	[Token(Token = "0x170003C7")]
	Exception Exception
	{
		[Token(Token = "0x6001E7A")]
		get;
	}

	[Token(Token = "0x170003C8")]
	object[] OutArgs
	{
		[Token(Token = "0x6001E7B")]
		get;
	}

	[Token(Token = "0x170003C9")]
	object ReturnValue
	{
		[Token(Token = "0x6001E7C")]
		get;
	}
}
