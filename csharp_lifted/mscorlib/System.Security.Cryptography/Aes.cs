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

[Token(Token = "0x20002D0")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public abstract class Aes : SymmetricAlgorithm
{
	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x5335C60", Offset = "0x5334C60", VA = "0x5335C60")]
	protected Aes()
	{
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x5335D00", Offset = "0x5334D00", VA = "0x5335D00")]
	public new static Aes Create()
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x5335D80", Offset = "0x5334D80", VA = "0x5335D80")]
	public new static Aes Create(string algorithmName)
	{
		return null;
	}
}
