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
		[Address(RVA = "0x3DF5B90", Offset = "0x3DF5B90", VA = "0x3DF5B90", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	public override string Path
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x3DF5BC0", Offset = "0x3DF5BC0", VA = "0x3DF5BC0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000175")]
	public override char QuoteChar
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x3DF5BF0", Offset = "0x3DF5BF0", VA = "0x3DF5BF0", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x3DF5C20", Offset = "0x3DF5C20", VA = "0x3DF5C20", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x3DF5C50", Offset = "0x3DF5C50", VA = "0x3DF5C50", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000177")]
	public override object? Value
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x3DF5C80", Offset = "0x3DF5C80", VA = "0x3DF5C80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public override Type? ValueType
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x3DF5CB0", Offset = "0x3DF5CB0", VA = "0x3DF5CB0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x3DF5DC0", Offset = "0x3DF5DC0", VA = "0x3DF5DC0", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017A")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x3DF5E80", Offset = "0x3DF5E80", VA = "0x3DF5E80", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x3DF5610", Offset = "0x3DF5610", VA = "0x3DF5610")]
	public TraceJsonReader(JsonReader innerReader)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x3DF5770", Offset = "0x3DF5770", VA = "0x3DF5770")]
	public string GetDeserializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x3DF57A0", Offset = "0x3DF57A0", VA = "0x3DF57A0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x3DF5840", Offset = "0x3DF5840", VA = "0x3DF5840", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x3DF58A0", Offset = "0x3DF58A0", VA = "0x3DF58A0", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x3DF5900", Offset = "0x3DF5900", VA = "0x3DF5900", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x3DF5960", Offset = "0x3DF5960", VA = "0x3DF5960", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x3DF59E0", Offset = "0x3DF59E0", VA = "0x3DF59E0", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x3DF5A50", Offset = "0x3DF5A50", VA = "0x3DF5A50", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x3DF5AB0", Offset = "0x3DF5AB0", VA = "0x3DF5AB0", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x3DF5B10", Offset = "0x3DF5B10", VA = "0x3DF5B10", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x3DF5800", Offset = "0x3DF5800", VA = "0x3DF5800")]
	public void WriteCurrentToken()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x3DF5CE0", Offset = "0x3DF5CE0", VA = "0x3DF5CE0", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x3DF5D10", Offset = "0x3DF5D10", VA = "0x3DF5D10", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
