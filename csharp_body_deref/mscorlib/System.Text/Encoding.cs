// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.Encoding
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002C4")]
[ComVisible(true)]
public abstract class Encoding : ICloneable
{
	[Serializable]
	[Token(Token = "0x20002C5")]
	internal class DefaultEncoder : Encoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000BEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000BF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[NonSerialized]
		[Token(Token = "0x4000BF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
		internal char charLeftOver;

		[Token(Token = "0x6001785")]
		[Address(RVA = "0x198CD20", Offset = "0x198B320", VA = "0x18198CD20")]
		public DefaultEncoder(Encoding encoding)
		{
		}

		[Token(Token = "0x6001786")]
		[Address(RVA = "0x198CF90", Offset = "0x198B590", VA = "0x18198CF90")]
		internal DefaultEncoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001787")]
		[Address(RVA = "0x198CE20", Offset = "0x198B420", VA = "0x18198CE20", Slot = "12")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x6001788")]
		[Address(RVA = "0x198CEF0", Offset = "0x198B4F0", VA = "0x18198CEF0", Slot = "11")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001789")]
		[Address(RVA = "0x198CD90", Offset = "0x198B390", VA = "0x18198CD90", Slot = "5")]
		public override int GetByteCount(char[] chars, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600178A")]
		[Address(RVA = "0x198CD60", Offset = "0x198B360", VA = "0x18198CD60", Slot = "6")]
		public unsafe override int GetByteCount(char* chars, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600178B")]
		[Address(RVA = "0x198CDC0", Offset = "0x198B3C0", VA = "0x18198CDC0", Slot = "7")]
		public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x600178C")]
		[Address(RVA = "0x198CDF0", Offset = "0x198B3F0", VA = "0x18198CDF0", Slot = "8")]
		public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
		{
			return default(int);
		}
	}

	[Serializable]
	[Token(Token = "0x20002C6")]
	internal class DefaultDecoder : Decoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000BF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000BF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[Token(Token = "0x600178D")]
		[Address(RVA = "0x198CD20", Offset = "0x198B320", VA = "0x18198CD20")]
		public DefaultDecoder(Encoding encoding)
		{
		}

		[Token(Token = "0x600178E")]
		[Address(RVA = "0x198CA80", Offset = "0x198B080", VA = "0x18198CA80")]
		internal DefaultDecoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600178F")]
		[Address(RVA = "0x198C970", Offset = "0x198AF70", VA = "0x18198C970", Slot = "15")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x6001790")]
		[Address(RVA = "0x198C9E0", Offset = "0x198AFE0", VA = "0x18198C9E0", Slot = "14")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001791")]
		[Address(RVA = "0x19761B0", Offset = "0x19747B0", VA = "0x1819761B0", Slot = "5")]
		public override int GetCharCount(byte[] bytes, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x6001792")]
		[Address(RVA = "0x198C8B0", Offset = "0x198AEB0", VA = "0x18198C8B0", Slot = "6")]
		public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001793")]
		[Address(RVA = "0x198C8E0", Offset = "0x198AEE0", VA = "0x18198C8E0", Slot = "7")]
		public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001794")]
		[Address(RVA = "0x19764E0", Offset = "0x1974AE0", VA = "0x1819764E0", Slot = "8")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
		{
			return default(int);
		}

		[Token(Token = "0x6001795")]
		[Address(RVA = "0x198C940", Offset = "0x198AF40", VA = "0x18198C940", Slot = "9")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001796")]
		[Address(RVA = "0x198C910", Offset = "0x198AF10", VA = "0x18198C910", Slot = "10")]
		public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20002C7")]
	internal class EncodingCharBuffer
	{
		[Token(Token = "0x4000BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe char* chars;

		[Token(Token = "0x4000BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe char* charStart;

		[Token(Token = "0x4000BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int charCountResult;

		[Token(Token = "0x4000BF8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Encoding enc;

		[Token(Token = "0x4000BF9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Text.DecoderNLS decoder;

		[Token(Token = "0x4000BFA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000BFB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000BFC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000BFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private DecoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x17000257")]
		internal bool MoreData
		{
			[Token(Token = "0x600179B")]
			[Address(RVA = "0x198DE60", Offset = "0x198C460", VA = "0x18198DE60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000258")]
		internal int BytesUsed
		{
			[Token(Token = "0x600179D")]
			[Address(RVA = "0x198DE50", Offset = "0x198C450", VA = "0x18198DE50")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000259")]
		internal int Count
		{
			[Token(Token = "0x60017A0")]
			[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001797")]
		[Address(RVA = "0x198DD70", Offset = "0x198C370", VA = "0x18198DD70")]
		internal unsafe EncodingCharBuffer(Encoding enc, System.Text.DecoderNLS decoder, char* charStart, int charCount, byte* byteStart, int byteCount)
		{
		}

		[Token(Token = "0x6001798")]
		[Address(RVA = "0x198D880", Offset = "0x198BE80", VA = "0x18198D880")]
		internal bool AddChar(char ch, int numBytes)
		{
			return default(bool);
		}

		[Token(Token = "0x6001799")]
		[Address(RVA = "0x198D970", Offset = "0x198BF70", VA = "0x18198D970")]
		internal bool AddChar(char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x600179A")]
		[Address(RVA = "0x198DA50", Offset = "0x198C050", VA = "0x18198DA50")]
		internal void AdjustBytes(int count)
		{
		}

		[Token(Token = "0x600179C")]
		[Address(RVA = "0x198DD50", Offset = "0x198C350", VA = "0x18198DD50")]
		internal byte GetNextByte()
		{
			return default(byte);
		}

		[Token(Token = "0x600179E")]
		[Address(RVA = "0x198DA60", Offset = "0x198C060", VA = "0x18198DA60")]
		internal bool Fallback(byte fallbackByte)
		{
			return default(bool);
		}

		[Token(Token = "0x600179F")]
		[Address(RVA = "0x198DBF0", Offset = "0x198C1F0", VA = "0x18198DBF0")]
		internal bool Fallback(byte[] byteBuffer)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002C8")]
	internal class EncodingByteBuffer
	{
		[Token(Token = "0x4000BFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000BFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private unsafe char* chars;

		[Token(Token = "0x4000C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private unsafe char* charStart;

		[Token(Token = "0x4000C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000C04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int byteCountResult;

		[Token(Token = "0x4000C05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Encoding enc;

		[Token(Token = "0x4000C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private System.Text.EncoderNLS encoder;

		[Token(Token = "0x4000C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal EncoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x1700025A")]
		internal bool MoreData
		{
			[Token(Token = "0x60017A7")]
			[Address(RVA = "0x198D830", Offset = "0x198BE30", VA = "0x18198D830")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700025B")]
		internal int CharsUsed
		{
			[Token(Token = "0x60017A9")]
			[Address(RVA = "0x198D810", Offset = "0x198BE10", VA = "0x18198D810")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700025C")]
		internal int Count
		{
			[Token(Token = "0x60017AA")]
			[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60017A1")]
		[Address(RVA = "0x198D5A0", Offset = "0x198BBA0", VA = "0x18198D5A0")]
		internal unsafe EncodingByteBuffer(Encoding inEncoding, System.Text.EncoderNLS inEncoder, byte* inByteStart, int inByteCount, char* inCharStart, int inCharCount)
		{
		}

		[Token(Token = "0x60017A2")]
		[Address(RVA = "0x198D340", Offset = "0x198B940", VA = "0x18198D340")]
		internal bool AddByte(byte b, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x60017A3")]
		[Address(RVA = "0x198D330", Offset = "0x198B930", VA = "0x18198D330")]
		internal bool AddByte(byte b1)
		{
			return default(bool);
		}

		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x198D2E0", Offset = "0x198B8E0", VA = "0x18198D2E0")]
		internal bool AddByte(byte b1, byte b2)
		{
			return default(bool);
		}

		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x198D280", Offset = "0x198B880", VA = "0x18198D280")]
		internal bool AddByte(byte b1, byte b2, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x198D4B0", Offset = "0x198BAB0", VA = "0x18198D4B0")]
		internal void MovePrevious(bool bThrow)
		{
		}

		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x198D460", Offset = "0x198BA60", VA = "0x18198D460")]
		internal char GetNextChar()
		{
			return default(char);
		}
	}

	[Token(Token = "0x4000BDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Encoding defaultEncoding;

	[Token(Token = "0x4000BE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Encoding unicodeEncoding;

	[Token(Token = "0x4000BE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Encoding bigEndianUnicode;

	[Token(Token = "0x4000BE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Encoding utf7Encoding;

	[Token(Token = "0x4000BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding utf8Encoding;

	[Token(Token = "0x4000BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding utf32Encoding;

	[Token(Token = "0x4000BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Encoding asciiEncoding;

	[Token(Token = "0x4000BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Encoding latin1Encoding;

	[Token(Token = "0x4000BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Dictionary<int, Encoding> encodings;

	[Token(Token = "0x4000BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_codePage;

	[Token(Token = "0x4000BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal System.Globalization.CodePageDataItem dataItem;

	[NonSerialized]
	[Token(Token = "0x4000BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal bool m_deserializedFromEverett;

	[Token(Token = "0x4000BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4000BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 2)]
	internal EncoderFallback encoderFallback;

	[Token(Token = "0x4000BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 2)]
	internal DecoderFallback decoderFallback;

	[Token(Token = "0x4000BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000247")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001748")]
		[Address(RVA = "0x1991880", Offset = "0x198FE80", VA = "0x181991880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public virtual ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x600174D")]
		[Address(RVA = "0x19919F0", Offset = "0x198FFF0", VA = "0x1819919F0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x17000249")]
	public virtual string EncodingName
	{
		[Token(Token = "0x600174F")]
		[Address(RVA = "0x1991870", Offset = "0x198FE70", VA = "0x181991870", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024A")]
	public virtual string WebName
	{
		[Token(Token = "0x6001750")]
		[Address(RVA = "0x1991D70", Offset = "0x1990370", VA = "0x181991D70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	[ComVisible(false)]
	public EncoderFallback EncoderFallback
	{
		[Token(Token = "0x6001751")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001752")]
		[Address(RVA = "0x1991F90", Offset = "0x1990590", VA = "0x181991F90")]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	[ComVisible(false)]
	public DecoderFallback DecoderFallback
	{
		[Token(Token = "0x6001753")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001754")]
		[Address(RVA = "0x1991EC0", Offset = "0x19904C0", VA = "0x181991EC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x1991920", Offset = "0x198FF20", VA = "0x181991920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024E")]
	public static Encoding ASCII
	{
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x1991600", Offset = "0x198FC00", VA = "0x181991600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024F")]
	private static Encoding Latin1
	{
		[Token(Token = "0x6001758")]
		[Address(RVA = "0x1991930", Offset = "0x198FF30", VA = "0x181991930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public virtual int CodePage
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "29")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000251")]
	public static Encoding Default
	{
		[Token(Token = "0x6001771")]
		[Address(RVA = "0x1991790", Offset = "0x198FD90", VA = "0x181991790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public static Encoding Unicode
	{
		[Token(Token = "0x6001777")]
		[Address(RVA = "0x1991CA0", Offset = "0x19902A0", VA = "0x181991CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	public static Encoding BigEndianUnicode
	{
		[Token(Token = "0x6001778")]
		[Address(RVA = "0x19916C0", Offset = "0x198FCC0", VA = "0x1819916C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	public static Encoding UTF7
	{
		[Token(Token = "0x6001779")]
		[Address(RVA = "0x1991B20", Offset = "0x1990120", VA = "0x181991B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000255")]
	public static Encoding UTF8
	{
		[Token(Token = "0x600177A")]
		[Address(RVA = "0x1991BE0", Offset = "0x19901E0", VA = "0x181991BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	public static Encoding UTF32
	{
		[Token(Token = "0x600177B")]
		[Address(RVA = "0x1991A60", Offset = "0x1990060", VA = "0x181991A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x1991530", Offset = "0x198FB30", VA = "0x181991530")]
	protected Encoding()
	{
	}

	[Token(Token = "0x600173F")]
	[Address(RVA = "0x1991570", Offset = "0x198FB70", VA = "0x181991570")]
	protected Encoding(int codePage)
	{
	}

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x1991130", Offset = "0x198F730", VA = "0x181991130", Slot = "5")]
	internal virtual void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x1990F80", Offset = "0x198F580", VA = "0x181990F80")]
	internal void OnDeserializing()
	{
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x1990F30", Offset = "0x198F530", VA = "0x181990F30")]
	internal void OnDeserialized()
	{
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x1990F80", Offset = "0x198F580", VA = "0x181990F80")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x1990F30", Offset = "0x198F530", VA = "0x181990F30")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x182A720", Offset = "0x1828D20", VA = "0x18182A720")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x198E850", Offset = "0x198CE50", VA = "0x18198E850")]
	internal void DeserializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x1990FC0", Offset = "0x198F5C0", VA = "0x181990FC0")]
	internal void SerializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x198FFB0", Offset = "0x198E5B0", VA = "0x18198FFB0")]
	public static Encoding GetEncoding(int codepage)
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x198FCA0", Offset = "0x198E2A0", VA = "0x18198FCA0")]
	public static Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x198FF20", Offset = "0x198E520", VA = "0x18198FF20")]
	public static Encoding GetEncoding(string name)
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x1990BB0", Offset = "0x198F1B0", VA = "0x181990BB0", Slot = "6")]
	public virtual byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x198FA90", Offset = "0x198E090", VA = "0x18198FA90")]
	private void GetDataItem()
	{
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x198E780", Offset = "0x198CD80", VA = "0x18198E780", Slot = "10")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x198ED30", Offset = "0x198D330", VA = "0x18198ED30", Slot = "11")]
	public virtual int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600175A")]
	public abstract int GetByteCount(char[] chars, int index, int count);

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x198EDD0", Offset = "0x198D3D0", VA = "0x18198EDD0", Slot = "13")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x198EF70", Offset = "0x198D570", VA = "0x18198EF70", Slot = "14")]
	internal unsafe virtual int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x198F330", Offset = "0x198D930", VA = "0x18198F330", Slot = "15")]
	public virtual byte[] GetBytes(char[] chars)
	{
		return null;
	}

	[Token(Token = "0x600175E")]
	[Address(RVA = "0x198F260", Offset = "0x198D860", VA = "0x18198F260", Slot = "16")]
	public virtual byte[] GetBytes(char[] chars, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600175F")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex);

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x198F3E0", Offset = "0x198D9E0", VA = "0x18198F3E0", Slot = "18")]
	public virtual byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x198F4F0", Offset = "0x198DAF0", VA = "0x18198F4F0", Slot = "19")]
	public virtual int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x198F310", Offset = "0x198D910", VA = "0x18198F310", Slot = "20")]
	internal unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x198F010", Offset = "0x198D610", VA = "0x18198F010", Slot = "21")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001764")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x198F5A0", Offset = "0x198DBA0", VA = "0x18198F5A0", Slot = "23")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x198F740", Offset = "0x198DD40", VA = "0x18198F740", Slot = "24")]
	internal unsafe virtual int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x198F760", Offset = "0x198DD60", VA = "0x18198F760", Slot = "25")]
	public virtual char[] GetChars(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001768")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x198F830", Offset = "0x198DE30", VA = "0x18198F830", Slot = "27")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x198F810", Offset = "0x198DE10", VA = "0x18198F810", Slot = "28")]
	internal unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x1990CB0", Offset = "0x198F2B0", VA = "0x181990CB0")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe string GetString(byte* bytes, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x1990DB0", Offset = "0x198F3B0", VA = "0x181990DB0")]
	public string GetString(ReadOnlySpan<byte> bytes)
	{
		return null;
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x198FBC0", Offset = "0x198E1C0", VA = "0x18198FBC0", Slot = "30")]
	public virtual Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x198E800", Offset = "0x198CE00", VA = "0x18198E800")]
	private static Encoding CreateDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
	internal void setReadOnly(bool value = true)
	{
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x198FC30", Offset = "0x198E230", VA = "0x18198FC30", Slot = "31")]
	public virtual Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001773")]
	public abstract int GetMaxByteCount(int charCount);

	[Token(Token = "0x6001774")]
	public abstract int GetMaxCharCount(int byteCount);

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x1990C00", Offset = "0x198F200", VA = "0x181990C00", Slot = "34")]
	public virtual string GetString(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x1990F00", Offset = "0x198F500", VA = "0x181990F00", Slot = "35")]
	public virtual string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600177C")]
	[Address(RVA = "0x198EBD0", Offset = "0x198D1D0", VA = "0x18198EBD0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600177D")]
	[Address(RVA = "0x1990B40", Offset = "0x198F140", VA = "0x181990B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x198ECE0", Offset = "0x198D2E0", VA = "0x18198ECE0", Slot = "36")]
	internal virtual char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x198EC90", Offset = "0x198D290", VA = "0x18198EC90", Slot = "37")]
	internal virtual char[] GetBestFitBytesToUnicodeData()
	{
		return null;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x19911D0", Offset = "0x198F7D0", VA = "0x1819911D0")]
	internal void ThrowBytesOverflow()
	{
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x19912E0", Offset = "0x198F8E0", VA = "0x1819912E0")]
	internal void ThrowBytesOverflow(System.Text.EncoderNLS encoder, bool nothingEncoded)
	{
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x1991380", Offset = "0x198F980", VA = "0x181991380")]
	internal void ThrowCharsOverflow()
	{
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x1991490", Offset = "0x198FA90", VA = "0x181991490")]
	internal void ThrowCharsOverflow(System.Text.DecoderNLS decoder, bool nothingDecoded)
	{
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x198EF90", Offset = "0x198D590", VA = "0x18198EF90", Slot = "38")]
	public virtual int GetByteCount(ReadOnlySpan<char> chars)
	{
		return default(int);
	}
}
