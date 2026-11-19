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
	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _Major;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x14")]
	private readonly int _Minor;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _Build;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int _Revision;

	[Token(Token = "0x1700010A")]
	public int Major
	{
		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x54DF1C0", Offset = "0x54DE1C0", VA = "0x54DF1C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010B")]
	public int Minor
	{
		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x54DF1D0", Offset = "0x54DE1D0", VA = "0x54DF1D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public int Build
	{
		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x54DF1E0", Offset = "0x54DE1E0", VA = "0x54DF1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010D")]
	public int Revision
	{
		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x54DF1F0", Offset = "0x54DE1F0", VA = "0x54DF1F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010E")]
	private int DefaultFormatFieldCount
	{
		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x54DF480", Offset = "0x54DE480", VA = "0x54DF480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x54DED80", Offset = "0x54DDD80", VA = "0x54DED80")]
	public Version(int major, int minor, int build, int revision)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x54DEE90", Offset = "0x54DDE90", VA = "0x54DEE90")]
	public Version(int major, int minor, int build)
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x54DEF70", Offset = "0x54DDF70", VA = "0x54DEF70")]
	public Version(int major, int minor)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x54DF020", Offset = "0x54DE020", VA = "0x54DF020")]
	public Version(string version)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x54DF0F0", Offset = "0x54DE0F0", VA = "0x54DF0F0")]
	public Version()
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x54DF110", Offset = "0x54DE110", VA = "0x54DF110")]
	private Version(Version version)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x54DF150", Offset = "0x54DE150", VA = "0x54DF150", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x54DF200", Offset = "0x54DE200", VA = "0x54DF200", Slot = "5")]
	public int CompareTo(object version)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x54DF310", Offset = "0x54DE310", VA = "0x54DF310", Slot = "6")]
	public int CompareTo(Version value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x54DF350", Offset = "0x54DE350", VA = "0x54DF350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x54DF3E0", Offset = "0x54DE3E0", VA = "0x54DF3E0", Slot = "7")]
	public bool Equals(Version obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x54DF420", Offset = "0x54DE420", VA = "0x54DF420", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x54DF450", Offset = "0x54DE450", VA = "0x54DF450", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x54DF4A0", Offset = "0x54DE4A0", VA = "0x54DF4A0")]
	public string ToString(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x54DF710", Offset = "0x54DE710", VA = "0x54DF710")]
	public bool TryFormat(Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x54DF740", Offset = "0x54DE740", VA = "0x54DF740")]
	public bool TryFormat(Span<char> destination, int fieldCount, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x54DF840", Offset = "0x54DE840", VA = "0x54DF840", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x54DF4E0", Offset = "0x54DE4E0", VA = "0x54DF4E0")]
	private StringBuilder ToCachedStringBuilder(int fieldCount)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x54DF060", Offset = "0x54DE060", VA = "0x54DF060")]
	public static Version Parse(string input)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x54DFDA0", Offset = "0x54DEDA0", VA = "0x54DFDA0")]
	public static bool TryParse(string input, out Version result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x54DF870", Offset = "0x54DE870", VA = "0x54DF870")]
	private static Version ParseVersion(ReadOnlySpan<char> input, bool throwOnFailure)
	{
		return null;
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x54DFE70", Offset = "0x54DEE70", VA = "0x54DFE70")]
	private static bool TryParseComponent(ReadOnlySpan<char> component, string componentName, bool throwOnFailure, out int parsedComponent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x54DF2D0", Offset = "0x54DE2D0", VA = "0x54DF2D0")]
	public static bool operator ==(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x54DFE20", Offset = "0x54DEE20", VA = "0x54DFE20")]
	public static bool operator !=(Version v1, Version v2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x54DFF80", Offset = "0x54DEF80", VA = "0x54DFF80")]
	public static bool operator <(Version v1, Version v2)
	{
		return default(bool);
	}
}
