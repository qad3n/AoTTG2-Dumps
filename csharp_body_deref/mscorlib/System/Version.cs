using System.Text;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000134")]
public sealed class Version : ICloneable, IComparable, IComparable<Version>, IEquatable<Version>, System.ISpanFormattable
{
	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _Major;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x14")]
	private readonly int _Minor;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _Build;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int _Revision;

	[Token(Token = "0x17000109")]
	public int Major
	{
		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x4FF54E0", Offset = "0x4FF54E0", VA = "0x4FF54E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010A")]
	public int Minor
	{
		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x4FF54F0", Offset = "0x4FF54F0", VA = "0x4FF54F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010B")]
	public int Build
	{
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x4FF5500", Offset = "0x4FF5500", VA = "0x4FF5500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public int Revision
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x4FF5510", Offset = "0x4FF5510", VA = "0x4FF5510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010D")]
	private int DefaultFormatFieldCount
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x4FF57B0", Offset = "0x4FF57B0", VA = "0x4FF57B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x4FF50A0", Offset = "0x4FF50A0", VA = "0x4FF50A0")]
	public Version(int major, int minor, int build, int revision)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x4FF51B0", Offset = "0x4FF51B0", VA = "0x4FF51B0")]
	public Version(int major, int minor, int build)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x4FF5290", Offset = "0x4FF5290", VA = "0x4FF5290")]
	public Version(int major, int minor)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x4FF5340", Offset = "0x4FF5340", VA = "0x4FF5340")]
	public Version(string version)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x4FF5410", Offset = "0x4FF5410", VA = "0x4FF5410")]
	public Version()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x4FF5430", Offset = "0x4FF5430", VA = "0x4FF5430")]
	private Version(Version version)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x4FF5470", Offset = "0x4FF5470", VA = "0x4FF5470", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4FF5520", Offset = "0x4FF5520", VA = "0x4FF5520", Slot = "5")]
	public int CompareTo(object version)
	{
		return default(int);
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4FF5630", Offset = "0x4FF5630", VA = "0x4FF5630", Slot = "6")]
	public int CompareTo(Version value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4FF5680", Offset = "0x4FF5680", VA = "0x4FF5680", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4FF5710", Offset = "0x4FF5710", VA = "0x4FF5710", Slot = "7")]
	public bool Equals(Version obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4FF5750", Offset = "0x4FF5750", VA = "0x4FF5750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4FF5780", Offset = "0x4FF5780", VA = "0x4FF5780", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4FF57D0", Offset = "0x4FF57D0", VA = "0x4FF57D0")]
	public string ToString(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4FF5A40", Offset = "0x4FF5A40", VA = "0x4FF5A40")]
	public bool TryFormat(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4FF5A70", Offset = "0x4FF5A70", VA = "0x4FF5A70")]
	public bool TryFormat(Span<char> destination, int fieldCount, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4FF5B70", Offset = "0x4FF5B70", VA = "0x4FF5B70", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4FF5810", Offset = "0x4FF5810", VA = "0x4FF5810")]
	private StringBuilder ToCachedStringBuilder(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4FF5380", Offset = "0x4FF5380", VA = "0x4FF5380")]
	public static Version Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4FF6110", Offset = "0x4FF6110", VA = "0x4FF6110")]
	public static bool TryParse(string input, out Version result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4FF5BA0", Offset = "0x4FF5BA0", VA = "0x4FF5BA0")]
	private static Version ParseVersion(ReadOnlySpan<char> input, bool throwOnFailure)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4FF61E0", Offset = "0x4FF61E0", VA = "0x4FF61E0")]
	private static bool TryParseComponent(ReadOnlySpan<char> component, string componentName, bool throwOnFailure, out int parsedComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4FF55F0", Offset = "0x4FF55F0", VA = "0x4FF55F0")]
	public static bool operator ==(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4FF6190", Offset = "0x4FF6190", VA = "0x4FF6190")]
	public static bool operator !=(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4FF6310", Offset = "0x4FF6310", VA = "0x4FF6310")]
	public static bool operator <(Version v1, Version v2)
	{
		return default(bool);
	}
}
