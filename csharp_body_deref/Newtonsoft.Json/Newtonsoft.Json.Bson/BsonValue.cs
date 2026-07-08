using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DE")]
internal class BsonValue : BsonToken
{
	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x20")]
	private readonly object _value;

	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x28")]
	private readonly BsonType _type;

	[Token(Token = "0x170002B7")]
	public object Value
	{
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x3B65020", Offset = "0x3B65020", VA = "0x3B65020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B8")]
	public override BsonType Type
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x3B65030", Offset = "0x3B65030", VA = "0x3B65030", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x3B64FF0", Offset = "0x3B64FF0", VA = "0x3B64FF0")]
	public BsonValue(object value, BsonType type)
	{
	}
}
