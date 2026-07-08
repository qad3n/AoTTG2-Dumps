using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030E")]
[ComVisible(true)]
public abstract class TripleDES : SymmetricAlgorithm
{
	[Token(Token = "0x4000D8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002E6")]
	public override byte[] Key
	{
		[Token(Token = "0x6001AC1")]
		[Address(RVA = "0x4E654C0", Offset = "0x4E654C0", VA = "0x4E654C0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AC2")]
		[Address(RVA = "0x4E65730", Offset = "0x4E65730", VA = "0x4E65730", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x4E65410", Offset = "0x4E65410", VA = "0x4E65410")]
	protected TripleDES()
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x4E659A0", Offset = "0x4E659A0", VA = "0x4E659A0")]
	public new static TripleDES Create()
	{
		return null;
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x4E65AD0", Offset = "0x4E65AD0", VA = "0x4E65AD0")]
	public new static TripleDES Create(string str)
	{
		return null;
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x4E655B0", Offset = "0x4E655B0", VA = "0x4E655B0")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x4E65CC0", Offset = "0x4E65CC0", VA = "0x4E65CC0")]
	private static bool EqualBytes(byte[] rgbKey, int start1, int start2, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x4E65BE0", Offset = "0x4E65BE0", VA = "0x4E65BE0")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}
}
