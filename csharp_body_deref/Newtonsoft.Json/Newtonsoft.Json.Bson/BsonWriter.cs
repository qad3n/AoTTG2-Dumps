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
		[Address(RVA = "0x3E5ACD0", Offset = "0x3E5ACD0", VA = "0x3E5ACD0")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x3E5ACF0", Offset = "0x3E5ACF0", VA = "0x3E5ACF0")]
		set
		{
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x3E5AD10", Offset = "0x3E5AD10", VA = "0x3E5AD10")]
	public BsonWriter(Stream stream)
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x3E5AE10", Offset = "0x3E5AE10", VA = "0x3E5AE10")]
	public BsonWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x3E5AED0", Offset = "0x3E5AED0", VA = "0x3E5AED0", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x3E5AF00", Offset = "0x3E5AF00", VA = "0x3E5AF00", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x3E5AF90", Offset = "0x3E5AF90", VA = "0x3E5AF90", Slot = "124")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x3E5AFD0", Offset = "0x3E5AFD0", VA = "0x3E5AFD0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x3E5B010", Offset = "0x3E5B010", VA = "0x3E5B010", Slot = "84")]
	public override void WriteRaw(string json)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x3E5B050", Offset = "0x3E5B050", VA = "0x3E5B050", Slot = "85")]
	public override void WriteRawValue(string json)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x3E5B090", Offset = "0x3E5B090", VA = "0x3E5B090", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x3E5B190", Offset = "0x3E5B190", VA = "0x3E5B190", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x3E5B260", Offset = "0x3E5B260", VA = "0x3E5B260", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x3E5B290", Offset = "0x3E5B290", VA = "0x3E5B290", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x3E5B160", Offset = "0x3E5B160", VA = "0x3E5B160")]
	private void AddParent(BsonToken container)
	{
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x3E5AF70", Offset = "0x3E5AF70", VA = "0x3E5AF70")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x3E5B4E0", Offset = "0x3E5B4E0", VA = "0x3E5B4E0")]
	private void AddValue(object value, BsonType type)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x3E5B2D0", Offset = "0x3E5B2D0", VA = "0x3E5B2D0")]
	internal void AddToken(BsonToken token)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x3E5B560", Offset = "0x3E5B560", VA = "0x3E5B560", Slot = "123")]
	public override void WriteValue(object value)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x3E5B650", Offset = "0x3E5B650", VA = "0x3E5B650", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x3E5B6C0", Offset = "0x3E5B6C0", VA = "0x3E5B6C0", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x3E5B730", Offset = "0x3E5B730", VA = "0x3E5B730", Slot = "86")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x3E5B800", Offset = "0x3E5B800", VA = "0x3E5B800", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x3E5B8A0", Offset = "0x3E5B8A0", VA = "0x3E5B8A0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x3E5B980", Offset = "0x3E5B980", VA = "0x3E5B980", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x3E5BA20", Offset = "0x3E5BA20", VA = "0x3E5BA20", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x3E5BB00", Offset = "0x3E5BB00", VA = "0x3E5BB00", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x3E5BBA0", Offset = "0x3E5BBA0", VA = "0x3E5BBA0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x3E5BC40", Offset = "0x3E5BC40", VA = "0x3E5BC40", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x3E5BCC0", Offset = "0x3E5BCC0", VA = "0x3E5BCC0", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x3E5BD60", Offset = "0x3E5BD60", VA = "0x3E5BD60", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x3E5BE00", Offset = "0x3E5BE00", VA = "0x3E5BE00", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x3E5BEE0", Offset = "0x3E5BEE0", VA = "0x3E5BEE0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x3E5BF80", Offset = "0x3E5BF80", VA = "0x3E5BF80", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x3E5C020", Offset = "0x3E5C020", VA = "0x3E5C020", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x3E5C0E0", Offset = "0x3E5C0E0", VA = "0x3E5C0E0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x3E5C1D0", Offset = "0x3E5C1D0", VA = "0x3E5C1D0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x3E5C2A0", Offset = "0x3E5C2A0", VA = "0x3E5C2A0", Slot = "121")]
	public override void WriteValue(byte[] value)
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x3E5C340", Offset = "0x3E5C340", VA = "0x3E5C340", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x3E5C3E0", Offset = "0x3E5C3E0", VA = "0x3E5C3E0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x3E5C4A0", Offset = "0x3E5C4A0", VA = "0x3E5C4A0", Slot = "122")]
	public override void WriteValue(Uri value)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x3E5C590", Offset = "0x3E5C590", VA = "0x3E5C590")]
	public void WriteObjectId(byte[] value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x3E5C680", Offset = "0x3E5C680", VA = "0x3E5C680")]
	public void WriteRegex(string pattern, string options)
	{
	}
}
