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
		[Address(RVA = "0x1CAE5C0", Offset = "0x1CACBC0", VA = "0x181CAE5C0")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x1CAE5E0", Offset = "0x1CACBE0", VA = "0x181CAE5E0")]
		set
		{
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x1CAE4C0", Offset = "0x1CACAC0", VA = "0x181CAE4C0")]
	public BsonWriter(Stream stream)
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x1CAE3F0", Offset = "0x1CAC9F0", VA = "0x181CAE3F0")]
	public BsonWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x1CACC40", Offset = "0x1CAB240", VA = "0x181CACC40", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x1CACD00", Offset = "0x1CAB300", VA = "0x181CACD00", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x1CACCB0", Offset = "0x1CAB2B0", VA = "0x181CACCB0", Slot = "124")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x1CAD1F0", Offset = "0x1CAB7F0", VA = "0x181CAD1F0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x1CACF90", Offset = "0x1CAB590", VA = "0x181CACF90", Slot = "84")]
	public override void WriteRaw(string json)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x1CACF40", Offset = "0x1CAB540", VA = "0x181CACF40", Slot = "85")]
	public override void WriteRawValue(string json)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x1CAD110", Offset = "0x1CAB710", VA = "0x181CAD110", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x1CAD240", Offset = "0x1CAB840", VA = "0x181CAD240", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x1CACF00", Offset = "0x1CAB500", VA = "0x181CACF00", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x1CACBF0", Offset = "0x1CAB1F0", VA = "0x181CACBF0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x1CAC760", Offset = "0x1CAAD60", VA = "0x181CAC760")]
	private void AddParent(BsonToken container)
	{
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x1CACC80", Offset = "0x1CAB280", VA = "0x181CACC80")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x1CACB70", Offset = "0x1CAB170", VA = "0x181CACB70")]
	private void AddValue(object value, BsonType type)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x1CAC7A0", Offset = "0x1CAADA0", VA = "0x181CAC7A0")]
	internal void AddToken(BsonToken token)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x1CAD430", Offset = "0x1CABA30", VA = "0x181CAD430", Slot = "123")]
	public override void WriteValue(object value)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x1CACD80", Offset = "0x1CAB380", VA = "0x181CACD80", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x1CAD320", Offset = "0x1CAB920", VA = "0x181CAD320", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x1CAE210", Offset = "0x1CAC810", VA = "0x181CAE210", Slot = "86")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x1CAD730", Offset = "0x1CABD30", VA = "0x181CAD730", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x1CAD560", Offset = "0x1CABB60", VA = "0x181CAD560", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x1CAD7D0", Offset = "0x1CABDD0", VA = "0x181CAD7D0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x1CAD640", Offset = "0x1CABC40", VA = "0x181CAD640", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x1CAE0C0", Offset = "0x1CAC6C0", VA = "0x181CAE0C0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x1CADDC0", Offset = "0x1CAC3C0", VA = "0x181CADDC0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x1CAE010", Offset = "0x1CAC610", VA = "0x181CAE010", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x1CADA30", Offset = "0x1CAC030", VA = "0x181CADA30", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x1CAD390", Offset = "0x1CAB990", VA = "0x181CAD390", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x1CAD870", Offset = "0x1CABE70", VA = "0x181CAD870", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x1CADC50", Offset = "0x1CAC250", VA = "0x181CADC50", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x1CAE170", Offset = "0x1CAC770", VA = "0x181CAE170", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x1CADAD0", Offset = "0x1CAC0D0", VA = "0x181CADAD0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x1CADE70", Offset = "0x1CAC470", VA = "0x181CADE70", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x1CAD960", Offset = "0x1CABF60", VA = "0x181CAD960", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x1CADBA0", Offset = "0x1CAC1A0", VA = "0x181CADBA0", Slot = "121")]
	public override void WriteValue(byte[] value)
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x1CADF60", Offset = "0x1CAC560", VA = "0x181CADF60", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x1CADCF0", Offset = "0x1CAC2F0", VA = "0x181CADCF0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x1CAE2F0", Offset = "0x1CAC8F0", VA = "0x181CAE2F0", Slot = "122")]
	public override void WriteValue(Uri value)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x1CACDF0", Offset = "0x1CAB3F0", VA = "0x181CACDF0")]
	public void WriteObjectId(byte[] value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x1CACFE0", Offset = "0x1CAB5E0", VA = "0x181CACFE0")]
	public void WriteRegex(string pattern, string options)
	{
	}
}
