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
		[Address(RVA = "0x55ECA10", Offset = "0x55EBA10", VA = "0x55ECA10", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	public override string Path
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x55ECA40", Offset = "0x55EBA40", VA = "0x55ECA40", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000175")]
	public override char QuoteChar
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x55ECA70", Offset = "0x55EBA70", VA = "0x55ECA70", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x55ECAA0", Offset = "0x55EBAA0", VA = "0x55ECAA0", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000176")]
	public override JsonToken TokenType
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x55ECAD0", Offset = "0x55EBAD0", VA = "0x55ECAD0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000177")]
	public override object? Value
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x55ECB00", Offset = "0x55EBB00", VA = "0x55ECB00", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public override Type? ValueType
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x55ECB30", Offset = "0x55EBB30", VA = "0x55ECB30", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x55ECC40", Offset = "0x55EBC40", VA = "0x55ECC40", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700017A")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x55ECD00", Offset = "0x55EBD00", VA = "0x55ECD00", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x55EC490", Offset = "0x55EB490", VA = "0x55EC490")]
	public TraceJsonReader(JsonReader innerReader)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x55EC5F0", Offset = "0x55EB5F0", VA = "0x55EC5F0")]
	public string GetDeserializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x55EC620", Offset = "0x55EB620", VA = "0x55EC620", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x55EC6C0", Offset = "0x55EB6C0", VA = "0x55EC6C0", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x55EC720", Offset = "0x55EB720", VA = "0x55EC720", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x55EC780", Offset = "0x55EB780", VA = "0x55EC780", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x55EC7E0", Offset = "0x55EB7E0", VA = "0x55EC7E0", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x55EC860", Offset = "0x55EB860", VA = "0x55EC860", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x55EC8D0", Offset = "0x55EB8D0", VA = "0x55EC8D0", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x55EC930", Offset = "0x55EB930", VA = "0x55EC930", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x55EC990", Offset = "0x55EB990", VA = "0x55EC990", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x55EC680", Offset = "0x55EB680", VA = "0x55EC680")]
	public void WriteCurrentToken()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x55ECB60", Offset = "0x55EBB60", VA = "0x55ECB60", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x55ECB90", Offset = "0x55EBB90", VA = "0x55ECB90", Slot = "32")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}
}
