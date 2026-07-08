using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004AF")]
public enum HookState
{
	[Token(Token = "0x40014F7")]
	Disabled,
	[Token(Token = "0x40014F8")]
	Hooking,
	[Token(Token = "0x40014F9")]
	Hooked,
	[Token(Token = "0x40014FA")]
	DisablingHooking,
	[Token(Token = "0x40014FB")]
	DisablingHooked
}
