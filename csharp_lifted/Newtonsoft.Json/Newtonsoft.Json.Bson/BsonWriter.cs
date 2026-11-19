// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001E5")]
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonWriter : JsonWriter
{
	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x60")]
	private readonly BsonBinaryWriter _writer;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x68")]
	private BsonToken _root;

	[Token(Token = "0x400087C")]
	[FieldOffset(Offset = "0x70")]
	private BsonToken _parent;

	[Token(Token = "0x400087D")]
	[FieldOffset(Offset = "0x78")]
	private string _propertyName;

	[Token(Token = "0x170002C1")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x600102A")]
		[Address(RVA = "0x564BE70", Offset = "0x564AE70", VA = "0x564BE70")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x564BE90", Offset = "0x564AE90", VA = "0x564BE90")]
		set
		{
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x564BEB0", Offset = "0x564AEB0", VA = "0x564BEB0")]
	public BsonWriter(Stream stream)
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x564BFB0", Offset = "0x564AFB0", VA = "0x564BFB0")]
	public BsonWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x564C070", Offset = "0x564B070", VA = "0x564C070", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x564C0A0", Offset = "0x564B0A0", VA = "0x564C0A0", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x564C130", Offset = "0x564B130", VA = "0x564C130", Slot = "124")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x564C170", Offset = "0x564B170", VA = "0x564C170", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x564C1B0", Offset = "0x564B1B0", VA = "0x564C1B0", Slot = "84")]
	public override void WriteRaw(string json)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x564C1F0", Offset = "0x564B1F0", VA = "0x564C1F0", Slot = "85")]
	public override void WriteRawValue(string json)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x564C230", Offset = "0x564B230", VA = "0x564C230", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x564C330", Offset = "0x564B330", VA = "0x564C330", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x564C400", Offset = "0x564B400", VA = "0x564C400", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x564C430", Offset = "0x564B430", VA = "0x564C430", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x564C300", Offset = "0x564B300", VA = "0x564C300")]
	private void AddParent(BsonToken container)
	{
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x564C110", Offset = "0x564B110", VA = "0x564C110")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x564C650", Offset = "0x564B650", VA = "0x564C650")]
	private void AddValue(object value, BsonType type)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x564C470", Offset = "0x564B470", VA = "0x564C470")]
	internal void AddToken(BsonToken token)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x564C6D0", Offset = "0x564B6D0", VA = "0x564C6D0", Slot = "123")]
	public override void WriteValue(object value)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x564C7C0", Offset = "0x564B7C0", VA = "0x564C7C0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x564C830", Offset = "0x564B830", VA = "0x564C830", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x564C8A0", Offset = "0x564B8A0", VA = "0x564C8A0", Slot = "86")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x564C960", Offset = "0x564B960", VA = "0x564C960", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x564CA00", Offset = "0x564BA00", VA = "0x564CA00", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x564CAE0", Offset = "0x564BAE0", VA = "0x564CAE0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x564CB80", Offset = "0x564BB80", VA = "0x564CB80", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x564CC60", Offset = "0x564BC60", VA = "0x564CC60", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x564CD00", Offset = "0x564BD00", VA = "0x564CD00", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x564CDA0", Offset = "0x564BDA0", VA = "0x564CDA0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x564CE30", Offset = "0x564BE30", VA = "0x564CE30", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x564CED0", Offset = "0x564BED0", VA = "0x564CED0", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x564CF70", Offset = "0x564BF70", VA = "0x564CF70", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x564D050", Offset = "0x564C050", VA = "0x564D050", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x564D0F0", Offset = "0x564C0F0", VA = "0x564D0F0", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x564D190", Offset = "0x564C190", VA = "0x564D190", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x564D250", Offset = "0x564C250", VA = "0x564D250", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x564D340", Offset = "0x564C340", VA = "0x564D340", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x564D400", Offset = "0x564C400", VA = "0x564D400", Slot = "121")]
	public override void WriteValue(byte[] value)
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x564D4A0", Offset = "0x564C4A0", VA = "0x564D4A0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x564D540", Offset = "0x564C540", VA = "0x564D540", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x564D600", Offset = "0x564C600", VA = "0x564D600", Slot = "122")]
	public override void WriteValue(Uri value)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x564D6F0", Offset = "0x564C6F0", VA = "0x564D6F0")]
	public void WriteObjectId(byte[] value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x564D7E0", Offset = "0x564C7E0", VA = "0x564D7E0")]
	public void WriteRegex(string pattern, string options)
	{
	}
}
