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
	[Address(RVA = "0x3B005F0", Offset = "0x3B005F0", VA = "0x3B005F0")]
	public TraceJsonWriter(JsonWriter innerWriter)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x3B00800", Offset = "0x3B00800", VA = "0x3B00800")]
	public string GetSerializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x3B00830", Offset = "0x3B00830", VA = "0x3B00830", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x3B00890", Offset = "0x3B00890", VA = "0x3B00890", Slot = "116")]
	public override void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x3B00980", Offset = "0x3B00980", VA = "0x3B00980", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x3B009E0", Offset = "0x3B009E0", VA = "0x3B009E0", Slot = "110")]
	public override void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x3B00A80", Offset = "0x3B00A80", VA = "0x3B00A80", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x3B00AE0", Offset = "0x3B00AE0", VA = "0x3B00AE0", Slot = "114")]
	public override void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x3B00B80", Offset = "0x3B00B80", VA = "0x3B00B80", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x3B00BE0", Offset = "0x3B00BE0", VA = "0x3B00BE0", Slot = "113")]
	public override void WriteValue(char? value)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x3B00C80", Offset = "0x3B00C80", VA = "0x3B00C80", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x3B00CF0", Offset = "0x3B00CF0", VA = "0x3B00CF0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x3B00D50", Offset = "0x3B00D50", VA = "0x3B00D50", Slot = "117")]
	public override void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x3B00DF0", Offset = "0x3B00DF0", VA = "0x3B00DF0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x3B00E50", Offset = "0x3B00E50", VA = "0x3B00E50", Slot = "118")]
	public override void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x3B00F40", Offset = "0x3B00F40", VA = "0x3B00F40", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x3B00FA0", Offset = "0x3B00FA0", VA = "0x3B00FA0", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x3B01050", Offset = "0x3B01050", VA = "0x3B01050", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x3B010A0", Offset = "0x3B010A0", VA = "0x3B010A0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x3B010F0", Offset = "0x3B010F0", VA = "0x3B010F0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x3B01150", Offset = "0x3B01150", VA = "0x3B01150", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x3B011F0", Offset = "0x3B011F0", VA = "0x3B011F0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x3B01250", Offset = "0x3B01250", VA = "0x3B01250", Slot = "119")]
	public override void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x3B01340", Offset = "0x3B01340", VA = "0x3B01340", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x3B013A0", Offset = "0x3B013A0", VA = "0x3B013A0", Slot = "104")]
	public override void WriteValue(int? value)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x3B01440", Offset = "0x3B01440", VA = "0x3B01440", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x3B014A0", Offset = "0x3B014A0", VA = "0x3B014A0", Slot = "106")]
	public override void WriteValue(long? value)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x3B01540", Offset = "0x3B01540", VA = "0x3B01540", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x3B01600", Offset = "0x3B01600", VA = "0x3B01600", Slot = "98")]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x3B01660", Offset = "0x3B01660", VA = "0x3B01660", Slot = "115")]
	public override void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x3B01700", Offset = "0x3B01700", VA = "0x3B01700", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x3B01760", Offset = "0x3B01760", VA = "0x3B01760", Slot = "111")]
	public override void WriteValue(short? value)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x3B01800", Offset = "0x3B01800", VA = "0x3B01800", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x3B01860", Offset = "0x3B01860", VA = "0x3B01860", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x3B018C0", Offset = "0x3B018C0", VA = "0x3B018C0", Slot = "120")]
	public override void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x3B01960", Offset = "0x3B01960", VA = "0x3B01960", Slot = "88")]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x3B019C0", Offset = "0x3B019C0", VA = "0x3B019C0", Slot = "105")]
	public override void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x3B01A60", Offset = "0x3B01A60", VA = "0x3B01A60", Slot = "90")]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x3B01AC0", Offset = "0x3B01AC0", VA = "0x3B01AC0", Slot = "107")]
	public override void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x3B01B60", Offset = "0x3B01B60", VA = "0x3B01B60", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x3B01C10", Offset = "0x3B01C10", VA = "0x3B01C10", Slot = "95")]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x3B01C70", Offset = "0x3B01C70", VA = "0x3B01C70", Slot = "112")]
	public override void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x3B01D10", Offset = "0x3B01D10", VA = "0x3B01D10", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x3B01D70", Offset = "0x3B01D70", VA = "0x3B01D70", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x3B01DD0", Offset = "0x3B01DD0", VA = "0x3B01DD0", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x3B01E20", Offset = "0x3B01E20", VA = "0x3B01E20", Slot = "71")]
	public override void WriteEndArray()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x3B01E70", Offset = "0x3B01E70", VA = "0x3B01E70", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x3B01ED0", Offset = "0x3B01ED0", VA = "0x3B01ED0", Slot = "73")]
	public override void WriteEndConstructor()
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x3B01F20", Offset = "0x3B01F20", VA = "0x3B01F20", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x3B01F80", Offset = "0x3B01F80", VA = "0x3B01F80", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x3B01FE0", Offset = "0x3B01FE0", VA = "0x3B01FE0", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x3B02030", Offset = "0x3B02030", VA = "0x3B02030", Slot = "69")]
	public override void WriteEndObject()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x3B02080", Offset = "0x3B02080", VA = "0x3B02080", Slot = "85")]
	public override void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x3B020E0", Offset = "0x3B020E0", VA = "0x3B020E0", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x3B02140", Offset = "0x3B02140", VA = "0x3B02140", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x3B02190", Offset = "0x3B02190", VA = "0x3B02190", Slot = "66")]
	public override void Flush()
	{
	}
}
