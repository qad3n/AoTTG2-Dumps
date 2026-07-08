using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D9")]
[ComVisible(true)]
public abstract class DES : SymmetricAlgorithm
{
	[Token(Token = "0x4000CFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002A3")]
	public override byte[] Key
	{
		[Token(Token = "0x60018E3")]
		[Address(RVA = "0x4E48950", Offset = "0x4E48950", VA = "0x4E48950", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x4E48E10", Offset = "0x4E48E10", VA = "0x4E48E10", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x4E488B0", Offset = "0x4E488B0", VA = "0x4E488B0")]
	protected DES()
	{
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x4E49020", Offset = "0x4E49020", VA = "0x4E49020")]
	public new static DES Create()
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x4E491F0", Offset = "0x4E491F0", VA = "0x4E491F0")]
	public new static DES Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x4E48A70", Offset = "0x4E48A70", VA = "0x4E48A70")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x4E48BE0", Offset = "0x4E48BE0", VA = "0x4E48BE0")]
	public static bool IsSemiWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x4E49280", Offset = "0x4E49280", VA = "0x4E49280")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x4E49290", Offset = "0x4E49290", VA = "0x4E49290")]
	private static ulong QuadWordFromBigEndian(byte[] block)
	{
		return default(ulong);
	}
}
