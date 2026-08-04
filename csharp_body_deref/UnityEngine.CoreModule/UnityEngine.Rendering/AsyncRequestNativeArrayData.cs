// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncRequestNativeArrayData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002A0")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
internal struct AsyncRequestNativeArrayData
{
	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x0")]
	public unsafe void* nativeArrayBuffer;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x8")]
	public long lengthInBytes;
}
