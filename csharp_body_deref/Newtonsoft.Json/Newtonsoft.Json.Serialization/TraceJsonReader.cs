// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.TraceJsonReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1C04C50", Offset = "0x1C03250", VA = "0x181C04C50", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	public override string Path
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x1C04C80", Offset = "0x1C03280", VA = "0x181C04C80", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000175")]
	public override char QuoteChar
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x1C04CB0", Offset = "0x1C032B0", VA = "0x181C04CB0", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x1C6CF00", Offset = "0x1C6B500", VA = "0x181C6CF00", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x1C04CE0", Offset = "0x1C032E0", VA = "0x181C04CE0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000177")]
	public override object? Value
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x1C04D40", Offset = "0x1C03340", VA = "0x181C04D40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public override Type? ValueType
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x1C04D10", Offset = "0x1C03310", VA = "0x181C04D10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x1C6C830", Offset = "0x1C6AE30", VA = "0x181C6C830", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017A")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x1C6C890", Offset = "0x1C6AE90", VA = "0x181C6C890", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x1C6CD90", Offset = "0x1C6B390", VA = "0x181C6CD90")]
	public TraceJsonReader(JsonReader innerReader)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x1C6C7A0", Offset = "0x1C6ADA0", VA = "0x181C6C7A0")]
	public string GetDeserializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x1C6CCD0", Offset = "0x1C6B2D0", VA = "0x181C6CCD0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x1C6CBF0", Offset = "0x1C6B1F0", VA = "0x181C6CBF0", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x1C6CC60", Offset = "0x1C6B260", VA = "0x181C6CC60", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x1C6C960", Offset = "0x1C6AF60", VA = "0x181C6C960", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x1C6CAE0", Offset = "0x1C6B0E0", VA = "0x181C6CAE0", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x1C6CB70", Offset = "0x1C6B170", VA = "0x181C6CB70", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x1C6C8F0", Offset = "0x1C6AEF0", VA = "0x181C6C8F0", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x1C6CA60", Offset = "0x1C6B060", VA = "0x181C6CA60", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x1C6C9D0", Offset = "0x1C6AFD0", VA = "0x181C6C9D0", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x1C6CD40", Offset = "0x1C6B340", VA = "0x181C6CD40")]
	public void WriteCurrentToken()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x1C6C770", Offset = "0x1C6AD70", VA = "0x181C6C770", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x1C6C7D0", Offset = "0x1C6ADD0", VA = "0x181C6C7D0", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
