using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000035")]
public enum SkuType
{
	[Token(Token = "0x400009C")]
	Application = 1,
	[Token(Token = "0x400009D")]
	DLC,
	[Token(Token = "0x400009E")]
	Consumable,
	[Token(Token = "0x400009F")]
	Bundle
}
