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

[Token(Token = "0x20002CE")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBuffer.bindings.h")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public class CommandBuffer : IDisposable
{
	[Token(Token = "0x4000816")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000273")]
	public extern string name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x4AF52C0", Offset = "0x4AF52C0", VA = "0x4AF52C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x4AF52F0", Offset = "0x4AF52F0", VA = "0x4AF52F0")]
		set;
	}

	[Token(Token = "0x17000274")]
	public extern int sizeInBytes
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x4AF5330", Offset = "0x4AF5330", VA = "0x4AF5330")]
		[UnityEngine.Bindings.NativeMethod("GetBufferSize")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x4AF1DC0", Offset = "0x4AF1DC0", VA = "0x4AF1DC0")]
	[UnityEngine.Bindings.NativeMethod("AddSetInvertCulling")]
	public extern void SetInvertCulling(bool invertCulling);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x4AF1E00", Offset = "0x4AF1E00", VA = "0x4AF1E00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
	private extern void Internal_SetSinglePassStereo(SinglePassStereoMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x4AF1E40", Offset = "0x4AF1E40", VA = "0x4AF1E40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x4AF1E70", Offset = "0x4AF1E70", VA = "0x4AF1E70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
	private extern IntPtr CreateGPUFence_Internal(GraphicsFenceType fenceType, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x4AF1EB0", Offset = "0x4AF1EB0", VA = "0x4AF1EB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
	private extern void WaitOnGPUFence_Internal(IntPtr fencePtr, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x4AF1EF0", Offset = "0x4AF1EF0", VA = "0x4AF1EF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
	private extern void ReleaseBuffer();

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x4AF1F20", Offset = "0x4AF1F20", VA = "0x4AF1F20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
	public void SetComputeFloatParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x4AF2070", Offset = "0x4AF2070", VA = "0x4AF2070")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
	public void SetComputeIntParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x4AF21B0", Offset = "0x4AF21B0", VA = "0x4AF21B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
	public void SetComputeVectorParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x4AF2300", Offset = "0x4AF2300", VA = "0x4AF2300")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
	public void SetComputeVectorArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x4AF24B0", Offset = "0x4AF24B0", VA = "0x4AF24B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
	public void SetComputeMatrixParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x4AF25F0", Offset = "0x4AF25F0", VA = "0x4AF25F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
	public void SetComputeMatrixArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x4AF27A0", Offset = "0x4AF27A0", VA = "0x4AF27A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
	private void Internal_SetComputeFloats([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x4AF2950", Offset = "0x4AF2950", VA = "0x4AF2950")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
	private void Internal_SetComputeInts([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x4AF2B00", Offset = "0x4AF2B00", VA = "0x4AF2B00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
	private void Internal_SetComputeTextureParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x4AF2C70", Offset = "0x4AF2C70", VA = "0x4AF2C70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x4AF2DC0", Offset = "0x4AF2DC0", VA = "0x4AF2DC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x4AF2F10", Offset = "0x4AF2F10", VA = "0x4AF2F10")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x4AF3060", Offset = "0x4AF3060", VA = "0x4AF3060")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x4AF31D0", Offset = "0x4AF31D0", VA = "0x4AF31D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x4AF3340", Offset = "0x4AF3340", VA = "0x4AF3340")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchCompute([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x4AF34B0", Offset = "0x4AF34B0", VA = "0x4AF34B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirect([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x4AF3600", Offset = "0x4AF3600", VA = "0x4AF3600")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirectGraphicsBuffer([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x4AF3750", Offset = "0x4AF3750", VA = "0x4AF3750")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x4AF3890", Offset = "0x4AF3890", VA = "0x4AF3890")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x4AF39D0", Offset = "0x4AF39D0", VA = "0x4AF39D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x4AF3B20", Offset = "0x4AF3B20", VA = "0x4AF3B20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x4AF3C90", Offset = "0x4AF3C90", VA = "0x4AF3C90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x4AF3E00", Offset = "0x4AF3E00", VA = "0x4AF3E00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingTextureParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x4AF3F40", Offset = "0x4AF3F40", VA = "0x4AF3F40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloatParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x4AF4090", Offset = "0x4AF4090", VA = "0x4AF4090")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingIntParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x4AF41D0", Offset = "0x4AF41D0", VA = "0x4AF41D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x4AF4320", Offset = "0x4AF4320", VA = "0x4AF4320")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x4AF44D0", Offset = "0x4AF44D0", VA = "0x4AF44D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x4AF4610", Offset = "0x4AF4610", VA = "0x4AF4610")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x4AF47C0", Offset = "0x4AF47C0", VA = "0x4AF47C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloats([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x4AF4970", Offset = "0x4AF4970", VA = "0x4AF4970")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
	private void Internal_SetRayTracingInts([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x4AF4B20", Offset = "0x4AF4B20", VA = "0x4AF4B20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_BuildRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x4AF4BB0", Offset = "0x4AF4BB0", VA = "0x4AF4BB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x4AF4CF0", Offset = "0x4AF4CF0", VA = "0x4AF4CF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetComputeRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x4AF4E40", Offset = "0x4AF4E40", VA = "0x4AF4E40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRays([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x4AF5020", Offset = "0x4AF5020", VA = "0x4AF5020")]
	[UnityEngine.Bindings.NativeMethod("AddResolveAntiAliasedSurface")]
	private void Internal_ResolveAntiAliasedSurface(RenderTexture rt, RenderTexture target)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x4AF5180", Offset = "0x4AF5180", VA = "0x4AF5180")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueCC(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4AF51D0", Offset = "0x4AF51D0", VA = "0x4AF51D0")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueGC(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x4AF5220", Offset = "0x4AF5220", VA = "0x4AF5220")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueCG(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x4AF5270", Offset = "0x4AF5270", VA = "0x4AF5270")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueGG(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x4AF5360", Offset = "0x4AF5360", VA = "0x4AF5360")]
	[UnityEngine.Bindings.NativeMethod("ClearCommands")]
	public extern void Clear();

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x4AF5390", Offset = "0x4AF5390", VA = "0x4AF5390")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
	private void Internal_DrawMesh([UnityEngine.Bindings.NotNull("ArgumentNullException")] Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x4AF5590", Offset = "0x4AF5590", VA = "0x4AF5590")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRenderer")]
	private void Internal_DrawRenderer([UnityEngine.Bindings.NotNull("ArgumentNullException")] Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x4AF5760", Offset = "0x4AF5760", VA = "0x4AF5760")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRendererList")]
	private void Internal_DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x4AF57E0", Offset = "0x4AF57E0", VA = "0x4AF57E0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProcedural")]
	private void Internal_DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x4AF5930", Offset = "0x4AF5930", VA = "0x4AF5930")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProceduralIndexed")]
	private void Internal_DrawProceduralIndexed(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x4AF5A90", Offset = "0x4AF5A90", VA = "0x4AF5A90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x4AF5BE0", Offset = "0x4AF5BE0", VA = "0x4AF5BE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x4AF5D40", Offset = "0x4AF5D40", VA = "0x4AF5D40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirectGraphicsBuffer(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x4AF5E90", Offset = "0x4AF5E90", VA = "0x4AF5E90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4AF5FF0", Offset = "0x4AF5FF0", VA = "0x4AF5FF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
	private void Internal_DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4AF61F0", Offset = "0x4AF61F0", VA = "0x4AF61F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4AF63B0", Offset = "0x4AF63B0", VA = "0x4AF63B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x4AF6570", Offset = "0x4AF6570", VA = "0x4AF6570")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirectGraphicsBuffer(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x4AF6730", Offset = "0x4AF6730", VA = "0x4AF6730")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
	private void Internal_DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x4AF67B0", Offset = "0x4AF67B0", VA = "0x4AF67B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private extern void SetRandomWriteTarget_GraphicsBuffer(int index, GraphicsBuffer uav, bool preserveCounterValue);

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x4AF6800", Offset = "0x4AF6800", VA = "0x4AF6800")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x4AF6880", Offset = "0x4AF6880", VA = "0x4AF6880")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x4AF6900", Offset = "0x4AF6900", VA = "0x4AF6900")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public extern void DisableScissorRect();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x4AF6930", Offset = "0x4AF6930", VA = "0x4AF6930")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
	private extern void CopyTexture_Internal(ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode);

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x4AF6990", Offset = "0x4AF6990", VA = "0x4AF6990")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
	private void Blit_Texture(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x4AF6B80", Offset = "0x4AF6B80", VA = "0x4AF6B80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Identifier", HasExplicitThis = true)]
	private void Blit_Identifier(ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x4AF6D00", Offset = "0x4AF6D00", VA = "0x4AF6D00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRT", HasExplicitThis = true)]
	public extern void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode, bool useDynamicScale);

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x4AF6D60", Offset = "0x4AF6D60", VA = "0x4AF6D60")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode)
	{
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x4AF6E00", Offset = "0x4AF6E00", VA = "0x4AF6E00")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing)
	{
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x4AF6E80", Offset = "0x4AF6E80", VA = "0x4AF6E80")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format)
	{
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x4AF6F00", Offset = "0x4AF6F00", VA = "0x4AF6F00")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode, bool useDynamicScale)
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x4AF6FF0", Offset = "0x4AF6FF0", VA = "0x4AF6FF0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x4AF70C0", Offset = "0x4AF70C0", VA = "0x4AF70C0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x4AF71A0", Offset = "0x4AF71A0", VA = "0x4AF71A0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x4AF7260", Offset = "0x4AF7260", VA = "0x4AF7260")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRTWithDescriptor", HasExplicitThis = true)]
	private void GetTemporaryRTWithDescriptor(int nameID, RenderTextureDescriptor desc, FilterMode filter)
	{
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x4AF7300", Offset = "0x4AF7300", VA = "0x4AF7300")]
	public void GetTemporaryRT(int nameID, RenderTextureDescriptor desc, FilterMode filter)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x4AF7370", Offset = "0x4AF7370", VA = "0x4AF7370")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseTemporaryRT", HasExplicitThis = true)]
	public extern void ReleaseTemporaryRT(int nameID);

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x4AF73B0", Offset = "0x4AF73B0", VA = "0x4AF73B0")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x4AF7540", Offset = "0x4AF7540", VA = "0x4AF7540")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x4AF7470", Offset = "0x4AF7470", VA = "0x4AF7470")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x4AF76A0", Offset = "0x4AF76A0", VA = "0x4AF76A0")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x4AF7740", Offset = "0x4AF7740", VA = "0x4AF7740")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth = 1f, uint stencil = 0u)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x4AF7980", Offset = "0x4AF7980", VA = "0x4AF7980")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
	public extern void SetGlobalFloat(int nameID, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x4AF79C0", Offset = "0x4AF79C0", VA = "0x4AF79C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
	public extern void SetGlobalInt(int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x4AF7A00", Offset = "0x4AF7A00", VA = "0x4AF7A00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
	public extern void SetGlobalInteger(int nameID, int value);

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x4AF7A40", Offset = "0x4AF7A40", VA = "0x4AF7A40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x4AF7AD0", Offset = "0x4AF7AD0", VA = "0x4AF7AD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x4AF7B60", Offset = "0x4AF7B60", VA = "0x4AF7B60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x4AF7BE0", Offset = "0x4AF7BE0", VA = "0x4AF7BE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	public extern void EnableShaderKeyword(string keyword);

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x4AF7C20", Offset = "0x4AF7C20", VA = "0x4AF7C20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	private void EnableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x4AF7CA0", Offset = "0x4AF7CA0", VA = "0x4AF7CA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
	private void EnableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x4AF7DA0", Offset = "0x4AF7DA0", VA = "0x4AF7DA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
	private void EnableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x4AF7EA0", Offset = "0x4AF7EA0", VA = "0x4AF7EA0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x4AF7EF0", Offset = "0x4AF7EF0", VA = "0x4AF7EF0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x4AF7FC0", Offset = "0x4AF7FC0", VA = "0x4AF7FC0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x4AF8090", Offset = "0x4AF8090", VA = "0x4AF8090")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	public extern void DisableShaderKeyword(string keyword);

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x4AF80D0", Offset = "0x4AF80D0", VA = "0x4AF80D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	private void DisableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x4AF8150", Offset = "0x4AF8150", VA = "0x4AF8150")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
	private void DisableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x4AF8250", Offset = "0x4AF8250", VA = "0x4AF8250")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
	private void DisableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x4AF8350", Offset = "0x4AF8350", VA = "0x4AF8350")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x4AF83A0", Offset = "0x4AF83A0", VA = "0x4AF83A0")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x4AF8470", Offset = "0x4AF8470", VA = "0x4AF8470")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x4AF8540", Offset = "0x4AF8540", VA = "0x4AF8540")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
	private void SetGlobalKeyword(GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x4AF85D0", Offset = "0x4AF85D0", VA = "0x4AF85D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
	private void SetMaterialKeyword(Material material, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x4AF86F0", Offset = "0x4AF86F0", VA = "0x4AF86F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
	private void SetComputeKeyword(ComputeShader computeShader, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x4AF8810", Offset = "0x4AF8810", VA = "0x4AF8810")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x4AF8860", Offset = "0x4AF8860", VA = "0x4AF8860")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x4AF8930", Offset = "0x4AF8930", VA = "0x4AF8930")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x4AF8A00", Offset = "0x4AF8A00", VA = "0x4AF8A00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x4AF8A90", Offset = "0x4AF8A90", VA = "0x4AF8A90")]
	[UnityEngine.Bindings.NativeMethod("AddSetGlobalDepthBias")]
	public extern void SetGlobalDepthBias(float bias, float slopeBias);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x4AF8AF0", Offset = "0x4AF8AF0", VA = "0x4AF8AF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	public extern void SetExecutionFlags(CommandBufferExecutionFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x4AF7600", Offset = "0x4AF7600", VA = "0x4AF7600")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	private extern bool ValidateAgainstExecutionFlags(CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x4AF8B30", Offset = "0x4AF8B30", VA = "0x4AF8B30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalFloatArrayListImpl(int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x4AF8B70", Offset = "0x4AF8B70", VA = "0x4AF8B70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalVectorArrayListImpl(int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x4AF8BB0", Offset = "0x4AF8BB0", VA = "0x4AF8BB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalMatrixArrayListImpl(int nameID, object values);

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x4AF8BF0", Offset = "0x4AF8BF0", VA = "0x4AF8BF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalFloatArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] float[] values)
	{
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x4AF8D40", Offset = "0x4AF8D40", VA = "0x4AF8D40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalVectorArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Vector4[] values)
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x4AF8E90", Offset = "0x4AF8E90", VA = "0x4AF8E90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalMatrixArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x4AF8FE0", Offset = "0x4AF8FE0", VA = "0x4AF8FE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetLateLatchProjectionMatrices([UnityEngine.Bindings.NotNull("ArgumentNullException")] Matrix4x4[] projectionMat)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x4AF9120", Offset = "0x4AF9120", VA = "0x4AF9120")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
	public extern void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x4AF9160", Offset = "0x4AF9160", VA = "0x4AF9160")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
	public extern void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x4AF91A0", Offset = "0x4AF91A0", VA = "0x4AF91A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
	private extern void SetGlobalTexture_Impl(int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x4AF91F0", Offset = "0x4AF91F0", VA = "0x4AF91F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private extern void SetGlobalBufferInternal(int nameID, ComputeBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x4AF9230", Offset = "0x4AF9230", VA = "0x4AF9230")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private extern void SetGlobalGraphicsBufferInternal(int nameID, GraphicsBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x4AF9270", Offset = "0x4AF9270", VA = "0x4AF9270")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
	private extern void SetShadowSamplingMode_Impl(ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x4AF92B0", Offset = "0x4AF92B0", VA = "0x4AF92B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
	private extern void IssuePluginEventInternal(IntPtr callback, int eventID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4AF92F0", Offset = "0x4AF92F0", VA = "0x4AF92F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
	public extern void BeginSample(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4AF9330", Offset = "0x4AF9330", VA = "0x4AF9330")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
	public extern void EndSample(string name);

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4AF9370", Offset = "0x4AF9370", VA = "0x4AF9370")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4AF93F0", Offset = "0x4AF93F0", VA = "0x4AF93F0")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4AF93B0", Offset = "0x4AF93B0", VA = "0x4AF93B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
	private extern void BeginSample_CustomSampler([UnityEngine.Bindings.NotNull("ArgumentNullException")] CustomSampler sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x4AF9430", Offset = "0x4AF9430", VA = "0x4AF9430")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
	private extern void EndSample_CustomSampler([UnityEngine.Bindings.NotNull("ArgumentNullException")] CustomSampler sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x4AF9470", Offset = "0x4AF9470", VA = "0x4AF9470")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
	private extern void IssuePluginEventAndDataInternal(IntPtr callback, int eventID, IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x4AF94C0", Offset = "0x4AF94C0", VA = "0x4AF94C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
	private extern void IssuePluginCustomBlitInternal(IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x4AF9520", Offset = "0x4AF9520", VA = "0x4AF9520")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
	private void IssuePluginCustomTextureUpdateInternal(IntPtr callback, Texture targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x4AF9650", Offset = "0x4AF9650", VA = "0x4AF9650")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private extern void SetGlobalConstantBufferInternal(ComputeBuffer buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x4AF96A0", Offset = "0x4AF96A0", VA = "0x4AF96A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private extern void SetGlobalConstantGraphicsBufferInternal(GraphicsBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x4AF96F0", Offset = "0x4AF96F0", VA = "0x4AF96F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x4AF9770", Offset = "0x4AF9770", VA = "0x4AF9770")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
	public extern void SetInstanceMultiplier(uint multiplier);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x4AF97B0", Offset = "0x4AF97B0", VA = "0x4AF97B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
	public extern void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x4AF97F0", Offset = "0x4AF97F0", VA = "0x4AF97F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
	public extern void SetWireframe(bool enable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x4AF9830", Offset = "0x4AF9830", VA = "0x4AF9830")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
	public extern void ConfigureFoveatedRendering(IntPtr platformData);

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x4AF9870", Offset = "0x4AF9870", VA = "0x4AF9870")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x4AF9970", Offset = "0x4AF9970", VA = "0x4AF9970")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x4AF9A60", Offset = "0x4AF9A60", VA = "0x4AF9A60")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x4AF9B60", Offset = "0x4AF9B60", VA = "0x4AF9B60")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x4AF9C80", Offset = "0x4AF9C80", VA = "0x4AF9C80")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x4AF9DB0", Offset = "0x4AF9DB0", VA = "0x4AF9DB0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4AF9F10", Offset = "0x4AF9F10", VA = "0x4AF9F10")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x4AFA050", Offset = "0x4AFA050", VA = "0x4AFA050")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x4AFA1B0", Offset = "0x4AFA1B0", VA = "0x4AFA1B0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x4AFA320", Offset = "0x4AFA320", VA = "0x4AFA320")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4AFA4C0", Offset = "0x4AFA4C0", VA = "0x4AFA4C0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4AFA5F0", Offset = "0x4AFA5F0", VA = "0x4AFA5F0")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4AFA930", Offset = "0x4AFA930", VA = "0x4AFA930")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4AFACB0", Offset = "0x4AFACB0", VA = "0x4AFACB0")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x4AFB1C0", Offset = "0x4AFB1C0", VA = "0x4AFB1C0")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x4AF7640", Offset = "0x4AF7640", VA = "0x4AF7640")]
	private void ClearRenderTargetSingle_Internal(RTClearFlags clearFlags, Color color, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4AF78A0", Offset = "0x4AF78A0", VA = "0x4AF78A0")]
	private void ClearRenderTargetMulti_Internal(RTClearFlags clearFlags, Color[] colors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x4AF9910", Offset = "0x4AF9910", VA = "0x4AF9910")]
	private void SetRenderTargetSingle_Internal(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4AF9FE0", Offset = "0x4AF9FE0", VA = "0x4AF9FE0")]
	private void SetRenderTargetColorDepth_Internal(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4AFA760", Offset = "0x4AFA760", VA = "0x4AFA760")]
	private void SetRenderTargetMulti_Internal(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4AFB120", Offset = "0x4AFB120", VA = "0x4AFB120")]
	private void SetRenderTargetColorDepthSubtarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4AFAAC0", Offset = "0x4AFAAC0", VA = "0x4AFAAC0")]
	private void SetRenderTargetMultiSubtarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x4AFB890", Offset = "0x4AFB890", VA = "0x4AFB890")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000EF8")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000EF9")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000EFA")]
	[Address(RVA = "0x4AFBA60", Offset = "0x4AFBA60", VA = "0x4AFBA60")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000EFB")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000EFC")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x4AFBCD0", Offset = "0x4AFBCD0", VA = "0x4AFBCD0")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x4AFBD50", Offset = "0x4AFBD50", VA = "0x4AFBD50")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetComputeBufferNativeData([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4AFBA00", Offset = "0x4AFBA00", VA = "0x4AFBA00")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetComputeBufferData([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4AFBD10", Offset = "0x4AFBD10", VA = "0x4AFBD10")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private extern void InternalSetComputeBufferCounterValue([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, uint counterValue);

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4AFBDB0", Offset = "0x4AFBDB0", VA = "0x4AFBDB0")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000F02")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F03")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x4AFBF80", Offset = "0x4AFBF80", VA = "0x4AFBF80")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000F05")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F06")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x4AFC1F0", Offset = "0x4AFC1F0", VA = "0x4AFC1F0")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x4AFC270", Offset = "0x4AFC270", VA = "0x4AFC270")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetGraphicsBufferNativeData([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x4AFBF20", Offset = "0x4AFBF20", VA = "0x4AFBF20")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetGraphicsBufferData([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x4AFC230", Offset = "0x4AFC230", VA = "0x4AFC230")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private extern void InternalSetGraphicsBufferCounterValue([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, uint counterValue);

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x4AFC2D0", Offset = "0x4AFC2D0", VA = "0x4AFC2D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
	private void SetupCameraProperties_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4AFC3B0", Offset = "0x4AFC3B0", VA = "0x4AFC3B0")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4AFC480", Offset = "0x4AFC480", VA = "0x4AFC480")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
	private extern void InvokeOnRenderObjectCallbacks_Internal();

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x4AFC4B0", Offset = "0x4AFC4B0", VA = "0x4AFC4B0")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4AFC510", Offset = "0x4AFC510", VA = "0x4AFC510", Slot = "1")]
	~CommandBuffer()
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4AFC600", Offset = "0x4AFC600", VA = "0x4AFC600", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4AFC5C0", Offset = "0x4AFC5C0", VA = "0x4AFC5C0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x4AFC680", Offset = "0x4AFC680", VA = "0x4AFC680")]
	public CommandBuffer()
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x4AFC6C0", Offset = "0x4AFC6C0", VA = "0x4AFC6C0")]
	public GraphicsFence CreateAsyncGraphicsFence()
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x4AFC6D0", Offset = "0x4AFC6D0", VA = "0x4AFC6D0")]
	public GraphicsFence CreateGraphicsFence(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x4AFC7A0", Offset = "0x4AFC7A0", VA = "0x4AFC7A0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4AFC7B0", Offset = "0x4AFC7B0", VA = "0x4AFC7B0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStage stage)
	{
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x4AFC7C0", Offset = "0x4AFC7C0", VA = "0x4AFC7C0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x4AFC900", Offset = "0x4AFC900", VA = "0x4AFC900")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x4AFC940", Offset = "0x4AFC940", VA = "0x4AFC940")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x4AFC970", Offset = "0x4AFC970", VA = "0x4AFC970")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x4AFC9B0", Offset = "0x4AFC9B0", VA = "0x4AFC9B0")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x4AFC9E0", Offset = "0x4AFC9E0", VA = "0x4AFC9E0")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x4AFCA10", Offset = "0x4AFCA10", VA = "0x4AFCA10")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x4AFCA40", Offset = "0x4AFCA40", VA = "0x4AFCA40")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x4AFCA70", Offset = "0x4AFCA70", VA = "0x4AFCA70")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x4AFCA80", Offset = "0x4AFCA80", VA = "0x4AFCA80")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x4AFCAB0", Offset = "0x4AFCAB0", VA = "0x4AFCAB0")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x4AFCAC0", Offset = "0x4AFCAC0", VA = "0x4AFCAC0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x4AFCB10", Offset = "0x4AFCB10", VA = "0x4AFCB10")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x4AFCB30", Offset = "0x4AFCB30", VA = "0x4AFCB30")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x4AFCB80", Offset = "0x4AFCB80", VA = "0x4AFCB80")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x4AFCBA0", Offset = "0x4AFCBA0", VA = "0x4AFCBA0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x4AFCBF0", Offset = "0x4AFCBF0", VA = "0x4AFCBF0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x4AFCC10", Offset = "0x4AFCC10", VA = "0x4AFCC10")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x4AFCC20", Offset = "0x4AFCC20", VA = "0x4AFCC20")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x4AFCC60", Offset = "0x4AFCC60", VA = "0x4AFCC60")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x4AFCC70", Offset = "0x4AFCC70", VA = "0x4AFCC70")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x4AFCCB0", Offset = "0x4AFCCB0", VA = "0x4AFCCB0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x4AFCCC0", Offset = "0x4AFCCC0", VA = "0x4AFCCC0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x4AFCD00", Offset = "0x4AFCD00", VA = "0x4AFCD00")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x4AFCD10", Offset = "0x4AFCD10", VA = "0x4AFCD10")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x4AFCD60", Offset = "0x4AFCD60", VA = "0x4AFCD60")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x4AFCD70", Offset = "0x4AFCD70", VA = "0x4AFCD70")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x4AFCDC0", Offset = "0x4AFCDC0", VA = "0x4AFCDC0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x4AFCDD0", Offset = "0x4AFCDD0", VA = "0x4AFCDD0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x4AFCE70", Offset = "0x4AFCE70", VA = "0x4AFCE70")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x4AFCF10", Offset = "0x4AFCF10", VA = "0x4AFCF10")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x4AFCF70", Offset = "0x4AFCF70", VA = "0x4AFCF70")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x4AFCFC0", Offset = "0x4AFCFC0", VA = "0x4AFCFC0")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x4AFCFF0", Offset = "0x4AFCFF0", VA = "0x4AFCFF0")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x4AFD000", Offset = "0x4AFD000", VA = "0x4AFD000")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x4AFD040", Offset = "0x4AFD040", VA = "0x4AFD040")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x4AFD050", Offset = "0x4AFD050", VA = "0x4AFD050")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x4AFD080", Offset = "0x4AFD080", VA = "0x4AFD080")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x4AFD090", Offset = "0x4AFD090", VA = "0x4AFD090")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x4AFD0C0", Offset = "0x4AFD0C0", VA = "0x4AFD0C0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3F")]
	[Address(RVA = "0x4AFD0D0", Offset = "0x4AFD0D0", VA = "0x4AFD0D0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x4AFD100", Offset = "0x4AFD100", VA = "0x4AFD100")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x4AFD110", Offset = "0x4AFD110", VA = "0x4AFD110")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x4AFD120", Offset = "0x4AFD120", VA = "0x4AFD120")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x4AFD170", Offset = "0x4AFD170", VA = "0x4AFD170")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x4AFD180", Offset = "0x4AFD180", VA = "0x4AFD180")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x4AFD1D0", Offset = "0x4AFD1D0", VA = "0x4AFD1D0")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x4AFD200", Offset = "0x4AFD200", VA = "0x4AFD200")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x4AFD210", Offset = "0x4AFD210", VA = "0x4AFD210")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x4AFD250", Offset = "0x4AFD250", VA = "0x4AFD250")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4AFD260", Offset = "0x4AFD260", VA = "0x4AFD260")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x4AFD290", Offset = "0x4AFD290", VA = "0x4AFD290")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4AFD2A0", Offset = "0x4AFD2A0", VA = "0x4AFD2A0")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x4AFD2D0", Offset = "0x4AFD2D0", VA = "0x4AFD2D0")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4AFD2E0", Offset = "0x4AFD2E0", VA = "0x4AFD2E0")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4AFD310", Offset = "0x4AFD310", VA = "0x4AFD310")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4AFD320", Offset = "0x4AFD320", VA = "0x4AFD320")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4AFD360", Offset = "0x4AFD360", VA = "0x4AFD360")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x4AFD370", Offset = "0x4AFD370", VA = "0x4AFD370")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x4AFD3A0", Offset = "0x4AFD3A0", VA = "0x4AFD3A0")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x4AFD3B0", Offset = "0x4AFD3B0", VA = "0x4AFD3B0")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x4AFD3E0", Offset = "0x4AFD3E0", VA = "0x4AFD3E0")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x4AFD3F0", Offset = "0x4AFD3F0", VA = "0x4AFD3F0")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x4AFD420", Offset = "0x4AFD420", VA = "0x4AFD420")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4AFD430", Offset = "0x4AFD430", VA = "0x4AFD430")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4AFD450", Offset = "0x4AFD450", VA = "0x4AFD450")]
	public void ResolveAntiAliasedSurface(RenderTexture rt, [Optional] RenderTexture target)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4AFD500", Offset = "0x4AFD500", VA = "0x4AFD500")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4AFD770", Offset = "0x4AFD770", VA = "0x4AFD770")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4AFD7B0", Offset = "0x4AFD7B0", VA = "0x4AFD7B0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4AFD800", Offset = "0x4AFD800", VA = "0x4AFD800")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4AFD850", Offset = "0x4AFD850", VA = "0x4AFD850")]
	public void DrawRenderer(Renderer renderer, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4AFDA20", Offset = "0x4AFDA20", VA = "0x4AFDA20")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4AFDA30", Offset = "0x4AFDA30", VA = "0x4AFDA30")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4AFDA40", Offset = "0x4AFDA40", VA = "0x4AFDA40")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4AFDA90", Offset = "0x4AFDA90", VA = "0x4AFDA90")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, [DefaultValue("1")] int instanceCount, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4AFDC90", Offset = "0x4AFDC90", VA = "0x4AFDC90")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4AFDCE0", Offset = "0x4AFDCE0", VA = "0x4AFDCE0")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4AFDD30", Offset = "0x4AFDD30", VA = "0x4AFDD30")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4AFDF10", Offset = "0x4AFDF10", VA = "0x4AFDF10")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4AFDF60", Offset = "0x4AFDF60", VA = "0x4AFDF60")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4AFDFB0", Offset = "0x4AFDFB0", VA = "0x4AFDFB0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4AFE220", Offset = "0x4AFE220", VA = "0x4AFE220")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x4AFE270", Offset = "0x4AFE270", VA = "0x4AFE270")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x4AFE2C0", Offset = "0x4AFE2C0", VA = "0x4AFE2C0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x4AFE520", Offset = "0x4AFE520", VA = "0x4AFE520")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x4AFE570", Offset = "0x4AFE570", VA = "0x4AFE570")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x4AFE5C0", Offset = "0x4AFE5C0", VA = "0x4AFE5C0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x4AFE830", Offset = "0x4AFE830", VA = "0x4AFE830")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x4AFE880", Offset = "0x4AFE880", VA = "0x4AFE880")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4AFE8D0", Offset = "0x4AFE8D0", VA = "0x4AFE8D0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4AFEB30", Offset = "0x4AFEB30", VA = "0x4AFEB30")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4AFEB80", Offset = "0x4AFEB80", VA = "0x4AFEB80")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4AFEBD0", Offset = "0x4AFEBD0", VA = "0x4AFEBD0")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4AFEF30", Offset = "0x4AFEF30", VA = "0x4AFEF30")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4AFEF50", Offset = "0x4AFEF50", VA = "0x4AFEF50")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4AFEF80", Offset = "0x4AFEF80", VA = "0x4AFEF80")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, [Optional] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x4AFF1D0", Offset = "0x4AFF1D0", VA = "0x4AFF1D0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4AFF400", Offset = "0x4AFF400", VA = "0x4AFF400")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4AFF420", Offset = "0x4AFF420", VA = "0x4AFF420")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4AFF440", Offset = "0x4AFF440", VA = "0x4AFF440")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4AFF670", Offset = "0x4AFF670", VA = "0x4AFF670")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4AFF690", Offset = "0x4AFF690", VA = "0x4AFF690")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4AFF6B0", Offset = "0x4AFF6B0", VA = "0x4AFF6B0")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4AFF6F0", Offset = "0x4AFF6F0", VA = "0x4AFF6F0")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4AFF770", Offset = "0x4AFF770", VA = "0x4AFF770")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4AFF7E0", Offset = "0x4AFF7E0", VA = "0x4AFF7E0")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4AFF830", Offset = "0x4AFF830", VA = "0x4AFF830")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4AFF880", Offset = "0x4AFF880", VA = "0x4AFF880")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4AFF8D0", Offset = "0x4AFF8D0", VA = "0x4AFF8D0")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4AFF920", Offset = "0x4AFF920", VA = "0x4AFF920")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4AFF990", Offset = "0x4AFF990", VA = "0x4AFF990")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4AFFA20", Offset = "0x4AFFA20", VA = "0x4AFFA20")]
	public void Blit(Texture source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4AFFAA0", Offset = "0x4AFFAA0", VA = "0x4AFFAA0")]
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4AFFB90", Offset = "0x4AFFB90", VA = "0x4AFFB90")]
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest, Material mat, int pass)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4AFFCC0", Offset = "0x4AFFCC0", VA = "0x4AFFCC0")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4AFFD10", Offset = "0x4AFFD10", VA = "0x4AFFD10")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4AFFD60", Offset = "0x4AFFD60", VA = "0x4AFFD60")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4AFFDB0", Offset = "0x4AFFDB0", VA = "0x4AFFDB0")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4AFFE10", Offset = "0x4AFFE10", VA = "0x4AFFE10")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4AFFE70", Offset = "0x4AFFE70", VA = "0x4AFFE70")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4AFFEF0", Offset = "0x4AFFEF0", VA = "0x4AFFEF0")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x4AFFF20", Offset = "0x4AFFF20", VA = "0x4AFFF20")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4B00000", Offset = "0x4B00000", VA = "0x4B00000")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4B00030", Offset = "0x4B00030", VA = "0x4B00030")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4B00060", Offset = "0x4B00060", VA = "0x4B00060")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4B00140", Offset = "0x4B00140", VA = "0x4B00140")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4B00170", Offset = "0x4B00170", VA = "0x4B00170")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4B001A0", Offset = "0x4B001A0", VA = "0x4B001A0")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x4B00280", Offset = "0x4B00280", VA = "0x4B00280")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x4B002B0", Offset = "0x4B002B0", VA = "0x4B002B0")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x4B00370", Offset = "0x4B00370", VA = "0x4B00370")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4B003C0", Offset = "0x4B003C0", VA = "0x4B003C0")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4B00320", Offset = "0x4B00320", VA = "0x4B00320")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x4B00430", Offset = "0x4B00430", VA = "0x4B00430")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x4B00480", Offset = "0x4B00480", VA = "0x4B00480")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x4B004C0", Offset = "0x4B004C0", VA = "0x4B004C0")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x4B00510", Offset = "0x4B00510", VA = "0x4B00510")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x4B00550", Offset = "0x4B00550", VA = "0x4B00550")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x4B005A0", Offset = "0x4B005A0", VA = "0x4B005A0")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x4B00600", Offset = "0x4B00600", VA = "0x4B00600")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x4B00650", Offset = "0x4B00650", VA = "0x4B00650")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x4B006B0", Offset = "0x4B006B0", VA = "0x4B006B0")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4B00720", Offset = "0x4B00720", VA = "0x4B00720")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4B00760", Offset = "0x4B00760", VA = "0x4B00760")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x4B007F0", Offset = "0x4B007F0", VA = "0x4B007F0")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x4B008C0", Offset = "0x4B008C0", VA = "0x4B008C0")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x4B00960", Offset = "0x4B00960", VA = "0x4B00960")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x4AF2020", Offset = "0x4AF2020", VA = "0x4AF2020")]
	private static extern void SetComputeFloatParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x4AF2160", Offset = "0x4AF2160", VA = "0x4AF2160")]
	private static extern void SetComputeIntParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x4AF22B0", Offset = "0x4AF22B0", VA = "0x4AF22B0")]
	private static extern void SetComputeVectorParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x4AF2460", Offset = "0x4AF2460", VA = "0x4AF2460")]
	private static extern void SetComputeVectorArrayParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x4AF25A0", Offset = "0x4AF25A0", VA = "0x4AF25A0")]
	private static extern void SetComputeMatrixParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x4AF2750", Offset = "0x4AF2750", VA = "0x4AF2750")]
	private static extern void SetComputeMatrixArrayParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x4AF2900", Offset = "0x4AF2900", VA = "0x4AF2900")]
	private static extern void Internal_SetComputeFloats_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x4AF2AB0", Offset = "0x4AF2AB0", VA = "0x4AF2AB0")]
	private static extern void Internal_SetComputeInts_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4AF2C10", Offset = "0x4AF2C10", VA = "0x4AF2C10")]
	private static extern void Internal_SetComputeTextureParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x4AF2D70", Offset = "0x4AF2D70", VA = "0x4AF2D70")]
	private static extern void Internal_SetComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ComputeBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x4AF2EC0", Offset = "0x4AF2EC0", VA = "0x4AF2EC0")]
	private static extern void Internal_SetComputeGraphicsBufferHandleParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x4AF3010", Offset = "0x4AF3010", VA = "0x4AF3010")]
	private static extern void Internal_SetComputeGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x4AF3170", Offset = "0x4AF3170", VA = "0x4AF3170")]
	private static extern void Internal_SetComputeConstantComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x4AF32E0", Offset = "0x4AF32E0", VA = "0x4AF32E0")]
	private static extern void Internal_SetComputeConstantGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x4AF3450", Offset = "0x4AF3450", VA = "0x4AF3450")]
	private static extern void Internal_DispatchCompute_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x4AF35B0", Offset = "0x4AF35B0", VA = "0x4AF35B0")]
	private static extern void Internal_DispatchComputeIndirect_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x4AF3700", Offset = "0x4AF3700", VA = "0x4AF3700")]
	private static extern void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x4AF3840", Offset = "0x4AF3840", VA = "0x4AF3840")]
	private static extern void Internal_SetRayTracingComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ComputeBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x4AF3980", Offset = "0x4AF3980", VA = "0x4AF3980")]
	private static extern void Internal_SetRayTracingGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, GraphicsBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x4AF3AD0", Offset = "0x4AF3AD0", VA = "0x4AF3AD0")]
	private static extern void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x4AF3C30", Offset = "0x4AF3C30", VA = "0x4AF3C30")]
	private static extern void Internal_SetRayTracingConstantComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x4AF3DA0", Offset = "0x4AF3DA0", VA = "0x4AF3DA0")]
	private static extern void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x4AF3EF0", Offset = "0x4AF3EF0", VA = "0x4AF3EF0")]
	private static extern void Internal_SetRayTracingTextureParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x4AF4040", Offset = "0x4AF4040", VA = "0x4AF4040")]
	private static extern void Internal_SetRayTracingFloatParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x4AF4180", Offset = "0x4AF4180", VA = "0x4AF4180")]
	private static extern void Internal_SetRayTracingIntParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x4AF42D0", Offset = "0x4AF42D0", VA = "0x4AF42D0")]
	private static extern void Internal_SetRayTracingVectorParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4AF4480", Offset = "0x4AF4480", VA = "0x4AF4480")]
	private static extern void Internal_SetRayTracingVectorArrayParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x4AF45C0", Offset = "0x4AF45C0", VA = "0x4AF45C0")]
	private static extern void Internal_SetRayTracingMatrixParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x4AF4770", Offset = "0x4AF4770", VA = "0x4AF4770")]
	private static extern void Internal_SetRayTracingMatrixArrayParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x4AF4920", Offset = "0x4AF4920", VA = "0x4AF4920")]
	private static extern void Internal_SetRayTracingFloats_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4AF4AD0", Offset = "0x4AF4AD0", VA = "0x4AF4AD0")]
	private static extern void Internal_SetRayTracingInts_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4AF4B70", Offset = "0x4AF4B70", VA = "0x4AF4B70")]
	private static extern void Internal_BuildRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, RayTracingAccelerationStructure accelerationStructure, [In] ref Vector3 relativeOrigin);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x4AF4CA0", Offset = "0x4AF4CA0", VA = "0x4AF4CA0")]
	private static extern void Internal_SetRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, RayTracingAccelerationStructure accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x4AF4DF0", Offset = "0x4AF4DF0", VA = "0x4AF4DF0")]
	private static extern void Internal_SetComputeRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x4AF4FC0", Offset = "0x4AF4FC0", VA = "0x4AF4FC0")]
	private static extern void Internal_DispatchRays_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4AF5140", Offset = "0x4AF5140", VA = "0x4AF5140")]
	private static extern void Internal_ResolveAntiAliasedSurface_Injected(CommandBuffer _unity_self, IntPtr rt, IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x4AF5530", Offset = "0x4AF5530", VA = "0x4AF5530")]
	private static extern void Internal_DrawMesh_Injected(CommandBuffer _unity_self, IntPtr mesh, [In] ref Matrix4x4 matrix, IntPtr material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x4AF5710", Offset = "0x4AF5710", VA = "0x4AF5710")]
	private static extern void Internal_DrawRenderer_Injected(CommandBuffer _unity_self, IntPtr renderer, IntPtr material, int submeshIndex, int shaderPass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x4AF57A0", Offset = "0x4AF57A0", VA = "0x4AF57A0")]
	private static extern void Internal_DrawRendererList_Injected(CommandBuffer _unity_self, [In] ref RendererList rendererList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x4AF58D0", Offset = "0x4AF58D0", VA = "0x4AF58D0")]
	private static extern void Internal_DrawProcedural_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x4AF5A30", Offset = "0x4AF5A30", VA = "0x4AF5A30")]
	private static extern void Internal_DrawProceduralIndexed_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x4AF5B80", Offset = "0x4AF5B80", VA = "0x4AF5B80")]
	private static extern void Internal_DrawProceduralIndirect_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x4AF5CE0", Offset = "0x4AF5CE0", VA = "0x4AF5CE0")]
	private static extern void Internal_DrawProceduralIndexedIndirect_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x4AF5E30", Offset = "0x4AF5E30", VA = "0x4AF5E30")]
	private static extern void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x4AF5F90", Offset = "0x4AF5F90", VA = "0x4AF5F90")]
	private static extern void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x4AF6190", Offset = "0x4AF6190", VA = "0x4AF6190")]
	private static extern void Internal_DrawMeshInstanced_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ref ManagedSpanWrapper matrices, int count, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x4AF6350", Offset = "0x4AF6350", VA = "0x4AF6350")]
	private static extern void Internal_DrawMeshInstancedProcedural_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, int count, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x4AF6510", Offset = "0x4AF6510", VA = "0x4AF6510")]
	private static extern void Internal_DrawMeshInstancedIndirect_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x4AF66D0", Offset = "0x4AF66D0", VA = "0x4AF66D0")]
	private static extern void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x4AF6770", Offset = "0x4AF6770", VA = "0x4AF6770")]
	private static extern void Internal_DrawOcclusionMesh_Injected(CommandBuffer _unity_self, [In] ref RectInt normalizedCamViewport);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x4AF6840", Offset = "0x4AF6840", VA = "0x4AF6840")]
	private static extern void SetViewport_Injected(CommandBuffer _unity_self, [In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x4AF68C0", Offset = "0x4AF68C0", VA = "0x4AF68C0")]
	private static extern void EnableScissorRect_Injected(CommandBuffer _unity_self, [In] ref Rect scissor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x4AF6B20", Offset = "0x4AF6B20", VA = "0x4AF6B20")]
	private static extern void Blit_Texture_Injected(CommandBuffer _unity_self, IntPtr source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x4AF6CA0", Offset = "0x4AF6CA0", VA = "0x4AF6CA0")]
	private static extern void Blit_Identifier_Injected(CommandBuffer _unity_self, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x4AF72B0", Offset = "0x4AF72B0", VA = "0x4AF72B0")]
	private static extern void GetTemporaryRTWithDescriptor_Injected(CommandBuffer _unity_self, int nameID, [In] ref RenderTextureDescriptor desc, FilterMode filter);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x4AF7A90", Offset = "0x4AF7A90", VA = "0x4AF7A90")]
	private static extern void SetGlobalVector_Injected(CommandBuffer _unity_self, int nameID, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x4AF7B20", Offset = "0x4AF7B20", VA = "0x4AF7B20")]
	private static extern void SetGlobalColor_Injected(CommandBuffer _unity_self, int nameID, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x4AF7BA0", Offset = "0x4AF7BA0", VA = "0x4AF7BA0")]
	private static extern void SetGlobalMatrix_Injected(CommandBuffer _unity_self, int nameID, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x4AF7C60", Offset = "0x4AF7C60", VA = "0x4AF7C60")]
	private static extern void EnableGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x4AF7D60", Offset = "0x4AF7D60", VA = "0x4AF7D60")]
	private static extern void EnableMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x4AF7E60", Offset = "0x4AF7E60", VA = "0x4AF7E60")]
	private static extern void EnableComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x4AF8110", Offset = "0x4AF8110", VA = "0x4AF8110")]
	private static extern void DisableGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x4AF8210", Offset = "0x4AF8210", VA = "0x4AF8210")]
	private static extern void DisableMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4AF8310", Offset = "0x4AF8310", VA = "0x4AF8310")]
	private static extern void DisableComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x4AF8590", Offset = "0x4AF8590", VA = "0x4AF8590")]
	private static extern void SetGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x4AF86A0", Offset = "0x4AF86A0", VA = "0x4AF86A0")]
	private static extern void SetMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x4AF87C0", Offset = "0x4AF87C0", VA = "0x4AF87C0")]
	private static extern void SetComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x4AF8A50", Offset = "0x4AF8A50", VA = "0x4AF8A50")]
	private static extern void SetViewProjectionMatrices_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 view, [In] ref Matrix4x4 proj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4AF8D00", Offset = "0x4AF8D00", VA = "0x4AF8D00")]
	private static extern void SetGlobalFloatArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4AF8E50", Offset = "0x4AF8E50", VA = "0x4AF8E50")]
	private static extern void SetGlobalVectorArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x4AF8FA0", Offset = "0x4AF8FA0", VA = "0x4AF8FA0")]
	private static extern void SetGlobalMatrixArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x4AF90E0", Offset = "0x4AF90E0", VA = "0x4AF90E0")]
	private static extern void SetLateLatchProjectionMatrices_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper projectionMat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4AF9600", Offset = "0x4AF9600", VA = "0x4AF9600")]
	private static extern void IssuePluginCustomTextureUpdateInternal_Injected(CommandBuffer _unity_self, IntPtr callback, IntPtr targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x4AF9730", Offset = "0x4AF9730", VA = "0x4AF9730")]
	private static extern void IncrementUpdateCount_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4AFB5F0", Offset = "0x4AFB5F0", VA = "0x4AFB5F0")]
	private static extern void ClearRenderTargetSingle_Internal_Injected(CommandBuffer _unity_self, RTClearFlags clearFlags, [In] ref Color color, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x4AFB650", Offset = "0x4AFB650", VA = "0x4AFB650")]
	private static extern void ClearRenderTargetMulti_Internal_Injected(CommandBuffer _unity_self, RTClearFlags clearFlags, ref ManagedSpanWrapper colors, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4AFB6B0", Offset = "0x4AFB6B0", VA = "0x4AFB6B0")]
	private static extern void SetRenderTargetSingle_Internal_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x4AFB710", Offset = "0x4AFB710", VA = "0x4AFB710")]
	private static extern void SetRenderTargetColorDepth_Internal_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x4AFB770", Offset = "0x4AFB770", VA = "0x4AFB770")]
	private static extern void SetRenderTargetMulti_Internal_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x4AFB7D0", Offset = "0x4AFB7D0", VA = "0x4AFB7D0")]
	private static extern void SetRenderTargetColorDepthSubtarget_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4AFB830", Offset = "0x4AFB830", VA = "0x4AFB830")]
	private static extern void SetRenderTargetMultiSubtarget_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x4AFC370", Offset = "0x4AFC370", VA = "0x4AFC370")]
	private static extern void SetupCameraProperties_Internal_Injected(CommandBuffer _unity_self, IntPtr camera);
}
