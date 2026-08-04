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

[Token(Token = "0x2000032")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/AsyncReadManagerMetrics.h")]
public enum ProcessingState
{
	[Token(Token = "0x4000092")]
	Unknown,
	[Token(Token = "0x4000093")]
	InQueue,
	[Token(Token = "0x4000094")]
	Reading,
	[Token(Token = "0x4000095")]
	Completed,
	[Token(Token = "0x4000096")]
	Failed,
	[Token(Token = "0x4000097")]
	Canceled
}
