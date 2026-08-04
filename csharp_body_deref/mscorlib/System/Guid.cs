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
		[Address(RVA = "0x3CB1840", Offset = "0x3CB1840", VA = "0x3CB1840")]
		internal void Init(GuidParseThrowStyle canThrow)
		{
		}

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x3CB0710", Offset = "0x3CB0710", VA = "0x3CB0710")]
		internal void SetFailure(Exception nativeException)
		{
		}

		[Token(Token = "0x600077D")]
		[Address(RVA = "0x3CAF080", Offset = "0x3CAF080", VA = "0x3CAF080")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID)
		{
		}

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x3CB02B0", Offset = "0x3CB02B0", VA = "0x3CB02B0")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
		{
		}

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x3CAFF20", Offset = "0x3CAFF20", VA = "0x3CAFF20")]
		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName, Exception innerException)
		{
		}

		[Token(Token = "0x6000780")]
		[Address(RVA = "0x3CAEB00", Offset = "0x3CAEB00", VA = "0x3CAEB00")]
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
	[Address(RVA = "0x3CAE5A0", Offset = "0x3CAE5A0", VA = "0x3CAE5A0")]
	public static Guid NewGuid()
	{
		return default(Guid);
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x3CAE5F0", Offset = "0x3CAE5F0", VA = "0x3CAE5F0")]
	public Guid(byte[] b)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x3CAE680", Offset = "0x3CAE680", VA = "0x3CAE680")]
	public Guid(ReadOnlySpan<byte> b)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x3CAE780", Offset = "0x3CAE780", VA = "0x3CAE780")]
	public Guid(int a, short b, short c, byte d, byte e, byte f, byte g, byte h, byte i, byte j, byte k)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x3CAE7D0", Offset = "0x3CAE7D0", VA = "0x3CAE7D0")]
	public Guid(string g)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x3CAEC40", Offset = "0x3CAEC40", VA = "0x3CAEC40")]
	public static Guid Parse(string input)
	{
		return default(Guid);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x3CAED30", Offset = "0x3CAED30", VA = "0x3CAED30")]
	public static Guid Parse(ReadOnlySpan<char> input)
	{
		return default(Guid);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x3CAEDA0", Offset = "0x3CAEDA0", VA = "0x3CAEDA0")]
	public static bool TryParse(string input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x3CAEE30", Offset = "0x3CAEE30", VA = "0x3CAEE30")]
	public static bool TryParse(ReadOnlySpan<char> input, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x3CAEE80", Offset = "0x3CAEE80", VA = "0x3CAEE80")]
	public static bool TryParseExact(string input, string format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x3CAEF40", Offset = "0x3CAEF40", VA = "0x3CAEF40")]
	public static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, out Guid result)
	{
		return default(bool);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x3CAE8C0", Offset = "0x3CAE8C0", VA = "0x3CAE8C0")]
	private static bool TryParseGuid(ReadOnlySpan<char> guidString, GuidStyles flags, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x3CAF350", Offset = "0x3CAF350", VA = "0x3CAF350")]
	private static bool TryParseGuidWithHexPrefix(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x3CAFC10", Offset = "0x3CAFC10", VA = "0x3CAFC10")]
	private static bool TryParseGuidWithNoStyle(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x3CAF090", Offset = "0x3CAF090", VA = "0x3CAF090")]
	private static bool TryParseGuidWithDashes(ReadOnlySpan<char> guidString, ref GuidResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x3CB02F0", Offset = "0x3CB02F0", VA = "0x3CB02F0")]
	private static bool StringToShort(ReadOnlySpan<char> str, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x3CB06D0", Offset = "0x3CB06D0", VA = "0x3CB06D0")]
	private static bool StringToShort(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out short result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x3CB02C0", Offset = "0x3CB02C0", VA = "0x3CB02C0")]
	private static bool StringToInt(ReadOnlySpan<char> str, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x3CB04C0", Offset = "0x3CB04C0", VA = "0x3CB04C0")]
	private static bool StringToInt(ReadOnlySpan<char> str, ref int parsePos, int requiredLength, int flags, out int result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x3CB0340", Offset = "0x3CB0340", VA = "0x3CB0340")]
	private static bool StringToLong(ReadOnlySpan<char> str, ref int parsePos, int flags, out long result, ref GuidResult parseResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x3CAFFB0", Offset = "0x3CAFFB0", VA = "0x3CAFFB0")]
	private static ReadOnlySpan<char> EatAllWhitespace(ReadOnlySpan<char> str)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x3CB0220", Offset = "0x3CB0220", VA = "0x3CB0220")]
	private static bool IsHexPrefix(ReadOnlySpan<char> str, int i)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x3CB0730", Offset = "0x3CB0730", VA = "0x3CB0730")]
	private void WriteByteHelper(Span<byte> destination)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x3CB0800", Offset = "0x3CB0800", VA = "0x3CB0800")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x3CB0870", Offset = "0x3CB0870", VA = "0x3CB0870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x3CB0AB0", Offset = "0x3CB0AB0", VA = "0x3CB0AB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x3CB0AD0", Offset = "0x3CB0AD0", VA = "0x3CB0AD0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x3CB0B50", Offset = "0x3CB0B50", VA = "0x3CB0B50", Slot = "7")]
	public bool Equals(Guid g)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x3CB0B70", Offset = "0x3CB0B70", VA = "0x3CB0B70")]
	private int GetResult(uint me, uint them)
	{
		return default(int);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x3CB0B80", Offset = "0x3CB0B80", VA = "0x3CB0B80", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x3CB0CE0", Offset = "0x3CB0CE0", VA = "0x3CB0CE0", Slot = "6")]
	public int CompareTo(Guid value)
	{
		return default(int);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x3CB0DC0", Offset = "0x3CB0DC0", VA = "0x3CB0DC0")]
	public static bool operator ==(Guid a, Guid b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x3CB0DF0", Offset = "0x3CB0DF0", VA = "0x3CB0DF0")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000775")]
	[Address(RVA = "0x3CB0E00", Offset = "0x3CB0E00", VA = "0x3CB0E00")]
	private static char HexToChar(int a)
	{
		return default(char);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x3CB0E10", Offset = "0x3CB0E10", VA = "0x3CB0E10")]
	private unsafe static int HexsToChars(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x3CB0E80", Offset = "0x3CB0E80", VA = "0x3CB0E80")]
	private unsafe static int HexsToCharsHexOutput(char* guidChars, int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x3CB08A0", Offset = "0x3CB08A0", VA = "0x3CB08A0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x3CB0F00", Offset = "0x3CB0F00", VA = "0x3CB0F00")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format)
	{
		return default(bool);
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x3CB1830", Offset = "0x3CB1830", VA = "0x3CB1830", Slot = "8")]
	private bool System_002EISpanFormattable_002ETryFormat(Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}
}
