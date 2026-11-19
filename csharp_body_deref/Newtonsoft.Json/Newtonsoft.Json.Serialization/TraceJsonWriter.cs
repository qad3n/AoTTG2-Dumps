// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.TraceJsonWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200013C")]
internal class TraceJsonWriter : JsonWriter
{
	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x60")]
	private readonly JsonWriter _innerWriter;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x68")]
	private readonly JsonTextWriter _textWriter;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x70")]
	private readonly StringWriter _sw;

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x55ECDC0", Offset = "0x55EBDC0", VA = "0x55ECDC0")]
	public TraceJsonWriter(JsonWriter innerWriter)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x55ECFD0", Offset = "0x55EBFD0", VA = "0x55ECFD0")]
	public string GetSerializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x55ED000", Offset = "0x55EC000", VA = "0x55ED000", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x55ED060", Offset = "0x55EC060", VA = "0x55ED060", Slot = "116")]
	public override void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x55ED120", Offset = "0x55EC120", VA = "0x55ED120", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x55ED180", Offset = "0x55EC180", VA = "0x55ED180", Slot = "110")]
	public override void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x55ED220", Offset = "0x55EC220", VA = "0x55ED220", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x55ED280", Offset = "0x55EC280", VA = "0x55ED280", Slot = "114")]
	public override void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x55ED320", Offset = "0x55EC320", VA = "0x55ED320", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x55ED380", Offset = "0x55EC380", VA = "0x55ED380", Slot = "113")]
	public override void WriteValue(char? value)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x55ED420", Offset = "0x55EC420", VA = "0x55ED420", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x55ED490", Offset = "0x55EC490", VA = "0x55ED490", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x55ED4F0", Offset = "0x55EC4F0", VA = "0x55ED4F0", Slot = "117")]
	public override void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x55ED590", Offset = "0x55EC590", VA = "0x55ED590", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x55ED5F0", Offset = "0x55EC5F0", VA = "0x55ED5F0", Slot = "118")]
	public override void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x55ED6B0", Offset = "0x55EC6B0", VA = "0x55ED6B0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x55ED710", Offset = "0x55EC710", VA = "0x55ED710", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x55ED7C0", Offset = "0x55EC7C0", VA = "0x55ED7C0", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x55ED810", Offset = "0x55EC810", VA = "0x55ED810", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x55ED860", Offset = "0x55EC860", VA = "0x55ED860", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x55ED8C0", Offset = "0x55EC8C0", VA = "0x55ED8C0", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x55ED960", Offset = "0x55EC960", VA = "0x55ED960", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x55ED9C0", Offset = "0x55EC9C0", VA = "0x55ED9C0", Slot = "119")]
	public override void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x55EDA80", Offset = "0x55ECA80", VA = "0x55EDA80", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x55EDAE0", Offset = "0x55ECAE0", VA = "0x55EDAE0", Slot = "104")]
	public override void WriteValue(int? value)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x55EDB80", Offset = "0x55ECB80", VA = "0x55EDB80", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x55EDBE0", Offset = "0x55ECBE0", VA = "0x55EDBE0", Slot = "106")]
	public override void WriteValue(long? value)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x55EDC80", Offset = "0x55ECC80", VA = "0x55EDC80", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x55EDD70", Offset = "0x55ECD70", VA = "0x55EDD70", Slot = "98")]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x55EDDD0", Offset = "0x55ECDD0", VA = "0x55EDDD0", Slot = "115")]
	public override void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x55EDE70", Offset = "0x55ECE70", VA = "0x55EDE70", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x55EDED0", Offset = "0x55ECED0", VA = "0x55EDED0", Slot = "111")]
	public override void WriteValue(short? value)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x55EDF70", Offset = "0x55ECF70", VA = "0x55EDF70", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x55EDFD0", Offset = "0x55ECFD0", VA = "0x55EDFD0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x55EE030", Offset = "0x55ED030", VA = "0x55EE030", Slot = "120")]
	public override void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x55EE0D0", Offset = "0x55ED0D0", VA = "0x55EE0D0", Slot = "88")]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x55EE130", Offset = "0x55ED130", VA = "0x55EE130", Slot = "105")]
	public override void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x55EE1D0", Offset = "0x55ED1D0", VA = "0x55EE1D0", Slot = "90")]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x55EE230", Offset = "0x55ED230", VA = "0x55EE230", Slot = "107")]
	public override void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x55EE2D0", Offset = "0x55ED2D0", VA = "0x55EE2D0", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x55EE380", Offset = "0x55ED380", VA = "0x55EE380", Slot = "95")]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x55EE3E0", Offset = "0x55ED3E0", VA = "0x55EE3E0", Slot = "112")]
	public override void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x55EE480", Offset = "0x55ED480", VA = "0x55EE480", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x55EE4E0", Offset = "0x55ED4E0", VA = "0x55EE4E0", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x55EE540", Offset = "0x55ED540", VA = "0x55EE540", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x55EE590", Offset = "0x55ED590", VA = "0x55EE590", Slot = "71")]
	public override void WriteEndArray()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x55EE5E0", Offset = "0x55ED5E0", VA = "0x55EE5E0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x55EE640", Offset = "0x55ED640", VA = "0x55EE640", Slot = "73")]
	public override void WriteEndConstructor()
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x55EE690", Offset = "0x55ED690", VA = "0x55EE690", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x55EE6F0", Offset = "0x55ED6F0", VA = "0x55EE6F0", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x55EE750", Offset = "0x55ED750", VA = "0x55EE750", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x55EE7A0", Offset = "0x55ED7A0", VA = "0x55EE7A0", Slot = "69")]
	public override void WriteEndObject()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x55EE7F0", Offset = "0x55ED7F0", VA = "0x55EE7F0", Slot = "85")]
	public override void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x55EE850", Offset = "0x55ED850", VA = "0x55EE850", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x55EE8B0", Offset = "0x55ED8B0", VA = "0x55EE8B0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x55EE900", Offset = "0x55ED900", VA = "0x55EE900", Slot = "66")]
	public override void Flush()
	{
	}
}
