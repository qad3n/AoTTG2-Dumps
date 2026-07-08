using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DF")]
internal class BsonBoolean : BsonValue
{
	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BsonBoolean False;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BsonBoolean True;

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x3B65040", Offset = "0x3B65040", VA = "0x3B65040")]
	private BsonBoolean(bool value)
	{
	}
}
