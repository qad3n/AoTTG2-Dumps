// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Aes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C8")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public abstract class Aes : SymmetricAlgorithm
{
	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x3B2BC30", Offset = "0x3B2BC30", VA = "0x3B2BC30")]
	protected Aes()
	{
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x3B2BCD0", Offset = "0x3B2BCD0", VA = "0x3B2BCD0")]
	public new static Aes Create()
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x3B2BD40", Offset = "0x3B2BD40", VA = "0x3B2BD40")]
	public new static Aes Create(string algorithmName)
	{
		return null;
	}
}
