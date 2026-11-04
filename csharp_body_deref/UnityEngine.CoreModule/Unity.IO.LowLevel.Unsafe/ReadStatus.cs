// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ReadStatus
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000040")]
public enum ReadStatus
{
	[Token(Token = "0x40000B8")]
	Complete = 0,
	[Token(Token = "0x40000B9")]
	InProgress = 1,
	[Token(Token = "0x40000BA")]
	Failed = 2,
	[Token(Token = "0x40000BB")]
	Truncated = 4,
	[Token(Token = "0x40000BC")]
	Canceled = 5
}
