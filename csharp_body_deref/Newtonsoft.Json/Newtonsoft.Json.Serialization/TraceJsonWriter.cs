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
	[Address(RVA = "0x3DF5F40", Offset = "0x3DF5F40", VA = "0x3DF5F40")]
	public TraceJsonWriter(JsonWriter innerWriter)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x3DF6150", Offset = "0x3DF6150", VA = "0x3DF6150")]
	public string GetSerializedJsonMessage()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x3DF6180", Offset = "0x3DF6180", VA = "0x3DF6180", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x3DF61E0", Offset = "0x3DF61E0", VA = "0x3DF61E0", Slot = "116")]
	public override void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x3DF62D0", Offset = "0x3DF62D0", VA = "0x3DF62D0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x3DF6330", Offset = "0x3DF6330", VA = "0x3DF6330", Slot = "110")]
	public override void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x3DF63D0", Offset = "0x3DF63D0", VA = "0x3DF63D0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x3DF6430", Offset = "0x3DF6430", VA = "0x3DF6430", Slot = "114")]
	public override void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x3DF64D0", Offset = "0x3DF64D0", VA = "0x3DF64D0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x3DF6530", Offset = "0x3DF6530", VA = "0x3DF6530", Slot = "113")]
	public override void WriteValue(char? value)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x3DF65D0", Offset = "0x3DF65D0", VA = "0x3DF65D0", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x3DF6640", Offset = "0x3DF6640", VA = "0x3DF6640", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x3DF66A0", Offset = "0x3DF66A0", VA = "0x3DF66A0", Slot = "117")]
	public override void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x3DF6740", Offset = "0x3DF6740", VA = "0x3DF6740", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x3DF67A0", Offset = "0x3DF67A0", VA = "0x3DF67A0", Slot = "118")]
	public override void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x3DF6890", Offset = "0x3DF6890", VA = "0x3DF6890", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x3DF68F0", Offset = "0x3DF68F0", VA = "0x3DF68F0", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x3DF69A0", Offset = "0x3DF69A0", VA = "0x3DF69A0", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x3DF69F0", Offset = "0x3DF69F0", VA = "0x3DF69F0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x3DF6A40", Offset = "0x3DF6A40", VA = "0x3DF6A40", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x3DF6AA0", Offset = "0x3DF6AA0", VA = "0x3DF6AA0", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x3DF6B40", Offset = "0x3DF6B40", VA = "0x3DF6B40", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x3DF6BA0", Offset = "0x3DF6BA0", VA = "0x3DF6BA0", Slot = "119")]
	public override void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x3DF6C90", Offset = "0x3DF6C90", VA = "0x3DF6C90", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x3DF6CF0", Offset = "0x3DF6CF0", VA = "0x3DF6CF0", Slot = "104")]
	public override void WriteValue(int? value)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x3DF6D90", Offset = "0x3DF6D90", VA = "0x3DF6D90", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x3DF6DF0", Offset = "0x3DF6DF0", VA = "0x3DF6DF0", Slot = "106")]
	public override void WriteValue(long? value)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x3DF6E90", Offset = "0x3DF6E90", VA = "0x3DF6E90", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x3DF6F50", Offset = "0x3DF6F50", VA = "0x3DF6F50", Slot = "98")]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x3DF6FB0", Offset = "0x3DF6FB0", VA = "0x3DF6FB0", Slot = "115")]
	public override void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x3DF7050", Offset = "0x3DF7050", VA = "0x3DF7050", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x3DF70B0", Offset = "0x3DF70B0", VA = "0x3DF70B0", Slot = "111")]
	public override void WriteValue(short? value)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x3DF7150", Offset = "0x3DF7150", VA = "0x3DF7150", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x3DF71B0", Offset = "0x3DF71B0", VA = "0x3DF71B0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x3DF7210", Offset = "0x3DF7210", VA = "0x3DF7210", Slot = "120")]
	public override void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x3DF72B0", Offset = "0x3DF72B0", VA = "0x3DF72B0", Slot = "88")]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x3DF7310", Offset = "0x3DF7310", VA = "0x3DF7310", Slot = "105")]
	public override void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x3DF73B0", Offset = "0x3DF73B0", VA = "0x3DF73B0", Slot = "90")]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x3DF7410", Offset = "0x3DF7410", VA = "0x3DF7410", Slot = "107")]
	public override void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x3DF74B0", Offset = "0x3DF74B0", VA = "0x3DF74B0", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x3DF7560", Offset = "0x3DF7560", VA = "0x3DF7560", Slot = "95")]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x3DF75C0", Offset = "0x3DF75C0", VA = "0x3DF75C0", Slot = "112")]
	public override void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x3DF7660", Offset = "0x3DF7660", VA = "0x3DF7660", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x3DF76C0", Offset = "0x3DF76C0", VA = "0x3DF76C0", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x3DF7720", Offset = "0x3DF7720", VA = "0x3DF7720", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x3DF7770", Offset = "0x3DF7770", VA = "0x3DF7770", Slot = "71")]
	public override void WriteEndArray()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x3DF77C0", Offset = "0x3DF77C0", VA = "0x3DF77C0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x3DF7820", Offset = "0x3DF7820", VA = "0x3DF7820", Slot = "73")]
	public override void WriteEndConstructor()
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x3DF7870", Offset = "0x3DF7870", VA = "0x3DF7870", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x3DF78D0", Offset = "0x3DF78D0", VA = "0x3DF78D0", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x3DF7930", Offset = "0x3DF7930", VA = "0x3DF7930", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x3DF7980", Offset = "0x3DF7980", VA = "0x3DF7980", Slot = "69")]
	public override void WriteEndObject()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x3DF79D0", Offset = "0x3DF79D0", VA = "0x3DF79D0", Slot = "85")]
	public override void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x3DF7A30", Offset = "0x3DF7A30", VA = "0x3DF7A30", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x3DF7A90", Offset = "0x3DF7A90", VA = "0x3DF7A90", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x3DF7AE0", Offset = "0x3DF7AE0", VA = "0x3DF7AE0", Slot = "66")]
	public override void Flush()
	{
	}
}
