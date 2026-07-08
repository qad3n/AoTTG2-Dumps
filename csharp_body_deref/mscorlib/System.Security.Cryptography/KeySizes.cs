using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D3")]
[ComVisible(true)]
public sealed class KeySizes
{
	[Token(Token = "0x4000CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_minSize;

	[Token(Token = "0x4000CE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_maxSize;

	[Token(Token = "0x4000CE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_skipSize;

	[Token(Token = "0x1700029C")]
	public int MinSize
	{
		[Token(Token = "0x60018BB")]
		[Address(RVA = "0x4E47FD0", Offset = "0x4E47FD0", VA = "0x4E47FD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029D")]
	public int MaxSize
	{
		[Token(Token = "0x60018BC")]
		[Address(RVA = "0x4E47FE0", Offset = "0x4E47FE0", VA = "0x4E47FE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029E")]
	public int SkipSize
	{
		[Token(Token = "0x60018BD")]
		[Address(RVA = "0x4E47FF0", Offset = "0x4E47FF0", VA = "0x4E47FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4E46470", Offset = "0x4E46470", VA = "0x4E46470")]
	public KeySizes(int minSize, int maxSize, int skipSize)
	{
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4E48000", Offset = "0x4E48000", VA = "0x4E48000")]
	internal bool IsLegal(int keySize)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4E48040", Offset = "0x4E48040", VA = "0x4E48040")]
	internal static bool IsLegalKeySize(KeySizes[] legalKeys, int size)
	{
		return default(bool);
	}
}
