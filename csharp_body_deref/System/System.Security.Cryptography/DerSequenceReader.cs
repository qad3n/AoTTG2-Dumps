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

[Token(Token = "0x20000E1")]
internal class DerSequenceReader
{
	[Token(Token = "0x20000E2")]
	internal enum DerTag : byte
	{
		[Token(Token = "0x4000426")]
		Boolean = 1,
		[Token(Token = "0x4000427")]
		Integer = 2,
		[Token(Token = "0x4000428")]
		BitString = 3,
		[Token(Token = "0x4000429")]
		OctetString = 4,
		[Token(Token = "0x400042A")]
		Null = 5,
		[Token(Token = "0x400042B")]
		ObjectIdentifier = 6,
		[Token(Token = "0x400042C")]
		UTF8String = 12,
		[Token(Token = "0x400042D")]
		Sequence = 16,
		[Token(Token = "0x400042E")]
		Set = 17,
		[Token(Token = "0x400042F")]
		PrintableString = 19,
		[Token(Token = "0x4000430")]
		T61String = 20,
		[Token(Token = "0x4000431")]
		IA5String = 22,
		[Token(Token = "0x4000432")]
		UTCTime = 23,
		[Token(Token = "0x4000433")]
		GeneralizedTime = 24,
		[Token(Token = "0x4000434")]
		BMPString = 30
	}

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x0")]
	internal static DateTimeFormatInfo s_validityDateTimeFormatInfo;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x8")]
	private static Encoding s_utf8EncodingWithExceptionFallback;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x10")]
	private static Encoding s_latin1Encoding;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x10")]
	private readonly byte[] _data;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _end;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x1C")]
	private int _position;

	[Token(Token = "0x170000FA")]
	private int ContentLength
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x6208600", Offset = "0x6207600", VA = "0x6208600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool HasData
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x62087F0", Offset = "0x62077F0", VA = "0x62087F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x6208610", Offset = "0x6207610", VA = "0x6208610")]
	internal DerSequenceReader(byte[] data)
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x6208630", Offset = "0x6207630", VA = "0x6208630")]
	internal DerSequenceReader(byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x6208650", Offset = "0x6207650", VA = "0x6208650")]
	private DerSequenceReader(DerTag tagToEat, byte[] data, int offset, int length)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x6208800", Offset = "0x6207800", VA = "0x6208800")]
	internal byte PeekTag()
	{
		return default(byte);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x6208880", Offset = "0x6207880", VA = "0x6208880")]
	internal void SkipValue()
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x62088D0", Offset = "0x62078D0", VA = "0x62088D0")]
	internal byte[] ReadNextEncodedValue()
	{
		return null;
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x6208A60", Offset = "0x6207A60", VA = "0x6208A60")]
	internal bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x6208B20", Offset = "0x6207B20", VA = "0x6208B20")]
	internal int ReadInteger()
	{
		return default(int);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x6208BB0", Offset = "0x6207BB0", VA = "0x6208BB0")]
	internal byte[] ReadIntegerBytes()
	{
		return null;
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x6208CD0", Offset = "0x6207CD0", VA = "0x6208CD0")]
	internal byte[] ReadBitString()
	{
		return null;
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x6208DF0", Offset = "0x6207DF0", VA = "0x6208DF0")]
	internal byte[] ReadOctetString()
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x6208E80", Offset = "0x6207E80", VA = "0x6208E80")]
	internal string ReadOidAsString()
	{
		return null;
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x6209180", Offset = "0x6208180", VA = "0x6209180")]
	internal string ReadUtf8String()
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x62092B0", Offset = "0x62082B0", VA = "0x62092B0")]
	private DerSequenceReader ReadCollectionWithTag(DerTag expected)
	{
		return null;
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x62093E0", Offset = "0x62083E0", VA = "0x62093E0")]
	internal DerSequenceReader ReadSequence()
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x62093F0", Offset = "0x62083F0", VA = "0x62093F0")]
	internal DerSequenceReader ReadSet()
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x6209400", Offset = "0x6208400", VA = "0x6209400")]
	internal string ReadPrintableString()
	{
		return null;
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x62094D0", Offset = "0x62084D0", VA = "0x62094D0")]
	internal string ReadIA5String()
	{
		return null;
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x62095A0", Offset = "0x62085A0", VA = "0x62095A0")]
	internal string ReadT61String()
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x6209970", Offset = "0x6208970", VA = "0x6209970")]
	internal DateTime ReadX509Date()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x6209A40", Offset = "0x6208A40", VA = "0x6209A40")]
	internal DateTime ReadUtcTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x6209A80", Offset = "0x6208A80", VA = "0x6209A80")]
	internal DateTime ReadGeneralizedTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x6209CF0", Offset = "0x6208CF0", VA = "0x6209CF0")]
	internal string ReadBMPString()
	{
		return null;
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x6209250", Offset = "0x6208250", VA = "0x6209250")]
	private static string TrimTrailingNulls(string value)
	{
		return null;
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x6209AC0", Offset = "0x6208AC0", VA = "0x6209AC0")]
	private DateTime ReadTime(DerTag timeTag, string formatString)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x6208C40", Offset = "0x6207C40", VA = "0x6208C40")]
	private byte[] ReadContentAsBytes()
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x6208740", Offset = "0x6207740", VA = "0x6208740")]
	private void EatTag(DerTag expected)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x6209360", Offset = "0x6208360", VA = "0x6209360")]
	private static void CheckTag(DerTag expected, byte[] data, int position)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x62087B0", Offset = "0x62077B0", VA = "0x62087B0")]
	private int EatLength()
	{
		return default(int);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x6208960", Offset = "0x6207960", VA = "0x6208960")]
	private static int ScanContentLength(byte[] data, int offset, int end, out int bytesConsumed)
	{
		return default(int);
	}
}
