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

[Token(Token = "0x2000302")]
[ComVisible(true)]
public sealed class KeySizes
{
	[Token(Token = "0x4000CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_minSize;

	[Token(Token = "0x4000CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_maxSize;

	[Token(Token = "0x4000CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_skipSize;

	[Token(Token = "0x1700029E")]
	public int MinSize
	{
		[Token(Token = "0x6001923")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029F")]
	public int MaxSize
	{
		[Token(Token = "0x6001924")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A0")]
	public int SkipSize
	{
		[Token(Token = "0x6001925")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x19AB170", Offset = "0x19A9770", VA = "0x1819AB170")]
	public KeySizes(int minSize, int maxSize, int skipSize)
	{
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x19AB140", Offset = "0x19A9740", VA = "0x1819AB140")]
	internal bool IsLegal(int keySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x19AB0C0", Offset = "0x19A96C0", VA = "0x1819AB0C0")]
	internal static bool IsLegalKeySize(KeySizes[] legalKeys, int size)
	{
		return default(bool);
	}
}
