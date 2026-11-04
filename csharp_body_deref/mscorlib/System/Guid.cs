// ==================== AoTTG2 cross-reference ====================
// Type: System.Guid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000EC")]
[System.Runtime.Versioning.NonVersionable]
public struct Guid : IFormattable, IComparable, IComparable<Guid>, IEquatable<Guid>, System.ISpanFormattable
{
	[Token(Token = "0x20000ED")]
	[Flags]
	private enum GuidStyles
	{
		[Token(Token = "0x40003CB")]
		None = 0,
		[Token(Token = "0x40003CC")]
		AllowParenthesis = 1,
		[Token(Token = "0x40003CD")]
		AllowBraces = 2,
		[Token(Token = "0x40003CE")]
		AllowDashes = 4,
		[Token(Token = "0x40003CF")]
		AllowHexPrefix = 8,
		[Token(Token = "0x40003D0")]
		RequireParenthesis = 0x10,
		[Token(Token = "0x40003D1")]
		RequireBraces = 0x20,
		[Token(Token = "0x40003D2")]
		RequireDashes = 0x40,
		[Token(Token = "0x40003D3")]
		RequireHexPrefix = 0x80,
		[Token(Token = "0x40003D4")]
		HexFormat = RequireBraces | RequireHexPrefix,
		[Token(Token = "0x40003D5")]
		NumberFormat = 0,
		[Token(Token = "0x40003D6")]
		DigitFormat = RequireDashes,
		[Token(Token = "0x40003D7")]
		BraceFormat = RequireBraces | RequireDashes,
		[Token(Token = "0x40003D8")]
		ParenthesisFormat = RequireParenthesis | RequireDashes,
		[Token(Token = "0x40003D9")]
		Any = AllowParenthesis | AllowBraces | AllowDashes | AllowHexPrefix
	}

	[Token(Token = "0x20000EE")]
	private enum GuidParseThrowStyle
	{
		[Token(Token = "0x40003DB")]
		None,
		[Token(Token = "0x40003DC")]
		All,
		[Token(Token = "0x40003DD")]
		AllButOverflow
	}

	[Token(Token = "0x20000EF")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x40003DF")]
		None,
		[Token(Token = "0x40003E0")]
		ArgumentNull,
		[Token(Token = "0x40003E1")]
		Format,
		[Token(Token = "0x40003E2")]
		FormatWithParameter,
		[Token(Token = "0x40003E3")]
		NativeException,
		[Token(Token = "0x40003E4")]
		FormatWithInnerException
	}

