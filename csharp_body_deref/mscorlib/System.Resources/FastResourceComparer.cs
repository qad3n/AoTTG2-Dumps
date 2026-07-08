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
	[Address(RVA = "0x4EE00C0", Offset = "0x4EE00C0", VA = "0x4EE00C0", Slot = "6")]
	public int GetHashCode(object key)
	{
		return default(int);
	}

	[Token(Token = "0x6002356")]
	[Address(RVA = "0x4EE01E0", Offset = "0x4EE01E0", VA = "0x4EE01E0", Slot = "9")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x6002357")]
	[Address(RVA = "0x4EE0180", Offset = "0x4EE0180", VA = "0x4EE0180")]
	internal static int HashFunction(string key)
	{
		return default(int);
	}

	[Token(Token = "0x6002358")]
	[Address(RVA = "0x4EE0290", Offset = "0x4EE0290", VA = "0x4EE0290", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x6002359")]
	[Address(RVA = "0x4EE02E0", Offset = "0x4EE02E0", VA = "0x4EE02E0", Slot = "7")]
	public int Compare(string a, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235A")]
	[Address(RVA = "0x4EE02F0", Offset = "0x4EE02F0", VA = "0x4EE02F0", Slot = "8")]
	public bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600235B")]
	[Address(RVA = "0x4EE0300", Offset = "0x4EE0300", VA = "0x4EE0300", Slot = "5")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600235C")]
	[Address(RVA = "0x4EE0350", Offset = "0x4EE0350", VA = "0x4EE0350")]
	public static int CompareOrdinal(string a, byte[] bytes, int bCharLength)
	{
		return default(int);
	}

	[Token(Token = "0x600235D")]
	[Address(RVA = "0x4EE0400", Offset = "0x4EE0400", VA = "0x4EE0400")]
	public static int CompareOrdinal(byte[] bytes, int aCharLength, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x4EE0500", Offset = "0x4EE0500", VA = "0x4EE0500")]
	internal unsafe static int CompareOrdinal(byte* a, int byteLen, string b)
	{
		return default(int);
	}

	[Token(Token = "0x600235F")]
	[Address(RVA = "0x4EE05A0", Offset = "0x4EE05A0", VA = "0x4EE05A0")]
	public FastResourceComparer()
	{
	}
}
