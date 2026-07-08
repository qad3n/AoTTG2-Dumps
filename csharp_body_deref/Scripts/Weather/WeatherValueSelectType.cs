using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000039")]
public enum WeatherValueSelectType
{
	[Token(Token = "0x4000130")]
	None,
	[Token(Token = "0x4000131")]
	Constant,
	[Token(Token = "0x4000132")]
	RandomBetween,
	[Token(Token = "0x4000133")]
	RandomFromList
}
