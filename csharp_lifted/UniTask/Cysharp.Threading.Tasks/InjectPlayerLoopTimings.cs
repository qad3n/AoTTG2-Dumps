// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.InjectPlayerLoopTimings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200005E")]
[Flags]
public enum InjectPlayerLoopTimings
{
	[Token(Token = "0x40000AA")]
	All = 0xFFFF,
	[Token(Token = "0x40000AB")]
	Standard = 0x7555,
	[Token(Token = "0x40000AC")]
	Minimum = 0x2110,
	[Token(Token = "0x40000AD")]
	Initialization = 1,
	[Token(Token = "0x40000AE")]
	LastInitialization = 2,
	[Token(Token = "0x40000AF")]
	EarlyUpdate = 4,
	[Token(Token = "0x40000B0")]
	LastEarlyUpdate = 8,
	[Token(Token = "0x40000B1")]
	FixedUpdate = 0x10,
	[Token(Token = "0x40000B2")]
	LastFixedUpdate = 0x20,
	[Token(Token = "0x40000B3")]
	PreUpdate = 0x40,
	[Token(Token = "0x40000B4")]
	LastPreUpdate = 0x80,
	[Token(Token = "0x40000B5")]
	Update = 0x100,
	[Token(Token = "0x40000B6")]
	LastUpdate = 0x200,
	[Token(Token = "0x40000B7")]
	PreLateUpdate = 0x400,
	[Token(Token = "0x40000B8")]
	LastPreLateUpdate = 0x800,
	[Token(Token = "0x40000B9")]
	PostLateUpdate = 0x1000,
	[Token(Token = "0x40000BA")]
	LastPostLateUpdate = 0x2000,
	[Token(Token = "0x40000BB")]
	TimeUpdate = 0x4000,
	[Token(Token = "0x40000BC")]
	LastTimeUpdate = 0x8000
}
