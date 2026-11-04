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
	[Address(RVA = "0x1C6EC50", Offset = "0x1C6D250", VA = "0x181C6EC50")]
	public TraceJsonWriter(JsonWriter innerWriter)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x1C6CFD0", Offset = "0x1C6B5D0", VA = "0x181C6CFD0")]
	public string GetSerializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x1C6D8F0", Offset = "0x1C6BEF0", VA = "0x181C6D8F0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x1C6DBB0", Offset = "0x1C6C1B0", VA = "0x181C6DBB0", Slot = "116")]
	public override void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x1C6DB40", Offset = "0x1C6C140", VA = "0x181C6DB40", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x1C6DDE0", Offset = "0x1C6C3E0", VA = "0x181C6DDE0", Slot = "110")]
	public override void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x1C6D600", Offset = "0x1C6BC00", VA = "0x181C6D600", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x1C6E150", Offset = "0x1C6C750", VA = "0x181C6E150", Slot = "114")]
	public override void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x1C6DD70", Offset = "0x1C6C370", VA = "0x181C6DD70", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x1C6E200", Offset = "0x1C6C800", VA = "0x181C6E200", Slot = "113")]
	public override void WriteValue(char? value)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x1C6EA40", Offset = "0x1C6D040", VA = "0x181C6EA40", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x1C6E7F0", Offset = "0x1C6CDF0", VA = "0x181C6E7F0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x1C6D670", Offset = "0x1C6BC70", VA = "0x181C6D670", Slot = "117")]
	public override void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x1C6D980", Offset = "0x1C6BF80", VA = "0x181C6D980", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x1C6DC90", Offset = "0x1C6C290", VA = "0x181C6DC90", Slot = "118")]
	public override void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x1C6DA10", Offset = "0x1C6C010", VA = "0x181C6DA10", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x1C6DFB0", Offset = "0x1C6C5B0", VA = "0x181C6DFB0", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x1C6D490", Offset = "0x1C6BA90", VA = "0x181C6D490", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x1C6D160", Offset = "0x1C6B760", VA = "0x181C6D160", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x1C6E4C0", Offset = "0x1C6CAC0", VA = "0x181C6E4C0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x1C6E920", Offset = "0x1C6CF20", VA = "0x181C6E920", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x1C6E370", Offset = "0x1C6C970", VA = "0x181C6E370", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x1C6E530", Offset = "0x1C6CB30", VA = "0x181C6E530", Slot = "119")]
	public override void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x1C6D890", Offset = "0x1C6BE90", VA = "0x181C6D890", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x1C6D4E0", Offset = "0x1C6BAE0", VA = "0x181C6D4E0", Slot = "104")]
	public override void WriteValue(int? value)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x1C6E670", Offset = "0x1C6CC70", VA = "0x181C6E670", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x1C6DA80", Offset = "0x1C6C080", VA = "0x181C6DA80", Slot = "106")]
	public override void WriteValue(long? value)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x1C6E6E0", Offset = "0x1C6CCE0", VA = "0x181C6E6E0", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x1C6D590", Offset = "0x1C6BB90", VA = "0x181C6D590", Slot = "98")]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x1C6D730", Offset = "0x1C6BD30", VA = "0x181C6D730", Slot = "115")]
	public override void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x1C6EAC0", Offset = "0x1C6D0C0", VA = "0x181C6EAC0", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x1C6D7E0", Offset = "0x1C6BDE0", VA = "0x181C6D7E0", Slot = "111")]
	public override void WriteValue(short? value)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x1C6DF40", Offset = "0x1C6C540", VA = "0x181C6DF40", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x1C6E070", Offset = "0x1C6C670", VA = "0x181C6E070", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x1C6E2B0", Offset = "0x1C6C8B0", VA = "0x181C6E2B0", Slot = "120")]
	public override void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x1C6E610", Offset = "0x1C6CC10", VA = "0x181C6E610", Slot = "88")]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x1C6EB30", Offset = "0x1C6D130", VA = "0x181C6EB30", Slot = "105")]
	public override void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x1C6E9D0", Offset = "0x1C6CFD0", VA = "0x181C6E9D0", Slot = "90")]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x1C6E860", Offset = "0x1C6CE60", VA = "0x181C6E860", Slot = "107")]
	public override void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x1C6E400", Offset = "0x1C6CA00", VA = "0x181C6E400", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x1C6E0E0", Offset = "0x1C6C6E0", VA = "0x181C6E0E0", Slot = "95")]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x1C6DE90", Offset = "0x1C6C490", VA = "0x181C6DE90", Slot = "112")]
	public override void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x1C6EBE0", Offset = "0x1C6D1E0", VA = "0x181C6EBE0", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x1C6D000", Offset = "0x1C6B600", VA = "0x181C6D000", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x1C6D380", Offset = "0x1C6B980", VA = "0x181C6D380", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x1C6D070", Offset = "0x1C6B670", VA = "0x181C6D070", Slot = "71")]
	public override void WriteEndArray()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x1C6D3D0", Offset = "0x1C6B9D0", VA = "0x181C6D3D0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x1C6D0C0", Offset = "0x1C6B6C0", VA = "0x181C6D0C0", Slot = "73")]
	public override void WriteEndConstructor()
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x1C6D1B0", Offset = "0x1C6B7B0", VA = "0x181C6D1B0", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x1C6D220", Offset = "0x1C6B820", VA = "0x181C6D220", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x1C6D440", Offset = "0x1C6BA40", VA = "0x181C6D440", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x1C6D110", Offset = "0x1C6B710", VA = "0x181C6D110", Slot = "69")]
	public override void WriteEndObject()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x1C6D2A0", Offset = "0x1C6B8A0", VA = "0x181C6D2A0", Slot = "85")]
	public override void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x1C6D310", Offset = "0x1C6B910", VA = "0x181C6D310", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x1C6CF30", Offset = "0x1C6B530", VA = "0x181C6CF30", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x1C6CF80", Offset = "0x1C6B580", VA = "0x181C6CF80", Slot = "66")]
	public override void Flush()
	{
	}
}
