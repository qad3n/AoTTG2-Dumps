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
[Token(Token = "0x200015B")]
public sealed class Version : ICloneable, IComparable, IComparable<Version>, IEquatable<Version>, System.ISpanFormattable
{
	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _Major;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x14")]
	private readonly int _Minor;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _Build;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int _Revision;

	[Token(Token = "0x1700010A")]
	public int Major
	{
		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010B")]
	public int Minor
	{
		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public int Build
	{
		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010D")]
	public int Revision
	{
		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010E")]
	private int DefaultFormatFieldCount
	{
		[Token(Token = "0x6000C77")]
		[Address(RVA = "0x1B5A380", Offset = "0x1B58980", VA = "0x181B5A380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x1B5A140", Offset = "0x1B58740", VA = "0x181B5A140")]
	public Version(int major, int minor, int build, int revision)
	{
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x1B59FE0", Offset = "0x1B585E0", VA = "0x181B59FE0")]
	public Version(int major, int minor, int build)
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x1B59DF0", Offset = "0x1B583F0", VA = "0x181B59DF0")]
	public Version(int major, int minor)
	{
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x1B59EF0", Offset = "0x1B584F0", VA = "0x181B59EF0")]
	public Version(string version)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x1B5A350", Offset = "0x1B58950", VA = "0x181B5A350")]
	public Version()
	{
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x1B5A300", Offset = "0x1B58900", VA = "0x181B5A300")]
	private Version(Version version)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x1B588D0", Offset = "0x1B56ED0", VA = "0x181B588D0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x1B58950", Offset = "0x1B56F50", VA = "0x181B58950", Slot = "5")]
	public int CompareTo(object version)
	{
		return default(int);
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x1B58A40", Offset = "0x1B57040", VA = "0x181B58A40", Slot = "6")]
	public int CompareTo(Version value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x1B58AE0", Offset = "0x1B570E0", VA = "0x181B58AE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x1B58AA0", Offset = "0x1B570A0", VA = "0x181B58AA0", Slot = "7")]
	public bool Equals(Version obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x1B58B80", Offset = "0x1B57180", VA = "0x181B58B80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x1B59AB0", Offset = "0x1B580B0", VA = "0x181B59AB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x1B59A60", Offset = "0x1B58060", VA = "0x181B59A60")]
	public string ToString(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x1B59660", Offset = "0x1B57C60", VA = "0x181B59660")]
	public bool TryFormat(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x1B59AF0", Offset = "0x1B580F0", VA = "0x181B59AF0")]
	public bool TryFormat(Span<char> destination, int fieldCount, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x1B59660", Offset = "0x1B57C60", VA = "0x181B59660", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x1B59750", Offset = "0x1B57D50", VA = "0x181B59750")]
	private StringBuilder ToCachedStringBuilder(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x1B595A0", Offset = "0x1B57BA0", VA = "0x181B595A0")]
	public static Version Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x1B59D40", Offset = "0x1B58340", VA = "0x181B59D40")]
	public static bool TryParse(string input, out Version result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x1B58BB0", Offset = "0x1B571B0", VA = "0x181B58BB0")]
	private static Version ParseVersion(ReadOnlySpan<char> input, bool throwOnFailure)
	{
		return null;
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x1B59C10", Offset = "0x1B58210", VA = "0x181B59C10")]
	private static bool TryParseComponent(ReadOnlySpan<char> component, string componentName, bool throwOnFailure, out int parsedComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x1B5A3A0", Offset = "0x1B589A0", VA = "0x181B5A3A0")]
	public static bool operator ==(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x1B5A3E0", Offset = "0x1B589E0", VA = "0x181B5A3E0")]
	public static bool operator !=(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x1B5A430", Offset = "0x1B58A30", VA = "0x181B5A430")]
	public static bool operator <(Version v1, Version v2)
	{
		return default(bool);
	}
}
