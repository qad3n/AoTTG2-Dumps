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
		[Address(RVA = "0x3B65380", Offset = "0x3B65380", VA = "0x3B65380")]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x3B653A0", Offset = "0x3B653A0", VA = "0x3B653A0")]
		set
		{
		}
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x3B653C0", Offset = "0x3B653C0", VA = "0x3B653C0")]
	public BsonWriter(Stream stream)
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x3B654C0", Offset = "0x3B654C0", VA = "0x3B654C0")]
	public BsonWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x3B65580", Offset = "0x3B65580", VA = "0x3B65580", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x3B655B0", Offset = "0x3B655B0", VA = "0x3B655B0", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x3B65640", Offset = "0x3B65640", VA = "0x3B65640", Slot = "124")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x3B65680", Offset = "0x3B65680", VA = "0x3B65680", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x3B656C0", Offset = "0x3B656C0", VA = "0x3B656C0", Slot = "84")]
	public override void WriteRaw(string json)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x3B65700", Offset = "0x3B65700", VA = "0x3B65700", Slot = "85")]
	public override void WriteRawValue(string json)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x3B65740", Offset = "0x3B65740", VA = "0x3B65740", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x3B65840", Offset = "0x3B65840", VA = "0x3B65840", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x3B65910", Offset = "0x3B65910", VA = "0x3B65910", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x3B65940", Offset = "0x3B65940", VA = "0x3B65940", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x3B65810", Offset = "0x3B65810", VA = "0x3B65810")]
	private void AddParent(BsonToken container)
	{
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x3B65620", Offset = "0x3B65620", VA = "0x3B65620")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x3B65B90", Offset = "0x3B65B90", VA = "0x3B65B90")]
	private void AddValue(object value, BsonType type)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x3B65980", Offset = "0x3B65980", VA = "0x3B65980")]
	internal void AddToken(BsonToken token)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x3B65C10", Offset = "0x3B65C10", VA = "0x3B65C10", Slot = "123")]
	public override void WriteValue(object value)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x3B65D00", Offset = "0x3B65D00", VA = "0x3B65D00", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x3B65D70", Offset = "0x3B65D70", VA = "0x3B65D70", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x3B65DE0", Offset = "0x3B65DE0", VA = "0x3B65DE0", Slot = "86")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x3B65EB0", Offset = "0x3B65EB0", VA = "0x3B65EB0", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x3B65F50", Offset = "0x3B65F50", VA = "0x3B65F50", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x3B66030", Offset = "0x3B66030", VA = "0x3B66030", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x3B660D0", Offset = "0x3B660D0", VA = "0x3B660D0", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x3B661B0", Offset = "0x3B661B0", VA = "0x3B661B0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x3B66250", Offset = "0x3B66250", VA = "0x3B66250", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x3B662F0", Offset = "0x3B662F0", VA = "0x3B662F0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x3B66370", Offset = "0x3B66370", VA = "0x3B66370", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x3B66410", Offset = "0x3B66410", VA = "0x3B66410", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x3B664B0", Offset = "0x3B664B0", VA = "0x3B664B0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x3B66590", Offset = "0x3B66590", VA = "0x3B66590", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x3B66630", Offset = "0x3B66630", VA = "0x3B66630", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x3B666D0", Offset = "0x3B666D0", VA = "0x3B666D0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x3B66790", Offset = "0x3B66790", VA = "0x3B66790", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x3B66880", Offset = "0x3B66880", VA = "0x3B66880", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x3B66950", Offset = "0x3B66950", VA = "0x3B66950", Slot = "121")]
	public override void WriteValue(byte[] value)
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x3B669F0", Offset = "0x3B669F0", VA = "0x3B669F0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x3B66A90", Offset = "0x3B66A90", VA = "0x3B66A90", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x3B66B50", Offset = "0x3B66B50", VA = "0x3B66B50", Slot = "122")]
	public override void WriteValue(Uri value)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x3B66C40", Offset = "0x3B66C40", VA = "0x3B66C40")]
	public void WriteObjectId(byte[] value)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x3B66D30", Offset = "0x3B66D30", VA = "0x3B66D30")]
	public void WriteRegex(string pattern, string options)
	{
	}
}
