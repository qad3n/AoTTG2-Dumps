// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.PlayerLoopTiming
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200005D")]
public enum PlayerLoopTiming
{
	[Token(Token = "0x4000099")]
	Initialization,
	[Token(Token = "0x400009A")]
	LastInitialization,
	[Token(Token = "0x400009B")]
	EarlyUpdate,
	[Token(Token = "0x400009C")]
	LastEarlyUpdate,
	[Token(Token = "0x400009D")]
	FixedUpdate,
	[Token(Token = "0x400009E")]
	LastFixedUpdate,
	[Token(Token = "0x400009F")]
	PreUpdate,
	[Token(Token = "0x40000A0")]
	LastPreUpdate,
	[Token(Token = "0x40000A1")]
	Update,
	[Token(Token = "0x40000A2")]
	LastUpdate,
	[Token(Token = "0x40000A3")]
	PreLateUpdate,
	[Token(Token = "0x40000A4")]
	LastPreLateUpdate,
	[Token(Token = "0x40000A5")]
	PostLateUpdate,
	[Token(Token = "0x40000A6")]
	LastPostLateUpdate,
	[Token(Token = "0x40000A7")]
	TimeUpdate,
	[Token(Token = "0x40000A8")]
	LastTimeUpdate
}
