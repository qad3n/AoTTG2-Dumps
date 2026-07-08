using System;
using System.IO;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200013B")]
internal class TraceJsonReader : JsonReader, IJsonLineInfo
{
	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x78")]
	private readonly JsonReader _innerReader;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x80")]
	private readonly JsonTextWriter _textWriter;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x88")]
	private readonly StringWriter _sw;

	[Token(Token = "0x17000173")]
	public override int Depth
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x3B00240", Offset = "0x3B00240", VA = "0x3B00240", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	public override string Path
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x3B00270", Offset = "0x3B00270", VA = "0x3B00270", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000175")]
	public override char QuoteChar
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x3B002A0", Offset = "0x3B002A0", VA = "0x3B002A0", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x3B002D0", Offset = "0x3B002D0", VA = "0x3B002D0", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x3B00300", Offset = "0x3B00300", VA = "0x3B00300", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000177")]
	public override object? Value
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x3B00330", Offset = "0x3B00330", VA = "0x3B00330", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public override Type? ValueType
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x3B00360", Offset = "0x3B00360", VA = "0x3B00360", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x3B00470", Offset = "0x3B00470", VA = "0x3B00470", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017A")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x3B00530", Offset = "0x3B00530", VA = "0x3B00530", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x3AFFCC0", Offset = "0x3AFFCC0", VA = "0x3AFFCC0")]
	public TraceJsonReader(JsonReader innerReader)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x3AFFE20", Offset = "0x3AFFE20", VA = "0x3AFFE20")]
	public string GetDeserializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x3AFFE50", Offset = "0x3AFFE50", VA = "0x3AFFE50", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x3AFFEF0", Offset = "0x3AFFEF0", VA = "0x3AFFEF0", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x3AFFF50", Offset = "0x3AFFF50", VA = "0x3AFFF50", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x3AFFFB0", Offset = "0x3AFFFB0", VA = "0x3AFFFB0", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x3B00010", Offset = "0x3B00010", VA = "0x3B00010", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x3B00090", Offset = "0x3B00090", VA = "0x3B00090", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x3B00100", Offset = "0x3B00100", VA = "0x3B00100", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x3B00160", Offset = "0x3B00160", VA = "0x3B00160", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x3B001C0", Offset = "0x3B001C0", VA = "0x3B001C0", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x3AFFEB0", Offset = "0x3AFFEB0", VA = "0x3AFFEB0")]
	public void WriteCurrentToken()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x3B00390", Offset = "0x3B00390", VA = "0x3B00390", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x3B003C0", Offset = "0x3B003C0", VA = "0x3B003C0", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
