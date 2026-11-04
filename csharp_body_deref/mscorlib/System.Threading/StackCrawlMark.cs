// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.StackCrawlMark
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000235")]
internal enum StackCrawlMark
{
	[Token(Token = "0x4000A39")]
	LookForMe,
	[Token(Token = "0x4000A3A")]
	LookForMyCaller,
	[Token(Token = "0x4000A3B")]
	LookForMyCallersCaller,
	[Token(Token = "0x4000A3C")]
	LookForThread
}
