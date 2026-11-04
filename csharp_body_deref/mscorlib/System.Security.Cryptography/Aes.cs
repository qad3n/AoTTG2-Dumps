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

[Token(Token = "0x20002F7")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public abstract class Aes : SymmetricAlgorithm
{
	[Token(Token = "0x4000CDB")]
	[FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CDC")]
	[FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x19A28B0", Offset = "0x19A0EB0", VA = "0x1819A28B0")]
	protected Aes()
	{
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x19A2610", Offset = "0x19A0C10", VA = "0x1819A2610")]
	public new static Aes Create()
	{
		return null;
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x19A2520", Offset = "0x19A0B20", VA = "0x1819A2520")]
	public new static Aes Create(string algorithmName)
	{
		return null;
	}
}
