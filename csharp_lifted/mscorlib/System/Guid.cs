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
[Token(Token = "0x20000C4")]
[System.Runtime.Versioning.NonVersionable]
public struct Guid : IFormattable, IComparable, IComparable<Guid>, IEquatable<Guid>, System.ISpanFormattable
{
	[Token(Token = "0x20000C5")]
	[Flags]
	private enum GuidStyles
	{
		[Token(Token = "0x4000326")]
		None = 0,
		[Token(Token = "0x4000327")]
		AllowParenthesis = 1,
		[Token(Token = "0x4000328")]
		AllowBraces = 2,
		[Token(Token = "0x4000329")]
		AllowDashes = 4,
		[Token(Token = "0x400032A")]
		AllowHexPrefix = 8,
		[Token(Token = "0x400032B")]
		RequireParenthesis = 0x10,
		[Token(Token = "0x400032C")]
		RequireBraces = 0x20,
		[Token(Token = "0x400032D")]
		RequireDashes = 0x40,
		[Token(Token = "0x400032E")]
		RequireHexPrefix = 0x80,
		[Token(Token = "0x400032F")]
		HexFormat = RequireBraces | RequireHexPrefix,
		[Token(Token = "0x4000330")]
		NumberFormat = 0,
		[Token(Token = "0x4000331")]
		DigitFormat = RequireDashes,
		[Token(Token = "0x4000332")]
		BraceFormat = RequireBraces | RequireDashes,
		[Token(Token = "0x4000333")]
		ParenthesisFormat = RequireParenthesis | RequireDashes,
		[Token(Token = "0x4000334")]
		Any = AllowParenthesis | AllowBraces | AllowDashes | AllowHexPrefix
	}

	[Token(Token = "0x20000C6")]
	private enum GuidParseThrowStyle
	{
		[Token(Token = "0x4000336")]
		None,
		[Token(Token = "0x4000337")]
		All,
		[Token(Token = "0x4000338")]
		AllButOverflow
	}

	[Token(Token = "0x20000C7")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x400033A")]
		None,
		[Token(Token = "0x400033B")]
		ArgumentNull,
		[Token(Token = "0x400033C")]
		Format,
		[Token(Token = "0x400033D")]
		FormatWithParameter,
		[Token(Token = "0x400033E")]
		NativeException,
		[Token(Token = "0x400033F")]
		FormatWithInnerException
	}

