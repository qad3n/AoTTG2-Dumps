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
		[Token(Token = "0x4000340")]
		None = 0,
		[Token(Token = "0x4000341")]
		AllowParenthesis = 1,
		[Token(Token = "0x4000342")]
		AllowBraces = 2,
		[Token(Token = "0x4000343")]
		AllowDashes = 4,
		[Token(Token = "0x4000344")]
		AllowHexPrefix = 8,
		[Token(Token = "0x4000345")]
		RequireParenthesis = 0x10,
		[Token(Token = "0x4000346")]
		RequireBraces = 0x20,
		[Token(Token = "0x4000347")]
		RequireDashes = 0x40,
		[Token(Token = "0x4000348")]
		RequireHexPrefix = 0x80,
		[Token(Token = "0x4000349")]
		HexFormat = 0xA0,
		[Token(Token = "0x400034A")]
		NumberFormat = 0,
		[Token(Token = "0x400034B")]
		DigitFormat = 0x40,
		[Token(Token = "0x400034C")]
		BraceFormat = 0x60,
		[Token(Token = "0x400034D")]
		ParenthesisFormat = 0x50,
		[Token(Token = "0x400034E")]
		Any = 0xF
	}

	[Token(Token = "0x20000C6")]
	private enum GuidParseThrowStyle
	{
		[Token(Token = "0x4000350")]
		None,
		[Token(Token = "0x4000351")]
		All,
		[Token(Token = "0x4000352")]
		AllButOverflow
	}

	[Token(Token = "0x20000C7")]
	private enum ParseFailureKind
	{
		[Token(Token = "0x4000354")]
		None,
		[Token(Token = "0x4000355")]
		ArgumentNull,
		[Token(Token = "0x4000356")]
		Format,
		[Token(Token = "0x4000357")]
		FormatWithParameter,
		[Token(Token = "0x4000358")]
		NativeException,
		[Token(Token = "0x4000359")]
		FormatWithInnerException
	}

	[Token(Token = "0x20000C8")]
	private struct GuidResult
	{
		[Token(Token = "0x400035A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Guid _parsedGuid;

		[Token(Token = "0x400035B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GuidParseThrowStyle _throwStyle;

		[Token(Token = "0x400035C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private ParseFailureKind _failure;

		[Token(Token = "0x400035D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _failureMessageID;

		[Token(Token = "0x400035E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private object _failureMessageFormatArgument;

		[Token(Token = "0x400035F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _failureArgumentName;

		[Token(Token = "0x4000360")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Exception _innerException;

		[Token(Token = "0x600077B")]
		[Address(RVA = "0x4FCBD20", Offset = "0x4FCBD20", VA = "0x4FCBD20")]
		internal void Init(GuidParseThrowStyle canThrow)
		{
		}

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x4FCABF0", Offset = "0x4FCABF0", VA = "0x4FCABF0")]
		internal void SetFailure(Exception nativeException)
		{
		}

		[Token(Token = "0x600077D")]
		[Address(RVA = "0x4FC9560", Offset = "0x4FC9560", VA = "0x4FC9560")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID)
		{
		}

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x4FCA790", Offset = "0x4FCA790", VA = "0x4FCA790")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x4FCA400", Offset = "0x4FCA400", VA = "0x4FCA400")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName, Exception innerException)
		{
		}

		[Token(Token = "0x6000780")]
		[Address(RVA = "0x4FC8FE0", Offset = "0x4FC8FE0", VA = "0x4FC8FE0")]
		internal Exception GetGuidParseException()
		{
			return null;
		}
	}

	[Token(Token = "0x4000333")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly Guid Empty;

	[Token(Token = "0x4000334")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int _a;

	[Token(Token = "0x4000335")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private short _b;

	[Token(Token = "0x4000336")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6")]
	private short _c;

	[Token(Token = "0x4000337")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private byte _d;

	[Token(Token = "0x4000338")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private byte _e;

	[Token(Token = "0x4000339")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	private byte _f;

	[Token(Token = "0x400033A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB")]
	private byte _g;

	[Token(Token = "0x400033B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private byte _h;

	[Token(Token = "0x400033C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD")]
	private byte _i;

	[Token(Token = "0x400033D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE")]
	private byte _j;

	[Token(Token = "0x400033E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF")]
	private byte _k;

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x4FC8A80", Offset = "0x4FC8A80", VA = "0x4FC8A80")]
	public static Guid NewGuid()
	{
		return default(Guid);
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x4FC8AD0", Offset = "0x4FC8AD0", VA = "0x4FC8AD0")]
	public Guid(byte[] b)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x4FC8B60", Offset = "0x4FC8B60", VA = "0x4FC8B60")]
	public Guid(ReadOnlySpan<byte> b)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4FC8C60", Offset = "0x4FC8C60", VA = "0x4FC8C60")]
	public Guid(int a, short b, short c, byte d, byte e, byte f, byte g, byte h, byte i, byte j, byte k)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x4FC8CB0", Offset = "0x4FC8CB0", VA = "0x4FC8CB0")]
	public Guid(string g)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x4FC9120", Offset = "0x4FC9120", VA = "0x4FC9120")]
	public static Guid Parse(string input)
	{
		return default(Guid);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x4FC9210", Offset = "0x4FC9210", VA = "0x4FC9210")]
	public static Guid Parse(ReadOnlySpan<char> input)
	{
		return default(Guid);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x4FC9280", Offset = "0x4FC9280", VA = "0x4FC9280")]
	public static bool TryParse(string input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x4FC9310", Offset = "0x4FC9310", VA = "0x4FC9310")]
	public static bool TryParse(ReadOnlySpan<char> input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x4FC9360", Offset = "0x4FC9360", VA = "0x4FC9360")]
	public static bool TryParseExact(string input, string format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x4FC9420", Offset = "0x4FC9420", VA = "0x4FC9420")]
	public static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x4FC8DA0", Offset = "0x4FC8DA0", VA = "0x4FC8DA0")]
	private static bool TryParseGuid(ReadOnlySpan<char> guidString, GuidStyles flags, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x4FC9830", Offset = "0x4FC9830", VA = "0x4FC9830")]
	private static bool TryParseGuidWithHexPrefix(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x4FCA0F0", Offset = "0x4FCA0F0", VA = "0x4FCA0F0")]
	private static bool TryParseGuidWithNoStyle(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x4FC9570", Offset = "0x4FC9570", VA = "0x4FC9570")]
	private static bool TryParseGuidWithDashes(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x4FCA7D0", Offset = "0x4FCA7D0", VA = "0x4FCA7D0")]
	private static bool StringToShort(ReadOnlySpan<char> str, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4FCABB0", Offset = "0x4FCABB0", VA = "0x4FCABB0")]
	private static bool StringToShort(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4FCA7A0", Offset = "0x4FCA7A0", VA = "0x4FCA7A0")]
	private static bool StringToInt(ReadOnlySpan<char> str, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x4FCA9A0", Offset = "0x4FCA9A0", VA = "0x4FCA9A0")]
	private static bool StringToInt(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4FCA820", Offset = "0x4FCA820", VA = "0x4FCA820")]
	private static bool StringToLong(ReadOnlySpan<char> str, ref int parsePos, int flags, out long result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4FCA490", Offset = "0x4FCA490", VA = "0x4FCA490")]
	private static ReadOnlySpan<char> EatAllWhitespace(ReadOnlySpan<char> str)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x4FCA700", Offset = "0x4FCA700", VA = "0x4FCA700")]
	private static bool IsHexPrefix(ReadOnlySpan<char> str, int i)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x4FCAC10", Offset = "0x4FCAC10", VA = "0x4FCAC10")]
	private void WriteByteHelper(Span<byte> destination)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4FCACE0", Offset = "0x4FCACE0", VA = "0x4FCACE0")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x4FCAD50", Offset = "0x4FCAD50", VA = "0x4FCAD50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4FCAF90", Offset = "0x4FCAF90", VA = "0x4FCAF90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4FCAFB0", Offset = "0x4FCAFB0", VA = "0x4FCAFB0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4FCB030", Offset = "0x4FCB030", VA = "0x4FCB030", Slot = "7")]
	public bool Equals(Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4FCB050", Offset = "0x4FCB050", VA = "0x4FCB050")]
	private int GetResult(uint me, uint them)
	{
		return default(int);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x4FCB060", Offset = "0x4FCB060", VA = "0x4FCB060", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4FCB1C0", Offset = "0x4FCB1C0", VA = "0x4FCB1C0", Slot = "6")]
	public int CompareTo(Guid value)
	{
		return default(int);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4FCB2A0", Offset = "0x4FCB2A0", VA = "0x4FCB2A0")]
	public static bool operator ==(Guid a, Guid b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x4FCB2D0", Offset = "0x4FCB2D0", VA = "0x4FCB2D0")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4FCB2E0", Offset = "0x4FCB2E0", VA = "0x4FCB2E0")]
	private static char HexToChar(int a)
	{
		return default(char);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4FCB2F0", Offset = "0x4FCB2F0", VA = "0x4FCB2F0")]
	private unsafe static int HexsToChars(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4FCB360", Offset = "0x4FCB360", VA = "0x4FCB360")]
	private unsafe static int HexsToCharsHexOutput(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4FCAD80", Offset = "0x4FCAD80", VA = "0x4FCAD80", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4FCB3E0", Offset = "0x4FCB3E0", VA = "0x4FCB3E0")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format)
	{
		return default(bool);
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4FCBD10", Offset = "0x4FCBD10", VA = "0x4FCBD10", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}
}
