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
[Token(Token = "0x2000135")]
public abstract class StringComparer : IComparer, IEqualityComparer, IComparer<string>, IEqualityComparer<string>
{
	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CultureAwareComparer s_invariantCulture;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x8")]
	private static readonly CultureAwareComparer s_invariantCultureIgnoreCase;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x10")]
	private static readonly System.OrdinalCaseSensitiveComparer s_ordinal;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x18")]
	private static readonly System.OrdinalIgnoreCaseComparer s_ordinalIgnoreCase;

	[Token(Token = "0x170000AC")]
	public static StringComparer InvariantCultureIgnoreCase
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x1B4D220", Offset = "0x1B4B820", VA = "0x181B4D220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	public static StringComparer Ordinal
	{
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x1B4D2C0", Offset = "0x1B4B8C0", VA = "0x181B4D2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	public static StringComparer OrdinalIgnoreCase
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x1B4D270", Offset = "0x1B4B870", VA = "0x181B4D270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x1B4CE30", Offset = "0x1B4B430", VA = "0x181B4CE30")]
	public static StringComparer Create(CultureInfo culture, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x1B4CCE0", Offset = "0x1B4B2E0", VA = "0x181B4CCE0", Slot = "4")]
	public int Compare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x1B4CEF0", Offset = "0x1B4B4F0", VA = "0x181B4CEF0", Slot = "5")]
	public new bool Equals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x1B4CF60", Offset = "0x1B4B560", VA = "0x181B4CF60", Slot = "6")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A4F")]
	public abstract int Compare(string x, string y);

	[Token(Token = "0x6000A50")]
	public abstract bool Equals(string x, string y);

	[Token(Token = "0x6000A51")]
	public abstract int GetHashCode(string obj);

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected StringComparer()
	{
	}
}
