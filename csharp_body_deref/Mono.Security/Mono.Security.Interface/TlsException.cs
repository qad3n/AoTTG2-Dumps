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

[Token(Token = "0x2000045")]
public sealed class TlsException : Exception
{
	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x90")]
	private Alert alert;

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x193D950", Offset = "0x193BF50", VA = "0x18193D950")]
	public TlsException(Alert alert)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x193D7A0", Offset = "0x193BDA0", VA = "0x18193D7A0")]
	public TlsException(Alert alert, string message)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x193D890", Offset = "0x193BE90", VA = "0x18193D890")]
	public TlsException(AlertDescription description)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x193D820", Offset = "0x193BE20", VA = "0x18193D820")]
	public TlsException(AlertDescription description, string message)
	{
	}
}
