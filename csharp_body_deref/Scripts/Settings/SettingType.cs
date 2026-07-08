using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BF")]
public enum SettingType
{
	[Token(Token = "0x4000483")]
	None,
	[Token(Token = "0x4000484")]
	Bool,
	[Token(Token = "0x4000485")]
	Int,
	[Token(Token = "0x4000486")]
	Float,
	[Token(Token = "0x4000487")]
	String,
	[Token(Token = "0x4000488")]
	Keybind,
	[Token(Token = "0x4000489")]
	Color,
	[Token(Token = "0x400048A")]
	ToggleColor,
	[Token(Token = "0x400048B")]
	Vector3
}
