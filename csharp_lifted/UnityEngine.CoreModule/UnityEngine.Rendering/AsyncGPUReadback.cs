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

[Token(Token = "0x2000318")]
[UnityEngine.Bindings.StaticAccessor("AsyncGPUReadbackManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class AsyncGPUReadback
{
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x693CCB0", Offset = "0x693BCB0", VA = "0x693CCB0")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x693CE40", Offset = "0x693BE40", VA = "0x693CE40")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, int size, int offset, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x693CDA0", Offset = "0x693BDA0", VA = "0x693CDA0")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x693CF40", Offset = "0x693BF40", VA = "0x693CF40")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_2([UnityEngine.Bindings.NotNull] GraphicsBuffer src, int size, int offset, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x693D000", Offset = "0x693C000", VA = "0x693D000")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_1_Injected(IntPtr buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x693D040", Offset = "0x693C040", VA = "0x693D040")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_2_Injected(IntPtr src, int size, int offset, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);
}
