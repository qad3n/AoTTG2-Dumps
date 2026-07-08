using Il2CppDummyDll;

namespace DG.Tweening;

[Token(Token = "0x2000016")]
public enum LinkBehaviour
{
	[Token(Token = "0x4000063")]
	PauseOnDisable,
	[Token(Token = "0x4000064")]
	PauseOnDisablePlayOnEnable,
	[Token(Token = "0x4000065")]
	PauseOnDisableRestartOnEnable,
	[Token(Token = "0x4000066")]
	PlayOnEnable,
	[Token(Token = "0x4000067")]
	RestartOnEnable,
	[Token(Token = "0x4000068")]
	KillOnDisable,
	[Token(Token = "0x4000069")]
	KillOnDestroy,
	[Token(Token = "0x400006A")]
	CompleteOnDisable,
	[Token(Token = "0x400006B")]
	CompleteAndKillOnDisable,
	[Token(Token = "0x400006C")]
	RewindOnDisable,
	[Token(Token = "0x400006D")]
	RewindAndKillOnDisable
}
