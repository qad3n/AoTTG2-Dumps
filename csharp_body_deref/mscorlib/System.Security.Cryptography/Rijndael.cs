using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F1")]
[ComVisible(true)]
public abstract class Rijndael : SymmetricAlgorithm
{
	[Token(Token = "0x4000D2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x4E51990", Offset = "0x4E51990", VA = "0x4E51990")]
	protected Rijndael()
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x4E51A30", Offset = "0x4E51A30", VA = "0x4E51A30")]
	public new static Rijndael Create()
	{
		return null;
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x4E51BF0", Offset = "0x4E51BF0", VA = "0x4E51BF0")]
	public new static Rijndael Create(string algName)
	{
		return null;
	}
}