	[Token(Token = "0x20000F0")]
	private struct GuidResult
	{
		[Token(Token = "0x40003E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Guid _parsedGuid;

		[Token(Token = "0x40003E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GuidParseThrowStyle _throwStyle;

		[Token(Token = "0x40003E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private ParseFailureKind _failure;

		[Token(Token = "0x40003E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _failureMessageID;

		[Token(Token = "0x40003E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private object _failureMessageFormatArgument;

		[Token(Token = "0x40003EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _failureArgumentName;

		[Token(Token = "0x40003EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Exception _innerException;

		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		internal void Init(GuidParseThrowStyle canThrow)
		{
		}

		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x1B23C10", Offset = "0x1B22210", VA = "0x181B23C10")]
		internal void SetFailure(Exception nativeException)
		{
		}

		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x1B23C30", Offset = "0x1B22230", VA = "0x181B23C30")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID)
		{
		}

		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x1B23B80", Offset = "0x1B22180", VA = "0x181B23B80")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x60007AE")]
		[Address(RVA = "0x1B23AF0", Offset = "0x1B220F0", VA = "0x181B23AF0")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName, Exception innerException)
		{
		}

		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x1B23950", Offset = "0x1B21F50", VA = "0x181B23950")]
		internal Exception GetGuidParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x40003BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Guid Empty;

	[Token(Token = "0x40003BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int _a;

	[Token(Token = "0x40003C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private short _b;

	[Token(Token = "0x40003C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6")]
	private short _c;

	[Token(Token = "0x40003C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private byte _d;

	[Token(Token = "0x40003C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private byte _e;

	[Token(Token = "0x40003C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	private byte _f;

	[Token(Token = "0x40003C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB")]
	private byte _g;

	[Token(Token = "0x40003C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private byte _h;

	[Token(Token = "0x40003C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD")]
	private byte _i;

	[Token(Token = "0x40003C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE")]
	private byte _j;

	[Token(Token = "0x40003C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF")]
	private byte _k;

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x1B24530", Offset = "0x1B22B30", VA = "0x181B24530")]
	public static Guid NewGuid()
	{
		return default(Guid);
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x1B27320", Offset = "0x1B25920", VA = "0x181B27320")]
	public Guid(byte[] b)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x1B27150", Offset = "0x1B25750", VA = "0x181B27150")]
	public Guid(ReadOnlySpan<byte> b)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x1B27500", Offset = "0x1B25B00", VA = "0x181B27500")]
	public Guid(int a, short b, short c, byte d, byte e, byte f, byte g, byte h, byte i, byte j, byte k)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x1B273E0", Offset = "0x1B259E0", VA = "0x181B273E0")]
	public Guid(string g)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x1B24610", Offset = "0x1B22C10", VA = "0x181B24610")]
	public static Guid Parse(string input)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x1B24580", Offset = "0x1B22B80", VA = "0x181B24580")]
	public static Guid Parse(ReadOnlySpan<char> input)
	{
		return default(Guid);
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x1B27000", Offset = "0x1B25600", VA = "0x181B27000")]
	public static bool TryParse(string input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x1B270E0", Offset = "0x1B256E0", VA = "0x181B270E0")]
	public static bool TryParse(ReadOnlySpan<char> input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x1B25A70", Offset = "0x1B24070", VA = "0x181B25A70")]
	public static bool TryParseExact(string input, string format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x1B25C30", Offset = "0x1B24230", VA = "0x181B25C30")]
	public static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x1B26E30", Offset = "0x1B25430", VA = "0x181B26E30")]
	private static bool TryParseGuid(ReadOnlySpan<char> guidString, GuidStyles flags, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x1B26080", Offset = "0x1B24680", VA = "0x181B26080")]
	private static bool TryParseGuidWithHexPrefix(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x1B26A30", Offset = "0x1B25030", VA = "0x181B26A30")]
	private static bool TryParseGuidWithNoStyle(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x1B25D50", Offset = "0x1B24350", VA = "0x181B25D50")]
	private static bool TryParseGuidWithDashes(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x1B24AA0", Offset = "0x1B230A0", VA = "0x181B24AA0")]
	private static bool StringToShort(ReadOnlySpan<char> str, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x1B24A40", Offset = "0x1B23040", VA = "0x181B24A40")]
	private static bool StringToShort(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x1B24740", Offset = "0x1B22D40", VA = "0x181B24740")]
	private static bool StringToInt(ReadOnlySpan<char> str, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x1B24790", Offset = "0x1B22D90", VA = "0x181B24790")]
	private static bool StringToInt(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x1B24920", Offset = "0x1B22F20", VA = "0x181B24920")]
	private static bool StringToLong(ReadOnlySpan<char> str, ref int parsePos, int flags, out long result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x1B23FC0", Offset = "0x1B225C0", VA = "0x181B23FC0")]
	private static ReadOnlySpan<char> EatAllWhitespace(ReadOnlySpan<char> str)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x1B24480", Offset = "0x1B22A80", VA = "0x181B24480")]
	private static bool IsHexPrefix(ReadOnlySpan<char> str, int i)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000799")]
	[Address(RVA = "0x1B23210", Offset = "0x1B21810", VA = "0x181B23210")]
	private void WriteByteHelper(Span<byte> destination)
	{
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x1B24B40", Offset = "0x1B23140", VA = "0x181B24B40")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x1B24BD0", Offset = "0x1B231D0", VA = "0x181B24BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x1B242C0", Offset = "0x1B228C0", VA = "0x181B242C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x1B24220", Offset = "0x1B22820", VA = "0x181B24220", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x1B241F0", Offset = "0x1B227F0", VA = "0x181B241F0", Slot = "7")]
	public bool Equals(Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x1B242D0", Offset = "0x1B228D0", VA = "0x181B242D0")]
	private int GetResult(uint me, uint them)
	{
		return default(int);
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x1B23CC0", Offset = "0x1B222C0", VA = "0x181B23CC0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x1B23E20", Offset = "0x1B22420", VA = "0x181B23E20", Slot = "6")]
	public int CompareTo(Guid value)
	{
		return default(int);
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x1B27550", Offset = "0x1B25B50", VA = "0x181B27550")]
	public static bool operator ==(Guid a, Guid b)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x1B24E80", Offset = "0x1B23480", VA = "0x181B24E80")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x1B242F0", Offset = "0x1B228F0", VA = "0x181B242F0")]
	private static char HexToChar(int a)
	{
		return default(char);
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x1B243D0", Offset = "0x1B229D0", VA = "0x181B243D0")]
	private unsafe static int HexsToChars(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x1B24310", Offset = "0x1B22910", VA = "0x181B24310")]
	private unsafe static int HexsToCharsHexOutput(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x1B24C10", Offset = "0x1B23210", VA = "0x181B24C10", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x1B24E90", Offset = "0x1B23490", VA = "0x181B24E90")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x1B24B00", Offset = "0x1B23100", VA = "0x181B24B00", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}
}