	[Token(Token = "0x20000C8")]
	private struct GuidResult
	{
		[Token(Token = "0x4000340")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Guid _parsedGuid;

		[Token(Token = "0x4000341")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GuidParseThrowStyle _throwStyle;

		[Token(Token = "0x4000342")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private ParseFailureKind _failure;

		[Token(Token = "0x4000343")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _failureMessageID;

		[Token(Token = "0x4000344")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private object _failureMessageFormatArgument;

		[Token(Token = "0x4000345")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _failureArgumentName;

		[Token(Token = "0x4000346")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Exception _innerException;

		[Token(Token = "0x6000785")]
		[Address(RVA = "0x54B4A20", Offset = "0x54B3A20", VA = "0x54B4A20")]
		internal void Init(GuidParseThrowStyle canThrow)
		{
		}

		[Token(Token = "0x6000786")]
		[Address(RVA = "0x54B3930", Offset = "0x54B2930", VA = "0x54B3930")]
		internal void SetFailure(Exception nativeException)
		{
		}

		[Token(Token = "0x6000787")]
		[Address(RVA = "0x54B2490", Offset = "0x54B1490", VA = "0x54B2490")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID)
		{
		}

		[Token(Token = "0x6000788")]
		[Address(RVA = "0x54B34D0", Offset = "0x54B24D0", VA = "0x54B34D0")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x6000789")]
		[Address(RVA = "0x54B3100", Offset = "0x54B2100", VA = "0x54B3100")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName, Exception innerException)
		{
		}

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x54B1E80", Offset = "0x54B0E80", VA = "0x54B1E80")]
		internal Exception GetGuidParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x4000319")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Guid Empty;

	[Token(Token = "0x400031A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int _a;

	[Token(Token = "0x400031B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private short _b;

	[Token(Token = "0x400031C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6")]
	private short _c;

	[Token(Token = "0x400031D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private byte _d;

	[Token(Token = "0x400031E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private byte _e;

	[Token(Token = "0x400031F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	private byte _f;

	[Token(Token = "0x4000320")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB")]
	private byte _g;

	[Token(Token = "0x4000321")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private byte _h;

	[Token(Token = "0x4000322")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD")]
	private byte _i;

	[Token(Token = "0x4000323")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE")]
	private byte _j;

	[Token(Token = "0x4000324")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF")]
	private byte _k;

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x54B1790", Offset = "0x54B0790", VA = "0x54B1790")]
	public static Guid NewGuid()
	{
		return default(Guid);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x54B17E0", Offset = "0x54B07E0", VA = "0x54B17E0")]
	public Guid(byte[] b)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x54B1870", Offset = "0x54B0870", VA = "0x54B1870")]
	public Guid(ReadOnlySpan<byte> b)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x54B1970", Offset = "0x54B0970", VA = "0x54B1970")]
	public Guid(int a, short b, short c, byte d, byte e, byte f, byte g, byte h, byte i, byte j, byte k)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x54B19D0", Offset = "0x54B09D0", VA = "0x54B19D0")]
	public Guid(string g)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x54B1FC0", Offset = "0x54B0FC0", VA = "0x54B1FC0")]
	public static Guid Parse(string input)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x54B20A0", Offset = "0x54B10A0", VA = "0x54B20A0")]
	public static Guid Parse(ReadOnlySpan<char> input)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x54B2110", Offset = "0x54B1110", VA = "0x54B2110")]
	public static bool TryParse(string input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x54B21A0", Offset = "0x54B11A0", VA = "0x54B21A0")]
	public static bool TryParse(ReadOnlySpan<char> input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x54B21F0", Offset = "0x54B11F0", VA = "0x54B21F0")]
	public static bool TryParseExact(string input, string format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x54B2370", Offset = "0x54B1370", VA = "0x54B2370")]
	public static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x54B1AB0", Offset = "0x54B0AB0", VA = "0x54B1AB0")]
	private static bool TryParseGuid(ReadOnlySpan<char> guidString, GuidStyles flags, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x54B2760", Offset = "0x54B1760", VA = "0x54B2760")]
	private static bool TryParseGuidWithHexPrefix(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x54B2E00", Offset = "0x54B1E00", VA = "0x54B2E00")]
	private static bool TryParseGuidWithNoStyle(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x54B24A0", Offset = "0x54B14A0", VA = "0x54B24A0")]
	private static bool TryParseGuidWithDashes(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x54B3510", Offset = "0x54B2510", VA = "0x54B3510")]
	private static bool StringToShort(ReadOnlySpan<char> str, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x54B38F0", Offset = "0x54B28F0", VA = "0x54B38F0")]
	private static bool StringToShort(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x54B34E0", Offset = "0x54B24E0", VA = "0x54B34E0")]
	private static bool StringToInt(ReadOnlySpan<char> str, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x54B36E0", Offset = "0x54B26E0", VA = "0x54B36E0")]
	private static bool StringToInt(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x54B3560", Offset = "0x54B2560", VA = "0x54B3560")]
	private static bool StringToLong(ReadOnlySpan<char> str, ref int parsePos, int flags, out long result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x54B3190", Offset = "0x54B2190", VA = "0x54B3190")]
	private static ReadOnlySpan<char> EatAllWhitespace(ReadOnlySpan<char> str)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x54B3440", Offset = "0x54B2440", VA = "0x54B3440")]
	private static bool IsHexPrefix(ReadOnlySpan<char> str, int i)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000774")]
	[Address(RVA = "0x54B3950", Offset = "0x54B2950", VA = "0x54B3950")]
	private void WriteByteHelper(Span<byte> destination)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x54B3A30", Offset = "0x54B2A30", VA = "0x54B3A30")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x54B3AA0", Offset = "0x54B2AA0", VA = "0x54B3AA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x54B3CC0", Offset = "0x54B2CC0", VA = "0x54B3CC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x54B3CE0", Offset = "0x54B2CE0", VA = "0x54B3CE0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x54B3D60", Offset = "0x54B2D60", VA = "0x54B3D60", Slot = "7")]
	public bool Equals(Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x54B3D80", Offset = "0x54B2D80", VA = "0x54B3D80")]
	private int GetResult(uint me, uint them)
	{
		return default(int);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x54B3D90", Offset = "0x54B2D90", VA = "0x54B3D90", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x54B3EF0", Offset = "0x54B2EF0", VA = "0x54B3EF0", Slot = "6")]
	public int CompareTo(Guid value)
	{
		return default(int);
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x54B3FC0", Offset = "0x54B2FC0", VA = "0x54B3FC0")]
	public static bool operator ==(Guid a, Guid b)
	{
		return default(bool);
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x54B3FE0", Offset = "0x54B2FE0", VA = "0x54B3FE0")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600077F")]
	[Address(RVA = "0x54B3FF0", Offset = "0x54B2FF0", VA = "0x54B3FF0")]
	private static char HexToChar(int a)
	{
		return default(char);
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x54B4000", Offset = "0x54B3000", VA = "0x54B4000")]
	private unsafe static int HexsToChars(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x54B4060", Offset = "0x54B3060", VA = "0x54B4060")]
	private unsafe static int HexsToCharsHexOutput(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x54B3AE0", Offset = "0x54B2AE0", VA = "0x54B3AE0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x54B40E0", Offset = "0x54B30E0", VA = "0x54B40E0")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x54B4A10", Offset = "0x54B3A10", VA = "0x54B4A10", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}
}
