using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000295")]
[ComVisible(true)]
public abstract class Encoding : ICloneable
{
	[Serializable]
	[Token(Token = "0x2000296")]
	internal class DefaultEncoder : Encoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000BDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000BE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[NonSerialized]
		[Token(Token = "0x4000BE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
		internal char charLeftOver;

		[Token(Token = "0x600171D")]
		[Address(RVA = "0x4E325F0", Offset = "0x4E325F0", VA = "0x4E325F0")]
		public DefaultEncoder(Encoding encoding)
		{
		}

		[Token(Token = "0x600171E")]
		[Address(RVA = "0x4E32BA0", Offset = "0x4E32BA0", VA = "0x4E32BA0")]
		internal DefaultEncoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600171F")]
		[Address(RVA = "0x4E32F20", Offset = "0x4E32F20", VA = "0x4E32F20", Slot = "12")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x6001720")]
		[Address(RVA = "0x4E32FE0", Offset = "0x4E32FE0", VA = "0x4E32FE0", Slot = "11")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001721")]
		[Address(RVA = "0x4E33080", Offset = "0x4E33080", VA = "0x4E33080", Slot = "5")]
		public override int GetByteCount(char[] chars, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001722")]
		[Address(RVA = "0x4E330B0", Offset = "0x4E330B0", VA = "0x4E330B0", Slot = "6")]
		public unsafe override int GetByteCount(char* chars, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001723")]
		[Address(RVA = "0x4E330E0", Offset = "0x4E330E0", VA = "0x4E330E0", Slot = "7")]
		public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001724")]
		[Address(RVA = "0x4E33110", Offset = "0x4E33110", VA = "0x4E33110", Slot = "8")]
		public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
		{
			return default(int);
		}
	}

	[Serializable]
	[Token(Token = "0x2000297")]
	internal class DefaultDecoder : Decoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000BE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000BE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[Token(Token = "0x6001725")]
		[Address(RVA = "0x4E32330", Offset = "0x4E32330", VA = "0x4E32330")]
		public DefaultDecoder(Encoding encoding)
		{
		}

		[Token(Token = "0x6001726")]
		[Address(RVA = "0x4E33140", Offset = "0x4E33140", VA = "0x4E33140")]
		internal DefaultDecoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001727")]
		[Address(RVA = "0x4E33440", Offset = "0x4E33440", VA = "0x4E33440", Slot = "15")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x6001728")]
		[Address(RVA = "0x4E334A0", Offset = "0x4E334A0", VA = "0x4E334A0", Slot = "14")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001729")]
		[Address(RVA = "0x4E33540", Offset = "0x4E33540", VA = "0x4E33540", Slot = "5")]
		public override int GetCharCount(byte[] bytes, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600172A")]
		[Address(RVA = "0x4E33560", Offset = "0x4E33560", VA = "0x4E33560", Slot = "6")]
		public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600172B")]
		[Address(RVA = "0x4E33590", Offset = "0x4E33590", VA = "0x4E33590", Slot = "7")]
		public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600172C")]
		[Address(RVA = "0x4E335C0", Offset = "0x4E335C0", VA = "0x4E335C0", Slot = "8")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
		{
			return default(int);
		}

		[Token(Token = "0x600172D")]
		[Address(RVA = "0x4E335E0", Offset = "0x4E335E0", VA = "0x4E335E0", Slot = "9")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x4E33610", Offset = "0x4E33610", VA = "0x4E33610", Slot = "10")]
		public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000298")]
	internal class EncodingCharBuffer
	{
		[Token(Token = "0x4000BE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe char* chars;

		[Token(Token = "0x4000BE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe char* charStart;

		[Token(Token = "0x4000BE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000BE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int charCountResult;

		[Token(Token = "0x4000BE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Encoding enc;

		[Token(Token = "0x4000BE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Text.DecoderNLS decoder;

		[Token(Token = "0x4000BEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000BEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000BEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000BED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private DecoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x17000255")]
		internal bool MoreData
		{
			[Token(Token = "0x6001733")]
			[Address(RVA = "0x4E33800", Offset = "0x4E33800", VA = "0x4E33800")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000256")]
		internal int BytesUsed
		{
			[Token(Token = "0x6001735")]
			[Address(RVA = "0x4E33830", Offset = "0x4E33830", VA = "0x4E33830")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000257")]
		internal int Count
		{
			[Token(Token = "0x6001738")]
			[Address(RVA = "0x4E33980", Offset = "0x4E33980", VA = "0x4E33980")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600172F")]
		[Address(RVA = "0x4E33640", Offset = "0x4E33640", VA = "0x4E33640")]
		internal unsafe EncodingCharBuffer(Encoding enc, System.Text.DecoderNLS decoder, char* charStart, int charCount, byte* byteStart, int byteCount)
		{
		}

		[Token(Token = "0x6001730")]
		[Address(RVA = "0x4E33730", Offset = "0x4E33730", VA = "0x4E33730")]
		internal bool AddChar(char ch, int numBytes)
		{
			return default(bool);
		}

		[Token(Token = "0x6001731")]
		[Address(RVA = "0x4E33790", Offset = "0x4E33790", VA = "0x4E33790")]
		internal bool AddChar(char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x6001732")]
		[Address(RVA = "0x4E337F0", Offset = "0x4E337F0", VA = "0x4E337F0")]
		internal void AdjustBytes(int count)
		{
		}

		[Token(Token = "0x6001734")]
		[Address(RVA = "0x4E33810", Offset = "0x4E33810", VA = "0x4E33810")]
		internal byte GetNextByte()
		{
			return default(byte);
		}

		[Token(Token = "0x6001736")]
		[Address(RVA = "0x4E33840", Offset = "0x4E33840", VA = "0x4E33840")]
		internal bool Fallback(byte fallbackByte)
		{
			return default(bool);
		}

		[Token(Token = "0x6001737")]
		[Address(RVA = "0x4E338A0", Offset = "0x4E338A0", VA = "0x4E338A0")]
		internal bool Fallback(byte[] byteBuffer)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000299")]
	internal class EncodingByteBuffer
	{
		[Token(Token = "0x4000BEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000BEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000BF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000BF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private unsafe char* chars;

		[Token(Token = "0x4000BF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private unsafe char* charStart;

		[Token(Token = "0x4000BF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int byteCountResult;

		[Token(Token = "0x4000BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Encoding enc;

		[Token(Token = "0x4000BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private System.Text.EncoderNLS encoder;

		[Token(Token = "0x4000BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal EncoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x17000258")]
		internal bool MoreData
		{
			[Token(Token = "0x600173F")]
			[Address(RVA = "0x4E33EB0", Offset = "0x4E33EB0", VA = "0x4E33EB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000259")]
		internal int CharsUsed
		{
			[Token(Token = "0x6001741")]
			[Address(RVA = "0x4E33F30", Offset = "0x4E33F30", VA = "0x4E33F30")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700025A")]
		internal int Count
		{
			[Token(Token = "0x6001742")]
			[Address(RVA = "0x4E33F50", Offset = "0x4E33F50", VA = "0x4E33F50")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001739")]
		[Address(RVA = "0x4E33990", Offset = "0x4E33990", VA = "0x4E33990")]
		internal unsafe EncodingByteBuffer(Encoding inEncoding, System.Text.EncoderNLS inEncoder, byte* inByteStart, int inByteCount, char* inCharStart, int inCharCount)
		{
		}

		[Token(Token = "0x600173A")]
		[Address(RVA = "0x4E33C10", Offset = "0x4E33C10", VA = "0x4E33C10")]
		internal bool AddByte(byte b, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x600173B")]
		[Address(RVA = "0x4E33D30", Offset = "0x4E33D30", VA = "0x4E33D30")]
		internal bool AddByte(byte b1)
		{
			return default(bool);
		}

		[Token(Token = "0x600173C")]
		[Address(RVA = "0x4E33DC0", Offset = "0x4E33DC0", VA = "0x4E33DC0")]
		internal bool AddByte(byte b1, byte b2)
		{
			return default(bool);
		}

		[Token(Token = "0x600173D")]
		[Address(RVA = "0x4E33E70", Offset = "0x4E33E70", VA = "0x4E33E70")]
		internal bool AddByte(byte b1, byte b2, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x600173E")]
		[Address(RVA = "0x4E33CB0", Offset = "0x4E33CB0", VA = "0x4E33CB0")]
		internal void MovePrevious(bool bThrow)
		{
		}

		[Token(Token = "0x6001740")]
		[Address(RVA = "0x4E33EF0", Offset = "0x4E33EF0", VA = "0x4E33EF0")]
		internal char GetNextChar()
		{
			return default(char);
		}
	}

	[Token(Token = "0x4000BA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Encoding defaultEncoding;

	[Token(Token = "0x4000BA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Encoding unicodeEncoding;

	[Token(Token = "0x4000BA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Encoding bigEndianUnicode;

	[Token(Token = "0x4000BA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Encoding utf7Encoding;

	[Token(Token = "0x4000BA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding utf8Encoding;

	[Token(Token = "0x4000BA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding utf32Encoding;

	[Token(Token = "0x4000BA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Encoding asciiEncoding;

	[Token(Token = "0x4000BA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Encoding latin1Encoding;

	[Token(Token = "0x4000BA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Dictionary<int, Encoding> encodings;

	[Token(Token = "0x4000BAA")]
	private const int MIMECONTF_MAILNEWS = 1;

	[Token(Token = "0x4000BAB")]
	private const int MIMECONTF_BROWSER = 2;

	[Token(Token = "0x4000BAC")]
	private const int MIMECONTF_SAVABLE_MAILNEWS = 256;

	[Token(Token = "0x4000BAD")]
	private const int MIMECONTF_SAVABLE_BROWSER = 512;

	[Token(Token = "0x4000BAE")]
	private const int CodePageDefault = 0;

	[Token(Token = "0x4000BAF")]
	private const int CodePageNoOEM = 1;

	[Token(Token = "0x4000BB0")]
	private const int CodePageNoMac = 2;

	[Token(Token = "0x4000BB1")]
	private const int CodePageNoThread = 3;

	[Token(Token = "0x4000BB2")]
	private const int CodePageNoSymbol = 42;

	[Token(Token = "0x4000BB3")]
	private const int CodePageUnicode = 1200;

	[Token(Token = "0x4000BB4")]
	private const int CodePageBigEndian = 1201;

	[Token(Token = "0x4000BB5")]
	private const int CodePageWindows1252 = 1252;

	[Token(Token = "0x4000BB6")]
	private const int CodePageMacGB2312 = 10008;

	[Token(Token = "0x4000BB7")]
	private const int CodePageGB2312 = 20936;

	[Token(Token = "0x4000BB8")]
	private const int CodePageMacKorean = 10003;

	[Token(Token = "0x4000BB9")]
	private const int CodePageDLLKorean = 20949;

	[Token(Token = "0x4000BBA")]
	private const int ISO2022JP = 50220;

	[Token(Token = "0x4000BBB")]
	private const int ISO2022JPESC = 50221;

	[Token(Token = "0x4000BBC")]
	private const int ISO2022JPSISO = 50222;

	[Token(Token = "0x4000BBD")]
	private const int ISOKorean = 50225;

	[Token(Token = "0x4000BBE")]
	private const int ISOSimplifiedCN = 50227;

	[Token(Token = "0x4000BBF")]
	private const int EUCJP = 51932;

	[Token(Token = "0x4000BC0")]
	private const int ChineseHZ = 52936;

	[Token(Token = "0x4000BC1")]
	private const int DuplicateEUCCN = 51936;

	[Token(Token = "0x4000BC2")]
	private const int EUCCN = 936;

	[Token(Token = "0x4000BC3")]
	private const int EUCKR = 51949;

	[Token(Token = "0x4000BC4")]
	internal const int CodePageASCII = 20127;

	[Token(Token = "0x4000BC5")]
	internal const int ISO_8859_1 = 28591;

	[Token(Token = "0x4000BC6")]
	private const int ISCIIAssemese = 57006;

	[Token(Token = "0x4000BC7")]
	private const int ISCIIBengali = 57003;

	[Token(Token = "0x4000BC8")]
	private const int ISCIIDevanagari = 57002;

	[Token(Token = "0x4000BC9")]
	private const int ISCIIGujarathi = 57010;

	[Token(Token = "0x4000BCA")]
	private const int ISCIIKannada = 57008;

	[Token(Token = "0x4000BCB")]
	private const int ISCIIMalayalam = 57009;

	[Token(Token = "0x4000BCC")]
	private const int ISCIIOriya = 57007;

	[Token(Token = "0x4000BCD")]
	private const int ISCIIPanjabi = 57011;

	[Token(Token = "0x4000BCE")]
	private const int ISCIITamil = 57004;

	[Token(Token = "0x4000BCF")]
	private const int ISCIITelugu = 57005;

	[Token(Token = "0x4000BD0")]
	private const int GB18030 = 54936;

	[Token(Token = "0x4000BD1")]
	private const int ISO_8859_8I = 38598;

	[Token(Token = "0x4000BD2")]
	private const int ISO_8859_8_Visual = 28598;

	[Token(Token = "0x4000BD3")]
	private const int ENC50229 = 50229;

	[Token(Token = "0x4000BD4")]
	private const int CodePageUTF7 = 65000;

	[Token(Token = "0x4000BD5")]
	private const int CodePageUTF8 = 65001;

	[Token(Token = "0x4000BD6")]
	private const int CodePageUTF32 = 12000;

	[Token(Token = "0x4000BD7")]
	private const int CodePageUTF32BE = 12001;

	[Token(Token = "0x4000BD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_codePage;

	[Token(Token = "0x4000BD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal System.Globalization.CodePageDataItem dataItem;

	[NonSerialized]
	[Token(Token = "0x4000BDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal bool m_deserializedFromEverett;

	[Token(Token = "0x4000BDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4000BDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 2)]
	internal EncoderFallback encoderFallback;

	[Token(Token = "0x4000BDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 2)]
	internal DecoderFallback decoderFallback;

	[Token(Token = "0x4000BDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000245")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x4E2F830", Offset = "0x4E2F830", VA = "0x4E2F830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	public virtual ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x60016E4")]
		[Address(RVA = "0x4E312B0", Offset = "0x4E312B0", VA = "0x4E312B0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x17000247")]
	public virtual string EncodingName
	{
		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x4E31430", Offset = "0x4E31430", VA = "0x4E31430", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public virtual string WebName
	{
		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x4E31440", Offset = "0x4E31440", VA = "0x4E31440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000249")]
	[ComVisible(false)]
	public EncoderFallback EncoderFallback
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x4E31470", Offset = "0x4E31470", VA = "0x4E31470")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016E9")]
		[Address(RVA = "0x4E31060", Offset = "0x4E31060", VA = "0x4E31060")]
		set
		{
		}
	}

	[Token(Token = "0x1700024A")]
	[ComVisible(false)]
	public DecoderFallback DecoderFallback
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x4E31480", Offset = "0x4E31480", VA = "0x4E31480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x4E31110", Offset = "0x4E31110", VA = "0x4E31110")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x60016ED")]
		[Address(RVA = "0x4E31500", Offset = "0x4E31500", VA = "0x4E31500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024C")]
	public static Encoding ASCII
	{
		[Token(Token = "0x60016EE")]
		[Address(RVA = "0x4E30640", Offset = "0x4E30640", VA = "0x4E30640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	private static Encoding Latin1
	{
		[Token(Token = "0x60016EF")]
		[Address(RVA = "0x4E306F0", Offset = "0x4E306F0", VA = "0x4E306F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024E")]
	public virtual int CodePage
	{
		[Token(Token = "0x6001705")]
		[Address(RVA = "0x4E322C0", Offset = "0x4E322C0", VA = "0x4E322C0", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024F")]
	public static Encoding Default
	{
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x4E30250", Offset = "0x4E30250", VA = "0x4E30250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public static Encoding Unicode
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x4E30340", Offset = "0x4E30340", VA = "0x4E30340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public static Encoding BigEndianUnicode
	{
		[Token(Token = "0x6001710")]
		[Address(RVA = "0x4E30410", Offset = "0x4E30410", VA = "0x4E30410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public static Encoding UTF7
	{
		[Token(Token = "0x6001711")]
		[Address(RVA = "0x4E304E0", Offset = "0x4E304E0", VA = "0x4E304E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	public static Encoding UTF8
	{
		[Token(Token = "0x6001712")]
		[Address(RVA = "0x4E2EE90", Offset = "0x4E2EE90", VA = "0x4E2EE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	public static Encoding UTF32
	{
		[Token(Token = "0x6001713")]
		[Address(RVA = "0x4E30590", Offset = "0x4E30590", VA = "0x4E30590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x4E2F0D0", Offset = "0x4E2F0D0", VA = "0x4E2F0D0")]
	protected Encoding()
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x4E29C50", Offset = "0x4E29C50", VA = "0x4E29C50")]
	protected Encoding(int codePage)
	{
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x4E2F100", Offset = "0x4E2F100", VA = "0x4E2F100", Slot = "5")]
	internal virtual void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x4E2F1A0", Offset = "0x4E2F1A0", VA = "0x4E2F1A0")]
	internal void OnDeserializing()
	{
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x4E2F1D0", Offset = "0x4E2F1D0", VA = "0x4E2F1D0")]
	internal void OnDeserialized()
	{
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x4E2F210", Offset = "0x4E2F210", VA = "0x4E2F210")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x4E2F240", Offset = "0x4E2F240", VA = "0x4E2F240")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x4E2F280", Offset = "0x4E2F280", VA = "0x4E2F280")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x4E2F2A0", Offset = "0x4E2F2A0", VA = "0x4E2F2A0")]
	internal void DeserializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x4E2F6C0", Offset = "0x4E2F6C0", VA = "0x4E2F6C0")]
	internal void SerializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x4E2F8D0", Offset = "0x4E2F8D0", VA = "0x4E2F8D0")]
	public static Encoding GetEncoding(int codepage)
	{
		return null;
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x4E30F70", Offset = "0x4E30F70", VA = "0x4E30F70")]
	public static Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x4E311C0", Offset = "0x4E311C0", VA = "0x4E311C0")]
	public static Encoding GetEncoding(string name)
	{
		return null;
	}

	[Token(Token = "0x60016E3")]
	[Address(RVA = "0x4E31240", Offset = "0x4E31240", VA = "0x4E31240", Slot = "6")]
	public virtual byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x4E31300", Offset = "0x4E31300", VA = "0x4E31300")]
	private void GetDataItem()
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x4E31490", Offset = "0x4E31490", VA = "0x4E31490", Slot = "10")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x4E31510", Offset = "0x4E31510", VA = "0x4E31510", Slot = "11")]
	public virtual int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016F1")]
	public abstract int GetByteCount(char[] chars, int index, int count);

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x4E315A0", Offset = "0x4E315A0", VA = "0x4E315A0", Slot = "13")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x4E31700", Offset = "0x4E31700", VA = "0x4E31700", Slot = "14")]
	internal unsafe virtual int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x4E31720", Offset = "0x4E31720", VA = "0x4E31720", Slot = "15")]
	public virtual byte[] GetBytes(char[] chars)
	{
		return null;
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x4E317B0", Offset = "0x4E317B0", VA = "0x4E317B0", Slot = "16")]
	public virtual byte[] GetBytes(char[] chars, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016F6")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex);

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x4E31850", Offset = "0x4E31850", VA = "0x4E31850", Slot = "18")]
	public virtual byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x4E31940", Offset = "0x4E31940", VA = "0x4E31940", Slot = "19")]
	public virtual int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x4E319F0", Offset = "0x4E319F0", VA = "0x4E319F0", Slot = "20")]
	internal unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x4E31A10", Offset = "0x4E31A10", VA = "0x4E31A10", Slot = "21")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016FB")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x4E31C30", Offset = "0x4E31C30", VA = "0x4E31C30", Slot = "23")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x4E31DA0", Offset = "0x4E31DA0", VA = "0x4E31DA0", Slot = "24")]
	internal unsafe virtual int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x4E31DC0", Offset = "0x4E31DC0", VA = "0x4E31DC0", Slot = "25")]
	public virtual char[] GetChars(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016FF")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x4E31E60", Offset = "0x4E31E60", VA = "0x4E31E60", Slot = "27")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x4E32080", Offset = "0x4E32080", VA = "0x4E32080", Slot = "28")]
	internal unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x4E320A0", Offset = "0x4E320A0", VA = "0x4E320A0")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe string GetString(byte* bytes, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x4E32180", Offset = "0x4E32180", VA = "0x4E32180", Slot = "29")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x4E32250", Offset = "0x4E32250", VA = "0x4E32250")]
	public string GetString(ReadOnlySpan<byte> bytes)
	{
		return null;
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x4E322D0", Offset = "0x4E322D0", VA = "0x4E322D0", Slot = "31")]
	public virtual Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x4E32360", Offset = "0x4E32360", VA = "0x4E32360")]
	private static Encoding CreateDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x4E32580", Offset = "0x4E32580", VA = "0x4E32580")]
	internal void setReadOnly(bool value = true)
	{
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x4E32590", Offset = "0x4E32590", VA = "0x4E32590", Slot = "32")]
	public virtual Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x600170B")]
	public abstract int GetMaxByteCount(int charCount);

	[Token(Token = "0x600170C")]
	public abstract int GetMaxCharCount(int byteCount);

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x4E32620", Offset = "0x4E32620", VA = "0x4E32620", Slot = "35")]
	public virtual string GetString(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x4E326B0", Offset = "0x4E326B0", VA = "0x4E326B0", Slot = "36")]
	public virtual string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x4E326D0", Offset = "0x4E326D0", VA = "0x4E326D0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x4E327A0", Offset = "0x4E327A0", VA = "0x4E327A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x4E327F0", Offset = "0x4E327F0", VA = "0x4E327F0", Slot = "37")]
	internal virtual char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x4E32860", Offset = "0x4E32860", VA = "0x4E32860", Slot = "38")]
	internal virtual char[] GetBestFitBytesToUnicodeData()
	{
		return null;
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x4E328D0", Offset = "0x4E328D0", VA = "0x4E328D0")]
	internal void ThrowBytesOverflow()
	{
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x4E2BDB0", Offset = "0x4E2BDB0", VA = "0x4E2BDB0")]
	internal void ThrowBytesOverflow(System.Text.EncoderNLS encoder, bool nothingEncoded)
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x4E329D0", Offset = "0x4E329D0", VA = "0x4E329D0")]
	internal void ThrowCharsOverflow()
	{
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x4E2D540", Offset = "0x4E2D540", VA = "0x4E2D540")]
	internal void ThrowCharsOverflow(System.Text.DecoderNLS decoder, bool nothingDecoded)
	{
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x4E32AD0", Offset = "0x4E32AD0", VA = "0x4E32AD0", Slot = "39")]
	public virtual int GetBytes(ReadOnlySpan<char> chars, Span<byte> bytes)
	{
		return default(int);
	}
}
