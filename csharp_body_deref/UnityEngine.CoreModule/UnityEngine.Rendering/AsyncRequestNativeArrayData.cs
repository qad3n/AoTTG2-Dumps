// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncRequestNativeArrayData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000317")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct AsyncRequestNativeArrayData
{
	[Token(Token = "0x40007DE")]
	[FieldOffset(Offset = "0x0")]
	public unsafe void* nativeArrayBuffer;

	[Token(Token = "0x40007DF")]
	[FieldOffset(Offset = "0x8")]
	public long lengthInBytes;

	[Token(Token = "0x6001287")]
	public static AsyncRequestNativeArrayData CreateAndCheckAccess<T>(NativeArray<T> array) where T : struct
	{
		return default(AsyncRequestNativeArrayData);
	}
}
