// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.IInternalMessage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003DB")]
internal interface IInternalMessage
{
	[Token(Token = "0x170003BE")]
	System.Runtime.Remoting.Identity TargetIdentity
	{
		[Token(Token = "0x6001ED9")]
		get;
		[Token(Token = "0x6001EDA")]
		set;
	}

	[Token(Token = "0x170003BF")]
	string Uri
	{
		[Token(Token = "0x6001EDB")]
		get;
		[Token(Token = "0x6001EDC")]
		set;
	}
}
