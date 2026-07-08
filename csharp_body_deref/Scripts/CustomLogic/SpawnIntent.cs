using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000439")]
public enum SpawnIntent
{
	[Token(Token = "0x40011BA")]
	LocalOnly,
	[Token(Token = "0x40011BB")]
	PreplacedBind,
	[Token(Token = "0x40011BC")]
	NetworkedRuntime
}
