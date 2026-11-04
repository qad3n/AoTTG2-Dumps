// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DerSequenceReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000120")]
internal class DerSequenceReader
{
	[Token(Token = "0x2000121")]
	internal enum DerTag : byte
	{
		[Token(Token = "0x40004F5")]
		Boolean = 1,
		[Token(Token = "0x40004F6")]
		Integer = 2,
		[Token(Token = "0x40004F7")]
		BitString = 3,
		[Token(Token = "0x40004F8")]
		OctetString = 4,
		[Token(Token = "0x40004F9")]
		Null = 5,
		[Token(Token = "0x40004FA")]
		ObjectIdentifier = 6,
		[Token(Token = "0x40004FB")]
		UTF8String = 12,
		[Token(Token = "0x40004FC")]
		Sequence = 16,
		[Token(Token = "0x40004FD")]
		Set = 17,
		[Token(Token = "0x40004FE")]
		PrintableString = 19,
		[Token(Token = "0x40004FF")]
		T61String = 20,
		[Token(Token = "0x4000500")]
		IA5String = 22,
		[Token(Token = "0x4000501")]
		UTCTime = 23,
		[Token(Token = "0x4000502")]
		GeneralizedTime = 24,
		[Token(Token = "0x4000503")]
		BMPString = 30
	}

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x0")]
	internal static DateTimeFormatInfo s_validityDateTimeFormatInfo;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x8")]
	private static Encoding s_utf8EncodingWithExceptionFallback;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x10")]
	private static Encoding s_latin1Encoding;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _data;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _end;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x1C")]
	private int _position;

	[Token(Token = "0x17000129")]
	private int ContentLength
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	internal bool HasData
	{
		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x2863D10", Offset = "0x2862310", VA = "0x182863D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x2863CA0", Offset = "0x28622A0", VA = "0x182863CA0")]
	internal DerSequenceReader(byte[] data)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x2863CE0", Offset = "0x28622E0", VA = "0x182863CE0")]
	internal DerSequenceReader(byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x2863B30", Offset = "0x2862130", VA = "0x182863B30")]
	private DerSequenceReader(DerTag tagToEat, byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x2862320", Offset = "0x2860920", VA = "0x182862320")]
	internal byte PeekTag()
	{
		return default(byte);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x2863A70", Offset = "0x2862070", VA = "0x182863A70")]
	internal void SkipValue()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2862AD0", Offset = "0x28610D0", VA = "0x182862AD0")]
	internal byte[] ReadNextEncodedValue()
	{
		return null;
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2862680", Offset = "0x2860C80", VA = "0x182862680")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x2862A20", Offset = "0x2861020", VA = "0x182862A20")]
	internal int ReadInteger()
	{
		return default(int);
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x28629F0", Offset = "0x2860FF0", VA = "0x1828629F0")]
	internal byte[] ReadIntegerBytes()
	{
		return null;
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x28624E0", Offset = "0x2860AE0", VA = "0x1828624E0")]
	internal byte[] ReadBitString()
	{
		return null;
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x2862B80", Offset = "0x2861180", VA = "0x182862B80")]
	internal byte[] ReadOctetString()
	{
		return null;
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x2862BB0", Offset = "0x28611B0", VA = "0x182862BB0")]
	internal string ReadOidAsString()
	{
		return null;
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x28635C0", Offset = "0x2861BC0", VA = "0x1828635C0")]
	internal string ReadUtf8String()
	{
		return null;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x2862750", Offset = "0x2860D50", VA = "0x182862750")]
	private DerSequenceReader ReadCollectionWithTag(DerTag expected)
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x2862FE0", Offset = "0x28615E0", VA = "0x182862FE0")]
	internal DerSequenceReader ReadSequence()
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x2862FF0", Offset = "0x28615F0", VA = "0x182862FF0")]
	internal DerSequenceReader ReadSet()
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x2862F00", Offset = "0x2861500", VA = "0x182862F00")]
	internal string ReadPrintableString()
	{
		return null;
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2862910", Offset = "0x2860F10", VA = "0x182862910")]
	internal string ReadIA5String()
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x2863000", Offset = "0x2861600", VA = "0x182863000")]
	internal string ReadT61String()
	{
		return null;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x28636A0", Offset = "0x2861CA0", VA = "0x1828636A0")]
	internal DateTime ReadX509Date()
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x2863580", Offset = "0x2861B80", VA = "0x182863580")]
	internal DateTime ReadUtcTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x28628D0", Offset = "0x2860ED0", VA = "0x1828628D0")]
	internal DateTime ReadGeneralizedTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x2862400", Offset = "0x2860A00", VA = "0x182862400")]
	internal string ReadBMPString()
	{
		return null;
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x2863AC0", Offset = "0x28620C0", VA = "0x182863AC0")]
	private static string TrimTrailingNulls(string value)
	{
		return null;
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x2863320", Offset = "0x2861920", VA = "0x182863320")]
	private DateTime ReadTime(DerTag timeTag, string formatString)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x2862820", Offset = "0x2860E20", VA = "0x182862820")]
	private byte[] ReadContentAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x28622A0", Offset = "0x28608A0", VA = "0x1828622A0")]
	private void EatTag(DerTag expected)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x2862130", Offset = "0x2860730", VA = "0x182862130")]
	private static void CheckTag(DerTag expected, byte[] data, int position)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x2862260", Offset = "0x2860860", VA = "0x182862260")]
	private int EatLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x2863770", Offset = "0x2861D70", VA = "0x182863770")]
	private static int ScanContentLength(byte[] data, int offset, int end, out int bytesConsumed)
	{
		return default(int);
	}
}
