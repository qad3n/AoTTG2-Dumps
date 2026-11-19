// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Internal;
using UnityEngine.Profiling;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000363")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBuffer.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
public class CommandBuffer : IDisposable
{
	[Token(Token = "0x2000364")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x6953E70", Offset = "0x6952E70", VA = "0x6953E70")]
		public static IntPtr ConvertToNative(CommandBuffer commandBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40009C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static bool ThrowOnSetRenderTarget;

	[Token(Token = "0x40009C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x1700031F")]
	public string name
	{
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x69459C0", Offset = "0x69449C0", VA = "0x69459C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001375")]
		[Address(RVA = "0x6945B60", Offset = "0x6944B60", VA = "0x6945B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000320")]
	public int sizeInBytes
	{
		[Token(Token = "0x6001376")]
		[Address(RVA = "0x6945D10", Offset = "0x6944D10", VA = "0x6945D10")]
		[UnityEngine.Bindings.NativeMethod("GetBufferSize")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x6940A50", Offset = "0x693FA50", VA = "0x6940A50")]
	public void RequestAsyncReadback(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x6940C00", Offset = "0x693FC00", VA = "0x6940C00")]
	public void RequestAsyncReadback(GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x6940D60", Offset = "0x693FD60", VA = "0x6940D60")]
	public void RequestAsyncReadback(ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x6940EE0", Offset = "0x693FEE0", VA = "0x6940EE0")]
	public void RequestAsyncReadback(GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x6941060", Offset = "0x6940060", VA = "0x6941060")]
	public void RequestAsyncReadback(Texture src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x69411D0", Offset = "0x69401D0", VA = "0x69411D0")]
	public void RequestAsyncReadback(Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x6941340", Offset = "0x6940340", VA = "0x6941340")]
	public void RequestAsyncReadback(Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x6941520", Offset = "0x6940520", VA = "0x6941520")]
	public void RequestAsyncReadback(Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x69415B0", Offset = "0x69405B0", VA = "0x69415B0")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x6941770", Offset = "0x6940770", VA = "0x6941770")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x69419A0", Offset = "0x69409A0", VA = "0x69419A0")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600132F")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001330")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001331")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001332")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001333")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001334")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001335")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001336")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001337")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001338")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001339")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x6940B20", Offset = "0x693FB20", VA = "0x6940B20")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_1([UnityEngine.Bindings.NotNull] ComputeBuffer src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x6940DF0", Offset = "0x693FDF0", VA = "0x6940DF0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_2([UnityEngine.Bindings.NotNull] ComputeBuffer src, int size, int offset, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x69410E0", Offset = "0x69400E0", VA = "0x69410E0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_3([UnityEngine.Bindings.NotNull] Texture src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x6941250", Offset = "0x6940250", VA = "0x6941250")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_4([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x6941420", Offset = "0x6940420", VA = "0x6941420")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_5([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, GraphicsFormat dstFormat, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x6941660", Offset = "0x6940660", VA = "0x6941660")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_6([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x6941890", Offset = "0x6940890", VA = "0x6941890")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_7([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x6940C80", Offset = "0x693FC80", VA = "0x6940C80")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_8([UnityEngine.Bindings.NotNull] GraphicsBuffer src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x6940F70", Offset = "0x693FF70", VA = "0x6940F70")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_9([UnityEngine.Bindings.NotNull] GraphicsBuffer src, int size, int offset, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x6941D80", Offset = "0x6940D80", VA = "0x6941D80")]
	[UnityEngine.Bindings.NativeMethod("AddSetInvertCulling")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x6941E10", Offset = "0x6940E10", VA = "0x6941E10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
	private void Internal_SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001345")]
	[Address(RVA = "0x6941EA0", Offset = "0x6940EA0", VA = "0x6941EA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer();

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x6941ED0", Offset = "0x6940ED0", VA = "0x6941ED0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
	private IntPtr CreateGPUFence_Internal(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x6941F60", Offset = "0x6940F60", VA = "0x6941F60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
	private void WaitOnGPUFence_Internal(IntPtr fencePtr, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x6941FF0", Offset = "0x6940FF0", VA = "0x6941FF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
	private void ReleaseBuffer()
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x6942070", Offset = "0x6941070", VA = "0x6942070")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
	public void SetComputeFloatParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x6942190", Offset = "0x6941190", VA = "0x6942190")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
	public void SetComputeIntParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x69422A0", Offset = "0x69412A0", VA = "0x69422A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
	public void SetComputeVectorParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x69423C0", Offset = "0x69413C0", VA = "0x69423C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
	public void SetComputeVectorArrayParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x6942560", Offset = "0x6941560", VA = "0x6942560")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
	public void SetComputeMatrixParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x6942680", Offset = "0x6941680", VA = "0x6942680")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
	public void SetComputeMatrixArrayParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x6942820", Offset = "0x6941820", VA = "0x6942820")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
	private void Internal_SetComputeFloats([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x69429C0", Offset = "0x69419C0", VA = "0x69429C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
	private void Internal_SetComputeInts([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x6942B60", Offset = "0x6941B60", VA = "0x6942B60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
	private void Internal_SetComputeTextureParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x6942CA0", Offset = "0x6941CA0", VA = "0x6942CA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x6942DE0", Offset = "0x6941DE0", VA = "0x6942DE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x6942F10", Offset = "0x6941F10", VA = "0x6942F10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x6943050", Offset = "0x6942050", VA = "0x6943050")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantComputeBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x69431B0", Offset = "0x69421B0", VA = "0x69431B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x6943310", Offset = "0x6942310", VA = "0x6943310")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeParamsFromMaterial", HasExplicitThis = true)]
	private void Internal_SetComputeParamsFromMaterial([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x6943470", Offset = "0x6942470", VA = "0x6943470")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchCompute([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x69435B0", Offset = "0x69425B0", VA = "0x69435B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirect([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x69436F0", Offset = "0x69426F0", VA = "0x69436F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirectGraphicsBuffer([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x6943830", Offset = "0x6942830", VA = "0x6943830")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingComputeBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x6943960", Offset = "0x6942960", VA = "0x6943960")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x6943A90", Offset = "0x6942A90", VA = "0x6943A90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x6943BA0", Offset = "0x6942BA0", VA = "0x6943BA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantComputeBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x6943D00", Offset = "0x6942D00", VA = "0x6943D00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x6943E60", Offset = "0x6942E60", VA = "0x6943E60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingTextureParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x6943F70", Offset = "0x6942F70", VA = "0x6943F70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloatParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x6944090", Offset = "0x6943090", VA = "0x6944090")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingIntParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x69441A0", Offset = "0x69431A0", VA = "0x69441A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x69442C0", Offset = "0x69432C0", VA = "0x69442C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorArrayParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x6944460", Offset = "0x6943460", VA = "0x6944460")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x6944580", Offset = "0x6943580", VA = "0x6944580")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixArrayParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x6944720", Offset = "0x6943720", VA = "0x6944720")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloats([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x69448C0", Offset = "0x69438C0", VA = "0x69448C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
	private void Internal_SetRayTracingInts([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x6944A60", Offset = "0x6943A60", VA = "0x6944A60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_BuildRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x6944B60", Offset = "0x6943B60", VA = "0x6944B60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, [UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x6944CB0", Offset = "0x6943CB0", VA = "0x6944CB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetComputeRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x6944E10", Offset = "0x6943E10", VA = "0x6944E10")]
	[UnityEngine.Bindings.NativeMethod("AddSetRayTracingShaderPass")]
	public void SetRayTracingShaderPass([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x6945030", Offset = "0x6944030", VA = "0x6945030")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRays([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x69452D0", Offset = "0x69442D0", VA = "0x69452D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRaysIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRaysIndirect([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string rayGenShaderName, [UnityEngine.Bindings.NotNull] GraphicsBuffer argsBuffer, [Optional][DefaultParameterValue(0u)] uint argsOffset, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x69455B0", Offset = "0x69445B0", VA = "0x69455B0")]
	[UnityEngine.Bindings.NativeMethod("AddGenerateMips")]
	private void Internal_GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x6945640", Offset = "0x6944640", VA = "0x6945640")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueCC(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x6945720", Offset = "0x6944720", VA = "0x6945720")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueGC(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x6945800", Offset = "0x6944800", VA = "0x6945800")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueCG(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x69458E0", Offset = "0x69448E0", VA = "0x69458E0")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueGG(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x6945D90", Offset = "0x6944D90", VA = "0x6945D90")]
	[UnityEngine.Bindings.NativeMethod("ClearCommands")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x6945E10", Offset = "0x6944E10", VA = "0x6945E10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
	private void Internal_DrawMesh([UnityEngine.Bindings.NotNull] Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x6945FD0", Offset = "0x6944FD0", VA = "0x6945FD0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawMultipleMeshes")]
	private void Internal_DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x6946240", Offset = "0x6945240", VA = "0x6946240")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRenderer")]
	private void Internal_DrawRenderer([UnityEngine.Bindings.NotNull] Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x69463B0", Offset = "0x69453B0", VA = "0x69463B0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRendererList")]
	private void Internal_DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x6946440", Offset = "0x6945440", VA = "0x6946440")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProcedural")]
	private void Internal_DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x69465C0", Offset = "0x69455C0", VA = "0x69465C0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProceduralIndexed")]
	private void Internal_DrawProceduralIndexed(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x6946750", Offset = "0x6945750", VA = "0x6946750")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x69468D0", Offset = "0x69458D0", VA = "0x69468D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x6946A70", Offset = "0x6945A70", VA = "0x6946A70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirectGraphicsBuffer(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x6946BF0", Offset = "0x6945BF0", VA = "0x6946BF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x6946D90", Offset = "0x6945D90", VA = "0x6946D90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
	private void Internal_DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x6946FC0", Offset = "0x6945FC0", VA = "0x6946FC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x69471A0", Offset = "0x69461A0", VA = "0x69471A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x6947390", Offset = "0x6946390", VA = "0x6947390")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirectGraphicsBuffer(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x6947580", Offset = "0x6946580", VA = "0x6947580")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
	private void Internal_DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x6947620", Offset = "0x6946620", VA = "0x6947620")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Texture", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_Texture(int index, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x69476B0", Offset = "0x69466B0", VA = "0x69476B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_Buffer(int index, ComputeBuffer uav, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x6947780", Offset = "0x6946780", VA = "0x6947780")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_GraphicsBuffer(int index, GraphicsBuffer uav, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x6947850", Offset = "0x6946850", VA = "0x6947850")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ClearRandomWriteTargets", HasExplicitThis = true, ThrowsException = true)]
	public void ClearRandomWriteTargets()
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x69478D0", Offset = "0x69468D0", VA = "0x69478D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x6947970", Offset = "0x6946970", VA = "0x6947970")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x6947A10", Offset = "0x6946A10", VA = "0x6947A10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x6947A90", Offset = "0x6946A90", VA = "0x6947A90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
	private void CopyTexture_Internal(ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode)
	{
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x6947B70", Offset = "0x6946B70", VA = "0x6947B70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
	private void Blit_Texture(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x6947D50", Offset = "0x6946D50", VA = "0x6947D50")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x6947E50", Offset = "0x6946E50", VA = "0x6947E50")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x6947D60", Offset = "0x6946D60", VA = "0x6947D60")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x6947EE0", Offset = "0x6946EE0", VA = "0x6947EE0")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x6947FB0", Offset = "0x6946FB0", VA = "0x6947FB0")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x6948250", Offset = "0x6947250", VA = "0x6948250")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x69482F0", Offset = "0x69472F0", VA = "0x69482F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x6948380", Offset = "0x6947380", VA = "0x6948380")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x6948410", Offset = "0x6947410", VA = "0x6948410")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x69484B0", Offset = "0x69474B0", VA = "0x69484B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x6948550", Offset = "0x6947550", VA = "0x6948550")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x69485F0", Offset = "0x69475F0", VA = "0x69485F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x69487A0", Offset = "0x69477A0", VA = "0x69487A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	private void EnableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x6948830", Offset = "0x6947830", VA = "0x6948830")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
	private void EnableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x6948920", Offset = "0x6947920", VA = "0x6948920")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
	private void EnableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x6948A10", Offset = "0x6947A10", VA = "0x6948A10")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x6948A70", Offset = "0x6947A70", VA = "0x6948A70")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x6948B30", Offset = "0x6947B30", VA = "0x6948B30")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x6948BF0", Offset = "0x6947BF0", VA = "0x6948BF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x6948DA0", Offset = "0x6947DA0", VA = "0x6948DA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	private void DisableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x6948E30", Offset = "0x6947E30", VA = "0x6948E30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
	private void DisableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x6948F20", Offset = "0x6947F20", VA = "0x6948F20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
	private void DisableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x6949010", Offset = "0x6948010", VA = "0x6949010")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x6949070", Offset = "0x6948070", VA = "0x6949070")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A8")]
	[Address(RVA = "0x6949130", Offset = "0x6948130", VA = "0x6949130")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x69491F0", Offset = "0x69481F0", VA = "0x69491F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
	private void SetGlobalKeyword(GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x6949290", Offset = "0x6948290", VA = "0x6949290")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
	private void SetMaterialKeyword(Material material, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x69493B0", Offset = "0x69483B0", VA = "0x69493B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
	private void SetComputeKeyword(ComputeShader computeShader, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x69494D0", Offset = "0x69484D0", VA = "0x69494D0")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x6949530", Offset = "0x6948530", VA = "0x6949530")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x6949600", Offset = "0x6948600", VA = "0x6949600")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x69496D0", Offset = "0x69486D0", VA = "0x69496D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x6949770", Offset = "0x6948770", VA = "0x6949770")]
	[UnityEngine.Bindings.NativeMethod("AddSetGlobalDepthBias")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x6949840", Offset = "0x6948840", VA = "0x6949840")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	public void SetExecutionFlags(CommandBufferExecutionFlags flags)
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x6940AD0", Offset = "0x693FAD0", VA = "0x6940AD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	private bool ValidateAgainstExecutionFlags(CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x6949910", Offset = "0x6948910", VA = "0x6949910")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalFloatArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x69499A0", Offset = "0x69489A0", VA = "0x69499A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalVectorArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x6949A30", Offset = "0x6948A30", VA = "0x6949A30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalMatrixArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x6949AC0", Offset = "0x6948AC0", VA = "0x6949AC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalFloatArray(int nameID, [UnityEngine.Bindings.NotNull] float[] values)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x6949C10", Offset = "0x6948C10", VA = "0x6949C10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalVectorArray(int nameID, [UnityEngine.Bindings.NotNull] Vector4[] values)
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x6949D60", Offset = "0x6948D60", VA = "0x6949D60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalMatrixArray(int nameID, [UnityEngine.Bindings.NotNull] Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x6949EB0", Offset = "0x6948EB0", VA = "0x6949EB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetLateLatchProjectionMatrices([UnityEngine.Bindings.NotNull] Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x6949FF0", Offset = "0x6948FF0", VA = "0x6949FF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x694A080", Offset = "0x6949080", VA = "0x694A080")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x694A110", Offset = "0x6949110", VA = "0x694A110")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
	private void SetGlobalTexture_Impl(int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x694A1C0", Offset = "0x69491C0", VA = "0x694A1C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private void SetGlobalBufferInternal(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x694A270", Offset = "0x6949270", VA = "0x694A270")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private void SetGlobalGraphicsBufferInternal(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x694A320", Offset = "0x6949320", VA = "0x694A320")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
	private void SetShadowSamplingMode_Impl(ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x694A3B0", Offset = "0x69493B0", VA = "0x694A3B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
	private void IssuePluginEventInternal(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x694A440", Offset = "0x6949440", VA = "0x694A440")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x694A5F0", Offset = "0x69495F0", VA = "0x694A5F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x694A7A0", Offset = "0x69497A0", VA = "0x694A7A0")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x694A850", Offset = "0x6949850", VA = "0x694A850")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x694A7B0", Offset = "0x69497B0", VA = "0x694A7B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
	private void BeginSample_CustomSampler([UnityEngine.Bindings.NotNull] CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x694A860", Offset = "0x6949860", VA = "0x694A860")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
	private void EndSample_CustomSampler([UnityEngine.Bindings.NotNull] CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x694A980", Offset = "0x6949980", VA = "0x694A980")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
	private void IssuePluginEventAndDataInternal(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x694AA30", Offset = "0x6949A30", VA = "0x694AA30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
	private void IssuePluginCustomBlitInternal(IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x694AB10", Offset = "0x6949B10", VA = "0x694AB10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
	private void IssuePluginCustomTextureUpdateInternal(IntPtr callback, Texture targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2)
	{
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x694AC30", Offset = "0x6949C30", VA = "0x694AC30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private void SetGlobalConstantBufferInternal(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x694AD00", Offset = "0x6949D00", VA = "0x694AD00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private void SetGlobalConstantGraphicsBufferInternal(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x694ADD0", Offset = "0x6949DD0", VA = "0x694ADD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x694AE60", Offset = "0x6949E60", VA = "0x694AE60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x694AEF0", Offset = "0x6949EF0", VA = "0x694AEF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x694AF80", Offset = "0x6949F80", VA = "0x694AF80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x694B010", Offset = "0x694A010", VA = "0x694B010")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x694B0A0", Offset = "0x694A0A0", VA = "0x694B0A0")]
	private static void CheckThrowOnSetRenderTarget()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x694B120", Offset = "0x694A120", VA = "0x694B120")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x694B270", Offset = "0x694A270", VA = "0x694B270")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x694B390", Offset = "0x694A390", VA = "0x694B390")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x694B4C0", Offset = "0x694A4C0", VA = "0x694B4C0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x694B620", Offset = "0x694A620", VA = "0x694B620")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x694B780", Offset = "0x694A780", VA = "0x694B780")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x694B920", Offset = "0x694A920", VA = "0x694B920")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x694BAB0", Offset = "0x694AAB0", VA = "0x694BAB0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x694BC40", Offset = "0x694AC40", VA = "0x694BC40")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x694BDE0", Offset = "0x694ADE0", VA = "0x694BDE0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x694BFB0", Offset = "0x694AFB0", VA = "0x694BFB0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x694C120", Offset = "0x694B120", VA = "0x694C120")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x694C4F0", Offset = "0x694B4F0", VA = "0x694C4F0")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x694C8F0", Offset = "0x694B8F0", VA = "0x694C8F0")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x694CE20", Offset = "0x694BE20", VA = "0x694CE20")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x6947E60", Offset = "0x6946E60", VA = "0x6947E60")]
	private void ClearRenderTargetSingle_Internal(RTClearFlags clearFlags, Color color, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x6948140", Offset = "0x6947140", VA = "0x6948140")]
	private void ClearRenderTargetMulti_Internal(RTClearFlags clearFlags, Color[] colors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x694B1F0", Offset = "0x694A1F0", VA = "0x694B1F0")]
	private void SetRenderTargetSingle_Internal(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x694BA20", Offset = "0x694AA20", VA = "0x694BA20")]
	private void SetRenderTargetColorDepth_Internal(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x694C2D0", Offset = "0x694B2D0", VA = "0x694C2D0")]
	private void SetRenderTargetMulti_Internal(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x694CD60", Offset = "0x694BD60", VA = "0x694CD60")]
	private void SetRenderTargetColorDepthSubtarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x694C6C0", Offset = "0x694B6C0", VA = "0x694C6C0")]
	private void SetRenderTargetMultiSubtarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x694D500", Offset = "0x694C500", VA = "0x694D500")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x60013E9")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013EA")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x694D720", Offset = "0x694C720", VA = "0x694D720")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60013EC")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013ED")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x694D960", Offset = "0x694C960", VA = "0x694D960")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x694DA20", Offset = "0x694CA20", VA = "0x694DA20")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetComputeBufferNativeData([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x694D640", Offset = "0x694C640", VA = "0x694D640")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetComputeBufferData([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x694D970", Offset = "0x694C970", VA = "0x694D970")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private void InternalSetComputeBufferCounterValue([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x694DC00", Offset = "0x694CC00", VA = "0x694DC00")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x60013F3")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013F4")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x694DE20", Offset = "0x694CE20", VA = "0x694DE20")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60013F6")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013F7")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x694E060", Offset = "0x694D060", VA = "0x694E060")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x694E120", Offset = "0x694D120", VA = "0x694E120")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetGraphicsBufferNativeData([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x694DD40", Offset = "0x694CD40", VA = "0x694DD40")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetGraphicsBufferData([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x694E070", Offset = "0x694D070", VA = "0x694E070")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private void InternalSetGraphicsBufferCounterValue([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x694E300", Offset = "0x694D300", VA = "0x694E300")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginRenderPass", HasExplicitThis = true)]
	private void BeginRenderPass_Internal(int width, int height, int volumeDepth, int samples, ReadOnlySpan<AttachmentDescriptor> attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, ReadOnlySpan<SubPassDescriptor> subPasses, ReadOnlySpan<byte> debugNameUtf8)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x694E520", Offset = "0x694D520", VA = "0x694E520")]
	public void BeginRenderPass(int width, int height, int volumeDepth, int samples, NativeArray<AttachmentDescriptor> attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, NativeArray<SubPassDescriptor> subPasses, ReadOnlySpan<byte> debugNameUtf8)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x694E660", Offset = "0x694D660", VA = "0x694E660")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::NextSubPass", HasExplicitThis = true)]
	private void NextSubPass_Internal()
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x694E6E0", Offset = "0x694D6E0", VA = "0x694E6E0")]
	public void NextSubPass()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x694E770", Offset = "0x694D770", VA = "0x694E770")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndRenderPass", HasExplicitThis = true)]
	private void EndRenderPass_Internal()
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x694E7F0", Offset = "0x694D7F0", VA = "0x694E7F0")]
	public void EndRenderPass()
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x694E880", Offset = "0x694D880", VA = "0x694E880")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
	private void SetupCameraProperties_Internal([UnityEngine.Bindings.NotNull] Camera camera)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x694E980", Offset = "0x694D980", VA = "0x694E980")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x694E9F0", Offset = "0x694D9F0", VA = "0x694E9F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
	private void InvokeOnRenderObjectCallbacks_Internal()
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x694EA70", Offset = "0x694DA70", VA = "0x694EA70")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x694EB00", Offset = "0x694DB00", VA = "0x694EB00")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x694EBA0", Offset = "0x694DBA0", VA = "0x694EBA0")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x694EC40", Offset = "0x694DC40", VA = "0x694EC40")]
	public void SetShadingRateImage(in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x694ECE0", Offset = "0x694DCE0", VA = "0x694ECE0")]
	public void ResetShadingRate()
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x694EB50", Offset = "0x694DB50", VA = "0x694EB50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateFragmentSize_Impl", HasExplicitThis = true)]
	private void SetShadingRateFragmentSize_Impl(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x694EBF0", Offset = "0x694DBF0", VA = "0x694EBF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateCombiner_Impl", HasExplicitThis = true)]
	private void SetShadingRateCombiner_Impl(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x694EC90", Offset = "0x694DC90", VA = "0x694EC90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateImage_Impl", HasExplicitThis = true)]
	private void SetShadingRateImage_Impl(in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x694ED30", Offset = "0x694DD30", VA = "0x694ED30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ResetShadingRate_Impl", HasExplicitThis = true)]
	private void ResetShadingRate_Impl()
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x694EE70", Offset = "0x694DE70", VA = "0x694EE70", Slot = "1")]
	~CommandBuffer()
	{
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x694EFA0", Offset = "0x694DFA0", VA = "0x694EFA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x694EF40", Offset = "0x694DF40", VA = "0x694EF40")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x694F040", Offset = "0x694E040", VA = "0x694F040")]
	public CommandBuffer()
	{
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x694F080", Offset = "0x694E080", VA = "0x694F080")]
	public void Release()
	{
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x694F090", Offset = "0x694E090", VA = "0x694F090")]
	public GraphicsFence CreateAsyncGraphicsFence()
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x694F0A0", Offset = "0x694E0A0", VA = "0x694F0A0")]
	public GraphicsFence CreateGraphicsFence(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x694F190", Offset = "0x694E190", VA = "0x694F190")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x694F2F0", Offset = "0x694E2F0", VA = "0x694F2F0")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x694F330", Offset = "0x694E330", VA = "0x694F330")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x694F360", Offset = "0x694E360", VA = "0x694F360")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x694F3A0", Offset = "0x694E3A0", VA = "0x694F3A0")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x694F3D0", Offset = "0x694E3D0", VA = "0x694F3D0")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x694F400", Offset = "0x694E400", VA = "0x694F400")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x694F430", Offset = "0x694E430", VA = "0x694F430")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x694F460", Offset = "0x694E460", VA = "0x694F460")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x694F470", Offset = "0x694E470", VA = "0x694F470")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x694F4A0", Offset = "0x694E4A0", VA = "0x694F4A0")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x694F4B0", Offset = "0x694E4B0", VA = "0x694F4B0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x694F500", Offset = "0x694E500", VA = "0x694F500")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x694F520", Offset = "0x694E520", VA = "0x694F520")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x694F570", Offset = "0x694E570", VA = "0x694F570")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x694F590", Offset = "0x694E590", VA = "0x694F590")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x694F5E0", Offset = "0x694E5E0", VA = "0x694F5E0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x694F600", Offset = "0x694E600", VA = "0x694F600")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x694F610", Offset = "0x694E610", VA = "0x694F610")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x694F650", Offset = "0x694E650", VA = "0x694F650")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x694F660", Offset = "0x694E660", VA = "0x694F660")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x694F6A0", Offset = "0x694E6A0", VA = "0x694F6A0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x694F6B0", Offset = "0x694E6B0", VA = "0x694F6B0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x694F6F0", Offset = "0x694E6F0", VA = "0x694F6F0")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x694F700", Offset = "0x694E700", VA = "0x694F700")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x694F750", Offset = "0x694E750", VA = "0x694F750")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x694F760", Offset = "0x694E760", VA = "0x694F760")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x694F7B0", Offset = "0x694E7B0", VA = "0x694F7B0")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x694F7C0", Offset = "0x694E7C0", VA = "0x694F7C0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x694F7D0", Offset = "0x694E7D0", VA = "0x694F7D0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x694F870", Offset = "0x694E870", VA = "0x694F870")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x694F910", Offset = "0x694E910", VA = "0x694F910")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x694F990", Offset = "0x694E990", VA = "0x694F990")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x694FA00", Offset = "0x694EA00", VA = "0x694FA00")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x694FA10", Offset = "0x694EA10", VA = "0x694FA10")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x694FA40", Offset = "0x694EA40", VA = "0x694FA40")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x694FA50", Offset = "0x694EA50", VA = "0x694FA50")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x694FA90", Offset = "0x694EA90", VA = "0x694FA90")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x694FAA0", Offset = "0x694EAA0", VA = "0x694FAA0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x694FAD0", Offset = "0x694EAD0", VA = "0x694FAD0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x694FAE0", Offset = "0x694EAE0", VA = "0x694FAE0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x694FB10", Offset = "0x694EB10", VA = "0x694FB10")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x694FB20", Offset = "0x694EB20", VA = "0x694FB20")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x694FB50", Offset = "0x694EB50", VA = "0x694FB50")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x694FB60", Offset = "0x694EB60", VA = "0x694FB60")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x694FB70", Offset = "0x694EB70", VA = "0x694FB70")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x694FBC0", Offset = "0x694EBC0", VA = "0x694FBC0")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x694FBD0", Offset = "0x694EBD0", VA = "0x694FBD0")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x694FC20", Offset = "0x694EC20", VA = "0x694FC20")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x694FC50", Offset = "0x694EC50", VA = "0x694FC50")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x694FC60", Offset = "0x694EC60", VA = "0x694FC60")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x694FCA0", Offset = "0x694ECA0", VA = "0x694FCA0")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x694FCB0", Offset = "0x694ECB0", VA = "0x694FCB0")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x694FCE0", Offset = "0x694ECE0", VA = "0x694FCE0")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x694FCF0", Offset = "0x694ECF0", VA = "0x694FCF0")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x694FD20", Offset = "0x694ED20", VA = "0x694FD20")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x694FD30", Offset = "0x694ED30", VA = "0x694FD30")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x694FD60", Offset = "0x694ED60", VA = "0x694FD60")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x694FD70", Offset = "0x694ED70", VA = "0x694FD70")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x694FDB0", Offset = "0x694EDB0", VA = "0x694FDB0")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x694FDC0", Offset = "0x694EDC0", VA = "0x694FDC0")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x694FDF0", Offset = "0x694EDF0", VA = "0x694FDF0")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x694FE00", Offset = "0x694EE00", VA = "0x694FE00")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x694FE30", Offset = "0x694EE30", VA = "0x694FE30")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x694FE40", Offset = "0x694EE40", VA = "0x694FE40")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x694FE70", Offset = "0x694EE70", VA = "0x694FE70")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x694FE80", Offset = "0x694EE80", VA = "0x694FE80")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x694FEA0", Offset = "0x694EEA0", VA = "0x694FEA0")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x694FEB0", Offset = "0x694EEB0", VA = "0x694FEB0")]
	public void GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x694FF70", Offset = "0x694EF70", VA = "0x694FF70")]
	public void GenerateMips(RenderTexture rt)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x69500E0", Offset = "0x694F0E0", VA = "0x69500E0")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x6950360", Offset = "0x694F360", VA = "0x6950360")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x69503A0", Offset = "0x694F3A0", VA = "0x69503A0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x69503F0", Offset = "0x694F3F0", VA = "0x69503F0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x6950440", Offset = "0x694F440", VA = "0x6950440")]
	[ExcludeFromDocs]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x69504F0", Offset = "0x694F4F0", VA = "0x69504F0")]
	public void DrawRenderer(Renderer renderer, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass)
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x69506F0", Offset = "0x694F6F0", VA = "0x69506F0")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x6950700", Offset = "0x694F700", VA = "0x6950700")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x6950710", Offset = "0x694F710", VA = "0x6950710")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x6950770", Offset = "0x694F770", VA = "0x6950770")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, [DefaultValue("1")] int instanceCount, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x6950980", Offset = "0x694F980", VA = "0x6950980")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x69509D0", Offset = "0x694F9D0", VA = "0x69509D0")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x6950A20", Offset = "0x694FA20", VA = "0x6950A20")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x6950C50", Offset = "0x694FC50", VA = "0x6950C50")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x6950CA0", Offset = "0x694FCA0", VA = "0x6950CA0")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x6950CF0", Offset = "0x694FCF0", VA = "0x6950CF0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x6950F70", Offset = "0x694FF70", VA = "0x6950F70")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x6950FC0", Offset = "0x694FFC0", VA = "0x6950FC0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x6951010", Offset = "0x6950010", VA = "0x6951010")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x6951290", Offset = "0x6950290", VA = "0x6951290")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x69512E0", Offset = "0x69502E0", VA = "0x69512E0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x6951330", Offset = "0x6950330", VA = "0x6951330")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x69515B0", Offset = "0x69505B0", VA = "0x69515B0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x6951600", Offset = "0x6950600", VA = "0x6951600")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x6951650", Offset = "0x6950650", VA = "0x6951650")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x69518D0", Offset = "0x69508D0", VA = "0x69518D0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x6951920", Offset = "0x6950920", VA = "0x6951920")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x6951970", Offset = "0x6950970", VA = "0x6951970")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x6951D20", Offset = "0x6950D20", VA = "0x6951D20")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x6951D40", Offset = "0x6950D40", VA = "0x6951D40")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x6951D70", Offset = "0x6950D70", VA = "0x6951D70")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, [Optional] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x6951FE0", Offset = "0x6950FE0", VA = "0x6951FE0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x6952210", Offset = "0x6951210", VA = "0x6952210")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x6952230", Offset = "0x6951230", VA = "0x6952230")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x6952250", Offset = "0x6951250", VA = "0x6952250")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x6952480", Offset = "0x6951480", VA = "0x6952480")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x69524A0", Offset = "0x69514A0", VA = "0x69524A0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x69524C0", Offset = "0x69514C0", VA = "0x69524C0")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x6952520", Offset = "0x6951520", VA = "0x6952520")]
	public void SetRandomWriteTarget(int index, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x69525C0", Offset = "0x69515C0", VA = "0x69525C0")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x6952680", Offset = "0x6951680", VA = "0x6952680")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x6952690", Offset = "0x6951690", VA = "0x6952690")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x6952750", Offset = "0x6951750", VA = "0x6952750")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x6952760", Offset = "0x6951760", VA = "0x6952760")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x69527F0", Offset = "0x69517F0", VA = "0x69527F0")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x6952880", Offset = "0x6951880", VA = "0x6952880")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x6952910", Offset = "0x6951910", VA = "0x6952910")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x69529A0", Offset = "0x69519A0", VA = "0x69529A0")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x6952A20", Offset = "0x6951A20", VA = "0x6952A20")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, RenderTargetIdentifier dst, int dstElement)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x6952AB0", Offset = "0x6951AB0", VA = "0x6952AB0")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x6952B50", Offset = "0x6951B50", VA = "0x6952B50")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x6952C10", Offset = "0x6951C10", VA = "0x6952C10")]
	public void Blit(Texture source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x6952CB0", Offset = "0x6951CB0", VA = "0x6952CB0")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x6952D20", Offset = "0x6951D20", VA = "0x6952D20")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x6952D90", Offset = "0x6951D90", VA = "0x6952D90")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x6952E00", Offset = "0x6951E00", VA = "0x6952E00")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x6952E80", Offset = "0x6951E80", VA = "0x6952E80")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x6952F00", Offset = "0x6951F00", VA = "0x6952F00")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x6952FA0", Offset = "0x6951FA0", VA = "0x6952FA0")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x6952FD0", Offset = "0x6951FD0", VA = "0x6952FD0")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x69530E0", Offset = "0x69520E0", VA = "0x69530E0")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x6953110", Offset = "0x6952110", VA = "0x6953110")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x6953140", Offset = "0x6952140", VA = "0x6953140")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x6953250", Offset = "0x6952250", VA = "0x6953250")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x6953280", Offset = "0x6952280", VA = "0x6953280")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x69532B0", Offset = "0x69522B0", VA = "0x69532B0")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x69533C0", Offset = "0x69523C0", VA = "0x69533C0")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x69533F0", Offset = "0x69523F0", VA = "0x69533F0")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x69534E0", Offset = "0x69524E0", VA = "0x69534E0")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x6953540", Offset = "0x6952540", VA = "0x6953540")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x6953480", Offset = "0x6952480", VA = "0x6953480")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x69535D0", Offset = "0x69525D0", VA = "0x69535D0")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x6953660", Offset = "0x6952660", VA = "0x6953660")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x69536D0", Offset = "0x69526D0", VA = "0x69536D0")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x6953760", Offset = "0x6952760", VA = "0x6953760")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x69537D0", Offset = "0x69527D0", VA = "0x69537D0")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x6953850", Offset = "0x6952850", VA = "0x6953850")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x69538F0", Offset = "0x69528F0", VA = "0x69538F0")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x6953970", Offset = "0x6952970", VA = "0x6953970")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x6953A10", Offset = "0x6952A10", VA = "0x6953A10")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x6953AB0", Offset = "0x6952AB0", VA = "0x6953AB0")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x6953B00", Offset = "0x6952B00", VA = "0x6953B00")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x6953BB0", Offset = "0x6952BB0", VA = "0x6953BB0")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x6953CA0", Offset = "0x6952CA0", VA = "0x6953CA0")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x6953D70", Offset = "0x6952D70", VA = "0x6953D70")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x6941A60", Offset = "0x6940A60", VA = "0x6941A60")]
	private unsafe static extern void Internal_RequestAsyncReadback_1_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x6941AB0", Offset = "0x6940AB0", VA = "0x6941AB0")]
	private unsafe static extern void Internal_RequestAsyncReadback_2_Injected(IntPtr _unity_self, IntPtr src, int size, int offset, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x6941B10", Offset = "0x6940B10", VA = "0x6941B10")]
	private unsafe static extern void Internal_RequestAsyncReadback_3_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x6941B60", Offset = "0x6940B60", VA = "0x6941B60")]
	private unsafe static extern void Internal_RequestAsyncReadback_4_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x6941BB0", Offset = "0x6940BB0", VA = "0x6941BB0")]
	private unsafe static extern void Internal_RequestAsyncReadback_5_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x6941C10", Offset = "0x6940C10", VA = "0x6941C10")]
	private unsafe static extern void Internal_RequestAsyncReadback_6_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x6941C70", Offset = "0x6940C70", VA = "0x6941C70")]
	private unsafe static extern void Internal_RequestAsyncReadback_7_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x6941CD0", Offset = "0x6940CD0", VA = "0x6941CD0")]
	private unsafe static extern void Internal_RequestAsyncReadback_8_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x6941D20", Offset = "0x6940D20", VA = "0x6941D20")]
	private unsafe static extern void Internal_RequestAsyncReadback_9_Injected(IntPtr _unity_self, IntPtr src, int size, int offset, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x6941DD0", Offset = "0x6940DD0", VA = "0x6941DD0")]
	private static extern void SetInvertCulling_Injected(IntPtr _unity_self, bool invertCulling);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x6941E60", Offset = "0x6940E60", VA = "0x6941E60")]
	private static extern void Internal_SetSinglePassStereo_Injected(IntPtr _unity_self, SinglePassStereoMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x6941F20", Offset = "0x6940F20", VA = "0x6941F20")]
	private static extern IntPtr CreateGPUFence_Internal_Injected(IntPtr _unity_self, GraphicsFenceType fenceType, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x6941FB0", Offset = "0x6940FB0", VA = "0x6941FB0")]
	private static extern void WaitOnGPUFence_Internal_Injected(IntPtr _unity_self, IntPtr fencePtr, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x6942040", Offset = "0x6941040", VA = "0x6942040")]
	private static extern void ReleaseBuffer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x6942140", Offset = "0x6941140", VA = "0x6942140")]
	private static extern void SetComputeFloatParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x6942250", Offset = "0x6941250", VA = "0x6942250")]
	private static extern void SetComputeIntParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x6942370", Offset = "0x6941370", VA = "0x6942370")]
	private static extern void SetComputeVectorParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x6942510", Offset = "0x6941510", VA = "0x6942510")]
	private static extern void SetComputeVectorArrayParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x6942630", Offset = "0x6941630", VA = "0x6942630")]
	private static extern void SetComputeMatrixParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x69427D0", Offset = "0x69417D0", VA = "0x69427D0")]
	private static extern void SetComputeMatrixArrayParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x6942970", Offset = "0x6941970", VA = "0x6942970")]
	private static extern void Internal_SetComputeFloats_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x6942B10", Offset = "0x6941B10", VA = "0x6942B10")]
	private static extern void Internal_SetComputeInts_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x6942C40", Offset = "0x6941C40", VA = "0x6942C40")]
	private static extern void Internal_SetComputeTextureParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x6942D90", Offset = "0x6941D90", VA = "0x6942D90")]
	private static extern void Internal_SetComputeBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x6942EC0", Offset = "0x6941EC0", VA = "0x6942EC0")]
	private static extern void Internal_SetComputeGraphicsBufferHandleParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x6943000", Offset = "0x6942000", VA = "0x6943000")]
	private static extern void Internal_SetComputeGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x6943150", Offset = "0x6942150", VA = "0x6943150")]
	private static extern void Internal_SetComputeConstantComputeBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x69432B0", Offset = "0x69422B0", VA = "0x69432B0")]
	private static extern void Internal_SetComputeConstantGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x6943420", Offset = "0x6942420", VA = "0x6943420")]
	private static extern void Internal_SetComputeParamsFromMaterial_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr material);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x6943550", Offset = "0x6942550", VA = "0x6943550")]
	private static extern void Internal_DispatchCompute_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x69436A0", Offset = "0x69426A0", VA = "0x69436A0")]
	private static extern void Internal_DispatchComputeIndirect_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x69437E0", Offset = "0x69427E0", VA = "0x69437E0")]
	private static extern void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x6943910", Offset = "0x6942910", VA = "0x6943910")]
	private static extern void Internal_SetRayTracingComputeBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x6943A40", Offset = "0x6942A40", VA = "0x6943A40")]
	private static extern void Internal_SetRayTracingGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x6943B50", Offset = "0x6942B50", VA = "0x6943B50")]
	private static extern void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x6943CA0", Offset = "0x6942CA0", VA = "0x6943CA0")]
	private static extern void Internal_SetRayTracingConstantComputeBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x6943E00", Offset = "0x6942E00", VA = "0x6943E00")]
	private static extern void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x6943F20", Offset = "0x6942F20", VA = "0x6943F20")]
	private static extern void Internal_SetRayTracingTextureParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D6")]
	[Address(RVA = "0x6944040", Offset = "0x6943040", VA = "0x6944040")]
	private static extern void Internal_SetRayTracingFloatParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x6944150", Offset = "0x6943150", VA = "0x6944150")]
	private static extern void Internal_SetRayTracingIntParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x6944270", Offset = "0x6943270", VA = "0x6944270")]
	private static extern void Internal_SetRayTracingVectorParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x6944410", Offset = "0x6943410", VA = "0x6944410")]
	private static extern void Internal_SetRayTracingVectorArrayParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x6944530", Offset = "0x6943530", VA = "0x6944530")]
	private static extern void Internal_SetRayTracingMatrixParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x69446D0", Offset = "0x69436D0", VA = "0x69446D0")]
	private static extern void Internal_SetRayTracingMatrixArrayParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x6944870", Offset = "0x6943870", VA = "0x6944870")]
	private static extern void Internal_SetRayTracingFloats_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x6944A10", Offset = "0x6943A10", VA = "0x6944A10")]
	private static extern void Internal_SetRayTracingInts_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x6944B20", Offset = "0x6943B20", VA = "0x6944B20")]
	private static extern void Internal_BuildRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr accelerationStructure, [In] ref RayTracingAccelerationStructure.BuildSettings buildSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x6944C60", Offset = "0x6943C60", VA = "0x6944C60")]
	private static extern void Internal_SetRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x6944DC0", Offset = "0x6943DC0", VA = "0x6944DC0")]
	private static extern void Internal_SetComputeRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x6944FF0", Offset = "0x6943FF0", VA = "0x6944FF0")]
	private static extern void SetRayTracingShaderPass_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x6945270", Offset = "0x6944270", VA = "0x6945270")]
	private static extern void Internal_DispatchRays_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper rayGenShaderName, uint width, uint height, uint depth, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x6945550", Offset = "0x6944550", VA = "0x6945550")]
	private static extern void Internal_DispatchRaysIndirect_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper rayGenShaderName, IntPtr argsBuffer, uint argsOffset, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x6945600", Offset = "0x6944600", VA = "0x6945600")]
	private static extern void Internal_GenerateMips_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x69456D0", Offset = "0x69446D0", VA = "0x69456D0")]
	private static extern void CopyCounterValueCC_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x69457B0", Offset = "0x69447B0", VA = "0x69457B0")]
	private static extern void CopyCounterValueGC_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x6945890", Offset = "0x6944890", VA = "0x6945890")]
	private static extern void CopyCounterValueCG_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x6945970", Offset = "0x6944970", VA = "0x6945970")]
	private static extern void CopyCounterValueGG_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x6945B20", Offset = "0x6944B20", VA = "0x6945B20")]
	private static extern void get_name_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x6945CD0", Offset = "0x6944CD0", VA = "0x6945CD0")]
	private static extern void set_name_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x6945D60", Offset = "0x6944D60", VA = "0x6945D60")]
	private static extern int get_sizeInBytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x6945DE0", Offset = "0x6944DE0", VA = "0x6945DE0")]
	private static extern void Clear_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x6945F70", Offset = "0x6944F70", VA = "0x6945F70")]
	private static extern void Internal_DrawMesh_Injected(IntPtr _unity_self, IntPtr mesh, [In] ref Matrix4x4 matrix, IntPtr material, int submeshIndex, int shaderPass, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x69461E0", Offset = "0x69451E0", VA = "0x69461E0")]
	private static extern void Internal_DrawMultipleMeshes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper matrices, Mesh[] meshes, ref ManagedSpanWrapper subsetIndices, int count, IntPtr material, int shaderPass, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x6946360", Offset = "0x6945360", VA = "0x6946360")]
	private static extern void Internal_DrawRenderer_Injected(IntPtr _unity_self, IntPtr renderer, IntPtr material, int submeshIndex, int shaderPass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x6946400", Offset = "0x6945400", VA = "0x6946400")]
	private static extern void Internal_DrawRendererList_Injected(IntPtr _unity_self, [In] ref RendererList rendererList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x6946560", Offset = "0x6945560", VA = "0x6946560")]
	private static extern void Internal_DrawProcedural_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x69466F0", Offset = "0x69456F0", VA = "0x69466F0")]
	private static extern void Internal_DrawProceduralIndexed_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x6946870", Offset = "0x6945870", VA = "0x6946870")]
	private static extern void Internal_DrawProceduralIndirect_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x6946A10", Offset = "0x6945A10", VA = "0x6946A10")]
	private static extern void Internal_DrawProceduralIndexedIndirect_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x6946B90", Offset = "0x6945B90", VA = "0x6946B90")]
	private static extern void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x6946D30", Offset = "0x6945D30", VA = "0x6946D30")]
	private static extern void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x6946F60", Offset = "0x6945F60", VA = "0x6946F60")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ref ManagedSpanWrapper matrices, int count, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x6947140", Offset = "0x6946140", VA = "0x6947140")]
	private static extern void Internal_DrawMeshInstancedProcedural_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, int count, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x6947330", Offset = "0x6946330", VA = "0x6947330")]
	private static extern void Internal_DrawMeshInstancedIndirect_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x6947520", Offset = "0x6946520", VA = "0x6947520")]
	private static extern void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x69475E0", Offset = "0x69465E0", VA = "0x69475E0")]
	private static extern void Internal_DrawOcclusionMesh_Injected(IntPtr _unity_self, [In] ref RectInt normalizedCamViewport);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x6947670", Offset = "0x6946670", VA = "0x6947670")]
	private static extern void SetRandomWriteTarget_Texture_Injected(IntPtr _unity_self, int index, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x6947730", Offset = "0x6946730", VA = "0x6947730")]
	private static extern void SetRandomWriteTarget_Buffer_Injected(IntPtr _unity_self, int index, IntPtr uav, bool preserveCounterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x6947800", Offset = "0x6946800", VA = "0x6947800")]
	private static extern void SetRandomWriteTarget_GraphicsBuffer_Injected(IntPtr _unity_self, int index, IntPtr uav, bool preserveCounterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x69478A0", Offset = "0x69468A0", VA = "0x69478A0")]
	private static extern void ClearRandomWriteTargets_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001500")]
	[Address(RVA = "0x6947930", Offset = "0x6946930", VA = "0x6947930")]
	private static extern void SetViewport_Injected(IntPtr _unity_self, [In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001501")]
	[Address(RVA = "0x69479D0", Offset = "0x69469D0", VA = "0x69479D0")]
	private static extern void EnableScissorRect_Injected(IntPtr _unity_self, [In] ref Rect scissor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001502")]
	[Address(RVA = "0x6947A60", Offset = "0x6946A60", VA = "0x6947A60")]
	private static extern void DisableScissorRect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x6947B10", Offset = "0x6946B10", VA = "0x6947B10")]
	private static extern void CopyTexture_Internal_Injected(IntPtr _unity_self, ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x6947CF0", Offset = "0x6946CF0", VA = "0x6947CF0")]
	private static extern void Blit_Texture_Injected(IntPtr _unity_self, IntPtr source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x69482B0", Offset = "0x69472B0", VA = "0x69482B0")]
	private static extern void SetGlobalFloat_Injected(IntPtr _unity_self, int nameID, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x6948340", Offset = "0x6947340", VA = "0x6948340")]
	private static extern void SetGlobalInt_Injected(IntPtr _unity_self, int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001507")]
	[Address(RVA = "0x69483D0", Offset = "0x69473D0", VA = "0x69483D0")]
	private static extern void SetGlobalInteger_Injected(IntPtr _unity_self, int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001508")]
	[Address(RVA = "0x6948470", Offset = "0x6947470", VA = "0x6948470")]
	private static extern void SetGlobalVector_Injected(IntPtr _unity_self, int nameID, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001509")]
	[Address(RVA = "0x6948510", Offset = "0x6947510", VA = "0x6948510")]
	private static extern void SetGlobalColor_Injected(IntPtr _unity_self, int nameID, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150A")]
	[Address(RVA = "0x69485B0", Offset = "0x69475B0", VA = "0x69485B0")]
	private static extern void SetGlobalMatrix_Injected(IntPtr _unity_self, int nameID, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150B")]
	[Address(RVA = "0x6948760", Offset = "0x6947760", VA = "0x6948760")]
	private static extern void EnableShaderKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150C")]
	[Address(RVA = "0x69487F0", Offset = "0x69477F0", VA = "0x69487F0")]
	private static extern void EnableGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150D")]
	[Address(RVA = "0x69488E0", Offset = "0x69478E0", VA = "0x69488E0")]
	private static extern void EnableMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150E")]
	[Address(RVA = "0x69489D0", Offset = "0x69479D0", VA = "0x69489D0")]
	private static extern void EnableComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150F")]
	[Address(RVA = "0x6948D60", Offset = "0x6947D60", VA = "0x6948D60")]
	private static extern void DisableShaderKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001510")]
	[Address(RVA = "0x6948DF0", Offset = "0x6947DF0", VA = "0x6948DF0")]
	private static extern void DisableGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001511")]
	[Address(RVA = "0x6948EE0", Offset = "0x6947EE0", VA = "0x6948EE0")]
	private static extern void DisableMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001512")]
	[Address(RVA = "0x6948FD0", Offset = "0x6947FD0", VA = "0x6948FD0")]
	private static extern void DisableComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001513")]
	[Address(RVA = "0x6949250", Offset = "0x6948250", VA = "0x6949250")]
	private static extern void SetGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001514")]
	[Address(RVA = "0x6949360", Offset = "0x6948360", VA = "0x6949360")]
	private static extern void SetMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001515")]
	[Address(RVA = "0x6949480", Offset = "0x6948480", VA = "0x6949480")]
	private static extern void SetComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001516")]
	[Address(RVA = "0x6949730", Offset = "0x6948730", VA = "0x6949730")]
	private static extern void SetViewProjectionMatrices_Injected(IntPtr _unity_self, [In] ref Matrix4x4 view, [In] ref Matrix4x4 proj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001517")]
	[Address(RVA = "0x69497E0", Offset = "0x69487E0", VA = "0x69497E0")]
	private static extern void SetGlobalDepthBias_Injected(IntPtr _unity_self, float bias, float slopeBias);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001518")]
	[Address(RVA = "0x6949890", Offset = "0x6948890", VA = "0x6949890")]
	private static extern void SetExecutionFlags_Injected(IntPtr _unity_self, CommandBufferExecutionFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001519")]
	[Address(RVA = "0x69498D0", Offset = "0x69488D0", VA = "0x69498D0")]
	private static extern bool ValidateAgainstExecutionFlags_Injected(IntPtr _unity_self, CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151A")]
	[Address(RVA = "0x6949960", Offset = "0x6948960", VA = "0x6949960")]
	private static extern void SetGlobalFloatArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151B")]
	[Address(RVA = "0x69499F0", Offset = "0x69489F0", VA = "0x69499F0")]
	private static extern void SetGlobalVectorArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151C")]
	[Address(RVA = "0x6949A80", Offset = "0x6948A80", VA = "0x6949A80")]
	private static extern void SetGlobalMatrixArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151D")]
	[Address(RVA = "0x6949BD0", Offset = "0x6948BD0", VA = "0x6949BD0")]
	private static extern void SetGlobalFloatArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151E")]
	[Address(RVA = "0x6949D20", Offset = "0x6948D20", VA = "0x6949D20")]
	private static extern void SetGlobalVectorArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151F")]
	[Address(RVA = "0x6949E70", Offset = "0x6948E70", VA = "0x6949E70")]
	private static extern void SetGlobalMatrixArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001520")]
	[Address(RVA = "0x6949FB0", Offset = "0x6948FB0", VA = "0x6949FB0")]
	private static extern void SetLateLatchProjectionMatrices_Injected(IntPtr _unity_self, ref ManagedSpanWrapper projectionMat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001521")]
	[Address(RVA = "0x694A040", Offset = "0x6949040", VA = "0x694A040")]
	private static extern void MarkLateLatchMatrixShaderPropertyID_Injected(IntPtr _unity_self, CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001522")]
	[Address(RVA = "0x694A0D0", Offset = "0x69490D0", VA = "0x694A0D0")]
	private static extern void UnmarkLateLatchMatrix_Injected(IntPtr _unity_self, CameraLateLatchMatrixType matrixPropertyType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001523")]
	[Address(RVA = "0x694A170", Offset = "0x6949170", VA = "0x694A170")]
	private static extern void SetGlobalTexture_Impl_Injected(IntPtr _unity_self, int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001524")]
	[Address(RVA = "0x694A230", Offset = "0x6949230", VA = "0x694A230")]
	private static extern void SetGlobalBufferInternal_Injected(IntPtr _unity_self, int nameID, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001525")]
	[Address(RVA = "0x694A2E0", Offset = "0x69492E0", VA = "0x694A2E0")]
	private static extern void SetGlobalGraphicsBufferInternal_Injected(IntPtr _unity_self, int nameID, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001526")]
	[Address(RVA = "0x694A370", Offset = "0x6949370", VA = "0x694A370")]
	private static extern void SetShadowSamplingMode_Impl_Injected(IntPtr _unity_self, ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001527")]
	[Address(RVA = "0x694A400", Offset = "0x6949400", VA = "0x694A400")]
	private static extern void IssuePluginEventInternal_Injected(IntPtr _unity_self, IntPtr callback, int eventID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001528")]
	[Address(RVA = "0x694A5B0", Offset = "0x69495B0", VA = "0x694A5B0")]
	private static extern void BeginSample_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001529")]
	[Address(RVA = "0x694A760", Offset = "0x6949760", VA = "0x694A760")]
	private static extern void EndSample_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152A")]
	[Address(RVA = "0x694A900", Offset = "0x6949900", VA = "0x694A900")]
	private static extern void BeginSample_CustomSampler_Injected(IntPtr _unity_self, IntPtr sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152B")]
	[Address(RVA = "0x694A940", Offset = "0x6949940", VA = "0x694A940")]
	private static extern void EndSample_CustomSampler_Injected(IntPtr _unity_self, IntPtr sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152C")]
	[Address(RVA = "0x694A9E0", Offset = "0x69499E0", VA = "0x694A9E0")]
	private static extern void IssuePluginEventAndDataInternal_Injected(IntPtr _unity_self, IntPtr callback, int eventID, IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152D")]
	[Address(RVA = "0x694AAB0", Offset = "0x6949AB0", VA = "0x694AAB0")]
	private static extern void IssuePluginCustomBlitInternal_Injected(IntPtr _unity_self, IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x694ABE0", Offset = "0x6949BE0", VA = "0x694ABE0")]
	private static extern void IssuePluginCustomTextureUpdateInternal_Injected(IntPtr _unity_self, IntPtr callback, IntPtr targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x694ACB0", Offset = "0x6949CB0", VA = "0x694ACB0")]
	private static extern void SetGlobalConstantBufferInternal_Injected(IntPtr _unity_self, IntPtr buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x694AD80", Offset = "0x6949D80", VA = "0x694AD80")]
	private static extern void SetGlobalConstantGraphicsBufferInternal_Injected(IntPtr _unity_self, IntPtr buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x694AE20", Offset = "0x6949E20", VA = "0x694AE20")]
	private static extern void IncrementUpdateCount_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x694AEB0", Offset = "0x6949EB0", VA = "0x694AEB0")]
	private static extern void SetInstanceMultiplier_Injected(IntPtr _unity_self, uint multiplier);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001533")]
	[Address(RVA = "0x694AF40", Offset = "0x6949F40", VA = "0x694AF40")]
	private static extern void SetFoveatedRenderingMode_Injected(IntPtr _unity_self, FoveatedRenderingMode foveatedRenderingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001534")]
	[Address(RVA = "0x694AFD0", Offset = "0x6949FD0", VA = "0x694AFD0")]
	private static extern void SetWireframe_Injected(IntPtr _unity_self, bool enable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001535")]
	[Address(RVA = "0x694B060", Offset = "0x694A060", VA = "0x694B060")]
	private static extern void ConfigureFoveatedRendering_Injected(IntPtr _unity_self, IntPtr platformData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001536")]
	[Address(RVA = "0x694D260", Offset = "0x694C260", VA = "0x694D260")]
	private static extern void ClearRenderTargetSingle_Internal_Injected(IntPtr _unity_self, RTClearFlags clearFlags, [In] ref Color color, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001537")]
	[Address(RVA = "0x694D2C0", Offset = "0x694C2C0", VA = "0x694D2C0")]
	private static extern void ClearRenderTargetMulti_Internal_Injected(IntPtr _unity_self, RTClearFlags clearFlags, ref ManagedSpanWrapper colors, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001538")]
	[Address(RVA = "0x694D320", Offset = "0x694C320", VA = "0x694D320")]
	private static extern void SetRenderTargetSingle_Internal_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x694D380", Offset = "0x694C380", VA = "0x694D380")]
	private static extern void SetRenderTargetColorDepth_Internal_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x694D3E0", Offset = "0x694C3E0", VA = "0x694D3E0")]
	private static extern void SetRenderTargetMulti_Internal_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153B")]
	[Address(RVA = "0x694D440", Offset = "0x694C440", VA = "0x694D440")]
	private static extern void SetRenderTargetColorDepthSubtarget_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153C")]
	[Address(RVA = "0x694D4A0", Offset = "0x694C4A0", VA = "0x694D4A0")]
	private static extern void SetRenderTargetMultiSubtarget_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153D")]
	[Address(RVA = "0x694DB00", Offset = "0x694CB00", VA = "0x694DB00")]
	private static extern void InternalSetComputeBufferNativeData_Injected(IntPtr _unity_self, IntPtr buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153E")]
	[Address(RVA = "0x694DB60", Offset = "0x694CB60", VA = "0x694DB60")]
	private static extern void InternalSetComputeBufferData_Injected(IntPtr _unity_self, IntPtr buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x694DBC0", Offset = "0x694CBC0", VA = "0x694DBC0")]
	private static extern void InternalSetComputeBufferCounterValue_Injected(IntPtr _unity_self, IntPtr buffer, uint counterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001540")]
	[Address(RVA = "0x694E200", Offset = "0x694D200", VA = "0x694E200")]
	private static extern void InternalSetGraphicsBufferNativeData_Injected(IntPtr _unity_self, IntPtr buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001541")]
	[Address(RVA = "0x694E260", Offset = "0x694D260", VA = "0x694E260")]
	private static extern void InternalSetGraphicsBufferData_Injected(IntPtr _unity_self, IntPtr buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001542")]
	[Address(RVA = "0x694E2C0", Offset = "0x694D2C0", VA = "0x694E2C0")]
	private static extern void InternalSetGraphicsBufferCounterValue_Injected(IntPtr _unity_self, IntPtr buffer, uint counterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001543")]
	[Address(RVA = "0x694E4C0", Offset = "0x694D4C0", VA = "0x694E4C0")]
	private static extern void BeginRenderPass_Internal_Injected(IntPtr _unity_self, int width, int height, int volumeDepth, int samples, ref ManagedSpanWrapper attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, ref ManagedSpanWrapper subPasses, ref ManagedSpanWrapper debugNameUtf8);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001544")]
	[Address(RVA = "0x694E6B0", Offset = "0x694D6B0", VA = "0x694E6B0")]
	private static extern void NextSubPass_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001545")]
	[Address(RVA = "0x694E7C0", Offset = "0x694D7C0", VA = "0x694E7C0")]
	private static extern void EndRenderPass_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x694E940", Offset = "0x694D940", VA = "0x694E940")]
	private static extern void SetupCameraProperties_Internal_Injected(IntPtr _unity_self, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x694EA40", Offset = "0x694DA40", VA = "0x694EA40")]
	private static extern void InvokeOnRenderObjectCallbacks_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x694ED80", Offset = "0x694DD80", VA = "0x694ED80")]
	private static extern void SetShadingRateFragmentSize_Impl_Injected(IntPtr _unity_self, ShadingRateFragmentSize shadingRateFragmentSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x694EDC0", Offset = "0x694DDC0", VA = "0x694EDC0")]
	private static extern void SetShadingRateCombiner_Impl_Injected(IntPtr _unity_self, ShadingRateCombinerStage stage, ShadingRateCombiner combiner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600154A")]
	[Address(RVA = "0x694EE00", Offset = "0x694DE00", VA = "0x694EE00")]
	private static extern void SetShadingRateImage_Impl_Injected(IntPtr _unity_self, in RenderTargetIdentifier shadingRateImage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x694EE40", Offset = "0x694DE40", VA = "0x694EE40")]
	private static extern void ResetShadingRate_Impl_Injected(IntPtr _unity_self);
}
