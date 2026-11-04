// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncGPUReadback
// Update status: CHANGED in this game update
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
	[Token(Token = "0x6001288")]
	[Address(RVA = "0x2F2F130", Offset = "0x2F2D730", VA = "0x182F2F130")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x2F2F240", Offset = "0x2F2D840", VA = "0x182F2F240")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, int size, int offset, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x2F2EF60", Offset = "0x2F2D560", VA = "0x182F2EF60")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x2F2F070", Offset = "0x2F2D670", VA = "0x182F2F070")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_2([UnityEngine.Bindings.NotNull] GraphicsBuffer src, int size, int offset, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x2F2EF00", Offset = "0x2F2D500", VA = "0x182F2EF00")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_1_Injected(IntPtr buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x2F2F020", Offset = "0x2F2D620", VA = "0x182F2F020")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_2_Injected(IntPtr src, int size, int offset, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);
}
