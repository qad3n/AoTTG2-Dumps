// ==================== AoTTG2 cross-reference ====================
// Type: System.Version
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CDB000", Offset = "0x3CDB000", VA = "0x3CDB000")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010A")]
	public int Minor
	{
		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x3CDB010", Offset = "0x3CDB010", VA = "0x3CDB010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010B")]
	public int Build
	{
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x3CDB020", Offset = "0x3CDB020", VA = "0x3CDB020")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public int Revision
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x3CDB030", Offset = "0x3CDB030", VA = "0x3CDB030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010D")]
	private int DefaultFormatFieldCount
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x3CDB2D0", Offset = "0x3CDB2D0", VA = "0x3CDB2D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x3CDABC0", Offset = "0x3CDABC0", VA = "0x3CDABC0")]
	public Version(int major, int minor, int build, int revision)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x3CDACD0", Offset = "0x3CDACD0", VA = "0x3CDACD0")]
	public Version(int major, int minor, int build)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x3CDADB0", Offset = "0x3CDADB0", VA = "0x3CDADB0")]
	public Version(int major, int minor)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x3CDAE60", Offset = "0x3CDAE60", VA = "0x3CDAE60")]
	public Version(string version)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x3CDAF30", Offset = "0x3CDAF30", VA = "0x3CDAF30")]
	public Version()
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x3CDAF50", Offset = "0x3CDAF50", VA = "0x3CDAF50")]
	private Version(Version version)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x3CDAF90", Offset = "0x3CDAF90", VA = "0x3CDAF90", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x3CDB040", Offset = "0x3CDB040", VA = "0x3CDB040", Slot = "5")]
	public int CompareTo(object version)
	{
		return default(int);
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x3CDB150", Offset = "0x3CDB150", VA = "0x3CDB150", Slot = "6")]
	public int CompareTo(Version value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x3CDB1A0", Offset = "0x3CDB1A0", VA = "0x3CDB1A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x3CDB230", Offset = "0x3CDB230", VA = "0x3CDB230", Slot = "7")]
	public bool Equals(Version obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x3CDB270", Offset = "0x3CDB270", VA = "0x3CDB270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x3CDB2A0", Offset = "0x3CDB2A0", VA = "0x3CDB2A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x3CDB2F0", Offset = "0x3CDB2F0", VA = "0x3CDB2F0")]
	public string ToString(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x3CDB560", Offset = "0x3CDB560", VA = "0x3CDB560")]
	public bool TryFormat(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x3CDB590", Offset = "0x3CDB590", VA = "0x3CDB590")]
	public bool TryFormat(Span<char> destination, int fieldCount, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x3CDB690", Offset = "0x3CDB690", VA = "0x3CDB690", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x3CDB330", Offset = "0x3CDB330", VA = "0x3CDB330")]
	private StringBuilder ToCachedStringBuilder(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x3CDAEA0", Offset = "0x3CDAEA0", VA = "0x3CDAEA0")]
	public static Version Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x3CDBC30", Offset = "0x3CDBC30", VA = "0x3CDBC30")]
	public static bool TryParse(string input, out Version result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x3CDB6C0", Offset = "0x3CDB6C0", VA = "0x3CDB6C0")]
	private static Version ParseVersion(ReadOnlySpan<char> input, bool throwOnFailure)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x3CDBD00", Offset = "0x3CDBD00", VA = "0x3CDBD00")]
	private static bool TryParseComponent(ReadOnlySpan<char> component, string componentName, bool throwOnFailure, out int parsedComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x3CDB110", Offset = "0x3CDB110", VA = "0x3CDB110")]
	public static bool operator ==(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x3CDBCB0", Offset = "0x3CDBCB0", VA = "0x3CDBCB0")]
	public static bool operator !=(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x3CDBE30", Offset = "0x3CDBE30", VA = "0x3CDBE30")]
	public static bool operator <(Version v1, Version v2)
	{
		return default(bool);
	}
}
