// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.TlsException
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000033")]
public sealed class TlsException : Exception
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x90")]
	private Alert alert;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x52C8560", Offset = "0x52C7560", VA = "0x52C8560")]
	public TlsException(Alert alert, string message)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x52C85D0", Offset = "0x52C75D0", VA = "0x52C85D0")]
	public TlsException(AlertDescription description, string message)
	{
	}
}
