using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.Rendering.RenderGraphModule;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000D")]
public interface IComputeCommandBuffer : IBaseCommandBuffer
{
	[Token(Token = "0x600010E")]
	void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val);

	[Token(Token = "0x600010F")]
	void SetComputeIntParam(ComputeShader computeShader, int nameID, int val);

	[Token(Token = "0x6000110")]
	void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val);

	[Token(Token = "0x6000111")]
	void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values);

	[Token(Token = "0x6000112")]
	void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val);

	[Token(Token = "0x6000113")]
	void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values);

	[Token(Token = "0x6000114")]
	void SetBufferData(ComputeBuffer buffer, Array data);

	[Token(Token = "0x6000115")]
	void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct;

	[Token(Token = "0x6000116")]
	void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct;

	[Token(Token = "0x6000117")]
	void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count);

	[Token(Token = "0x6000118")]
	void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x6000119")]
	void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x600011A")]
	void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue);

	[Token(Token = "0x600011B")]
	void SetBufferData(GraphicsBuffer buffer, Array data);

	[Token(Token = "0x600011C")]
	void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct;

	[Token(Token = "0x600011D")]
	void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct;

	[Token(Token = "0x600011E")]
	void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count);

	[Token(Token = "0x600011F")]
	void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x6000120")]
	void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct;

	[Token(Token = "0x6000121")]
	void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue);

	[Token(Token = "0x6000122")]
	void SetComputeFloatParam(ComputeShader computeShader, string name, float val);

	[Token(Token = "0x6000123")]
	void SetComputeIntParam(ComputeShader computeShader, string name, int val);

	[Token(Token = "0x6000124")]
	void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val);

	[Token(Token = "0x6000125")]
	void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values);

	[Token(Token = "0x6000126")]
	void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val);

	[Token(Token = "0x6000127")]
	void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values);

	[Token(Token = "0x6000128")]
	void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values);

	[Token(Token = "0x6000129")]
	void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values);

	[Token(Token = "0x600012A")]
	void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values);

	[Token(Token = "0x600012B")]
	void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values);

	[Token(Token = "0x600012C")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt);

	[Token(Token = "0x600012D")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt);

	[Token(Token = "0x600012E")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel);

	[Token(Token = "0x600012F")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel);

	[Token(Token = "0x6000130")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x6000131")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x6000132")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer);

	[Token(Token = "0x6000133")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer);

	[Token(Token = "0x6000134")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x6000135")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x6000136")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer);

	[Token(Token = "0x6000137")]
	void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer);

	[Token(Token = "0x6000138")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x6000139")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x600013A")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600013B")]
	void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600013C")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[Token(Token = "0x600013D")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset);

	[Token(Token = "0x600013E")]
	void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset);

	[Token(Token = "0x600013F")]
	void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure);

	[Token(Token = "0x6000140")]
	void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin);

	[Token(Token = "0x6000141")]
	void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000142")]
	void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000143")]
	void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000144")]
	void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure);

	[Token(Token = "0x6000145")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer);

	[Token(Token = "0x6000146")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer);

	[Token(Token = "0x6000147")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer);

	[Token(Token = "0x6000148")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer);

	[Token(Token = "0x6000149")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x600014A")]
	void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle);

	[Token(Token = "0x600014B")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x600014C")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size);

	[Token(Token = "0x600014D")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600014E")]
	void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size);

	[Token(Token = "0x600014F")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt);

	[Token(Token = "0x6000150")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt);

	[Token(Token = "0x6000151")]
	void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val);

	[Token(Token = "0x6000152")]
	void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val);

	[Token(Token = "0x6000153")]
	void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values);

	[Token(Token = "0x6000154")]
	void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values);

	[Token(Token = "0x6000155")]
	void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val);

	[Token(Token = "0x6000156")]
	void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val);

	[Token(Token = "0x6000157")]
	void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values);

	[Token(Token = "0x6000158")]
	void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values);

	[Token(Token = "0x6000159")]
	void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val);

	[Token(Token = "0x600015A")]
	void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val);

	[Token(Token = "0x600015B")]
	void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values);

	[Token(Token = "0x600015C")]
	void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values);

	[Token(Token = "0x600015D")]
	void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val);

	[Token(Token = "0x600015E")]
	void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val);

	[Token(Token = "0x600015F")]
	void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values);

	[Token(Token = "0x6000160")]
	void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values);

	[Token(Token = "0x6000161")]
	void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera);

	[Token(Token = "0x6000162")]
	void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000163")]
	void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000164")]
	void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);

	[Token(Token = "0x6000165")]
	void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes);
}
