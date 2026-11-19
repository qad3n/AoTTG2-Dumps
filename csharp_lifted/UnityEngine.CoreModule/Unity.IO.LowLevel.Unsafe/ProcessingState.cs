// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.ProcessingState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000045")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/AsyncReadManagerMetrics.h")]
public enum ProcessingState
{
	[Token(Token = "0x40000C5")]
	Unknown,
	[Token(Token = "0x40000C6")]
	InQueue,
	[Token(Token = "0x40000C7")]
	Reading,
	[Token(Token = "0x40000C8")]
	Completed,
	[Token(Token = "0x40000C9")]
	Failed,
	[Token(Token = "0x40000CA")]
	Canceled
}
