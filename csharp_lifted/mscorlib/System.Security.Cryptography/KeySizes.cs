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

[Token(Token = "0x20002DB")]
[ComVisible(true)]
public sealed class KeySizes
{
	[Token(Token = "0x4000C51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_minSize;

	[Token(Token = "0x4000C52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_maxSize;

	[Token(Token = "0x4000C53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_skipSize;

	[Token(Token = "0x1700029D")]
	public int MinSize
	{
		[Token(Token = "0x6001900")]
		[Address(RVA = "0x5337B30", Offset = "0x5336B30", VA = "0x5337B30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029E")]
	public int MaxSize
	{
		[Token(Token = "0x6001901")]
		[Address(RVA = "0x5337B40", Offset = "0x5336B40", VA = "0x5337B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029F")]
	public int SkipSize
	{
		[Token(Token = "0x6001902")]
		[Address(RVA = "0x5337B50", Offset = "0x5336B50", VA = "0x5337B50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x5335FD0", Offset = "0x5334FD0", VA = "0x5335FD0")]
	public KeySizes(int minSize, int maxSize, int skipSize)
	{
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x5337B60", Offset = "0x5336B60", VA = "0x5337B60")]
	internal bool IsLegal(int keySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001905")]
	[Address(RVA = "0x5337BA0", Offset = "0x5336BA0", VA = "0x5337BA0")]
	internal static bool IsLegalKeySize(KeySizes[] legalKeys, int size)
	{
		return default(bool);
	}
}
