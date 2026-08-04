// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeRemoteClassHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000014")]
internal struct RuntimeRemoteClassHandle
{
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.RemoteClass* value;

	[Token(Token = "0x17000006")]
	internal Mono.RuntimeClassHandle ProxyClass
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x3ACDA10", Offset = "0x3ACDA10", VA = "0x3ACDA10")]
		get
		{
			return default(Mono.RuntimeClassHandle);
		}
	}
}
