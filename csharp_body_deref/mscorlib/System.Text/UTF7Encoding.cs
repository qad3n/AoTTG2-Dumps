// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.UTF7Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000288")]
public class UTF7Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x2000289")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B84")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x4000B85")]
		[FieldOffset(Offset = "0x34")]
		internal int bitCount;

		[Token(Token = "0x4000B86")]
		[FieldOffset(Offset = "0x38")]
		internal bool firstByte;

		[Token(Token = "0x17000239")]
		internal override bool HasState
		{
			[Token(Token = "0x600166C")]
			[Address(RVA = "0x3B0B590", Offset = "0x3B0B590", VA = "0x3B0B590", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600166A")]
		[Address(RVA = "0x3B0B2B0", Offset = "0x3B0B2B0", VA = "0x3B0B2B0")]
		public Decoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x600166B")]
		[Address(RVA = "0x3B0B560", Offset = "0x3B0B560", VA = "0x3B0B560", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200028A")]
	private sealed class Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000B87")]
		[FieldOffset(Offset = "0x38")]
		internal int bits;

		[Token(Token = "0x4000B88")]
		[FieldOffset(Offset = "0x3C")]
		internal int bitCount;

		[Token(Token = "0x1700023A")]
		internal override bool HasState
		{
			[Token(Token = "0x600166F")]
			[Address(RVA = "0x3B0B5D0", Offset = "0x3B0B5D0", VA = "0x3B0B5D0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600166D")]
		[Address(RVA = "0x3B0B350", Offset = "0x3B0B350", VA = "0x3B0B350")]
		public Encoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x600166E")]
		[Address(RVA = "0x3B0B5A0", Offset = "0x3B0B5A0", VA = "0x3B0B5A0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200028B")]
	private sealed class DecoderUTF7Fallback : DecoderFallback
	{
		[Token(Token = "0x1700023B")]
		public override int MaxCharCount
		{
			[Token(Token = "0x6001672")]
			[Address(RVA = "0x3B0B650", Offset = "0x3B0B650", VA = "0x3B0B650", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001670")]
		[Address(RVA = "0x3B099A0", Offset = "0x3B099A0", VA = "0x3B099A0")]
		public DecoderUTF7Fallback()
		{
		}

		[Token(Token = "0x6001671")]
		[Address(RVA = "0x3B0B5F0", Offset = "0x3B0B5F0", VA = "0x3B0B5F0", Slot = "4")]
		public override DecoderFallbackBuffer CreateFallbackBuffer()
		{
			return null;
		}

		[Token(Token = "0x6001673")]
		[Address(RVA = "0x3B0B660", Offset = "0x3B0B660", VA = "0x3B0B660", Slot = "0")]
		public override bool Equals(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001674")]
		[Address(RVA = "0x3B0B6A0", Offset = "0x3B0B6A0", VA = "0x3B0B6A0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x200028C")]
	private sealed class DecoderUTF7FallbackBuffer : DecoderFallbackBuffer
	{
		[Token(Token = "0x4000B89")]
		[FieldOffset(Offset = "0x20")]
		private char cFallback;

		[Token(Token = "0x4000B8A")]
		[FieldOffset(Offset = "0x24")]
		private int iCount;

		[Token(Token = "0x4000B8B")]
		[FieldOffset(Offset = "0x28")]
		private int iSize;

		[Token(Token = "0x1700023C")]
		public override int Remaining
		{
			[Token(Token = "0x6001678")]
			[Address(RVA = "0x3B0B710", Offset = "0x3B0B710", VA = "0x3B0B710", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001675")]
		[Address(RVA = "0x3B0B640", Offset = "0x3B0B640", VA = "0x3B0B640")]
		public DecoderUTF7FallbackBuffer(DecoderUTF7Fallback fallback)
		{
		}

		[Token(Token = "0x6001676")]
		[Address(RVA = "0x3B0B6B0", Offset = "0x3B0B6B0", VA = "0x3B0B6B0", Slot = "4")]
		public override bool Fallback(byte[] bytesUnknown, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6001677")]
		[Address(RVA = "0x3B0B6F0", Offset = "0x3B0B6F0", VA = "0x3B0B6F0", Slot = "5")]
		public override char GetNextChar()
		{
			return default(char);
		}

		[Token(Token = "0x6001679")]
		[Address(RVA = "0x3B0B720", Offset = "0x3B0B720", VA = "0x3B0B720", Slot = "7")]
		public override void Reset()
		{
		}

		[Token(Token = "0x600167A")]
		[Address(RVA = "0x3B0B730", Offset = "0x3B0B730", VA = "0x3B0B730", Slot = "9")]
		internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF7Encoding s_default;

	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _base64Bytes;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x40")]
	private sbyte[] _base64Values;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x48")]
	private bool[] _directEncode;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x50")]
	private bool _allowOptionals;

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x3B09600", Offset = "0x3B09600", VA = "0x3B09600")]
	public UTF7Encoding()
	{
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x3B09620", Offset = "0x3B09620", VA = "0x3B09620")]
	public UTF7Encoding(bool allowOptionals)
	{
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x3B09650", Offset = "0x3B09650", VA = "0x3B09650")]
	private void MakeTables()
	{
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x3B098F0", Offset = "0x3B098F0", VA = "0x3B098F0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x3B099B0", Offset = "0x3B099B0", VA = "0x3B099B0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x3B09A80", Offset = "0x3B09A80", VA = "0x3B09A80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x3B09AE0", Offset = "0x3B09AE0", VA = "0x3B09AE0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x3B09C20", Offset = "0x3B09C20", VA = "0x3B09C20", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x3B09CB0", Offset = "0x3B09CB0", VA = "0x3B09CB0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x3B09D80", Offset = "0x3B09D80", VA = "0x3B09D80", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x3B09FF0", Offset = "0x3B09FF0", VA = "0x3B09FF0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x3B0A270", Offset = "0x3B0A270", VA = "0x3B0A270", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x3B0A360", Offset = "0x3B0A360", VA = "0x3B0A360", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x3B0A4A0", Offset = "0x3B0A4A0", VA = "0x3B0A4A0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x3B0A570", Offset = "0x3B0A570", VA = "0x3B0A570", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x3B0A7E0", Offset = "0x3B0A7E0", VA = "0x3B0A7E0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x3B0A8D0", Offset = "0x3B0A8D0", VA = "0x3B0A8D0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x3B0AA20", Offset = "0x3B0AA20", VA = "0x3B0AA20", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x3B0AA40", Offset = "0x3B0AA40", VA = "0x3B0AA40", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x3B0AE60", Offset = "0x3B0AE60", VA = "0x3B0AE60", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x3B0AE80", Offset = "0x3B0AE80", VA = "0x3B0AE80", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x3B0B260", Offset = "0x3B0B260", VA = "0x3B0B260", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x3B0B2C0", Offset = "0x3B0B2C0", VA = "0x3B0B2C0", Slot = "32")]
	public override System.Text.Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x3B0B3B0", Offset = "0x3B0B3B0", VA = "0x3B0B3B0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x3B0B460", Offset = "0x3B0B460", VA = "0x3B0B460", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}
}
