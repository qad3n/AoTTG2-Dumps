using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200004A")]
public struct InputMode
{
	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x0")]
	public InputModeType Type;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x8")]
	public string Shortcut;
}
