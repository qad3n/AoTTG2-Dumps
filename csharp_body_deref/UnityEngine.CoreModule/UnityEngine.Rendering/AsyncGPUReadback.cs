using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x200029E")]
[UnityEngine.Bindings.StaticAccessor("AsyncGPUReadbackManager::GetInstance()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public static class AsyncGPUReadback
{
	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x4AF0C60", Offset = "0x4AF0C60", VA = "0x4AF0C60")]
	public static AsyncGPUReadbackRequest Request(GraphicsBuffer src, [Optional] Action<AsyncGPUReadbackRequest> callback)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x4AF0CF0", Offset = "0x4AF0CF0", VA = "0x4AF0CF0")]
	[UnityEngine.Bindings.NativeMethod("Request")]
	private unsafe static AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, AsyncRequestNativeArrayData* data)
	{
		return default(AsyncGPUReadbackRequest);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x4AF0D40", Offset = "0x4AF0D40", VA = "0x4AF0D40")]
	private unsafe static extern void Request_Internal_GraphicsBuffer_1_Injected(GraphicsBuffer buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret);
}
