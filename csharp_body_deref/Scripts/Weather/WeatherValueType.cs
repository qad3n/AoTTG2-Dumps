using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x200003A")]
public enum WeatherValueType
{
	[Token(Token = "0x4000135")]
	None,
	[Token(Token = "0x4000136")]
	Float,
	[Token(Token = "0x4000137")]
	Int,
	[Token(Token = "0x4000138")]
	String,
	[Token(Token = "0x4000139")]
	Color,
	[Token(Token = "0x400013A")]
	Bool,
	[Token(Token = "0x400013B")]
	Vector3
}
