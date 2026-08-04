// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.FastResourceComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004B5")]
internal sealed class FastResourceComparer : IComparer, IEqualityComparer, IComparer<string>, IEqualityComparer<string>
{
	[Token(Token = "0x4001370")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Resources.FastResourceComparer Default;

	[Token(Token = "0x6002355")]
	[Address(RVA = "0x3BC5BE0", Offset = "0x3BC5BE0", VA = "0x3BC5BE0", Slot = "6")]
	public int GetHashCode(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002356")]
	[Address(RVA = "0x3BC5D00", Offset = "0x3BC5D00", VA = "0x3BC5D00", Slot = "9")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x6002357")]
	[Address(RVA = "0x3BC5CA0", Offset = "0x3BC5CA0", VA = "0x3BC5CA0")]
	internal static int HashFunction(string key)
	{
		return default(int);
	}

	[Token(Token = "0x6002358")]
	[Address(RVA = "0x3BC5DB0", Offset = "0x3BC5DB0", VA = "0x3BC5DB0", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002359")]
	[Address(RVA = "0x3BC5E00", Offset = "0x3BC5E00", VA = "0x3BC5E00", Slot = "7")]
	public int Compare(string a, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235A")]
	[Address(RVA = "0x3BC5E10", Offset = "0x3BC5E10", VA = "0x3BC5E10", Slot = "8")]
	public bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x3BC5E20", Offset = "0x3BC5E20", VA = "0x3BC5E20", Slot = "5")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600235C")]
	[Address(RVA = "0x3BC5E70", Offset = "0x3BC5E70", VA = "0x3BC5E70")]
	public static int CompareOrdinal(string a, byte[] bytes, int bCharLength)
	{
		return default(int);
	}

	[Token(Token = "0x600235D")]
	[Address(RVA = "0x3BC5F20", Offset = "0x3BC5F20", VA = "0x3BC5F20")]
	public static int CompareOrdinal(byte[] bytes, int aCharLength, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x3BC6020", Offset = "0x3BC6020", VA = "0x3BC6020")]
	internal unsafe static int CompareOrdinal(byte* a, int byteLen, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235F")]
	[Address(RVA = "0x3BC60C0", Offset = "0x3BC60C0", VA = "0x3BC60C0")]
	public FastResourceComparer()
	{
	}
}
