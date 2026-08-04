// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncGPUReadback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002A1")]
[UnityEngine.Bindings.StaticAccessor("AsyncGPUReadbackManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class AsyncGPUReadback
{
	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x4E18590", Offset = "0x4E18590", VA = "0x4E18590")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x4E18620", Offset = "0x4E18620", VA = "0x4E18620")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x4E18670", Offset = "0x4E18670", VA = "0x4E18670")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_1_Injected(GraphicsBuffer buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);
}
