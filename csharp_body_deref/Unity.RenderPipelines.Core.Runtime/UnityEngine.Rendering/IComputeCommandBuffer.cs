// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IComputeCommandBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000021")]
public interface IComputeCommandBuffer : IBaseCommandBuffer
{
	[Token(Token = "0x60001DB")]
	void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val);

	[Token(Token = "0x60001DC")]
	void SetComputeIntParam(ComputeShader computeShader, int nameID, int val);

	[Token(Token = "0x60001DD")]
	void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val);

	[Token(Token = "0x60001DE")]
	void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values);

	[Token(Token = "0x60001DF")]
	void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val);

	[Token(Token = "0x60001E0")]
	void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values);

	[Token(Token = "0x60001E1")]
	void SetRayTracingShaderPass(RayTracingShader rayTracingShader, string passName);

	[Token(Token = "0x60001E2")]
	void SetBufferData(ComputeBuffer buffer, Array data);

	[Token(Token = "0x60001E3")]
	void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct;

	[Token(Token = "0x60001E4")]
	void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct;

	[Token(Token = "0x60001E5")]
	void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count);

	[Token(Token = "0x60001E6")]
	void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x60001E7")]
	void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x60001E8")]
	void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue);

	[Token(Token = "0x60001E9")]
	void SetBufferData(GraphicsBuffer buffer, Array data);

	[Token(Token = "0x60001EA")]
	void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct;

	[Token(Token = "0x60001EB")]
	void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct;

	[Token(Token = "0x60001EC")]
	void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count);

	[Token(Token = "0x60001ED")]
	void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x60001EE")]
	void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x60001EF")]
	void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue);

	[Token(Token = "0x60001F0")]
	void SetComputeFloatParam(ComputeShader computeShader, string name, float val);

	[Token(Token = "0x60001F1")]
	void SetComputeIntParam(ComputeShader computeShader, string name, int val);

	[Token(Token = "0x60001F2")]
	void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val);

	[Token(Token = "0x60001F3")]
	void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values);

	[Token(Token = "0x60001F4")]
	void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val);

	[Token(Token = "0x60001F5")]
	void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values);

	[Token(Token = "0x60001F6")]
	void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values);

	[Token(Token = "0x60001F7")]
	void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values);

	[Token(Token = "0x60001F8")]
	void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values);

	[Token(Token = "0x60001F9")]
	void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values);

	[Token(Token = "0x60001FA")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt);

	[Token(Token = "0x60001FB")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt);

	[Token(Token = "0x60001FC")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel);

	[Token(Token = "0x60001FD")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel);

	[Token(Token = "0x60001FE")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x60001FF")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x6000200")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer);

	[Token(Token = "0x6000201")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer);

	[Token(Token = "0x6000202")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x6000203")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x6000204")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer);

	[Token(Token = "0x6000205")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer);

	[Token(Token = "0x6000206")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x6000207")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x6000208")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x6000209")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600020A")]
	void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material);

	[Token(Token = "0x600020B")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[Token(Token = "0x600020C")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset);

	[Token(Token = "0x600020D")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset);

	[Token(Token = "0x600020E")]
	void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure);

	[Token(Token = "0x600020F")]
	void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin);

	[Token(Token = "0x6000210")]
	void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings);

	[Token(Token = "0x6000211")]
	void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000212")]
	void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000213")]
	void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000214")]
	void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000215")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer);

	[Token(Token = "0x6000216")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer);

	[Token(Token = "0x6000217")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer);

	[Token(Token = "0x6000218")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer);

	[Token(Token = "0x6000219")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x600021A")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x600021B")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x600021C")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x600021D")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600021E")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600021F")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt);

	[Token(Token = "0x6000220")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt);

	[Token(Token = "0x6000221")]
	void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val);

	[Token(Token = "0x6000222")]
	void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val);

	[Token(Token = "0x6000223")]
	void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values);

	[Token(Token = "0x6000224")]
	void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values);

	[Token(Token = "0x6000225")]
	void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val);

	[Token(Token = "0x6000226")]
	void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val);

	[Token(Token = "0x6000227")]
	void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values);

	[Token(Token = "0x6000228")]
	void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values);

	[Token(Token = "0x6000229")]
	void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val);

	[Token(Token = "0x600022A")]
	void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val);

	[Token(Token = "0x600022B")]
	void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values);

	[Token(Token = "0x600022C")]
	void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values);

	[Token(Token = "0x600022D")]
	void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val);

	[Token(Token = "0x600022E")]
	void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val);

	[Token(Token = "0x600022F")]
	void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values);

	[Token(Token = "0x6000230")]
	void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values);

	[Token(Token = "0x6000231")]
	void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera);

	[Token(Token = "0x6000232")]
	void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, Camera camera);

	[Token(Token = "0x6000233")]
	void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000234")]
	void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000235")]
	void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000236")]
	void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);
}
