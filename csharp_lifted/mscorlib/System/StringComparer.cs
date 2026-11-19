// ==================== AoTTG2 cross-reference ====================
// Type: System.StringComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010D")]
public abstract class StringComparer : IComparer, IEqualityComparer, IComparer<string>, IEqualityComparer<string>
{
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CultureAwareComparer s_invariantCulture;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly CultureAwareComparer s_invariantCultureIgnoreCase;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x10")]
	private static readonly System.OrdinalCaseSensitiveComparer s_ordinal;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly System.OrdinalIgnoreCaseComparer s_ordinalIgnoreCase;

	[Token(Token = "0x170000AC")]
	public static StringComparer InvariantCultureIgnoreCase
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x54D4BB0", Offset = "0x54D3BB0", VA = "0x54D4BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	public static StringComparer Ordinal
	{
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x54D4C20", Offset = "0x54D3C20", VA = "0x54D4C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	public static StringComparer OrdinalIgnoreCase
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x54D4C90", Offset = "0x54D3C90", VA = "0x54D4C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x54D4D00", Offset = "0x54D3D00", VA = "0x54D4D00")]
	public static StringComparer Create(CultureInfo culture, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x54D4E00", Offset = "0x54D3E00", VA = "0x54D4E00", Slot = "4")]
	public int Compare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x54D4F90", Offset = "0x54D3F90", VA = "0x54D4F90", Slot = "5")]
	public new bool Equals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x54D4FF0", Offset = "0x54D3FF0", VA = "0x54D4FF0", Slot = "6")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A2B")]
	public abstract int Compare(string x, string y);

	[Token(Token = "0x6000A2C")]
	public abstract bool Equals(string x, string y);

	[Token(Token = "0x6000A2D")]
	public abstract int GetHashCode(string obj);

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x54D5080", Offset = "0x54D4080", VA = "0x54D5080")]
	protected StringComparer()
	{
	}
}
