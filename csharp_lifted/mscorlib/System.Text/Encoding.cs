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
[Token(Token = "0x200029D")]
[ComVisible(true)]
public abstract class Encoding : ICloneable
{
	[Serializable]
	[Token(Token = "0x200029E")]
	internal class DefaultEncoder : Encoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000B4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000B50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[NonSerialized]
		[Token(Token = "0x4000B51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
		internal char charLeftOver;

		[Token(Token = "0x6001762")]
		[Address(RVA = "0x5322240", Offset = "0x5321240", VA = "0x5322240")]
		public DefaultEncoder(Encoding encoding)
		{
		}

		[Token(Token = "0x6001763")]
		[Address(RVA = "0x5322950", Offset = "0x5321950", VA = "0x5322950")]
		internal DefaultEncoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001764")]
		[Address(RVA = "0x5322CA0", Offset = "0x5321CA0", VA = "0x5322CA0", Slot = "12")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x6001765")]
		[Address(RVA = "0x5322D60", Offset = "0x5321D60", VA = "0x5322D60", Slot = "11")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001766")]
		[Address(RVA = "0x5322E00", Offset = "0x5321E00", VA = "0x5322E00", Slot = "5")]
		public override int GetByteCount(char[] chars, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001767")]
		[Address(RVA = "0x5322E30", Offset = "0x5321E30", VA = "0x5322E30", Slot = "6")]
		public unsafe override int GetByteCount(char* chars, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001768")]
		[Address(RVA = "0x5322E60", Offset = "0x5321E60", VA = "0x5322E60", Slot = "7")]
		public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001769")]
		[Address(RVA = "0x5322E90", Offset = "0x5321E90", VA = "0x5322E90", Slot = "8")]
		public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
		{
			return default(int);
		}
	}

	[Serializable]
	[Token(Token = "0x200029F")]
	internal class DefaultDecoder : Decoder, ISerializable, IObjectReference
	{
		[Token(Token = "0x4000B52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private Encoding m_encoding;

		[NonSerialized]
		[Token(Token = "0x4000B53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool m_hasInitializedEncoding;

		[Token(Token = "0x600176A")]
		[Address(RVA = "0x5321F90", Offset = "0x5320F90", VA = "0x5321F90")]
		public DefaultDecoder(Encoding encoding)
		{
		}

		[Token(Token = "0x600176B")]
		[Address(RVA = "0x5322EC0", Offset = "0x5321EC0", VA = "0x5322EC0")]
		internal DefaultDecoder(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600176C")]
		[Address(RVA = "0x53231A0", Offset = "0x53221A0", VA = "0x53231A0", Slot = "15")]
		public object GetRealObject(StreamingContext context)
		{
			return null;
		}

		[Token(Token = "0x600176D")]
		[Address(RVA = "0x5323200", Offset = "0x5322200", VA = "0x5323200", Slot = "14")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600176E")]
		[Address(RVA = "0x53232A0", Offset = "0x53222A0", VA = "0x53232A0", Slot = "5")]
		public override int GetCharCount(byte[] bytes, int index, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600176F")]
		[Address(RVA = "0x53232C0", Offset = "0x53222C0", VA = "0x53232C0", Slot = "6")]
		public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001770")]
		[Address(RVA = "0x53232F0", Offset = "0x53222F0", VA = "0x53232F0", Slot = "7")]
		public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001771")]
		[Address(RVA = "0x5323320", Offset = "0x5322320", VA = "0x5323320", Slot = "8")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
		{
			return default(int);
		}

		[Token(Token = "0x6001772")]
		[Address(RVA = "0x5323340", Offset = "0x5322340", VA = "0x5323340", Slot = "9")]
		public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
		{
			return default(int);
		}

		[Token(Token = "0x6001773")]
		[Address(RVA = "0x5323370", Offset = "0x5322370", VA = "0x5323370", Slot = "10")]
		public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20002A0")]
	internal class EncodingCharBuffer
	{
		[Token(Token = "0x4000B54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe char* chars;

		[Token(Token = "0x4000B55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe char* charStart;

		[Token(Token = "0x4000B56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000B57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int charCountResult;

		[Token(Token = "0x4000B58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Encoding enc;

		[Token(Token = "0x4000B59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Text.DecoderNLS decoder;

		[Token(Token = "0x4000B5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000B5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000B5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000B5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private DecoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x17000256")]
		internal bool MoreData
		{
			[Token(Token = "0x6001778")]
			[Address(RVA = "0x5323560", Offset = "0x5322560", VA = "0x5323560")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000257")]
		internal int BytesUsed
		{
			[Token(Token = "0x600177A")]
			[Address(RVA = "0x5323590", Offset = "0x5322590", VA = "0x5323590")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000258")]
		internal int Count
		{
			[Token(Token = "0x600177D")]
			[Address(RVA = "0x53236F0", Offset = "0x53226F0", VA = "0x53236F0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001774")]
		[Address(RVA = "0x53233A0", Offset = "0x53223A0", VA = "0x53233A0")]
		internal unsafe EncodingCharBuffer(Encoding enc, System.Text.DecoderNLS decoder, char* charStart, int charCount, byte* byteStart, int byteCount)
		{
		}

		[Token(Token = "0x6001775")]
		[Address(RVA = "0x5323490", Offset = "0x5322490", VA = "0x5323490")]
		internal bool AddChar(char ch, int numBytes)
		{
			return default(bool);
		}

		[Token(Token = "0x6001776")]
		[Address(RVA = "0x53234F0", Offset = "0x53224F0", VA = "0x53234F0")]
		internal bool AddChar(char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x6001777")]
		[Address(RVA = "0x5323550", Offset = "0x5322550", VA = "0x5323550")]
		internal void AdjustBytes(int count)
		{
		}

		[Token(Token = "0x6001779")]
		[Address(RVA = "0x5323570", Offset = "0x5322570", VA = "0x5323570")]
		internal byte GetNextByte()
		{
			return default(byte);
		}

		[Token(Token = "0x600177B")]
		[Address(RVA = "0x53235A0", Offset = "0x53225A0", VA = "0x53235A0")]
		internal bool Fallback(byte fallbackByte)
		{
			return default(bool);
		}

		[Token(Token = "0x600177C")]
		[Address(RVA = "0x5323610", Offset = "0x5322610", VA = "0x5323610")]
		internal bool Fallback(byte[] byteBuffer)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002A1")]
	internal class EncodingByteBuffer
	{
		[Token(Token = "0x4000B5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private unsafe byte* bytes;

		[Token(Token = "0x4000B5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private unsafe byte* byteStart;

		[Token(Token = "0x4000B60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private unsafe byte* byteEnd;

		[Token(Token = "0x4000B61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private unsafe char* chars;

		[Token(Token = "0x4000B62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private unsafe char* charStart;

		[Token(Token = "0x4000B63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private unsafe char* charEnd;

		[Token(Token = "0x4000B64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int byteCountResult;

		[Token(Token = "0x4000B65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Encoding enc;

		[Token(Token = "0x4000B66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private System.Text.EncoderNLS encoder;

		[Token(Token = "0x4000B67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal EncoderFallbackBuffer fallbackBuffer;

		[Token(Token = "0x17000259")]
		internal bool MoreData
		{
			[Token(Token = "0x6001784")]
			[Address(RVA = "0x5323BE0", Offset = "0x5322BE0", VA = "0x5323BE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700025A")]
		internal int CharsUsed
		{
			[Token(Token = "0x6001786")]
			[Address(RVA = "0x5323C60", Offset = "0x5322C60", VA = "0x5323C60")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700025B")]
		internal int Count
		{
			[Token(Token = "0x6001787")]
			[Address(RVA = "0x5323C80", Offset = "0x5322C80", VA = "0x5323C80")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600177E")]
		[Address(RVA = "0x5323700", Offset = "0x5322700", VA = "0x5323700")]
		internal unsafe EncodingByteBuffer(Encoding inEncoding, System.Text.EncoderNLS inEncoder, byte* inByteStart, int inByteCount, char* inCharStart, int inCharCount)
		{
		}

		[Token(Token = "0x600177F")]
		[Address(RVA = "0x5323970", Offset = "0x5322970", VA = "0x5323970")]
		internal bool AddByte(byte b, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x6001780")]
		[Address(RVA = "0x5323A80", Offset = "0x5322A80", VA = "0x5323A80")]
		internal bool AddByte(byte b1)
		{
			return default(bool);
		}

		[Token(Token = "0x6001781")]
		[Address(RVA = "0x5323B00", Offset = "0x5322B00", VA = "0x5323B00")]
		internal bool AddByte(byte b1, byte b2)
		{
			return default(bool);
		}

		[Token(Token = "0x6001782")]
		[Address(RVA = "0x5323BA0", Offset = "0x5322BA0", VA = "0x5323BA0")]
		internal bool AddByte(byte b1, byte b2, int moreBytesExpected)
		{
			return default(bool);
		}

		[Token(Token = "0x6001783")]
		[Address(RVA = "0x5323A00", Offset = "0x5322A00", VA = "0x5323A00")]
		internal void MovePrevious(bool bThrow)
		{
		}

		[Token(Token = "0x6001785")]
		[Address(RVA = "0x5323C20", Offset = "0x5322C20", VA = "0x5323C20")]
		internal char GetNextChar()
		{
			return default(char);
		}
	}

	[Token(Token = "0x4000B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Encoding defaultEncoding;

	[Token(Token = "0x4000B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Encoding unicodeEncoding;

	[Token(Token = "0x4000B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Encoding bigEndianUnicode;

	[Token(Token = "0x4000B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Encoding utf7Encoding;

	[Token(Token = "0x4000B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Encoding utf8Encoding;

	[Token(Token = "0x4000B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Encoding utf32Encoding;

	[Token(Token = "0x4000B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Encoding asciiEncoding;

	[Token(Token = "0x4000B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Encoding latin1Encoding;

	[Token(Token = "0x4000B47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Dictionary<int, Encoding> encodings;

	[Token(Token = "0x4000B48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_codePage;

	[Token(Token = "0x4000B49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal System.Globalization.CodePageDataItem dataItem;

	[NonSerialized]
	[Token(Token = "0x4000B4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal bool m_deserializedFromEverett;

	[Token(Token = "0x4000B4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4000B4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 2)]
	internal EncoderFallback encoderFallback;

	[Token(Token = "0x4000B4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 2)]
	internal DecoderFallback decoderFallback;

	[Token(Token = "0x4000B4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x17000246")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x531F670", Offset = "0x531E670", VA = "0x531F670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000247")]
	public virtual ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x6001728")]
		[Address(RVA = "0x5320ED0", Offset = "0x531FED0", VA = "0x5320ED0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x17000248")]
	public virtual string EncodingName
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x5321050", Offset = "0x5320050", VA = "0x5321050", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000249")]
	public virtual string WebName
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x5321060", Offset = "0x5320060", VA = "0x5321060", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024A")]
	[ComVisible(false)]
	public EncoderFallback EncoderFallback
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x5321090", Offset = "0x5320090", VA = "0x5321090")]
		get
		{
			return null;
		}
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x5320C80", Offset = "0x531FC80", VA = "0x5320C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	[ComVisible(false)]
	public DecoderFallback DecoderFallback
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x53210A0", Offset = "0x53200A0", VA = "0x53210A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600172F")]
		[Address(RVA = "0x5320D30", Offset = "0x531FD30", VA = "0x5320D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6001731")]
		[Address(RVA = "0x5321120", Offset = "0x5320120", VA = "0x5321120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024D")]
	public static Encoding ASCII
	{
		[Token(Token = "0x6001732")]
		[Address(RVA = "0x5320380", Offset = "0x531F380", VA = "0x5320380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024E")]
	private static Encoding Latin1
	{
		[Token(Token = "0x6001733")]
		[Address(RVA = "0x5320430", Offset = "0x531F430", VA = "0x5320430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024F")]
	public virtual int CodePage
	{
		[Token(Token = "0x6001749")]
		[Address(RVA = "0x5321F20", Offset = "0x5320F20", VA = "0x5321F20", Slot = "30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000250")]
	public static Encoding Default
	{
		[Token(Token = "0x600174D")]
		[Address(RVA = "0x531FFD0", Offset = "0x531EFD0", VA = "0x531FFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public static Encoding Unicode
	{
		[Token(Token = "0x6001753")]
		[Address(RVA = "0x53200C0", Offset = "0x531F0C0", VA = "0x53200C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public static Encoding BigEndianUnicode
	{
		[Token(Token = "0x6001754")]
		[Address(RVA = "0x5320170", Offset = "0x531F170", VA = "0x5320170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	public static Encoding UTF7
	{
		[Token(Token = "0x6001755")]
		[Address(RVA = "0x5320220", Offset = "0x531F220", VA = "0x5320220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	public static Encoding UTF8
	{
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x531ECA0", Offset = "0x531DCA0", VA = "0x531ECA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000255")]
	public static Encoding UTF32
	{
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x53202D0", Offset = "0x531F2D0", VA = "0x53202D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x531EEE0", Offset = "0x531DEE0", VA = "0x531EEE0")]
	protected Encoding()
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x531EF10", Offset = "0x531DF10", VA = "0x531EF10")]
	protected Encoding(int codePage)
	{
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x531EF90", Offset = "0x531DF90", VA = "0x531EF90", Slot = "5")]
	internal virtual void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x531F030", Offset = "0x531E030", VA = "0x531F030")]
	internal void OnDeserializing()
	{
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x531F060", Offset = "0x531E060", VA = "0x531F060")]
	internal void OnDeserialized()
	{
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x531F0A0", Offset = "0x531E0A0", VA = "0x531F0A0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x600171F")]
	[Address(RVA = "0x531F0D0", Offset = "0x531E0D0", VA = "0x531F0D0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x531F110", Offset = "0x531E110", VA = "0x531F110")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x531F130", Offset = "0x531E130", VA = "0x531F130")]
	internal void DeserializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x531F500", Offset = "0x531E500", VA = "0x531F500")]
	internal void SerializeEncoding(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001724")]
	[Address(RVA = "0x531F710", Offset = "0x531E710", VA = "0x531F710")]
	public static Encoding GetEncoding(int codepage)
	{
		return null;
	}

	[Token(Token = "0x6001725")]
	[Address(RVA = "0x5320B90", Offset = "0x531FB90", VA = "0x5320B90")]
	public static Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback)
	{
		return null;
	}

	[Token(Token = "0x6001726")]
	[Address(RVA = "0x5320DE0", Offset = "0x531FDE0", VA = "0x5320DE0")]
	public static Encoding GetEncoding(string name)
	{
		return null;
	}

	[Token(Token = "0x6001727")]
	[Address(RVA = "0x5320E60", Offset = "0x531FE60", VA = "0x5320E60", Slot = "6")]
	public virtual byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x5320F20", Offset = "0x531FF20", VA = "0x5320F20")]
	private void GetDataItem()
	{
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x53210B0", Offset = "0x53200B0", VA = "0x53210B0", Slot = "10")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001734")]
	[Address(RVA = "0x5321130", Offset = "0x5320130", VA = "0x5321130", Slot = "11")]
	public virtual int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001735")]
	public abstract int GetByteCount(char[] chars, int index, int count);

	[Token(Token = "0x6001736")]
	[Address(RVA = "0x53211C0", Offset = "0x53201C0", VA = "0x53211C0", Slot = "13")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe virtual int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001737")]
	[Address(RVA = "0x5321320", Offset = "0x5320320", VA = "0x5321320", Slot = "14")]
	internal unsafe virtual int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001738")]
	[Address(RVA = "0x5321340", Offset = "0x5320340", VA = "0x5321340", Slot = "15")]
	public virtual byte[] GetBytes(char[] chars)
	{
		return null;
	}

	[Token(Token = "0x6001739")]
	[Address(RVA = "0x53213D0", Offset = "0x53203D0", VA = "0x53213D0", Slot = "16")]
	public virtual byte[] GetBytes(char[] chars, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600173A")]
	public abstract int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex);

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x5321470", Offset = "0x5320470", VA = "0x5321470", Slot = "18")]
	public virtual byte[] GetBytes(string s)
	{
		return null;
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x5321560", Offset = "0x5320560", VA = "0x5321560", Slot = "19")]
	public virtual int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x5321610", Offset = "0x5320610", VA = "0x5321610", Slot = "20")]
	internal unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x5321630", Offset = "0x5320630", VA = "0x5321630", Slot = "21")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe virtual int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600173F")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x6001740")]
	[Address(RVA = "0x5321850", Offset = "0x5320850", VA = "0x5321850", Slot = "23")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x53219C0", Offset = "0x53209C0", VA = "0x53219C0", Slot = "24")]
	internal unsafe virtual int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x53219E0", Offset = "0x53209E0", VA = "0x53219E0", Slot = "25")]
	public virtual char[] GetChars(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001743")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x5321A80", Offset = "0x5320A80", VA = "0x5321A80", Slot = "27")]
	[ComVisible(false)]
	[CLSCompliant(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x5321CB0", Offset = "0x5320CB0", VA = "0x5321CB0", Slot = "28")]
	internal unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x5321CD0", Offset = "0x5320CD0", VA = "0x5321CD0")]
	[CLSCompliant(false)]
	[ComVisible(false)]
	public unsafe string GetString(byte* bytes, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x5321DB0", Offset = "0x5320DB0", VA = "0x5321DB0", Slot = "29")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x5321EB0", Offset = "0x5320EB0", VA = "0x5321EB0")]
	public string GetString(ReadOnlySpan<byte> bytes)
	{
		return null;
	}

	[Token(Token = "0x600174A")]
	[Address(RVA = "0x5321F30", Offset = "0x5320F30", VA = "0x5321F30", Slot = "31")]
	public virtual Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x5321FC0", Offset = "0x5320FC0", VA = "0x5321FC0")]
	private static Encoding CreateDefaultEncoding()
	{
		return null;
	}

	[Token(Token = "0x600174C")]
	[Address(RVA = "0x53221D0", Offset = "0x53211D0", VA = "0x53221D0")]
	internal void setReadOnly(bool value = true)
	{
	}

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x53221E0", Offset = "0x53211E0", VA = "0x53221E0", Slot = "32")]
	public virtual Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x600174F")]
	public abstract int GetMaxByteCount(int charCount);

	[Token(Token = "0x6001750")]
	public abstract int GetMaxCharCount(int byteCount);

	[Token(Token = "0x6001751")]
	[Address(RVA = "0x5322270", Offset = "0x5321270", VA = "0x5322270", Slot = "35")]
	public virtual string GetString(byte[] bytes)
	{
		return null;
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x5322300", Offset = "0x5321300", VA = "0x5322300", Slot = "36")]
	public virtual string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001758")]
	[Address(RVA = "0x5322320", Offset = "0x5321320", VA = "0x5322320", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001759")]
	[Address(RVA = "0x53223E0", Offset = "0x53213E0", VA = "0x53223E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0x5322430", Offset = "0x5321430", VA = "0x5322430", Slot = "37")]
	internal virtual char[] GetBestFitUnicodeToBytesData()
	{
		return null;
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x53224A0", Offset = "0x53214A0", VA = "0x53224A0", Slot = "38")]
	internal virtual char[] GetBestFitBytesToUnicodeData()
	{
		return null;
	}

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x5322510", Offset = "0x5321510", VA = "0x5322510")]
	internal void ThrowBytesOverflow()
	{
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x5322610", Offset = "0x5321610", VA = "0x5322610")]
	internal void ThrowBytesOverflow(System.Text.EncoderNLS encoder, bool nothingEncoded)
	{
	}

	[Token(Token = "0x600175E")]
	[Address(RVA = "0x5322670", Offset = "0x5321670", VA = "0x5322670")]
	internal void ThrowCharsOverflow()
	{
	}

	[Token(Token = "0x600175F")]
	[Address(RVA = "0x5322770", Offset = "0x5321770", VA = "0x5322770")]
	internal void ThrowCharsOverflow(System.Text.DecoderNLS decoder, bool nothingDecoded)
	{
	}

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x53227D0", Offset = "0x53217D0", VA = "0x53227D0", Slot = "39")]
	public virtual int GetByteCount(ReadOnlySpan<char> chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x5322850", Offset = "0x5321850", VA = "0x5322850", Slot = "40")]
	public virtual int GetBytes(ReadOnlySpan<char> chars, Span<byte> bytes)
	{
		return default(int);
	}
}
