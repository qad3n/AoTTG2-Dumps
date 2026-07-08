using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044E")]
public class CustomLogicToken
{
	[Token(Token = "0x40012DD")]
	[FieldOffset(Offset = "0x10")]
	public CustomLogicTokenType Type;

	[Token(Token = "0x40012DE")]
	[FieldOffset(Offset = "0x18")]
	public object Value;

	[Token(Token = "0x40012DF")]
	[FieldOffset(Offset = "0x20")]
	public int Line;

	[Token(Token = "0x6002E71")]
	[Address(RVA = "0x3E5AD80", Offset = "0x3E5AD80", VA = "0x3E5AD80")]
	public CustomLogicToken(CustomLogicTokenType type, object value, int line)
	{
	}
}
