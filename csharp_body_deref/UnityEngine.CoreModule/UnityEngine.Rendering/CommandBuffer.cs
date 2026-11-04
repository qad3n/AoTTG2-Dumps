// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBuffer
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000360")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBuffer.bindings.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
public class CommandBuffer : IDisposable
{
	[Token(Token = "0x2000361")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6001534")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(CommandBuffer commandBuffer)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40009C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static bool ThrowOnSetRenderTarget;

	[Token(Token = "0x40009C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000319")]
	public string name
	{
		[Token(Token = "0x600135C")]
		[Address(RVA = "0x2F48780", Offset = "0x2F46D80", VA = "0x182F48780")]
		get
		{
			return null;
		}
		[Token(Token = "0x600135D")]
		[Address(RVA = "0x2F48920", Offset = "0x2F46F20", VA = "0x182F48920")]
		set
		{
		}
	}

	[Token(Token = "0x1700031A")]
	public int sizeInBytes
	{
		[Token(Token = "0x600135E")]
		[Address(RVA = "0x2F48870", Offset = "0x2F46E70", VA = "0x182F48870")]
		[UnityEngine.Bindings.NativeMethod("GetBufferSize")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x2F3D360", Offset = "0x2F3B960", VA = "0x182F3D360")]
	public void RequestAsyncReadback(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x2F3D7D0", Offset = "0x2F3BDD0", VA = "0x182F3D7D0")]
	public void RequestAsyncReadback(GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x2F3DF30", Offset = "0x2F3C530", VA = "0x182F3DF30")]
	public void RequestAsyncReadback(ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x2F3DB00", Offset = "0x2F3C100", VA = "0x182F3DB00")]
	public void RequestAsyncReadback(GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x2F3D210", Offset = "0x2F3B810", VA = "0x182F3D210")]
	public void RequestAsyncReadback(Texture src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x2F3DDE0", Offset = "0x2F3C3E0", VA = "0x182F3DDE0")]
	public void RequestAsyncReadback(Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x2F3D4A0", Offset = "0x2F3BAA0", VA = "0x182F3D4A0")]
	public void RequestAsyncReadback(Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x2F3E090", Offset = "0x2F3C690", VA = "0x182F3E090")]
	public void RequestAsyncReadback(Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x2F3DC60", Offset = "0x2F3C260", VA = "0x182F3DC60")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x2F3D910", Offset = "0x2F3BF10", VA = "0x182F3D910")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x2F3D650", Offset = "0x2F3BC50", VA = "0x182F3D650")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6001317")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001318")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001319")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131A")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131B")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131C")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131D")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131E")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600131F")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001320")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001321")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x2F396F0", Offset = "0x2F37CF0", VA = "0x182F396F0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_1([UnityEngine.Bindings.NotNull] ComputeBuffer src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x2F39830", Offset = "0x2F37E30", VA = "0x182F39830")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_2([UnityEngine.Bindings.NotNull] ComputeBuffer src, int size, int offset, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x2F39990", Offset = "0x2F37F90", VA = "0x182F39990")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_3([UnityEngine.Bindings.NotNull] Texture src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x2F39AE0", Offset = "0x2F380E0", VA = "0x182F39AE0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_4([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x2F39C30", Offset = "0x2F38230", VA = "0x182F39C30")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_5([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, GraphicsFormat dstFormat, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x2F39DA0", Offset = "0x2F383A0", VA = "0x182F39DA0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_6([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x2F39F30", Offset = "0x2F38530", VA = "0x182F39F30")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_7([UnityEngine.Bindings.NotNull] Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x2F3A0C0", Offset = "0x2F386C0", VA = "0x182F3A0C0")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_8([UnityEngine.Bindings.NotNull] GraphicsBuffer src, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x2F3A200", Offset = "0x2F38800", VA = "0x182F3A200")]
	[UnityEngine.Bindings.NativeMethod("AddRequestAsyncReadback")]
	private unsafe void Internal_RequestAsyncReadback_9([UnityEngine.Bindings.NotNull] GraphicsBuffer src, int size, int offset, [UnityEngine.Bindings.NotNull] Action<AsyncGPUReadbackRequest> callback, [Optional] AsyncRequestNativeArrayData* nativeArrayData)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x2F430F0", Offset = "0x2F416F0", VA = "0x182F430F0")]
	[UnityEngine.Bindings.NativeMethod("AddSetInvertCulling")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x2F3C670", Offset = "0x2F3AC70", VA = "0x182F3C670")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
	private void Internal_SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x2F36F10", Offset = "0x2F35510", VA = "0x182F36F10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer();

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x2F31A00", Offset = "0x2F30000", VA = "0x182F31A00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
	private IntPtr CreateGPUFence_Internal(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x2F48680", Offset = "0x2F46C80", VA = "0x182F48680")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
	private void WaitOnGPUFence_Internal(IntPtr fencePtr, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x2F3D1B0", Offset = "0x2F3B7B0", VA = "0x182F3D1B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
	private void ReleaseBuffer()
	{
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x2F3F400", Offset = "0x2F3DA00", VA = "0x182F3F400")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
	public void SetComputeFloatParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x2F3F6A0", Offset = "0x2F3DCA0", VA = "0x182F3F6A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
	public void SetComputeIntParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x2F408B0", Offset = "0x2F3EEB0", VA = "0x182F408B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
	public void SetComputeVectorParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x2F405A0", Offset = "0x2F3EBA0", VA = "0x182F405A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
	public void SetComputeVectorArrayParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x2F3FE40", Offset = "0x2F3E440", VA = "0x182F3FE40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
	public void SetComputeMatrixParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x2F3FB80", Offset = "0x2F3E180", VA = "0x182F3FB80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
	public void SetComputeMatrixArrayParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x2F3A760", Offset = "0x2F38D60", VA = "0x182F3A760")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
	private void Internal_SetComputeFloats([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x2F3ABB0", Offset = "0x2F391B0", VA = "0x182F3ABB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
	private void Internal_SetComputeInts([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x2F3B060", Offset = "0x2F39660", VA = "0x182F3B060")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
	private void Internal_SetComputeTextureParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x2F3A360", Offset = "0x2F38960", VA = "0x182F3A360")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x2F3A910", Offset = "0x2F38F10", VA = "0x182F3A910")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x2F3AA50", Offset = "0x2F39050", VA = "0x182F3AA50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x2F3A4C0", Offset = "0x2F38AC0", VA = "0x182F3A4C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantComputeBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x2F3A610", Offset = "0x2F38C10", VA = "0x182F3A610")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x2F3AD60", Offset = "0x2F39360", VA = "0x182F3AD60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeParamsFromMaterial", HasExplicitThis = true)]
	private void Internal_SetComputeParamsFromMaterial([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x2F32610", Offset = "0x2F30C10", VA = "0x182F32610")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchCompute([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x2F378F0", Offset = "0x2F35EF0", VA = "0x182F378F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirect([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x2F377A0", Offset = "0x2F35DA0", VA = "0x182F377A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirectGraphicsBuffer([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x2F3B320", Offset = "0x2F39920", VA = "0x182F3B320")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingComputeBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x2F3BB60", Offset = "0x2F3A160", VA = "0x182F3BB60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x2F3BA20", Offset = "0x2F3A020", VA = "0x182F3BA20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x2F3B470", Offset = "0x2F39A70", VA = "0x182F3B470")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantComputeBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x2F3B5C0", Offset = "0x2F39BC0", VA = "0x182F3B5C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x2F3C270", Offset = "0x2F3A870", VA = "0x182F3C270")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingTextureParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x2F3B730", Offset = "0x2F39D30", VA = "0x182F3B730")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloatParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x2F3BCB0", Offset = "0x2F3A2B0", VA = "0x182F3BCB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingIntParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x2F3C550", Offset = "0x2F3AB50", VA = "0x182F3C550")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x2F3C3A0", Offset = "0x2F3A9A0", VA = "0x182F3C3A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorArrayParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x2F3C140", Offset = "0x2F3A740", VA = "0x182F3C140")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x2F3BF90", Offset = "0x2F3A590", VA = "0x182F3BF90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixArrayParam([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x2F3B870", Offset = "0x2F39E70", VA = "0x182F3B870")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloats([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x2F3BDE0", Offset = "0x2F3A3E0", VA = "0x182F3BDE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
	private void Internal_SetRayTracingInts([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x2F37680", Offset = "0x2F35C80", VA = "0x182F37680")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_BuildRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x2F3B190", Offset = "0x2F39790", VA = "0x182F3B190")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, int nameID, [UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x2F3AED0", Offset = "0x2F394D0", VA = "0x182F3AED0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetComputeRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull] ComputeShader computeShader, int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x2F44AA0", Offset = "0x2F430A0", VA = "0x182F44AA0")]
	[UnityEngine.Bindings.NativeMethod("AddSetRayTracingShaderPass")]
	public void SetRayTracingShaderPass([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x2F37D80", Offset = "0x2F36380", VA = "0x182F37D80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRays([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x2F37A90", Offset = "0x2F36090", VA = "0x182F37A90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRaysIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRaysIndirect([UnityEngine.Bindings.NotNull] RayTracingShader rayTracingShader, string rayGenShaderName, [UnityEngine.Bindings.NotNull] GraphicsBuffer argsBuffer, [Optional][DefaultParameterValue(0u)] uint argsOffset, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x2F39640", Offset = "0x2F37C40", VA = "0x182F39640")]
	[UnityEngine.Bindings.NativeMethod("AddGenerateMips")]
	private void Internal_GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x2F31080", Offset = "0x2F2F680", VA = "0x182F31080")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueCC(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x2F31240", Offset = "0x2F2F840", VA = "0x182F31240")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueGC(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x2F31160", Offset = "0x2F2F760", VA = "0x182F31160")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueCG(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x2F31320", Offset = "0x2F2F920", VA = "0x182F31320")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private void CopyCounterValueGG(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x2F30F20", Offset = "0x2F2F520", VA = "0x182F30F20")]
	[UnityEngine.Bindings.NativeMethod("ClearCommands")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x2F386B0", Offset = "0x2F36CB0", VA = "0x182F386B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
	private void Internal_DrawMesh([UnityEngine.Bindings.NotNull] Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x2F38860", Offset = "0x2F36E60", VA = "0x182F38860")]
	[UnityEngine.Bindings.NativeMethod("AddDrawMultipleMeshes")]
	private void Internal_DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x2F394D0", Offset = "0x2F37AD0", VA = "0x182F394D0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRenderer")]
	private void Internal_DrawRenderer([UnityEngine.Bindings.NotNull] Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x2F39420", Offset = "0x2F37A20", VA = "0x182F39420")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRendererList")]
	private void Internal_DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x2F392D0", Offset = "0x2F378D0", VA = "0x182F392D0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProcedural")]
	private void Internal_DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x2F38E70", Offset = "0x2F37470", VA = "0x182F38E70")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProceduralIndexed")]
	private void Internal_DrawProceduralIndexed(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x2F39160", Offset = "0x2F37760", VA = "0x182F39160")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x2F38CE0", Offset = "0x2F372E0", VA = "0x182F38CE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x2F38FF0", Offset = "0x2F375F0", VA = "0x182F38FF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirectGraphicsBuffer(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x2F38B50", Offset = "0x2F37150", VA = "0x182F38B50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x2F384A0", Offset = "0x2F36AA0", VA = "0x182F384A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
	private void Internal_DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x2F38330", Offset = "0x2F36930", VA = "0x182F38330")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x2F381B0", Offset = "0x2F367B0", VA = "0x182F381B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x2F38030", Offset = "0x2F36630", VA = "0x182F38030")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirectGraphicsBuffer(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x2F38AA0", Offset = "0x2F370A0", VA = "0x182F38AA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
	private void Internal_DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x2F43800", Offset = "0x2F41E00", VA = "0x182F43800")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Texture", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_Texture(int index, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x2F43640", Offset = "0x2F41C40", VA = "0x182F43640")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_Buffer(int index, ComputeBuffer uav, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x2F43720", Offset = "0x2F41D20", VA = "0x182F43720")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private void SetRandomWriteTarget_GraphicsBuffer(int index, GraphicsBuffer uav, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x2F305F0", Offset = "0x2F2EBF0", VA = "0x182F305F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ClearRandomWriteTargets", HasExplicitThis = true, ThrowsException = true)]
	public void ClearRandomWriteTargets()
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x2F48070", Offset = "0x2F46670", VA = "0x182F48070")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x2F36400", Offset = "0x2F34A00", VA = "0x182F36400")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x2F32130", Offset = "0x2F30730", VA = "0x182F32130")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x2F31400", Offset = "0x2F2FA00", VA = "0x182F31400")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
	private void CopyTexture_Internal(ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode)
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x2F2FF50", Offset = "0x2F2E550", VA = "0x182F2FF50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
	private void Blit_Texture(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x2F30C40", Offset = "0x2F2F240", VA = "0x182F30C40")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x2F30D20", Offset = "0x2F2F320", VA = "0x182F30D20")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x2F30B50", Offset = "0x2F2F150", VA = "0x182F30B50")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x2F30E00", Offset = "0x2F2F400", VA = "0x182F30E00")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x2F308C0", Offset = "0x2F2EEC0", VA = "0x182F308C0")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x2F419A0", Offset = "0x2F3FFA0", VA = "0x182F419A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x2F41BD0", Offset = "0x2F401D0", VA = "0x182F41BD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x2F41D20", Offset = "0x2F40320", VA = "0x182F41D20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x2F42F90", Offset = "0x2F41590", VA = "0x182F42F90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x2F40EA0", Offset = "0x2F3F4A0", VA = "0x182F40EA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x2F424A0", Offset = "0x2F40AA0", VA = "0x182F424A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x2F364B0", Offset = "0x2F34AB0", VA = "0x182F364B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x2F36030", Offset = "0x2F34630", VA = "0x182F36030")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	private void EnableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x2F362F0", Offset = "0x2F348F0", VA = "0x182F362F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
	private void EnableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x2F35F20", Offset = "0x2F34520", VA = "0x182F35F20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
	private void EnableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x2F36090", Offset = "0x2F34690", VA = "0x182F36090")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x2F361C0", Offset = "0x2F347C0", VA = "0x182F361C0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x2F360F0", Offset = "0x2F346F0", VA = "0x182F360F0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x2F321E0", Offset = "0x2F307E0", VA = "0x182F321E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x2F31D70", Offset = "0x2F30370", VA = "0x182F31D70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	private void DisableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x2F32030", Offset = "0x2F30630", VA = "0x182F32030")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
	private void DisableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x2F31C60", Offset = "0x2F30260", VA = "0x182F31C60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
	private void DisableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x2F31F70", Offset = "0x2F30570", VA = "0x182F31F70")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x2F31DD0", Offset = "0x2F303D0", VA = "0x182F31DD0")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x2F31EA0", Offset = "0x2F304A0", VA = "0x182F31EA0")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x2F41DF0", Offset = "0x2F403F0", VA = "0x182F41DF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
	private void SetGlobalKeyword(GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x2F43530", Offset = "0x2F41B30", VA = "0x182F43530")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
	private void SetMaterialKeyword(Material material, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x2F3F910", Offset = "0x2F3DF10", VA = "0x182F3F910")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
	private void SetComputeKeyword(ComputeShader computeShader, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x2F43230", Offset = "0x2F41830", VA = "0x182F43230")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x2F432A0", Offset = "0x2F418A0", VA = "0x182F432A0")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x2F43150", Offset = "0x2F41750", VA = "0x182F43150")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x2F47FB0", Offset = "0x2F465B0", VA = "0x182F47FB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x2F412E0", Offset = "0x2F3F8E0", VA = "0x182F412E0")]
	[UnityEngine.Bindings.NativeMethod("AddSetGlobalDepthBias")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x2F40AC0", Offset = "0x2F3F0C0", VA = "0x182F40AC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	public void SetExecutionFlags(CommandBufferExecutionFlags flags)
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x2F484A0", Offset = "0x2F46AA0", VA = "0x182F484A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	private bool ValidateAgainstExecutionFlags(CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x2F413B0", Offset = "0x2F3F9B0", VA = "0x182F413B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalFloatArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x2F42910", Offset = "0x2F40F10", VA = "0x182F42910")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalVectorArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x2F41EB0", Offset = "0x2F404B0", VA = "0x182F41EB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
	private void SetGlobalMatrixArrayListImpl(int nameID, object values)
	{
	}

	[Token(Token = "0x600139E")]
	[Address(RVA = "0x2F41470", Offset = "0x2F3FA70", VA = "0x182F41470")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalFloatArray(int nameID, [UnityEngine.Bindings.NotNull] float[] values)
	{
	}

	[Token(Token = "0x600139F")]
	[Address(RVA = "0x2F42B20", Offset = "0x2F41120", VA = "0x182F42B20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalVectorArray(int nameID, [UnityEngine.Bindings.NotNull] Vector4[] values)
	{
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x2F42330", Offset = "0x2F40930", VA = "0x182F42330")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalMatrixArray(int nameID, [UnityEngine.Bindings.NotNull] Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x2F433D0", Offset = "0x2F419D0", VA = "0x182F433D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetLateLatchProjectionMatrices([UnityEngine.Bindings.NotNull] Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x2F3CFC0", Offset = "0x2F3B5C0", VA = "0x182F3CFC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x2F483F0", Offset = "0x2F469F0", VA = "0x182F483F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x2F42610", Offset = "0x2F40C10", VA = "0x182F42610")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
	private void SetGlobalTexture_Impl(int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x2F40C10", Offset = "0x2F3F210", VA = "0x182F40C10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private void SetGlobalBufferInternal(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x2F40D30", Offset = "0x2F3F330", VA = "0x182F40D30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private void SetGlobalGraphicsBufferInternal(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x2F47E20", Offset = "0x2F46420", VA = "0x182F47E20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
	private void SetShadowSamplingMode_Impl(ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60013A8")]
	[Address(RVA = "0x2F3CE30", Offset = "0x2F3B430", VA = "0x182F3CE30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
	private void IssuePluginEventInternal(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x2F2FD70", Offset = "0x2F2E370", VA = "0x182F2FD70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x2F368E0", Offset = "0x2F34EE0", VA = "0x182F368E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x2F2FC60", Offset = "0x2F2E260", VA = "0x182F2FC60")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x2F367D0", Offset = "0x2F34DD0", VA = "0x182F367D0")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x2F2FC60", Offset = "0x2F2E260", VA = "0x182F2FC60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
	private void BeginSample_CustomSampler([UnityEngine.Bindings.NotNull] CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x2F367D0", Offset = "0x2F34DD0", VA = "0x182F367D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
	private void EndSample_CustomSampler([UnityEngine.Bindings.NotNull] CustomSampler sampler)
	{
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x2F3CC40", Offset = "0x2F3B240", VA = "0x182F3CC40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
	private void IssuePluginEventAndDataInternal(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x2F3C860", Offset = "0x2F3AE60", VA = "0x182F3C860")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
	private void IssuePluginCustomBlitInternal(IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x2F3CA20", Offset = "0x2F3B020", VA = "0x182F3CA20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
	private void IssuePluginCustomTextureUpdateInternal(IntPtr callback, Texture targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2)
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x2F40FF0", Offset = "0x2F3F5F0", VA = "0x182F40FF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private void SetGlobalConstantBufferInternal(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x2F41080", Offset = "0x2F3F680", VA = "0x182F41080")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private void SetGlobalConstantGraphicsBufferInternal(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x2F36EB0", Offset = "0x2F354B0", VA = "0x182F36EB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x2F43040", Offset = "0x2F41640", VA = "0x182F43040")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x2F40B60", Offset = "0x2F3F160", VA = "0x182F40B60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x2F48120", Offset = "0x2F46720", VA = "0x182F48120")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x2F30FD0", Offset = "0x2F2F5D0", VA = "0x182F30FD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x2F30520", Offset = "0x2F2EB20", VA = "0x182F30520")]
	private static void CheckThrowOnSetRenderTarget()
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x2F467C0", Offset = "0x2F44DC0", VA = "0x182F467C0")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x2F472C0", Offset = "0x2F458C0", VA = "0x182F472C0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x2F45870", Offset = "0x2F43E70", VA = "0x182F45870")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x2F468A0", Offset = "0x2F44EA0", VA = "0x182F468A0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x2F477C0", Offset = "0x2F45DC0", VA = "0x182F477C0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x2F47050", Offset = "0x2F45650", VA = "0x182F47050")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x2F47690", Offset = "0x2F45C90", VA = "0x182F47690")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x60013C1")]
	[Address(RVA = "0x2F459D0", Offset = "0x2F43FD0", VA = "0x182F459D0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x2F45FE0", Offset = "0x2F445E0", VA = "0x182F45FE0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x2F47410", Offset = "0x2F45A10", VA = "0x182F47410")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013C4")]
	[Address(RVA = "0x2F45E40", Offset = "0x2F44440", VA = "0x182F45E40")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x2F479A0", Offset = "0x2F45FA0", VA = "0x182F479A0")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x2F45BF0", Offset = "0x2F441F0", VA = "0x182F45BF0")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x2F46A80", Offset = "0x2F45080", VA = "0x182F46A80")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x2F46200", Offset = "0x2F44800", VA = "0x182F46200")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x2F30830", Offset = "0x2F2EE30", VA = "0x182F30830")]
	private void ClearRenderTargetSingle_Internal(RTClearFlags clearFlags, Color color, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x2F306B0", Offset = "0x2F2ECB0", VA = "0x182F306B0")]
	private void ClearRenderTargetMulti_Internal(RTClearFlags clearFlags, Color[] colors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x2F457E0", Offset = "0x2F43DE0", VA = "0x182F457E0")]
	private void SetRenderTargetSingle_Internal(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x2F45210", Offset = "0x2F43810", VA = "0x182F45210")]
	private void SetRenderTargetColorDepth_Internal(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x2F45580", Offset = "0x2F43B80", VA = "0x182F45580")]
	private void SetRenderTargetMulti_Internal(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x2F450F0", Offset = "0x2F436F0", VA = "0x182F450F0")]
	private void SetRenderTargetColorDepthSubtarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x2F45310", Offset = "0x2F43910", VA = "0x182F45310")]
	private void SetRenderTargetMultiSubtarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x2F3EB40", Offset = "0x2F3D140", VA = "0x182F3EB40")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x60013D1")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013D2")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x2F3E7F0", Offset = "0x2F3CDF0", VA = "0x182F3E7F0")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60013D4")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013D5")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x2F36FA0", Offset = "0x2F355A0", VA = "0x182F36FA0")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x2F371E0", Offset = "0x2F357E0", VA = "0x182F371E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetComputeBufferNativeData([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x2F370C0", Offset = "0x2F356C0", VA = "0x182F370C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetComputeBufferData([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x2F36FA0", Offset = "0x2F355A0", VA = "0x182F36FA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private void InternalSetComputeBufferCounterValue([UnityEngine.Bindings.NotNull] ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x2F3E5F0", Offset = "0x2F3CBF0", VA = "0x182F3E5F0")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x60013DB")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013DC")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x2F3E2A0", Offset = "0x2F3C8A0", VA = "0x182F3E2A0")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x60013DE")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013DF")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x2F37310", Offset = "0x2F35910", VA = "0x182F37310")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x2F37550", Offset = "0x2F35B50", VA = "0x182F37550")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetGraphicsBufferNativeData([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x2F37430", Offset = "0x2F35A30", VA = "0x182F37430")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private void InternalSetGraphicsBufferData([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize)
	{
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x2F37310", Offset = "0x2F35910", VA = "0x182F37310")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private void InternalSetGraphicsBufferCounterValue([UnityEngine.Bindings.NotNull] GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x2F2F7F0", Offset = "0x2F2DDF0", VA = "0x182F2F7F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginRenderPass", HasExplicitThis = true)]
	private void BeginRenderPass_Internal(int width, int height, int volumeDepth, int samples, ReadOnlySpan<AttachmentDescriptor> attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, ReadOnlySpan<SubPassDescriptor> subPasses, ReadOnlySpan<byte> debugNameUtf8)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x2F2F9B0", Offset = "0x2F2DFB0", VA = "0x182F2F9B0")]
	public void BeginRenderPass(int width, int height, int volumeDepth, int samples, NativeArray<AttachmentDescriptor> attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, NativeArray<SubPassDescriptor> subPasses, ReadOnlySpan<byte> debugNameUtf8)
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x2F3D070", Offset = "0x2F3B670", VA = "0x182F3D070")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::NextSubPass", HasExplicitThis = true)]
	private void NextSubPass_Internal()
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x2F3D0D0", Offset = "0x2F3B6D0", VA = "0x182F3D0D0")]
	public void NextSubPass()
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x2F36680", Offset = "0x2F34C80", VA = "0x182F36680")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndRenderPass", HasExplicitThis = true)]
	private void EndRenderPass_Internal()
	{
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x2F366E0", Offset = "0x2F34CE0", VA = "0x182F366E0")]
	public void EndRenderPass()
	{
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x2F481D0", Offset = "0x2F467D0", VA = "0x182F481D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
	private void SetupCameraProperties_Internal([UnityEngine.Bindings.NotNull] Camera camera)
	{
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x2F482A0", Offset = "0x2F468A0", VA = "0x182F482A0")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x2F3C710", Offset = "0x2F3AD10", VA = "0x182F3C710")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
	private void InvokeOnRenderObjectCallbacks_Internal()
	{
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x2F3C770", Offset = "0x2F3AD70", VA = "0x182F3C770")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x2F47CB0", Offset = "0x2F462B0", VA = "0x182F47CB0")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x2F47C00", Offset = "0x2F46200", VA = "0x182F47C00")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x2F47D60", Offset = "0x2F46360", VA = "0x182F47D60")]
	public void SetShadingRateImage(in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x2F3E240", Offset = "0x2F3C840", VA = "0x182F3E240")]
	public void ResetShadingRate()
	{
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x2F47CB0", Offset = "0x2F462B0", VA = "0x182F47CB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateFragmentSize_Impl", HasExplicitThis = true)]
	private void SetShadingRateFragmentSize_Impl(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x2F47C00", Offset = "0x2F46200", VA = "0x182F47C00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateCombiner_Impl", HasExplicitThis = true)]
	private void SetShadingRateCombiner_Impl(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x2F47D60", Offset = "0x2F46360", VA = "0x182F47D60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateImage_Impl", HasExplicitThis = true)]
	private void SetShadingRateImage_Impl(in RenderTargetIdentifier shadingRateImage)
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x2F3E240", Offset = "0x2F3C840", VA = "0x182F3E240")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ResetShadingRate_Impl", HasExplicitThis = true)]
	private void ResetShadingRate_Impl()
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x2F36A70", Offset = "0x2F35070", VA = "0x182F36A70", Slot = "1")]
	~CommandBuffer()
	{
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x2F32710", Offset = "0x2F30D10", VA = "0x182F32710", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x2F327B0", Offset = "0x2F30DB0", VA = "0x182F327B0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x2F486F0", Offset = "0x2F46CF0", VA = "0x182F486F0")]
	public CommandBuffer()
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x2F32710", Offset = "0x2F30D10", VA = "0x182F32710")]
	public void Release()
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x2F31830", Offset = "0x2F2FE30", VA = "0x182F31830")]
	public GraphicsFence CreateAsyncGraphicsFence()
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x2F31A70", Offset = "0x2F30070", VA = "0x182F31A70")]
	public GraphicsFence CreateGraphicsFence(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x2F48510", Offset = "0x2F46B10", VA = "0x182F48510")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x2F3F4F0", Offset = "0x2F3DAF0", VA = "0x182F3F4F0")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x2F3F780", Offset = "0x2F3DD80", VA = "0x182F3F780")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x2F40990", Offset = "0x2F3EF90", VA = "0x182F40990")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x2F40700", Offset = "0x2F3ED00", VA = "0x182F40700")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x2F3FD30", Offset = "0x2F3E330", VA = "0x182F3FD30")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x2F3FA20", Offset = "0x2F3E020", VA = "0x182F3FA20")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x2F3F600", Offset = "0x2F3DC00", VA = "0x182F3F600")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x2F3F5F0", Offset = "0x2F3DBF0", VA = "0x182F3F5F0")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x2F3F860", Offset = "0x2F3DE60", VA = "0x182F3F860")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x2F3F8B0", Offset = "0x2F3DEB0", VA = "0x182F3F8B0")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x2F40240", Offset = "0x2F3E840", VA = "0x182F40240")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x2F40140", Offset = "0x2F3E740", VA = "0x182F40140")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x2F3FF20", Offset = "0x2F3E520", VA = "0x182F3FF20")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x2F40450", Offset = "0x2F3EA50", VA = "0x182F40450")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x2F40030", Offset = "0x2F3E630", VA = "0x182F40030")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x2F40340", Offset = "0x2F3E940", VA = "0x182F40340")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x2F3A360", Offset = "0x2F38960", VA = "0x182F3A360")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x2F3EE30", Offset = "0x2F3D430", VA = "0x182F3EE30")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x2F3ED40", Offset = "0x2F3D340", VA = "0x182F3ED40")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x2F3EF50", Offset = "0x2F3D550", VA = "0x182F3EF50")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x2F3AA50", Offset = "0x2F39050", VA = "0x182F3AA50")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x2F3F050", Offset = "0x2F3D650", VA = "0x182F3F050")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x2F3A4C0", Offset = "0x2F38AC0", VA = "0x182F3A4C0")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x2F3F280", Offset = "0x2F3D880", VA = "0x182F3F280")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x2F3A610", Offset = "0x2F38C10", VA = "0x182F3A610")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x2F3F170", Offset = "0x2F3D770", VA = "0x182F3F170")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x2F3AD60", Offset = "0x2F39360", VA = "0x182F3AD60")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x2F32610", Offset = "0x2F30C10", VA = "0x182F32610")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x2F324C0", Offset = "0x2F30AC0", VA = "0x182F324C0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x2F32370", Offset = "0x2F30970", VA = "0x182F32370")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x2F30200", Offset = "0x2F2E800", VA = "0x182F30200")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x2F30410", Offset = "0x2F2EA10", VA = "0x182F30410")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x2F30340", Offset = "0x2F2E940", VA = "0x182F30340")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x2F43DC0", Offset = "0x2F423C0", VA = "0x182F43DC0")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x2F3B190", Offset = "0x2F39790", VA = "0x182F3B190")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x2F43C70", Offset = "0x2F42270", VA = "0x182F43C70")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x2F3AED0", Offset = "0x2F394D0", VA = "0x182F3AED0")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x2F44100", Offset = "0x2F42700", VA = "0x182F44100")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x2F3B320", Offset = "0x2F39920", VA = "0x182F3B320")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x2F43F00", Offset = "0x2F42500", VA = "0x182F43F00")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x2F3BB60", Offset = "0x2F3A160", VA = "0x182F3BB60")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x2F44010", Offset = "0x2F42610", VA = "0x182F44010")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x2F44210", Offset = "0x2F42810", VA = "0x182F44210")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x2F3B470", Offset = "0x2F39A70", VA = "0x182F3B470")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x2F44300", Offset = "0x2F42900", VA = "0x182F44300")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x2F3B5C0", Offset = "0x2F39BC0", VA = "0x182F3B5C0")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x2F44410", Offset = "0x2F42A10", VA = "0x182F44410")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x2F44D80", Offset = "0x2F43380", VA = "0x182F44D80")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x2F44CA0", Offset = "0x2F432A0", VA = "0x182F44CA0")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x2F44520", Offset = "0x2F42B20", VA = "0x182F44520")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x2F3B730", Offset = "0x2F39D30", VA = "0x182F3B730")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x2F44620", Offset = "0x2F42C20", VA = "0x182F44620")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x2F44670", Offset = "0x2F42C70", VA = "0x182F44670")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x2F44680", Offset = "0x2F42C80", VA = "0x182F44680")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x2F3BCB0", Offset = "0x2F3A2B0", VA = "0x182F3BCB0")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x2F44770", Offset = "0x2F42D70", VA = "0x182F44770")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x2F44760", Offset = "0x2F42D60", VA = "0x182F44760")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x2F44FB0", Offset = "0x2F435B0", VA = "0x182F44FB0")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x2F44EC0", Offset = "0x2F434C0", VA = "0x182F44EC0")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x2F44E70", Offset = "0x2F43470", VA = "0x182F44E70")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x2F44E60", Offset = "0x2F43460", VA = "0x182F44E60")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x2F44930", Offset = "0x2F42F30", VA = "0x182F44930")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x2F44820", Offset = "0x2F42E20", VA = "0x182F44820")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x2F447C0", Offset = "0x2F42DC0", VA = "0x182F447C0")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x2F44810", Offset = "0x2F42E10", VA = "0x182F44810")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x2F326F0", Offset = "0x2F30CF0", VA = "0x182F326F0")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x2F32700", Offset = "0x2F30D00", VA = "0x182F32700")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x2F36D90", Offset = "0x2F35390", VA = "0x182F36D90")]
	public void GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x2F36B20", Offset = "0x2F35120", VA = "0x182F36B20")]
	public void GenerateMips(RenderTexture rt)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x2F33B80", Offset = "0x2F32180", VA = "0x182F33B80")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x2F33AB0", Offset = "0x2F320B0", VA = "0x182F33AB0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x2F33A50", Offset = "0x2F32050", VA = "0x182F33A50")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x2F33B20", Offset = "0x2F32120", VA = "0x182F33B20")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x2F33EF0", Offset = "0x2F324F0", VA = "0x182F33EF0")]
	[ExcludeFromDocs]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x2F35BA0", Offset = "0x2F341A0", VA = "0x182F35BA0")]
	public void DrawRenderer(Renderer renderer, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass)
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x2F35E70", Offset = "0x2F34470", VA = "0x182F35E70")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x2F35E90", Offset = "0x2F34490", VA = "0x182F35E90")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x2F35B30", Offset = "0x2F34130", VA = "0x182F35B30")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x2F35560", Offset = "0x2F33B60", VA = "0x182F35560")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, [DefaultValue("1")] int instanceCount, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x2F35380", Offset = "0x2F33980", VA = "0x182F35380")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x2F35950", Offset = "0x2F33F50", VA = "0x182F35950")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x2F34F60", Offset = "0x2F33560", VA = "0x182F34F60")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x2F35180", Offset = "0x2F33780", VA = "0x182F35180")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x2F35750", Offset = "0x2F33D50", VA = "0x182F35750")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x2F34140", Offset = "0x2F32740", VA = "0x182F34140")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x2F34EF0", Offset = "0x2F334F0", VA = "0x182F34EF0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x2F346F0", Offset = "0x2F32CF0", VA = "0x182F346F0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x2F34400", Offset = "0x2F32A00", VA = "0x182F34400")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x2F34AC0", Offset = "0x2F330C0", VA = "0x182F34AC0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x2F34B40", Offset = "0x2F33140", VA = "0x182F34B40")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x2F34BC0", Offset = "0x2F331C0", VA = "0x182F34BC0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x2F34A50", Offset = "0x2F33050", VA = "0x182F34A50")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x2F34E80", Offset = "0x2F33480", VA = "0x182F34E80")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x2F34760", Offset = "0x2F32D60", VA = "0x182F34760")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x2F34040", Offset = "0x2F32640", VA = "0x182F34040")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x2F340C0", Offset = "0x2F326C0", VA = "0x182F340C0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x2F334B0", Offset = "0x2F31AB0", VA = "0x182F334B0")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x2F33470", Offset = "0x2F31A70", VA = "0x182F33470")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x2F33420", Offset = "0x2F31A20", VA = "0x182F33420")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x2F33080", Offset = "0x2F31680", VA = "0x182F33080")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, [Optional] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x2F32C90", Offset = "0x2F31290", VA = "0x182F32C90")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x2F32BD0", Offset = "0x2F311D0", VA = "0x182F32BD0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x2F33040", Offset = "0x2F31640", VA = "0x182F33040")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x2F32820", Offset = "0x2F30E20", VA = "0x182F32820")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x2F32C50", Offset = "0x2F31250", VA = "0x182F32C50")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x2F32C10", Offset = "0x2F31210", VA = "0x182F32C10")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x2F33FE0", Offset = "0x2F325E0", VA = "0x182F33FE0")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x2F43A10", Offset = "0x2F42010", VA = "0x182F43A10")]
	public void SetRandomWriteTarget(int index, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x2F43BA0", Offset = "0x2F421A0", VA = "0x182F43BA0")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x2F43870", Offset = "0x2F41E70", VA = "0x182F43870")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x2F43AD0", Offset = "0x2F420D0", VA = "0x182F43AD0")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x2F43940", Offset = "0x2F41F40", VA = "0x182F43940")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x2F31080", Offset = "0x2F2F680", VA = "0x182F31080")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x2F31240", Offset = "0x2F2F840", VA = "0x182F31240")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x2F31160", Offset = "0x2F2F760", VA = "0x182F31160")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x2F31320", Offset = "0x2F2F920", VA = "0x182F31320")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x2F31590", Offset = "0x2F2FB90", VA = "0x182F31590")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x2F31750", Offset = "0x2F2FD50", VA = "0x182F31750")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, RenderTargetIdentifier dst, int dstElement)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x2F31660", Offset = "0x2F2FC60", VA = "0x182F31660")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x2F31490", Offset = "0x2F2FA90", VA = "0x182F31490")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x2F30080", Offset = "0x2F2E680", VA = "0x182F30080")]
	public void Blit(Texture source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x2F41A10", Offset = "0x2F40010", VA = "0x182F41A10")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x2F41B40", Offset = "0x2F40140", VA = "0x182F41B40")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x2F41C90", Offset = "0x2F40290", VA = "0x182F41C90")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x2F42F00", Offset = "0x2F41500", VA = "0x182F42F00")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x2F40F10", Offset = "0x2F3F510", VA = "0x182F40F10")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x2F42510", Offset = "0x2F40B10", VA = "0x182F42510")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x2F41800", Offset = "0x2F3FE00", VA = "0x182F41800")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x2F416C0", Offset = "0x2F3FCC0", VA = "0x182F416C0")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x2F41590", Offset = "0x2F3FB90", VA = "0x182F41590")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x2F429D0", Offset = "0x2F40FD0", VA = "0x182F429D0")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x2F42C40", Offset = "0x2F41240", VA = "0x182F42C40")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x2F42D80", Offset = "0x2F41380", VA = "0x182F42D80")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x2F420A0", Offset = "0x2F406A0", VA = "0x182F420A0")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x2F421F0", Offset = "0x2F407F0", VA = "0x182F421F0")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x2F41F70", Offset = "0x2F40570", VA = "0x182F41F70")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x2F42820", Offset = "0x2F40E20", VA = "0x182F42820")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x2F42710", Offset = "0x2F40D10", VA = "0x182F42710")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x2F42780", Offset = "0x2F40D80", VA = "0x182F42780")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x2F42690", Offset = "0x2F40C90", VA = "0x182F42690")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x2F40C90", Offset = "0x2F3F290", VA = "0x182F40C90")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x2F40C10", Offset = "0x2F3F210", VA = "0x182F40C10")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x2F40DB0", Offset = "0x2F3F3B0", VA = "0x182F40DB0")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x2F40D30", Offset = "0x2F3F330", VA = "0x182F40D30")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x2F40FF0", Offset = "0x2F3F5F0", VA = "0x182F40FF0")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x2F41110", Offset = "0x2F3F710", VA = "0x182F41110")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x2F41080", Offset = "0x2F3F680", VA = "0x182F41080")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x2F411A0", Offset = "0x2F3F7A0", VA = "0x182F411A0")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x2F47E90", Offset = "0x2F46490", VA = "0x182F47E90")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x2F3C670", Offset = "0x2F3AC70", VA = "0x182F3C670")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x2F3CEA0", Offset = "0x2F3B4A0", VA = "0x182F3CEA0")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x2F3CCC0", Offset = "0x2F3B2C0", VA = "0x182F3CCC0")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x2F3C8E0", Offset = "0x2F3AEE0", VA = "0x182F3C8E0")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x2F3CAF0", Offset = "0x2F3B0F0", VA = "0x182F3CAF0")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001498")]
	[Address(RVA = "0x2F396A0", Offset = "0x2F37CA0", VA = "0x182F396A0")]
	private unsafe static extern void Internal_RequestAsyncReadback_1_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001499")]
	[Address(RVA = "0x2F397E0", Offset = "0x2F37DE0", VA = "0x182F397E0")]
	private unsafe static extern void Internal_RequestAsyncReadback_2_Injected(IntPtr _unity_self, IntPtr src, int size, int offset, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149A")]
	[Address(RVA = "0x2F39940", Offset = "0x2F37F40", VA = "0x182F39940")]
	private unsafe static extern void Internal_RequestAsyncReadback_3_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149B")]
	[Address(RVA = "0x2F39A90", Offset = "0x2F38090", VA = "0x182F39A90")]
	private unsafe static extern void Internal_RequestAsyncReadback_4_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149C")]
	[Address(RVA = "0x2F39BE0", Offset = "0x2F381E0", VA = "0x182F39BE0")]
	private unsafe static extern void Internal_RequestAsyncReadback_5_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149D")]
	[Address(RVA = "0x2F39D50", Offset = "0x2F38350", VA = "0x182F39D50")]
	private unsafe static extern void Internal_RequestAsyncReadback_6_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149E")]
	[Address(RVA = "0x2F39EE0", Offset = "0x2F384E0", VA = "0x182F39EE0")]
	private unsafe static extern void Internal_RequestAsyncReadback_7_Injected(IntPtr _unity_self, IntPtr src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600149F")]
	[Address(RVA = "0x2F3A070", Offset = "0x2F38670", VA = "0x182F3A070")]
	private unsafe static extern void Internal_RequestAsyncReadback_8_Injected(IntPtr _unity_self, IntPtr src, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x2F3A1B0", Offset = "0x2F387B0", VA = "0x182F3A1B0")]
	private unsafe static extern void Internal_RequestAsyncReadback_9_Injected(IntPtr _unity_self, IntPtr src, int size, int offset, Action<AsyncGPUReadbackRequest> callback, AsyncRequestNativeArrayData* nativeArrayData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x2F430A0", Offset = "0x2F416A0", VA = "0x182F430A0")]
	private static extern void SetInvertCulling_Injected(IntPtr _unity_self, bool invertCulling);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x2F3C630", Offset = "0x2F3AC30", VA = "0x182F3C630")]
	private static extern void Internal_SetSinglePassStereo_Injected(IntPtr _unity_self, SinglePassStereoMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x2F319B0", Offset = "0x2F2FFB0", VA = "0x182F319B0")]
	private static extern IntPtr CreateGPUFence_Internal_Injected(IntPtr _unity_self, GraphicsFenceType fenceType, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x2F48620", Offset = "0x2F46C20", VA = "0x182F48620")]
	private static extern void WaitOnGPUFence_Internal_Injected(IntPtr _unity_self, IntPtr fencePtr, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x2F3D170", Offset = "0x2F3B770", VA = "0x182F3D170")]
	private static extern void ReleaseBuffer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x2F3F390", Offset = "0x2F3D990", VA = "0x182F3F390")]
	private static extern void SetComputeFloatParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x2F3F650", Offset = "0x2F3DC50", VA = "0x182F3F650")]
	private static extern void SetComputeIntParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x2F40860", Offset = "0x2F3EE60", VA = "0x182F40860")]
	private static extern void SetComputeVectorParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x2F40550", Offset = "0x2F3EB50", VA = "0x182F40550")]
	private static extern void SetComputeVectorArrayParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x2F3FCE0", Offset = "0x2F3E2E0", VA = "0x182F3FCE0")]
	private static extern void SetComputeMatrixParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x2F3F9D0", Offset = "0x2F3DFD0", VA = "0x182F3F9D0")]
	private static extern void SetComputeMatrixArrayParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x2F3A710", Offset = "0x2F38D10", VA = "0x182F3A710")]
	private static extern void Internal_SetComputeFloats_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x2F3AB60", Offset = "0x2F39160", VA = "0x182F3AB60")]
	private static extern void Internal_SetComputeInts_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x2F3B010", Offset = "0x2F39610", VA = "0x182F3B010")]
	private static extern void Internal_SetComputeTextureParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x2F3A310", Offset = "0x2F38910", VA = "0x182F3A310")]
	private static extern void Internal_SetComputeBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x2F3A8C0", Offset = "0x2F38EC0", VA = "0x182F3A8C0")]
	private static extern void Internal_SetComputeGraphicsBufferHandleParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x2F3AA00", Offset = "0x2F39000", VA = "0x182F3AA00")]
	private static extern void Internal_SetComputeGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x2F3A470", Offset = "0x2F38A70", VA = "0x182F3A470")]
	private static extern void Internal_SetComputeConstantComputeBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x2F3A5C0", Offset = "0x2F38BC0", VA = "0x182F3A5C0")]
	private static extern void Internal_SetComputeConstantGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr computeShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x2F3AD10", Offset = "0x2F39310", VA = "0x182F3AD10")]
	private static extern void Internal_SetComputeParamsFromMaterial_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr material);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x2F379F0", Offset = "0x2F35FF0", VA = "0x182F379F0")]
	private static extern void Internal_DispatchCompute_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x2F378A0", Offset = "0x2F35EA0", VA = "0x182F378A0")]
	private static extern void Internal_DispatchComputeIndirect_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x2F37750", Offset = "0x2F35D50", VA = "0x182F37750")]
	private static extern void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, IntPtr indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x2F3B2D0", Offset = "0x2F398D0", VA = "0x182F3B2D0")]
	private static extern void Internal_SetRayTracingComputeBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x2F3BB10", Offset = "0x2F3A110", VA = "0x182F3BB10")]
	private static extern void Internal_SetRayTracingGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x2F3B9D0", Offset = "0x2F39FD0", VA = "0x182F3B9D0")]
	private static extern void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x2F3B420", Offset = "0x2F39A20", VA = "0x182F3B420")]
	private static extern void Internal_SetRayTracingConstantComputeBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x2F3B570", Offset = "0x2F39B70", VA = "0x182F3B570")]
	private static extern void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x2F3C220", Offset = "0x2F3A820", VA = "0x182F3C220")]
	private static extern void Internal_SetRayTracingTextureParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x2F3B6C0", Offset = "0x2F39CC0", VA = "0x182F3B6C0")]
	private static extern void Internal_SetRayTracingFloatParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x2F3BC60", Offset = "0x2F3A260", VA = "0x182F3BC60")]
	private static extern void Internal_SetRayTracingIntParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x2F3C500", Offset = "0x2F3AB00", VA = "0x182F3C500")]
	private static extern void Internal_SetRayTracingVectorParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x2F3C350", Offset = "0x2F3A950", VA = "0x182F3C350")]
	private static extern void Internal_SetRayTracingVectorArrayParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x2F3C0F0", Offset = "0x2F3A6F0", VA = "0x182F3C0F0")]
	private static extern void Internal_SetRayTracingMatrixParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x2F3BF40", Offset = "0x2F3A540", VA = "0x182F3BF40")]
	private static extern void Internal_SetRayTracingMatrixArrayParam_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x2F3B820", Offset = "0x2F39E20", VA = "0x182F3B820")]
	private static extern void Internal_SetRayTracingFloats_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x2F3BD90", Offset = "0x2F3A390", VA = "0x182F3BD90")]
	private static extern void Internal_SetRayTracingInts_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x2F37620", Offset = "0x2F35C20", VA = "0x182F37620")]
	private static extern void Internal_BuildRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr accelerationStructure, [In] ref RayTracingAccelerationStructure.BuildSettings buildSettings);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x2F3B140", Offset = "0x2F39740", VA = "0x182F3B140")]
	private static extern void Internal_SetRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr rayTracingShader, int nameID, IntPtr accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x2F3AE80", Offset = "0x2F39480", VA = "0x182F3AE80")]
	private static extern void Internal_SetComputeRayTracingAccelerationStructure_Injected(IntPtr _unity_self, IntPtr computeShader, int kernelIndex, int nameID, IntPtr accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x2F44A40", Offset = "0x2F43040", VA = "0x182F44A40")]
	private static extern void SetRayTracingShaderPass_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x2F37D30", Offset = "0x2F36330", VA = "0x182F37D30")]
	private static extern void Internal_DispatchRays_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper rayGenShaderName, uint width, uint height, uint depth, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x2F37A40", Offset = "0x2F36040", VA = "0x182F37A40")]
	private static extern void Internal_DispatchRaysIndirect_Injected(IntPtr _unity_self, IntPtr rayTracingShader, ref ManagedSpanWrapper rayGenShaderName, IntPtr argsBuffer, uint argsOffset, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x2F395F0", Offset = "0x2F37BF0", VA = "0x182F395F0")]
	private static extern void Internal_GenerateMips_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x2F31030", Offset = "0x2F2F630", VA = "0x182F31030")]
	private static extern void CopyCounterValueCC_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x2F311F0", Offset = "0x2F2F7F0", VA = "0x182F311F0")]
	private static extern void CopyCounterValueGC_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x2F31110", Offset = "0x2F2F710", VA = "0x182F31110")]
	private static extern void CopyCounterValueCG_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x2F312D0", Offset = "0x2F2F8D0", VA = "0x182F312D0")]
	private static extern void CopyCounterValueGG_Injected(IntPtr _unity_self, IntPtr src, IntPtr dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x2F48730", Offset = "0x2F46D30", VA = "0x182F48730")]
	private static extern void get_name_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x2F488D0", Offset = "0x2F46ED0", VA = "0x182F488D0")]
	private static extern void set_name_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x2F48830", Offset = "0x2F46E30", VA = "0x182F48830")]
	private static extern int get_sizeInBytes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x2F30EE0", Offset = "0x2F2F4E0", VA = "0x182F30EE0")]
	private static extern void Clear_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x2F38660", Offset = "0x2F36C60", VA = "0x182F38660")]
	private static extern void Internal_DrawMesh_Injected(IntPtr _unity_self, IntPtr mesh, [In] ref Matrix4x4 matrix, IntPtr material, int submeshIndex, int shaderPass, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D6")]
	[Address(RVA = "0x2F38810", Offset = "0x2F36E10", VA = "0x182F38810")]
	private static extern void Internal_DrawMultipleMeshes_Injected(IntPtr _unity_self, ref ManagedSpanWrapper matrices, Mesh[] meshes, ref ManagedSpanWrapper subsetIndices, int count, IntPtr material, int shaderPass, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x2F39480", Offset = "0x2F37A80", VA = "0x182F39480")]
	private static extern void Internal_DrawRenderer_Injected(IntPtr _unity_self, IntPtr renderer, IntPtr material, int submeshIndex, int shaderPass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x2F393D0", Offset = "0x2F379D0", VA = "0x182F393D0")]
	private static extern void Internal_DrawRendererList_Injected(IntPtr _unity_self, [In] ref RendererList rendererList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x2F39280", Offset = "0x2F37880", VA = "0x182F39280")]
	private static extern void Internal_DrawProcedural_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x2F38E20", Offset = "0x2F37420", VA = "0x182F38E20")]
	private static extern void Internal_DrawProceduralIndexed_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x2F39110", Offset = "0x2F37710", VA = "0x182F39110")]
	private static extern void Internal_DrawProceduralIndirect_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x2F38C90", Offset = "0x2F37290", VA = "0x182F38C90")]
	private static extern void Internal_DrawProceduralIndexedIndirect_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x2F38FA0", Offset = "0x2F375A0", VA = "0x182F38FA0")]
	private static extern void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(IntPtr _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x2F38B00", Offset = "0x2F37100", VA = "0x182F38B00")]
	private static extern void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x2F38450", Offset = "0x2F36A50", VA = "0x182F38450")]
	private static extern void Internal_DrawMeshInstanced_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ref ManagedSpanWrapper matrices, int count, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x2F382E0", Offset = "0x2F368E0", VA = "0x182F382E0")]
	private static extern void Internal_DrawMeshInstancedProcedural_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, int count, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x2F38160", Offset = "0x2F36760", VA = "0x182F38160")]
	private static extern void Internal_DrawMeshInstancedIndirect_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x2F37FE0", Offset = "0x2F365E0", VA = "0x182F37FE0")]
	private static extern void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(IntPtr _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, IntPtr bufferWithArgs, int argsOffset, IntPtr properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x2F38A50", Offset = "0x2F37050", VA = "0x182F38A50")]
	private static extern void Internal_DrawOcclusionMesh_Injected(IntPtr _unity_self, [In] ref RectInt normalizedCamViewport);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x2F437B0", Offset = "0x2F41DB0", VA = "0x182F437B0")]
	private static extern void SetRandomWriteTarget_Texture_Injected(IntPtr _unity_self, int index, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x2F435F0", Offset = "0x2F41BF0", VA = "0x182F435F0")]
	private static extern void SetRandomWriteTarget_Buffer_Injected(IntPtr _unity_self, int index, IntPtr uav, bool preserveCounterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x2F436D0", Offset = "0x2F41CD0", VA = "0x182F436D0")]
	private static extern void SetRandomWriteTarget_GraphicsBuffer_Injected(IntPtr _unity_self, int index, IntPtr uav, bool preserveCounterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x2F305B0", Offset = "0x2F2EBB0", VA = "0x182F305B0")]
	private static extern void ClearRandomWriteTargets_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x2F48020", Offset = "0x2F46620", VA = "0x182F48020")]
	private static extern void SetViewport_Injected(IntPtr _unity_self, [In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x2F363B0", Offset = "0x2F349B0", VA = "0x182F363B0")]
	private static extern void EnableScissorRect_Injected(IntPtr _unity_self, [In] ref Rect scissor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x2F320F0", Offset = "0x2F306F0", VA = "0x182F320F0")]
	private static extern void DisableScissorRect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x2F313B0", Offset = "0x2F2F9B0", VA = "0x182F313B0")]
	private static extern void CopyTexture_Internal_Injected(IntPtr _unity_self, ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x2F2FF00", Offset = "0x2F2E500", VA = "0x182F2FF00")]
	private static extern void Blit_Texture_Injected(IntPtr _unity_self, IntPtr source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x2F41950", Offset = "0x2F3FF50", VA = "0x182F41950")]
	private static extern void SetGlobalFloat_Injected(IntPtr _unity_self, int nameID, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x2F41AF0", Offset = "0x2F400F0", VA = "0x182F41AF0")]
	private static extern void SetGlobalInt_Injected(IntPtr _unity_self, int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x2F41C40", Offset = "0x2F40240", VA = "0x182F41C40")]
	private static extern void SetGlobalInteger_Injected(IntPtr _unity_self, int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x2F42EB0", Offset = "0x2F414B0", VA = "0x182F42EB0")]
	private static extern void SetGlobalVector_Injected(IntPtr _unity_self, int nameID, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x2F40E50", Offset = "0x2F3F450", VA = "0x182F40E50")]
	private static extern void SetGlobalColor_Injected(IntPtr _unity_self, int nameID, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x2F42450", Offset = "0x2F40A50", VA = "0x182F42450")]
	private static extern void SetGlobalMatrix_Injected(IntPtr _unity_self, int nameID, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x2F36460", Offset = "0x2F34A60", VA = "0x182F36460")]
	private static extern void EnableShaderKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x2F35FE0", Offset = "0x2F345E0", VA = "0x182F35FE0")]
	private static extern void EnableGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x2F36290", Offset = "0x2F34890", VA = "0x182F36290")]
	private static extern void EnableMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x2F35EC0", Offset = "0x2F344C0", VA = "0x182F35EC0")]
	private static extern void EnableComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x2F32190", Offset = "0x2F30790", VA = "0x182F32190")]
	private static extern void DisableShaderKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x2F31D20", Offset = "0x2F30320", VA = "0x182F31D20")]
	private static extern void DisableGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x2F31FD0", Offset = "0x2F305D0", VA = "0x182F31FD0")]
	private static extern void DisableMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x2F31C00", Offset = "0x2F30200", VA = "0x182F31C00")]
	private static extern void DisableComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x2F41D90", Offset = "0x2F40390", VA = "0x182F41D90")]
	private static extern void SetGlobalKeyword_Injected(IntPtr _unity_self, [In] ref GlobalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x2F434E0", Offset = "0x2F41AE0", VA = "0x182F434E0")]
	private static extern void SetMaterialKeyword_Injected(IntPtr _unity_self, IntPtr material, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x2F3F8C0", Offset = "0x2F3DEC0", VA = "0x182F3F8C0")]
	private static extern void SetComputeKeyword_Injected(IntPtr _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x2F47F50", Offset = "0x2F46550", VA = "0x182F47F50")]
	private static extern void SetViewProjectionMatrices_Injected(IntPtr _unity_self, [In] ref Matrix4x4 view, [In] ref Matrix4x4 proj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x2F41280", Offset = "0x2F3F880", VA = "0x182F41280")]
	private static extern void SetGlobalDepthBias_Injected(IntPtr _unity_self, float bias, float slopeBias);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001500")]
	[Address(RVA = "0x2F40A80", Offset = "0x2F3F080", VA = "0x182F40A80")]
	private static extern void SetExecutionFlags_Injected(IntPtr _unity_self, CommandBufferExecutionFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001501")]
	[Address(RVA = "0x2F48450", Offset = "0x2F46A50", VA = "0x182F48450")]
	private static extern bool ValidateAgainstExecutionFlags_Injected(IntPtr _unity_self, CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001502")]
	[Address(RVA = "0x2F41360", Offset = "0x2F3F960", VA = "0x182F41360")]
	private static extern void SetGlobalFloatArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x2F428C0", Offset = "0x2F40EC0", VA = "0x182F428C0")]
	private static extern void SetGlobalVectorArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x2F41E60", Offset = "0x2F40460", VA = "0x182F41E60")]
	private static extern void SetGlobalMatrixArrayListImpl_Injected(IntPtr _unity_self, int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x2F41420", Offset = "0x2F3FA20", VA = "0x182F41420")]
	private static extern void SetGlobalFloatArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x2F42980", Offset = "0x2F40F80", VA = "0x182F42980")]
	private static extern void SetGlobalVectorArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001507")]
	[Address(RVA = "0x2F41F20", Offset = "0x2F40520", VA = "0x182F41F20")]
	private static extern void SetGlobalMatrixArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001508")]
	[Address(RVA = "0x2F43380", Offset = "0x2F41980", VA = "0x182F43380")]
	private static extern void SetLateLatchProjectionMatrices_Injected(IntPtr _unity_self, ref ManagedSpanWrapper projectionMat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001509")]
	[Address(RVA = "0x2F3CF70", Offset = "0x2F3B570", VA = "0x182F3CF70")]
	private static extern void MarkLateLatchMatrixShaderPropertyID_Injected(IntPtr _unity_self, CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150A")]
	[Address(RVA = "0x2F483B0", Offset = "0x2F469B0", VA = "0x182F483B0")]
	private static extern void UnmarkLateLatchMatrix_Injected(IntPtr _unity_self, CameraLateLatchMatrixType matrixPropertyType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150B")]
	[Address(RVA = "0x2F425C0", Offset = "0x2F40BC0", VA = "0x182F425C0")]
	private static extern void SetGlobalTexture_Impl_Injected(IntPtr _unity_self, int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150C")]
	[Address(RVA = "0x2F40BC0", Offset = "0x2F3F1C0", VA = "0x182F40BC0")]
	private static extern void SetGlobalBufferInternal_Injected(IntPtr _unity_self, int nameID, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150D")]
	[Address(RVA = "0x2F41AA0", Offset = "0x2F400A0", VA = "0x182F41AA0")]
	private static extern void SetGlobalGraphicsBufferInternal_Injected(IntPtr _unity_self, int nameID, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150E")]
	[Address(RVA = "0x2F47DC0", Offset = "0x2F463C0", VA = "0x182F47DC0")]
	private static extern void SetShadowSamplingMode_Impl_Injected(IntPtr _unity_self, ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600150F")]
	[Address(RVA = "0x2F3CDD0", Offset = "0x2F3B3D0", VA = "0x182F3CDD0")]
	private static extern void IssuePluginEventInternal_Injected(IntPtr _unity_self, IntPtr callback, int eventID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001510")]
	[Address(RVA = "0x2F2FD20", Offset = "0x2F2E320", VA = "0x182F2FD20")]
	private static extern void BeginSample_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001511")]
	[Address(RVA = "0x2F36890", Offset = "0x2F34E90", VA = "0x182F36890")]
	private static extern void EndSample_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001512")]
	[Address(RVA = "0x2F2FC10", Offset = "0x2F2E210", VA = "0x182F2FC10")]
	private static extern void BeginSample_CustomSampler_Injected(IntPtr _unity_self, IntPtr sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001513")]
	[Address(RVA = "0x2F36780", Offset = "0x2F34D80", VA = "0x182F36780")]
	private static extern void EndSample_CustomSampler_Injected(IntPtr _unity_self, IntPtr sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001514")]
	[Address(RVA = "0x2F3CBF0", Offset = "0x2F3B1F0", VA = "0x182F3CBF0")]
	private static extern void IssuePluginEventAndDataInternal_Injected(IntPtr _unity_self, IntPtr callback, int eventID, IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001515")]
	[Address(RVA = "0x2F3C810", Offset = "0x2F3AE10", VA = "0x182F3C810")]
	private static extern void IssuePluginCustomBlitInternal_Injected(IntPtr _unity_self, IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001516")]
	[Address(RVA = "0x2F3C9C0", Offset = "0x2F3AFC0", VA = "0x182F3C9C0")]
	private static extern void IssuePluginCustomTextureUpdateInternal_Injected(IntPtr _unity_self, IntPtr callback, IntPtr targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001517")]
	[Address(RVA = "0x2F40FA0", Offset = "0x2F3F5A0", VA = "0x182F40FA0")]
	private static extern void SetGlobalConstantBufferInternal_Injected(IntPtr _unity_self, IntPtr buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001518")]
	[Address(RVA = "0x2F41230", Offset = "0x2F3F830", VA = "0x182F41230")]
	private static extern void SetGlobalConstantGraphicsBufferInternal_Injected(IntPtr _unity_self, IntPtr buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001519")]
	[Address(RVA = "0x2F36E60", Offset = "0x2F35460", VA = "0x182F36E60")]
	private static extern void IncrementUpdateCount_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151A")]
	[Address(RVA = "0x2F43000", Offset = "0x2F41600", VA = "0x182F43000")]
	private static extern void SetInstanceMultiplier_Injected(IntPtr _unity_self, uint multiplier);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151B")]
	[Address(RVA = "0x2F40B20", Offset = "0x2F3F120", VA = "0x182F40B20")]
	private static extern void SetFoveatedRenderingMode_Injected(IntPtr _unity_self, FoveatedRenderingMode foveatedRenderingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151C")]
	[Address(RVA = "0x2F480D0", Offset = "0x2F466D0", VA = "0x182F480D0")]
	private static extern void SetWireframe_Injected(IntPtr _unity_self, bool enable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151D")]
	[Address(RVA = "0x2F30F80", Offset = "0x2F2F580", VA = "0x182F30F80")]
	private static extern void ConfigureFoveatedRendering_Injected(IntPtr _unity_self, IntPtr platformData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151E")]
	[Address(RVA = "0x2F307D0", Offset = "0x2F2EDD0", VA = "0x182F307D0")]
	private static extern void ClearRenderTargetSingle_Internal_Injected(IntPtr _unity_self, RTClearFlags clearFlags, [In] ref Color color, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600151F")]
	[Address(RVA = "0x2F30650", Offset = "0x2F2EC50", VA = "0x182F30650")]
	private static extern void ClearRenderTargetMulti_Internal_Injected(IntPtr _unity_self, RTClearFlags clearFlags, ref ManagedSpanWrapper colors, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001520")]
	[Address(RVA = "0x2F45790", Offset = "0x2F43D90", VA = "0x182F45790")]
	private static extern void SetRenderTargetSingle_Internal_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001521")]
	[Address(RVA = "0x2F451C0", Offset = "0x2F437C0", VA = "0x182F451C0")]
	private static extern void SetRenderTargetColorDepth_Internal_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001522")]
	[Address(RVA = "0x2F45530", Offset = "0x2F43B30", VA = "0x182F45530")]
	private static extern void SetRenderTargetMulti_Internal_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001523")]
	[Address(RVA = "0x2F450A0", Offset = "0x2F436A0", VA = "0x182F450A0")]
	private static extern void SetRenderTargetColorDepthSubtarget_Injected(IntPtr _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001524")]
	[Address(RVA = "0x2F452C0", Offset = "0x2F438C0", VA = "0x182F452C0")]
	private static extern void SetRenderTargetMultiSubtarget_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001525")]
	[Address(RVA = "0x2F37190", Offset = "0x2F35790", VA = "0x182F37190")]
	private static extern void InternalSetComputeBufferNativeData_Injected(IntPtr _unity_self, IntPtr buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001526")]
	[Address(RVA = "0x2F37070", Offset = "0x2F35670", VA = "0x182F37070")]
	private static extern void InternalSetComputeBufferData_Injected(IntPtr _unity_self, IntPtr buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001527")]
	[Address(RVA = "0x2F36F40", Offset = "0x2F35540", VA = "0x182F36F40")]
	private static extern void InternalSetComputeBufferCounterValue_Injected(IntPtr _unity_self, IntPtr buffer, uint counterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001528")]
	[Address(RVA = "0x2F37500", Offset = "0x2F35B00", VA = "0x182F37500")]
	private static extern void InternalSetGraphicsBufferNativeData_Injected(IntPtr _unity_self, IntPtr buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001529")]
	[Address(RVA = "0x2F373E0", Offset = "0x2F359E0", VA = "0x182F373E0")]
	private static extern void InternalSetGraphicsBufferData_Injected(IntPtr _unity_self, IntPtr buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152A")]
	[Address(RVA = "0x2F372B0", Offset = "0x2F358B0", VA = "0x182F372B0")]
	private static extern void InternalSetGraphicsBufferCounterValue_Injected(IntPtr _unity_self, IntPtr buffer, uint counterValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152B")]
	[Address(RVA = "0x2F2F7A0", Offset = "0x2F2DDA0", VA = "0x182F2F7A0")]
	private static extern void BeginRenderPass_Internal_Injected(IntPtr _unity_self, int width, int height, int volumeDepth, int samples, ref ManagedSpanWrapper attachments, int depthAttachmentIndex, int shadingRateImageAttachmentIndex, ref ManagedSpanWrapper subPasses, ref ManagedSpanWrapper debugNameUtf8);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152C")]
	[Address(RVA = "0x2F3D030", Offset = "0x2F3B630", VA = "0x182F3D030")]
	private static extern void NextSubPass_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152D")]
	[Address(RVA = "0x2F36640", Offset = "0x2F34C40", VA = "0x182F36640")]
	private static extern void EndRenderPass_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x2F48180", Offset = "0x2F46780", VA = "0x182F48180")]
	private static extern void SetupCameraProperties_Internal_Injected(IntPtr _unity_self, IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x2F3C6D0", Offset = "0x2F3ACD0", VA = "0x182F3C6D0")]
	private static extern void InvokeOnRenderObjectCallbacks_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x2F47C70", Offset = "0x2F46270", VA = "0x182F47C70")]
	private static extern void SetShadingRateFragmentSize_Impl_Injected(IntPtr _unity_self, ShadingRateFragmentSize shadingRateFragmentSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x2F47BB0", Offset = "0x2F461B0", VA = "0x182F47BB0")]
	private static extern void SetShadingRateCombiner_Impl_Injected(IntPtr _unity_self, ShadingRateCombinerStage stage, ShadingRateCombiner combiner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x2F47D10", Offset = "0x2F46310", VA = "0x182F47D10")]
	private static extern void SetShadingRateImage_Impl_Injected(IntPtr _unity_self, in RenderTargetIdentifier shadingRateImage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001533")]
	[Address(RVA = "0x2F3E200", Offset = "0x2F3C800", VA = "0x182F3E200")]
	private static extern void ResetShadingRate_Impl_Injected(IntPtr _unity_self);
}
