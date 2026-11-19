// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.LinkBehaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
