using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E0")]
internal class DerSequenceReader
{
	[Token(Token = "0x20000E1")]
	internal enum DerTag : byte
	{
		[Token(Token = "0x4000423")]
		Boolean = 1,
		[Token(Token = "0x4000424")]
		Integer = 2,
		[Token(Token = "0x4000425")]
		BitString = 3,
		[Token(Token = "0x4000426")]
		OctetString = 4,
		[Token(Token = "0x4000427")]
		Null = 5,
		[Token(Token = "0x4000428")]
		ObjectIdentifier = 6,
		[Token(Token = "0x4000429")]
		UTF8String = 12,
		[Token(Token = "0x400042A")]
		Sequence = 16,
		[Token(Token = "0x400042B")]
		Set = 17,
		[Token(Token = "0x400042C")]
		PrintableString = 19,
		[Token(Token = "0x400042D")]
		T61String = 20,
		[Token(Token = "0x400042E")]
		IA5String = 22,
		[Token(Token = "0x400042F")]
		UTCTime = 23,
		[Token(Token = "0x4000430")]
		GeneralizedTime = 24,
		[Token(Token = "0x4000431")]
		BMPString = 30
	}

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x0")]
	internal static DateTimeFormatInfo s_validityDateTimeFormatInfo;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x8")]
	private static Encoding s_utf8EncodingWithExceptionFallback;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x10")]
	private static Encoding s_latin1Encoding;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _data;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _end;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x1C")]
	private int _position;

	[Token(Token = "0x170000F0")]
	private int ContentLength
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x4607A20", Offset = "0x4607A20", VA = "0x4607A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	internal bool HasData
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x4607C00", Offset = "0x4607C00", VA = "0x4607C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x4607A30", Offset = "0x4607A30", VA = "0x4607A30")]
	internal DerSequenceReader(byte[] data)
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x4607A50", Offset = "0x4607A50", VA = "0x4607A50")]
	internal DerSequenceReader(byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x4607A60", Offset = "0x4607A60", VA = "0x4607A60")]
	private DerSequenceReader(DerTag tagToEat, byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x4607C10", Offset = "0x4607C10", VA = "0x4607C10")]
	internal byte PeekTag()
	{
		return default(byte);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x4607C90", Offset = "0x4607C90", VA = "0x4607C90")]
	internal void SkipValue()
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x4607CE0", Offset = "0x4607CE0", VA = "0x4607CE0")]
	internal byte[] ReadNextEncodedValue()
	{
		return null;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x4607E80", Offset = "0x4607E80", VA = "0x4607E80")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x4607F40", Offset = "0x4607F40", VA = "0x4607F40")]
	internal int ReadInteger()
	{
		return default(int);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x4607FD0", Offset = "0x4607FD0", VA = "0x4607FD0")]
	internal byte[] ReadIntegerBytes()
	{
		return null;
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x46080F0", Offset = "0x46080F0", VA = "0x46080F0")]
	internal byte[] ReadBitString()
	{
		return null;
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4608210", Offset = "0x4608210", VA = "0x4608210")]
	internal byte[] ReadOctetString()
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x46082A0", Offset = "0x46082A0", VA = "0x46082A0")]
	internal string ReadOidAsString()
	{
		return null;
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x46085C0", Offset = "0x46085C0", VA = "0x46085C0")]
	internal string ReadUtf8String()
	{
		return null;
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x46086F0", Offset = "0x46086F0", VA = "0x46086F0")]
	private DerSequenceReader ReadCollectionWithTag(DerTag expected)
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4608820", Offset = "0x4608820", VA = "0x4608820")]
	internal DerSequenceReader ReadSequence()
	{
		return null;
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4608830", Offset = "0x4608830", VA = "0x4608830")]
	internal DerSequenceReader ReadSet()
	{
		return null;
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4608840", Offset = "0x4608840", VA = "0x4608840")]
	internal string ReadPrintableString()
	{
		return null;
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4608910", Offset = "0x4608910", VA = "0x4608910")]
	internal string ReadIA5String()
	{
		return null;
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x46089E0", Offset = "0x46089E0", VA = "0x46089E0")]
	internal string ReadT61String()
	{
		return null;
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4608D60", Offset = "0x4608D60", VA = "0x4608D60")]
	internal DateTime ReadX509Date()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4608E30", Offset = "0x4608E30", VA = "0x4608E30")]
	internal DateTime ReadUtcTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4608E70", Offset = "0x4608E70", VA = "0x4608E70")]
	internal DateTime ReadGeneralizedTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x46090E0", Offset = "0x46090E0", VA = "0x46090E0")]
	internal string ReadBMPString()
	{
		return null;
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4608690", Offset = "0x4608690", VA = "0x4608690")]
	private static string TrimTrailingNulls(string value)
	{
		return null;
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4608EB0", Offset = "0x4608EB0", VA = "0x4608EB0")]
	private DateTime ReadTime(DerTag timeTag, string formatString)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4608060", Offset = "0x4608060", VA = "0x4608060")]
	private byte[] ReadContentAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4607B50", Offset = "0x4607B50", VA = "0x4607B50")]
	private void EatTag(DerTag expected)
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x46087A0", Offset = "0x46087A0", VA = "0x46087A0")]
	private static void CheckTag(DerTag expected, byte[] data, int position)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4607BC0", Offset = "0x4607BC0", VA = "0x4607BC0")]
	private int EatLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4607D80", Offset = "0x4607D80", VA = "0x4607D80")]
	private static int ScanContentLength(byte[] data, int offset, int end, out int bytesConsumed)
	{
		return default(int);
	}
}
