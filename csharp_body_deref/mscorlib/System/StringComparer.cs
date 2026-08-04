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
	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CultureAwareComparer s_invariantCulture;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly CultureAwareComparer s_invariantCultureIgnoreCase;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x10")]
	private static readonly System.OrdinalCaseSensitiveComparer s_ordinal;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x18")]
	private static readonly System.OrdinalIgnoreCaseComparer s_ordinalIgnoreCase;

	[Token(Token = "0x170000AC")]
	public static StringComparer InvariantCultureIgnoreCase
	{
		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x3CD0C50", Offset = "0x3CD0C50", VA = "0x3CD0C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	public static StringComparer Ordinal
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x3CD0CC0", Offset = "0x3CD0CC0", VA = "0x3CD0CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	public static StringComparer OrdinalIgnoreCase
	{
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x3CD0D30", Offset = "0x3CD0D30", VA = "0x3CD0D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x3CD0DA0", Offset = "0x3CD0DA0", VA = "0x3CD0DA0")]
	public static StringComparer Create(CultureInfo culture, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x3CD0EA0", Offset = "0x3CD0EA0", VA = "0x3CD0EA0", Slot = "4")]
	public int Compare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x3CD1030", Offset = "0x3CD1030", VA = "0x3CD1030", Slot = "5")]
	public new bool Equals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x3CD1090", Offset = "0x3CD1090", VA = "0x3CD1090", Slot = "6")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0A")]
	public abstract int Compare(string x, string y);

	[Token(Token = "0x6000A0B")]
	public abstract bool Equals(string x, string y);

	[Token(Token = "0x6000A0C")]
	public abstract int GetHashCode(string obj);

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x3CD1120", Offset = "0x3CD1120", VA = "0x3CD1120")]
	protected StringComparer()
	{
	}
}
