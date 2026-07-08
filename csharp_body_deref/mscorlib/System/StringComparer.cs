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
		[Address(RVA = "0x4FEB130", Offset = "0x4FEB130", VA = "0x4FEB130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	public static StringComparer Ordinal
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x4FEB1A0", Offset = "0x4FEB1A0", VA = "0x4FEB1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AE")]
	public static StringComparer OrdinalIgnoreCase
	{
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x4FEB210", Offset = "0x4FEB210", VA = "0x4FEB210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x4FEB280", Offset = "0x4FEB280", VA = "0x4FEB280")]
	public static StringComparer Create(CultureInfo culture, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4FEB380", Offset = "0x4FEB380", VA = "0x4FEB380", Slot = "4")]
	public int Compare(object x, object y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4FEB510", Offset = "0x4FEB510", VA = "0x4FEB510", Slot = "5")]
	public new bool Equals(object x, object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4FEB570", Offset = "0x4FEB570", VA = "0x4FEB570", Slot = "6")]
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
	[Address(RVA = "0x4FEB600", Offset = "0x4FEB600", VA = "0x4FEB600")]
	protected StringComparer()
	{
	}
}
