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

[Token(Token = "0x20002D1")]
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

	[Token(Token = "0x17000274")]
	public extern string name
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x4E1CBF0", Offset = "0x4E1CBF0", VA = "0x4E1CBF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x4E1CC20", Offset = "0x4E1CC20", VA = "0x4E1CC20")]
		set;
	}

	[Token(Token = "0x17000275")]
	public extern int sizeInBytes
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x4E1CC60", Offset = "0x4E1CC60", VA = "0x4E1CC60")]
		[UnityEngine.Bindings.NativeMethod("GetBufferSize")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E50")]
	[Address(RVA = "0x4E196F0", Offset = "0x4E196F0", VA = "0x4E196F0")]
	[UnityEngine.Bindings.NativeMethod("AddSetInvertCulling")]
	public extern void SetInvertCulling(bool invertCulling);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E51")]
	[Address(RVA = "0x4E19730", Offset = "0x4E19730", VA = "0x4E19730")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
	private extern void Internal_SetSinglePassStereo(SinglePassStereoMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x4E19770", Offset = "0x4E19770", VA = "0x4E19770")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
	private static extern IntPtr InitBuffer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x4E197A0", Offset = "0x4E197A0", VA = "0x4E197A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
	private extern IntPtr CreateGPUFence_Internal(GraphicsFenceType fenceType, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x4E197E0", Offset = "0x4E197E0", VA = "0x4E197E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
	private extern void WaitOnGPUFence_Internal(IntPtr fencePtr, SynchronisationStageFlags stage);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x4E19820", Offset = "0x4E19820", VA = "0x4E19820")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
	private extern void ReleaseBuffer();

	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x4E19850", Offset = "0x4E19850", VA = "0x4E19850")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
	public void SetComputeFloatParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x4E199A0", Offset = "0x4E199A0", VA = "0x4E199A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
	public void SetComputeIntParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x4E19AE0", Offset = "0x4E19AE0", VA = "0x4E19AE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
	public void SetComputeVectorParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x4E19C30", Offset = "0x4E19C30", VA = "0x4E19C30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
	public void SetComputeVectorArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x4E19DE0", Offset = "0x4E19DE0", VA = "0x4E19DE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
	public void SetComputeMatrixParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x4E19F20", Offset = "0x4E19F20", VA = "0x4E19F20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
	public void SetComputeMatrixArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x4E1A0D0", Offset = "0x4E1A0D0", VA = "0x4E1A0D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
	private void Internal_SetComputeFloats([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x4E1A280", Offset = "0x4E1A280", VA = "0x4E1A280")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
	private void Internal_SetComputeInts([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x4E1A430", Offset = "0x4E1A430", VA = "0x4E1A430")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
	private void Internal_SetComputeTextureParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x4E1A5A0", Offset = "0x4E1A5A0", VA = "0x4E1A5A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x4E1A6F0", Offset = "0x4E1A6F0", VA = "0x4E1A6F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x4E1A840", Offset = "0x4E1A840", VA = "0x4E1A840")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x4E1A990", Offset = "0x4E1A990", VA = "0x4E1A990")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x4E1AB00", Offset = "0x4E1AB00", VA = "0x4E1AB00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetComputeConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x4E1AC70", Offset = "0x4E1AC70", VA = "0x4E1AC70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchCompute([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x4E1ADE0", Offset = "0x4E1ADE0", VA = "0x4E1ADE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirect([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x4E1AF30", Offset = "0x4E1AF30", VA = "0x4E1AF30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchComputeIndirectGraphicsBuffer([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x4E1B080", Offset = "0x4E1B080", VA = "0x4E1B080")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x4E1B1C0", Offset = "0x4E1B1C0", VA = "0x4E1B1C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x4E1B300", Offset = "0x4E1B300", VA = "0x4E1B300")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingGraphicsBufferHandleParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x4E1B450", Offset = "0x4E1B450", VA = "0x4E1B450")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantComputeBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x4E1B5C0", Offset = "0x4E1B5C0", VA = "0x4E1B5C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingConstantGraphicsBufferParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x4E1B730", Offset = "0x4E1B730", VA = "0x4E1B730")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingTextureParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, ref RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x4E1B870", Offset = "0x4E1B870", VA = "0x4E1B870")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloatParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x4E1B9C0", Offset = "0x4E1B9C0", VA = "0x4E1B9C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingIntParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x4E1BB00", Offset = "0x4E1BB00", VA = "0x4E1BB00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x4E1BC50", Offset = "0x4E1BC50", VA = "0x4E1BC50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingVectorArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x4E1BE00", Offset = "0x4E1BE00", VA = "0x4E1BE00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x4E1BF40", Offset = "0x4E1BF40", VA = "0x4E1BF40")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
	private void Internal_SetRayTracingMatrixArrayParam([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x4E1C0F0", Offset = "0x4E1C0F0", VA = "0x4E1C0F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
	private void Internal_SetRayTracingFloats([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x4E1C2A0", Offset = "0x4E1C2A0", VA = "0x4E1C2A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
	private void Internal_SetRayTracingInts([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x4E1C450", Offset = "0x4E1C450", VA = "0x4E1C450")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_BuildRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x4E1C4E0", Offset = "0x4E1C4E0", VA = "0x4E1C4E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x4E1C620", Offset = "0x4E1C620", VA = "0x4E1C620")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
	private void Internal_SetComputeRayTracingAccelerationStructure([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeShader computeShader, int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x4E1C770", Offset = "0x4E1C770", VA = "0x4E1C770")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
	private void Internal_DispatchRays([UnityEngine.Bindings.NotNull("ArgumentNullException")] RayTracingShader rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4E1C950", Offset = "0x4E1C950", VA = "0x4E1C950")]
	[UnityEngine.Bindings.NativeMethod("AddResolveAntiAliasedSurface")]
	private void Internal_ResolveAntiAliasedSurface(RenderTexture rt, RenderTexture target)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x4E1CAB0", Offset = "0x4E1CAB0", VA = "0x4E1CAB0")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueCC(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x4E1CB00", Offset = "0x4E1CB00", VA = "0x4E1CB00")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueGC(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x4E1CB50", Offset = "0x4E1CB50", VA = "0x4E1CB50")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueCG(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x4E1CBA0", Offset = "0x4E1CBA0", VA = "0x4E1CBA0")]
	[UnityEngine.Bindings.NativeMethod("AddCopyCounterValue")]
	private extern void CopyCounterValueGG(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x4E1CC90", Offset = "0x4E1CC90", VA = "0x4E1CC90")]
	[UnityEngine.Bindings.NativeMethod("ClearCommands")]
	public extern void Clear();

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x4E1CCC0", Offset = "0x4E1CCC0", VA = "0x4E1CCC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
	private void Internal_DrawMesh([UnityEngine.Bindings.NotNull("ArgumentNullException")] Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x4E1CEC0", Offset = "0x4E1CEC0", VA = "0x4E1CEC0")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRenderer")]
	private void Internal_DrawRenderer([UnityEngine.Bindings.NotNull("ArgumentNullException")] Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x4E1D090", Offset = "0x4E1D090", VA = "0x4E1D090")]
	[UnityEngine.Bindings.NativeMethod("AddDrawRendererList")]
	private void Internal_DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x4E1D110", Offset = "0x4E1D110", VA = "0x4E1D110")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProcedural")]
	private void Internal_DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x4E1D260", Offset = "0x4E1D260", VA = "0x4E1D260")]
	[UnityEngine.Bindings.NativeMethod("AddDrawProceduralIndexed")]
	private void Internal_DrawProceduralIndexed(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x4E1D3C0", Offset = "0x4E1D3C0", VA = "0x4E1D3C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x4E1D510", Offset = "0x4E1D510", VA = "0x4E1D510")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x4E1D670", Offset = "0x4E1D670", VA = "0x4E1D670")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndirectGraphicsBuffer(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x4E1D7C0", Offset = "0x4E1D7C0", VA = "0x4E1D7C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
	private void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x4E1D920", Offset = "0x4E1D920", VA = "0x4E1D920")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
	private void Internal_DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x4E1DB20", Offset = "0x4E1DB20", VA = "0x4E1DB20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x4E1DCE0", Offset = "0x4E1DCE0", VA = "0x4E1DCE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x4E1DEA0", Offset = "0x4E1DEA0", VA = "0x4E1DEA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
	private void Internal_DrawMeshInstancedIndirectGraphicsBuffer(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x4E1E060", Offset = "0x4E1E060", VA = "0x4E1E060")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
	private void Internal_DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x4E1E0E0", Offset = "0x4E1E0E0", VA = "0x4E1E0E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
	private extern void SetRandomWriteTarget_GraphicsBuffer(int index, GraphicsBuffer uav, bool preserveCounterValue);

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x4E1E130", Offset = "0x4E1E130", VA = "0x4E1E130")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x4E1E1B0", Offset = "0x4E1E1B0", VA = "0x4E1E1B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x4E1E230", Offset = "0x4E1E230", VA = "0x4E1E230")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
	public extern void DisableScissorRect();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x4E1E260", Offset = "0x4E1E260", VA = "0x4E1E260")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
	private extern void CopyTexture_Internal(ref RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, ref RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY, int mode);

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x4E1E2C0", Offset = "0x4E1E2C0", VA = "0x4E1E2C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
	private void Blit_Texture(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x4E1E4B0", Offset = "0x4E1E4B0", VA = "0x4E1E4B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::Blit_Identifier", HasExplicitThis = true)]
	private void Blit_Identifier(ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x4E1E630", Offset = "0x4E1E630", VA = "0x4E1E630")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRT", HasExplicitThis = true)]
	public extern void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode, bool useDynamicScale);

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x4E1E690", Offset = "0x4E1E690", VA = "0x4E1E690")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode)
	{
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x4E1E730", Offset = "0x4E1E730", VA = "0x4E1E730")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing)
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x4E1E7B0", Offset = "0x4E1E7B0", VA = "0x4E1E7B0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x4E1E830", Offset = "0x4E1E830", VA = "0x4E1E830")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode, bool useDynamicScale)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x4E1E920", Offset = "0x4E1E920", VA = "0x4E1E920")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode)
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x4E1E9F0", Offset = "0x4E1E9F0", VA = "0x4E1E9F0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, bool enableRandomWrite)
	{
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x4E1EAD0", Offset = "0x4E1EAD0", VA = "0x4E1EAD0")]
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, RenderTextureFormat format)
	{
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x4E1EB90", Offset = "0x4E1EB90", VA = "0x4E1EB90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRTWithDescriptor", HasExplicitThis = true)]
	private void GetTemporaryRTWithDescriptor(int nameID, RenderTextureDescriptor desc, FilterMode filter)
	{
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x4E1EC30", Offset = "0x4E1EC30", VA = "0x4E1EC30")]
	public void GetTemporaryRT(int nameID, RenderTextureDescriptor desc, FilterMode filter)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x4E1ECA0", Offset = "0x4E1ECA0", VA = "0x4E1ECA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ReleaseTemporaryRT", HasExplicitThis = true)]
	public extern void ReleaseTemporaryRT(int nameID);

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x4E1ECE0", Offset = "0x4E1ECE0", VA = "0x4E1ECE0")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x4E1EE70", Offset = "0x4E1EE70", VA = "0x4E1EE70")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x4E1EDA0", Offset = "0x4E1EDA0", VA = "0x4E1EDA0")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x4E1EFD0", Offset = "0x4E1EFD0", VA = "0x4E1EFD0")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth = 1f, uint stencil = 0u)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x4E1F070", Offset = "0x4E1F070", VA = "0x4E1F070")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth = 1f, uint stencil = 0u)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x4E1F2B0", Offset = "0x4E1F2B0", VA = "0x4E1F2B0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
	public extern void SetGlobalFloat(int nameID, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x4E1F2F0", Offset = "0x4E1F2F0", VA = "0x4E1F2F0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
	public extern void SetGlobalInt(int nameID, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x4E1F330", Offset = "0x4E1F330", VA = "0x4E1F330")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
	public extern void SetGlobalInteger(int nameID, int value);

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x4E1F370", Offset = "0x4E1F370", VA = "0x4E1F370")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x4E1F400", Offset = "0x4E1F400", VA = "0x4E1F400")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x4E1F490", Offset = "0x4E1F490", VA = "0x4E1F490")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x4E1F510", Offset = "0x4E1F510", VA = "0x4E1F510")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	public extern void EnableShaderKeyword(string keyword);

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x4E1F550", Offset = "0x4E1F550", VA = "0x4E1F550")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
	private void EnableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x4E1F5D0", Offset = "0x4E1F5D0", VA = "0x4E1F5D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
	private void EnableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x4E1F6D0", Offset = "0x4E1F6D0", VA = "0x4E1F6D0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
	private void EnableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x4E1F7D0", Offset = "0x4E1F7D0", VA = "0x4E1F7D0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x4E1F820", Offset = "0x4E1F820", VA = "0x4E1F820")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x4E1F8F0", Offset = "0x4E1F8F0", VA = "0x4E1F8F0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x4E1F9C0", Offset = "0x4E1F9C0", VA = "0x4E1F9C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	public extern void DisableShaderKeyword(string keyword);

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x4E1FA00", Offset = "0x4E1FA00", VA = "0x4E1FA00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
	private void DisableGlobalKeyword(GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x4E1FA80", Offset = "0x4E1FA80", VA = "0x4E1FA80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
	private void DisableMaterialKeyword(Material material, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x4E1FB80", Offset = "0x4E1FB80", VA = "0x4E1FB80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
	private void DisableComputeKeyword(ComputeShader computeShader, LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x4E1FC80", Offset = "0x4E1FC80", VA = "0x4E1FC80")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x4E1FCD0", Offset = "0x4E1FCD0", VA = "0x4E1FCD0")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x4E1FDA0", Offset = "0x4E1FDA0", VA = "0x4E1FDA0")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x4E1FE70", Offset = "0x4E1FE70", VA = "0x4E1FE70")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
	private void SetGlobalKeyword(GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x4E1FF00", Offset = "0x4E1FF00", VA = "0x4E1FF00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
	private void SetMaterialKeyword(Material material, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x4E20020", Offset = "0x4E20020", VA = "0x4E20020")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
	private void SetComputeKeyword(ComputeShader computeShader, LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x4E20140", Offset = "0x4E20140", VA = "0x4E20140")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x4E20190", Offset = "0x4E20190", VA = "0x4E20190")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x4E20260", Offset = "0x4E20260", VA = "0x4E20260")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x4E20330", Offset = "0x4E20330", VA = "0x4E20330")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x4E203C0", Offset = "0x4E203C0", VA = "0x4E203C0")]
	[UnityEngine.Bindings.NativeMethod("AddSetGlobalDepthBias")]
	public extern void SetGlobalDepthBias(float bias, float slopeBias);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x4E20420", Offset = "0x4E20420", VA = "0x4E20420")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	public extern void SetExecutionFlags(CommandBufferExecutionFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x4E1EF30", Offset = "0x4E1EF30", VA = "0x4E1EF30")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
	private extern bool ValidateAgainstExecutionFlags(CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x4E20460", Offset = "0x4E20460", VA = "0x4E20460")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalFloatArrayListImpl(int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x4E204A0", Offset = "0x4E204A0", VA = "0x4E204A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalVectorArrayListImpl(int nameID, object values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x4E204E0", Offset = "0x4E204E0", VA = "0x4E204E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
	private extern void SetGlobalMatrixArrayListImpl(int nameID, object values);

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x4E20520", Offset = "0x4E20520", VA = "0x4E20520")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalFloatArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] float[] values)
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x4E20670", Offset = "0x4E20670", VA = "0x4E20670")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalVectorArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Vector4[] values)
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x4E207C0", Offset = "0x4E207C0", VA = "0x4E207C0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
	public void SetGlobalMatrixArray(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x4E20910", Offset = "0x4E20910", VA = "0x4E20910")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
	public void SetLateLatchProjectionMatrices([UnityEngine.Bindings.NotNull("ArgumentNullException")] Matrix4x4[] projectionMat)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x4E20A50", Offset = "0x4E20A50", VA = "0x4E20A50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
	public extern void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x4E20A90", Offset = "0x4E20A90", VA = "0x4E20A90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
	public extern void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x4E20AD0", Offset = "0x4E20AD0", VA = "0x4E20AD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
	private extern void SetGlobalTexture_Impl(int nameID, ref RenderTargetIdentifier rt, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x4E20B20", Offset = "0x4E20B20", VA = "0x4E20B20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private extern void SetGlobalBufferInternal(int nameID, ComputeBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x4E20B60", Offset = "0x4E20B60", VA = "0x4E20B60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
	private extern void SetGlobalGraphicsBufferInternal(int nameID, GraphicsBuffer value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4E20BA0", Offset = "0x4E20BA0", VA = "0x4E20BA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
	private extern void SetShadowSamplingMode_Impl(ref RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4E20BE0", Offset = "0x4E20BE0", VA = "0x4E20BE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
	private extern void IssuePluginEventInternal(IntPtr callback, int eventID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4E20C20", Offset = "0x4E20C20", VA = "0x4E20C20")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
	public extern void BeginSample(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4E20C60", Offset = "0x4E20C60", VA = "0x4E20C60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
	public extern void EndSample(string name);

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4E20CA0", Offset = "0x4E20CA0", VA = "0x4E20CA0")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x4E20D20", Offset = "0x4E20D20", VA = "0x4E20D20")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x4E20CE0", Offset = "0x4E20CE0", VA = "0x4E20CE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
	private extern void BeginSample_CustomSampler([UnityEngine.Bindings.NotNull("ArgumentNullException")] CustomSampler sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x4E20D60", Offset = "0x4E20D60", VA = "0x4E20D60")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
	private extern void EndSample_CustomSampler([UnityEngine.Bindings.NotNull("ArgumentNullException")] CustomSampler sampler);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x4E20DA0", Offset = "0x4E20DA0", VA = "0x4E20DA0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
	private extern void IssuePluginEventAndDataInternal(IntPtr callback, int eventID, IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x4E20DF0", Offset = "0x4E20DF0", VA = "0x4E20DF0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
	private extern void IssuePluginCustomBlitInternal(IntPtr callback, uint command, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x4E20E50", Offset = "0x4E20E50", VA = "0x4E20E50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
	private void IssuePluginCustomTextureUpdateInternal(IntPtr callback, Texture targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x4E20F80", Offset = "0x4E20F80", VA = "0x4E20F80")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private extern void SetGlobalConstantBufferInternal(ComputeBuffer buffer, int nameID, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x4E20FD0", Offset = "0x4E20FD0", VA = "0x4E20FD0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
	private extern void SetGlobalConstantGraphicsBufferInternal(GraphicsBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x4E21020", Offset = "0x4E21020", VA = "0x4E21020")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x4E210A0", Offset = "0x4E210A0", VA = "0x4E210A0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
	public extern void SetInstanceMultiplier(uint multiplier);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x4E210E0", Offset = "0x4E210E0", VA = "0x4E210E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
	public extern void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x4E21120", Offset = "0x4E21120", VA = "0x4E21120")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
	public extern void SetWireframe(bool enable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x4E21160", Offset = "0x4E21160", VA = "0x4E21160")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
	public extern void ConfigureFoveatedRendering(IntPtr platformData);

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x4E211A0", Offset = "0x4E211A0", VA = "0x4E211A0")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x4E212A0", Offset = "0x4E212A0", VA = "0x4E212A0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x4E21390", Offset = "0x4E21390", VA = "0x4E21390")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x4E21490", Offset = "0x4E21490", VA = "0x4E21490")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x4E215B0", Offset = "0x4E215B0", VA = "0x4E215B0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x4E216E0", Offset = "0x4E216E0", VA = "0x4E216E0")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x4E21840", Offset = "0x4E21840", VA = "0x4E21840")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x4E21980", Offset = "0x4E21980", VA = "0x4E21980")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x4E21AE0", Offset = "0x4E21AE0", VA = "0x4E21AE0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x4E21C50", Offset = "0x4E21C50", VA = "0x4E21C50")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x4E21DF0", Offset = "0x4E21DF0", VA = "0x4E21DF0")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x4E21F20", Offset = "0x4E21F20", VA = "0x4E21F20")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x4E22260", Offset = "0x4E22260", VA = "0x4E22260")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x4E225E0", Offset = "0x4E225E0", VA = "0x4E225E0")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x4E22AF0", Offset = "0x4E22AF0", VA = "0x4E22AF0")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x4E1EF70", Offset = "0x4E1EF70", VA = "0x4E1EF70")]
	private void ClearRenderTargetSingle_Internal(RTClearFlags clearFlags, Color color, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x4E1F1D0", Offset = "0x4E1F1D0", VA = "0x4E1F1D0")]
	private void ClearRenderTargetMulti_Internal(RTClearFlags clearFlags, Color[] colors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000EF4")]
	[Address(RVA = "0x4E21240", Offset = "0x4E21240", VA = "0x4E21240")]
	private void SetRenderTargetSingle_Internal(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000EF5")]
	[Address(RVA = "0x4E21910", Offset = "0x4E21910", VA = "0x4E21910")]
	private void SetRenderTargetColorDepth_Internal(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x6000EF6")]
	[Address(RVA = "0x4E22090", Offset = "0x4E22090", VA = "0x4E22090")]
	private void SetRenderTargetMulti_Internal(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags)
	{
	}

	[Token(Token = "0x6000EF7")]
	[Address(RVA = "0x4E22A50", Offset = "0x4E22A50", VA = "0x4E22A50")]
	private void SetRenderTargetColorDepthSubtarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF8")]
	[Address(RVA = "0x4E223F0", Offset = "0x4E223F0", VA = "0x4E223F0")]
	private void SetRenderTargetMultiSubtarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, RenderBufferLoadAction[] colorLoadActions, RenderBufferStoreAction[] colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000EF9")]
	[Address(RVA = "0x4E231C0", Offset = "0x4E231C0", VA = "0x4E231C0")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000EFA")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000EFB")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x4E23390", Offset = "0x4E23390", VA = "0x4E23390")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000EFD")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000EFE")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4E23600", Offset = "0x4E23600", VA = "0x4E23600")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4E23680", Offset = "0x4E23680", VA = "0x4E23680")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetComputeBufferNativeData([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4E23330", Offset = "0x4E23330", VA = "0x4E23330")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetComputeBufferData([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x4E23640", Offset = "0x4E23640", VA = "0x4E23640")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private extern void InternalSetComputeBufferCounterValue([UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, uint counterValue);

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4E236E0", Offset = "0x4E236E0", VA = "0x4E236E0")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000F04")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F05")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x4E238B0", Offset = "0x4E238B0", VA = "0x4E238B0")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000F07")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F08")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x4E23B20", Offset = "0x4E23B20", VA = "0x4E23B20")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x4E23BA0", Offset = "0x4E23BA0", VA = "0x4E23BA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetGraphicsBufferNativeData([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, IntPtr data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x4E23850", Offset = "0x4E23850", VA = "0x4E23850")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
	private extern void InternalSetGraphicsBufferData([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count, int elemSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x4E23B60", Offset = "0x4E23B60", VA = "0x4E23B60")]
	[UnityEngine.Bindings.FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
	private extern void InternalSetGraphicsBufferCounterValue([UnityEngine.Bindings.NotNull("ArgumentNullException")] GraphicsBuffer buffer, uint counterValue);

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4E23C00", Offset = "0x4E23C00", VA = "0x4E23C00")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
	private void SetupCameraProperties_Internal([UnityEngine.Bindings.NotNull("NullExceptionObject")] Camera camera)
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x4E23CE0", Offset = "0x4E23CE0", VA = "0x4E23CE0")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x4E23DB0", Offset = "0x4E23DB0", VA = "0x4E23DB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
	private extern void InvokeOnRenderObjectCallbacks_Internal();

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x4E23DE0", Offset = "0x4E23DE0", VA = "0x4E23DE0")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x4E23E40", Offset = "0x4E23E40", VA = "0x4E23E40", Slot = "1")]
	~CommandBuffer()
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x4E23F30", Offset = "0x4E23F30", VA = "0x4E23F30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x4E23EF0", Offset = "0x4E23EF0", VA = "0x4E23EF0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x4E23FB0", Offset = "0x4E23FB0", VA = "0x4E23FB0")]
	public CommandBuffer()
	{
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x4E23FF0", Offset = "0x4E23FF0", VA = "0x4E23FF0")]
	public GraphicsFence CreateAsyncGraphicsFence()
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x4E24000", Offset = "0x4E24000", VA = "0x4E24000")]
	public GraphicsFence CreateGraphicsFence(GraphicsFenceType fenceType, SynchronisationStageFlags stage)
	{
		return default(GraphicsFence);
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x4E240D0", Offset = "0x4E240D0", VA = "0x4E240D0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence)
	{
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x4E240E0", Offset = "0x4E240E0", VA = "0x4E240E0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStage stage)
	{
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x4E240F0", Offset = "0x4E240F0", VA = "0x4E240F0")]
	public void WaitOnAsyncGraphicsFence(GraphicsFence fence, SynchronisationStageFlags stage)
	{
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x4E24230", Offset = "0x4E24230", VA = "0x4E24230")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x4E24270", Offset = "0x4E24270", VA = "0x4E24270")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x4E242A0", Offset = "0x4E242A0", VA = "0x4E242A0")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x4E242E0", Offset = "0x4E242E0", VA = "0x4E242E0")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x4E24310", Offset = "0x4E24310", VA = "0x4E24310")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x4E24340", Offset = "0x4E24340", VA = "0x4E24340")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x4E24370", Offset = "0x4E24370", VA = "0x4E24370")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x4E243A0", Offset = "0x4E243A0", VA = "0x4E243A0")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x4E243B0", Offset = "0x4E243B0", VA = "0x4E243B0")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x4E243E0", Offset = "0x4E243E0", VA = "0x4E243E0")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x4E243F0", Offset = "0x4E243F0", VA = "0x4E243F0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x4E24440", Offset = "0x4E24440", VA = "0x4E24440")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x4E24460", Offset = "0x4E24460", VA = "0x4E24460")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x4E244B0", Offset = "0x4E244B0", VA = "0x4E244B0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x4E244D0", Offset = "0x4E244D0", VA = "0x4E244D0")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x4E24520", Offset = "0x4E24520", VA = "0x4E24520")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x4E24540", Offset = "0x4E24540", VA = "0x4E24540")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x4E24550", Offset = "0x4E24550", VA = "0x4E24550")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x4E24590", Offset = "0x4E24590", VA = "0x4E24590")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x4E245A0", Offset = "0x4E245A0", VA = "0x4E245A0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x4E245E0", Offset = "0x4E245E0", VA = "0x4E245E0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x4E245F0", Offset = "0x4E245F0", VA = "0x4E245F0")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x4E24630", Offset = "0x4E24630", VA = "0x4E24630")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x4E24640", Offset = "0x4E24640", VA = "0x4E24640")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x4E24690", Offset = "0x4E24690", VA = "0x4E24690")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x4E246A0", Offset = "0x4E246A0", VA = "0x4E246A0")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x4E246F0", Offset = "0x4E246F0", VA = "0x4E246F0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x4E24700", Offset = "0x4E24700", VA = "0x4E24700")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x4E247A0", Offset = "0x4E247A0", VA = "0x4E247A0")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x4E24840", Offset = "0x4E24840", VA = "0x4E24840")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x4E248A0", Offset = "0x4E248A0", VA = "0x4E248A0")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x4E248F0", Offset = "0x4E248F0", VA = "0x4E248F0")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x4E24920", Offset = "0x4E24920", VA = "0x4E24920")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x4E24930", Offset = "0x4E24930", VA = "0x4E24930")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x4E24970", Offset = "0x4E24970", VA = "0x4E24970")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x4E24980", Offset = "0x4E24980", VA = "0x4E24980")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x4E249B0", Offset = "0x4E249B0", VA = "0x4E249B0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F3F")]
	[Address(RVA = "0x4E249C0", Offset = "0x4E249C0", VA = "0x4E249C0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x4E249F0", Offset = "0x4E249F0", VA = "0x4E249F0")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x4E24A00", Offset = "0x4E24A00", VA = "0x4E24A00")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x4E24A30", Offset = "0x4E24A30", VA = "0x4E24A30")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x4E24A40", Offset = "0x4E24A40", VA = "0x4E24A40")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x4E24A50", Offset = "0x4E24A50", VA = "0x4E24A50")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x4E24AA0", Offset = "0x4E24AA0", VA = "0x4E24AA0")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x4E24AB0", Offset = "0x4E24AB0", VA = "0x4E24AB0")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x4E24B00", Offset = "0x4E24B00", VA = "0x4E24B00")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x4E24B30", Offset = "0x4E24B30", VA = "0x4E24B30")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4E24B40", Offset = "0x4E24B40", VA = "0x4E24B40")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x4E24B80", Offset = "0x4E24B80", VA = "0x4E24B80")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4E24B90", Offset = "0x4E24B90", VA = "0x4E24B90")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x4E24BC0", Offset = "0x4E24BC0", VA = "0x4E24BC0")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4E24BD0", Offset = "0x4E24BD0", VA = "0x4E24BD0")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4E24C00", Offset = "0x4E24C00", VA = "0x4E24C00")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4E24C10", Offset = "0x4E24C10", VA = "0x4E24C10")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4E24C40", Offset = "0x4E24C40", VA = "0x4E24C40")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x4E24C50", Offset = "0x4E24C50", VA = "0x4E24C50")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x4E24C90", Offset = "0x4E24C90", VA = "0x4E24C90")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x4E24CA0", Offset = "0x4E24CA0", VA = "0x4E24CA0")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x4E24CD0", Offset = "0x4E24CD0", VA = "0x4E24CD0")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x4E24CE0", Offset = "0x4E24CE0", VA = "0x4E24CE0")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x4E24D10", Offset = "0x4E24D10", VA = "0x4E24D10")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4E24D20", Offset = "0x4E24D20", VA = "0x4E24D20")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4E24D50", Offset = "0x4E24D50", VA = "0x4E24D50")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4E24D60", Offset = "0x4E24D60", VA = "0x4E24D60")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, [Optional] Camera camera)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4E24D80", Offset = "0x4E24D80", VA = "0x4E24D80")]
	public void ResolveAntiAliasedSurface(RenderTexture rt, [Optional] RenderTexture target)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4E24E30", Offset = "0x4E24E30", VA = "0x4E24E30")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4E250A0", Offset = "0x4E250A0", VA = "0x4E250A0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4E250E0", Offset = "0x4E250E0", VA = "0x4E250E0")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4E25130", Offset = "0x4E25130", VA = "0x4E25130")]
	[ExcludeFromDocs]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4E25180", Offset = "0x4E25180", VA = "0x4E25180")]
	public void DrawRenderer(Renderer renderer, Material material, [DefaultValue("0")] int submeshIndex, [DefaultValue("-1")] int shaderPass)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4E25350", Offset = "0x4E25350", VA = "0x4E25350")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4E25360", Offset = "0x4E25360", VA = "0x4E25360")]
	[ExcludeFromDocs]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4E25370", Offset = "0x4E25370", VA = "0x4E25370")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4E253C0", Offset = "0x4E253C0", VA = "0x4E253C0")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, [DefaultValue("1")] int instanceCount, [DefaultValue("null")] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4E255C0", Offset = "0x4E255C0", VA = "0x4E255C0")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4E25610", Offset = "0x4E25610", VA = "0x4E25610")]
	[ExcludeFromDocs]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4E25660", Offset = "0x4E25660", VA = "0x4E25660")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4E25840", Offset = "0x4E25840", VA = "0x4E25840")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4E25890", Offset = "0x4E25890", VA = "0x4E25890")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x4E258E0", Offset = "0x4E258E0", VA = "0x4E258E0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x4E25B50", Offset = "0x4E25B50", VA = "0x4E25B50")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x4E25BA0", Offset = "0x4E25BA0", VA = "0x4E25BA0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x4E25BF0", Offset = "0x4E25BF0", VA = "0x4E25BF0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x4E25E50", Offset = "0x4E25E50", VA = "0x4E25E50")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x4E25EA0", Offset = "0x4E25EA0", VA = "0x4E25EA0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x4E25EF0", Offset = "0x4E25EF0", VA = "0x4E25EF0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4E26160", Offset = "0x4E26160", VA = "0x4E26160")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4E261B0", Offset = "0x4E261B0", VA = "0x4E261B0")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4E26200", Offset = "0x4E26200", VA = "0x4E26200")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4E26460", Offset = "0x4E26460", VA = "0x4E26460")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4E264B0", Offset = "0x4E264B0", VA = "0x4E264B0")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4E26500", Offset = "0x4E26500", VA = "0x4E26500")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4E26860", Offset = "0x4E26860", VA = "0x4E26860")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x4E26880", Offset = "0x4E26880", VA = "0x4E26880")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4E268B0", Offset = "0x4E268B0", VA = "0x4E268B0")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, [Optional] MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4E26B00", Offset = "0x4E26B00", VA = "0x4E26B00")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4E26D30", Offset = "0x4E26D30", VA = "0x4E26D30")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4E26D50", Offset = "0x4E26D50", VA = "0x4E26D50")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4E26D70", Offset = "0x4E26D70", VA = "0x4E26D70")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4E26FA0", Offset = "0x4E26FA0", VA = "0x4E26FA0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4E26FC0", Offset = "0x4E26FC0", VA = "0x4E26FC0")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4E26FE0", Offset = "0x4E26FE0", VA = "0x4E26FE0")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4E27020", Offset = "0x4E27020", VA = "0x4E27020")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4E270A0", Offset = "0x4E270A0", VA = "0x4E270A0")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4E27110", Offset = "0x4E27110", VA = "0x4E27110")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4E27160", Offset = "0x4E27160", VA = "0x4E27160")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4E271B0", Offset = "0x4E271B0", VA = "0x4E271B0")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4E27200", Offset = "0x4E27200", VA = "0x4E27200")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4E27250", Offset = "0x4E27250", VA = "0x4E27250")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4E272C0", Offset = "0x4E272C0", VA = "0x4E272C0")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4E27350", Offset = "0x4E27350", VA = "0x4E27350")]
	public void Blit(Texture source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4E273D0", Offset = "0x4E273D0", VA = "0x4E273D0")]
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4E274C0", Offset = "0x4E274C0", VA = "0x4E274C0")]
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest, Material mat, int pass)
	{
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4E275F0", Offset = "0x4E275F0", VA = "0x4E275F0")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4E27640", Offset = "0x4E27640", VA = "0x4E27640")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4E27690", Offset = "0x4E27690", VA = "0x4E27690")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4E276E0", Offset = "0x4E276E0", VA = "0x4E276E0")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4E27740", Offset = "0x4E27740", VA = "0x4E27740")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x4E277A0", Offset = "0x4E277A0", VA = "0x4E277A0")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4E27820", Offset = "0x4E27820", VA = "0x4E27820")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4E27850", Offset = "0x4E27850", VA = "0x4E27850")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4E27930", Offset = "0x4E27930", VA = "0x4E27930")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x4E27960", Offset = "0x4E27960", VA = "0x4E27960")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4E27990", Offset = "0x4E27990", VA = "0x4E27990")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4E27A70", Offset = "0x4E27A70", VA = "0x4E27A70")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x4E27AA0", Offset = "0x4E27AA0", VA = "0x4E27AA0")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x4E27AD0", Offset = "0x4E27AD0", VA = "0x4E27AD0")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x4E27BB0", Offset = "0x4E27BB0", VA = "0x4E27BB0")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4E27BE0", Offset = "0x4E27BE0", VA = "0x4E27BE0")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4E27CA0", Offset = "0x4E27CA0", VA = "0x4E27CA0")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x4E27CF0", Offset = "0x4E27CF0", VA = "0x4E27CF0")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x4E27C50", Offset = "0x4E27C50", VA = "0x4E27C50")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x4E27D60", Offset = "0x4E27D60", VA = "0x4E27D60")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x4E27DB0", Offset = "0x4E27DB0", VA = "0x4E27DB0")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x4E27DF0", Offset = "0x4E27DF0", VA = "0x4E27DF0")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x4E27E40", Offset = "0x4E27E40", VA = "0x4E27E40")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x4E27E80", Offset = "0x4E27E80", VA = "0x4E27E80")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x4E27ED0", Offset = "0x4E27ED0", VA = "0x4E27ED0")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x4E27F30", Offset = "0x4E27F30", VA = "0x4E27F30")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4E27F80", Offset = "0x4E27F80", VA = "0x4E27F80")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4E27FE0", Offset = "0x4E27FE0", VA = "0x4E27FE0")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x4E28050", Offset = "0x4E28050", VA = "0x4E28050")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x4E28090", Offset = "0x4E28090", VA = "0x4E28090")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x4E28120", Offset = "0x4E28120", VA = "0x4E28120")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x4E281F0", Offset = "0x4E281F0", VA = "0x4E281F0")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x4E28290", Offset = "0x4E28290", VA = "0x4E28290")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x4E19950", Offset = "0x4E19950", VA = "0x4E19950")]
	private static extern void SetComputeFloatParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x4E19A90", Offset = "0x4E19A90", VA = "0x4E19A90")]
	private static extern void SetComputeIntParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x4E19BE0", Offset = "0x4E19BE0", VA = "0x4E19BE0")]
	private static extern void SetComputeVectorParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x4E19D90", Offset = "0x4E19D90", VA = "0x4E19D90")]
	private static extern void SetComputeVectorArrayParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x4E19ED0", Offset = "0x4E19ED0", VA = "0x4E19ED0")]
	private static extern void SetComputeMatrixParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x4E1A080", Offset = "0x4E1A080", VA = "0x4E1A080")]
	private static extern void SetComputeMatrixArrayParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4E1A230", Offset = "0x4E1A230", VA = "0x4E1A230")]
	private static extern void Internal_SetComputeFloats_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x4E1A3E0", Offset = "0x4E1A3E0", VA = "0x4E1A3E0")]
	private static extern void Internal_SetComputeInts_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x4E1A540", Offset = "0x4E1A540", VA = "0x4E1A540")]
	private static extern void Internal_SetComputeTextureParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x4E1A6A0", Offset = "0x4E1A6A0", VA = "0x4E1A6A0")]
	private static extern void Internal_SetComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, ComputeBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x4E1A7F0", Offset = "0x4E1A7F0", VA = "0x4E1A7F0")]
	private static extern void Internal_SetComputeGraphicsBufferHandleParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x4E1A940", Offset = "0x4E1A940", VA = "0x4E1A940")]
	private static extern void Internal_SetComputeGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x4E1AAA0", Offset = "0x4E1AAA0", VA = "0x4E1AAA0")]
	private static extern void Internal_SetComputeConstantComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x4E1AC10", Offset = "0x4E1AC10", VA = "0x4E1AC10")]
	private static extern void Internal_SetComputeConstantGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr computeShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x4E1AD80", Offset = "0x4E1AD80", VA = "0x4E1AD80")]
	private static extern void Internal_DispatchCompute_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x4E1AEE0", Offset = "0x4E1AEE0", VA = "0x4E1AEE0")]
	private static extern void Internal_DispatchComputeIndirect_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x4E1B030", Offset = "0x4E1B030", VA = "0x4E1B030")]
	private static extern void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x4E1B170", Offset = "0x4E1B170", VA = "0x4E1B170")]
	private static extern void Internal_SetRayTracingComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ComputeBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x4E1B2B0", Offset = "0x4E1B2B0", VA = "0x4E1B2B0")]
	private static extern void Internal_SetRayTracingGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, GraphicsBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x4E1B400", Offset = "0x4E1B400", VA = "0x4E1B400")]
	private static extern void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref GraphicsBufferHandle bufferHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x4E1B560", Offset = "0x4E1B560", VA = "0x4E1B560")]
	private static extern void Internal_SetRayTracingConstantComputeBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x4E1B6D0", Offset = "0x4E1B6D0", VA = "0x4E1B6D0")]
	private static extern void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x4E1B820", Offset = "0x4E1B820", VA = "0x4E1B820")]
	private static extern void Internal_SetRayTracingTextureParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref RenderTargetIdentifier rt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x4E1B970", Offset = "0x4E1B970", VA = "0x4E1B970")]
	private static extern void Internal_SetRayTracingFloatParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x4E1BAB0", Offset = "0x4E1BAB0", VA = "0x4E1BAB0")]
	private static extern void Internal_SetRayTracingIntParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x4E1BC00", Offset = "0x4E1BC00", VA = "0x4E1BC00")]
	private static extern void Internal_SetRayTracingVectorParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Vector4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x4E1BDB0", Offset = "0x4E1BDB0", VA = "0x4E1BDB0")]
	private static extern void Internal_SetRayTracingVectorArrayParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x4E1BEF0", Offset = "0x4E1BEF0", VA = "0x4E1BEF0")]
	private static extern void Internal_SetRayTracingMatrixParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, [In] ref Matrix4x4 val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x4E1C0A0", Offset = "0x4E1C0A0", VA = "0x4E1C0A0")]
	private static extern void Internal_SetRayTracingMatrixArrayParam_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x4E1C250", Offset = "0x4E1C250", VA = "0x4E1C250")]
	private static extern void Internal_SetRayTracingFloats_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x4E1C400", Offset = "0x4E1C400", VA = "0x4E1C400")]
	private static extern void Internal_SetRayTracingInts_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x4E1C4A0", Offset = "0x4E1C4A0", VA = "0x4E1C4A0")]
	private static extern void Internal_BuildRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, RayTracingAccelerationStructure accelerationStructure, [In] ref Vector3 relativeOrigin);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x4E1C5D0", Offset = "0x4E1C5D0", VA = "0x4E1C5D0")]
	private static extern void Internal_SetRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, int nameID, RayTracingAccelerationStructure accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4E1C720", Offset = "0x4E1C720", VA = "0x4E1C720")]
	private static extern void Internal_SetComputeRayTracingAccelerationStructure_Injected(CommandBuffer _unity_self, IntPtr computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure accelerationStructure);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x4E1C8F0", Offset = "0x4E1C8F0", VA = "0x4E1C8F0")]
	private static extern void Internal_DispatchRays_Injected(CommandBuffer _unity_self, IntPtr rayTracingShader, string rayGenShaderName, uint width, uint height, uint depth, [Optional] IntPtr camera);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x4E1CA70", Offset = "0x4E1CA70", VA = "0x4E1CA70")]
	private static extern void Internal_ResolveAntiAliasedSurface_Injected(CommandBuffer _unity_self, IntPtr rt, IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x4E1CE60", Offset = "0x4E1CE60", VA = "0x4E1CE60")]
	private static extern void Internal_DrawMesh_Injected(CommandBuffer _unity_self, IntPtr mesh, [In] ref Matrix4x4 matrix, IntPtr material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x4E1D040", Offset = "0x4E1D040", VA = "0x4E1D040")]
	private static extern void Internal_DrawRenderer_Injected(CommandBuffer _unity_self, IntPtr renderer, IntPtr material, int submeshIndex, int shaderPass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x4E1D0D0", Offset = "0x4E1D0D0", VA = "0x4E1D0D0")]
	private static extern void Internal_DrawRendererList_Injected(CommandBuffer _unity_self, [In] ref RendererList rendererList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x4E1D200", Offset = "0x4E1D200", VA = "0x4E1D200")]
	private static extern void Internal_DrawProcedural_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x4E1D360", Offset = "0x4E1D360", VA = "0x4E1D360")]
	private static extern void Internal_DrawProceduralIndexed_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x4E1D4B0", Offset = "0x4E1D4B0", VA = "0x4E1D4B0")]
	private static extern void Internal_DrawProceduralIndirect_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x4E1D610", Offset = "0x4E1D610", VA = "0x4E1D610")]
	private static extern void Internal_DrawProceduralIndexedIndirect_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x4E1D760", Offset = "0x4E1D760", VA = "0x4E1D760")]
	private static extern void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x4E1D8C0", Offset = "0x4E1D8C0", VA = "0x4E1D8C0")]
	private static extern void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, GraphicsBuffer indexBuffer, [In] ref Matrix4x4 matrix, IntPtr material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x4E1DAC0", Offset = "0x4E1DAC0", VA = "0x4E1DAC0")]
	private static extern void Internal_DrawMeshInstanced_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ref ManagedSpanWrapper matrices, int count, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x4E1DC80", Offset = "0x4E1DC80", VA = "0x4E1DC80")]
	private static extern void Internal_DrawMeshInstancedProcedural_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, int count, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x4E1DE40", Offset = "0x4E1DE40", VA = "0x4E1DE40")]
	private static extern void Internal_DrawMeshInstancedIndirect_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x4E1E000", Offset = "0x4E1E000", VA = "0x4E1E000")]
	private static extern void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(CommandBuffer _unity_self, IntPtr mesh, int submeshIndex, IntPtr material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x4E1E0A0", Offset = "0x4E1E0A0", VA = "0x4E1E0A0")]
	private static extern void Internal_DrawOcclusionMesh_Injected(CommandBuffer _unity_self, [In] ref RectInt normalizedCamViewport);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x4E1E170", Offset = "0x4E1E170", VA = "0x4E1E170")]
	private static extern void SetViewport_Injected(CommandBuffer _unity_self, [In] ref Rect pixelRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x4E1E1F0", Offset = "0x4E1E1F0", VA = "0x4E1E1F0")]
	private static extern void EnableScissorRect_Injected(CommandBuffer _unity_self, [In] ref Rect scissor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x4E1E450", Offset = "0x4E1E450", VA = "0x4E1E450")]
	private static extern void Blit_Texture_Injected(CommandBuffer _unity_self, IntPtr source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x4E1E5D0", Offset = "0x4E1E5D0", VA = "0x4E1E5D0")]
	private static extern void Blit_Identifier_Injected(CommandBuffer _unity_self, ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, IntPtr mat, int pass, [In] ref Vector2 scale, [In] ref Vector2 offset, int sourceDepthSlice, int destDepthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x4E1EBE0", Offset = "0x4E1EBE0", VA = "0x4E1EBE0")]
	private static extern void GetTemporaryRTWithDescriptor_Injected(CommandBuffer _unity_self, int nameID, [In] ref RenderTextureDescriptor desc, FilterMode filter);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x4E1F3C0", Offset = "0x4E1F3C0", VA = "0x4E1F3C0")]
	private static extern void SetGlobalVector_Injected(CommandBuffer _unity_self, int nameID, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x4E1F450", Offset = "0x4E1F450", VA = "0x4E1F450")]
	private static extern void SetGlobalColor_Injected(CommandBuffer _unity_self, int nameID, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x4E1F4D0", Offset = "0x4E1F4D0", VA = "0x4E1F4D0")]
	private static extern void SetGlobalMatrix_Injected(CommandBuffer _unity_self, int nameID, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x4E1F590", Offset = "0x4E1F590", VA = "0x4E1F590")]
	private static extern void EnableGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x4E1F690", Offset = "0x4E1F690", VA = "0x4E1F690")]
	private static extern void EnableMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x4E1F790", Offset = "0x4E1F790", VA = "0x4E1F790")]
	private static extern void EnableComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4E1FA40", Offset = "0x4E1FA40", VA = "0x4E1FA40")]
	private static extern void DisableGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x4E1FB40", Offset = "0x4E1FB40", VA = "0x4E1FB40")]
	private static extern void DisableMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x4E1FC40", Offset = "0x4E1FC40", VA = "0x4E1FC40")]
	private static extern void DisableComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x4E1FEC0", Offset = "0x4E1FEC0", VA = "0x4E1FEC0")]
	private static extern void SetGlobalKeyword_Injected(CommandBuffer _unity_self, [In] ref GlobalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x4E1FFD0", Offset = "0x4E1FFD0", VA = "0x4E1FFD0")]
	private static extern void SetMaterialKeyword_Injected(CommandBuffer _unity_self, IntPtr material, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4E200F0", Offset = "0x4E200F0", VA = "0x4E200F0")]
	private static extern void SetComputeKeyword_Injected(CommandBuffer _unity_self, IntPtr computeShader, [In] ref LocalKeyword keyword, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4E20380", Offset = "0x4E20380", VA = "0x4E20380")]
	private static extern void SetViewProjectionMatrices_Injected(CommandBuffer _unity_self, [In] ref Matrix4x4 view, [In] ref Matrix4x4 proj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x4E20630", Offset = "0x4E20630", VA = "0x4E20630")]
	private static extern void SetGlobalFloatArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x4E20780", Offset = "0x4E20780", VA = "0x4E20780")]
	private static extern void SetGlobalVectorArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4E208D0", Offset = "0x4E208D0", VA = "0x4E208D0")]
	private static extern void SetGlobalMatrixArray_Injected(CommandBuffer _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x4E20A10", Offset = "0x4E20A10", VA = "0x4E20A10")]
	private static extern void SetLateLatchProjectionMatrices_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper projectionMat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4E20F30", Offset = "0x4E20F30", VA = "0x4E20F30")]
	private static extern void IssuePluginCustomTextureUpdateInternal_Injected(CommandBuffer _unity_self, IntPtr callback, IntPtr targetTexture, uint userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x4E21060", Offset = "0x4E21060", VA = "0x4E21060")]
	private static extern void IncrementUpdateCount_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier dest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4E22F20", Offset = "0x4E22F20", VA = "0x4E22F20")]
	private static extern void ClearRenderTargetSingle_Internal_Injected(CommandBuffer _unity_self, RTClearFlags clearFlags, [In] ref Color color, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x4E22F80", Offset = "0x4E22F80", VA = "0x4E22F80")]
	private static extern void ClearRenderTargetMulti_Internal_Injected(CommandBuffer _unity_self, RTClearFlags clearFlags, ref ManagedSpanWrapper colors, float depth, uint stencil);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x4E22FE0", Offset = "0x4E22FE0", VA = "0x4E22FE0")]
	private static extern void SetRenderTargetSingle_Internal_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x4E23040", Offset = "0x4E23040", VA = "0x4E23040")]
	private static extern void SetRenderTargetColorDepth_Internal_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4E230A0", Offset = "0x4E230A0", VA = "0x4E230A0")]
	private static extern void SetRenderTargetMulti_Internal_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, RenderTargetFlags flags);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x4E23100", Offset = "0x4E23100", VA = "0x4E23100")]
	private static extern void SetRenderTargetColorDepthSubtarget_Injected(CommandBuffer _unity_self, [In] ref RenderTargetIdentifier color, [In] ref RenderTargetIdentifier depth, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4E23160", Offset = "0x4E23160", VA = "0x4E23160")]
	private static extern void SetRenderTargetMultiSubtarget_Injected(CommandBuffer _unity_self, ref ManagedSpanWrapper colors, [In] ref RenderTargetIdentifier depth, ref ManagedSpanWrapper colorLoadActions, ref ManagedSpanWrapper colorStoreActions, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x4E23CA0", Offset = "0x4E23CA0", VA = "0x4E23CA0")]
	private static extern void SetupCameraProperties_Internal_Injected(CommandBuffer _unity_self, IntPtr camera);
}
