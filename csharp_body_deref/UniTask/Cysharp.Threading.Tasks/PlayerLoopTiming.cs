// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.PlayerLoopTiming
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200005F")]
public enum PlayerLoopTiming
{
	[Token(Token = "0x400009E")]
	Initialization,
	[Token(Token = "0x400009F")]
	LastInitialization,
	[Token(Token = "0x40000A0")]
	EarlyUpdate,
	[Token(Token = "0x40000A1")]
	LastEarlyUpdate,
	[Token(Token = "0x40000A2")]
	FixedUpdate,
	[Token(Token = "0x40000A3")]
	LastFixedUpdate,
	[Token(Token = "0x40000A4")]
	PreUpdate,
	[Token(Token = "0x40000A5")]
	LastPreUpdate,
	[Token(Token = "0x40000A6")]
	Update,
	[Token(Token = "0x40000A7")]
	LastUpdate,
	[Token(Token = "0x40000A8")]
	PreLateUpdate,
	[Token(Token = "0x40000A9")]
	LastPreLateUpdate,
	[Token(Token = "0x40000AA")]
	PostLateUpdate,
	[Token(Token = "0x40000AB")]
	LastPostLateUpdate,
	[Token(Token = "0x40000AC")]
	TimeUpdate,
	[Token(Token = "0x40000AD")]
	LastTimeUpdate
}
