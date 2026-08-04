// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.KeySizes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B2DAF0", Offset = "0x3B2DAF0", VA = "0x3B2DAF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029D")]
	public int MaxSize
	{
		[Token(Token = "0x60018BC")]
		[Address(RVA = "0x3B2DB00", Offset = "0x3B2DB00", VA = "0x3B2DB00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029E")]
	public int SkipSize
	{
		[Token(Token = "0x60018BD")]
		[Address(RVA = "0x3B2DB10", Offset = "0x3B2DB10", VA = "0x3B2DB10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x3B2BF90", Offset = "0x3B2BF90", VA = "0x3B2BF90")]
	public KeySizes(int minSize, int maxSize, int skipSize)
	{
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x3B2DB20", Offset = "0x3B2DB20", VA = "0x3B2DB20")]
	internal bool IsLegal(int keySize)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x3B2DB60", Offset = "0x3B2DB60", VA = "0x3B2DB60")]
	internal static bool IsLegalKeySize(KeySizes[] legalKeys, int size)
	{
		return default(bool);
	}
}
