// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IInternalMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003AC")]
internal interface IInternalMessage
{
	[Token(Token = "0x170003BC")]
	System.Runtime.Remoting.Identity TargetIdentity
	{
		[Token(Token = "0x6001E6A")]
		get;
		[Token(Token = "0x6001E6B")]
		set;
	}

	[Token(Token = "0x170003BD")]
	string Uri
	{
		[Token(Token = "0x6001E6C")]
		get;
		[Token(Token = "0x6001E6D")]
		set;
	}
}
