using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;
using UnityEngine.Experimental.Rendering.RenderGraphModule;
using UnityEngine.Profiling;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000B")]
public class ComputeCommandBuffer : BaseCommandBuffer, IComputeCommandBuffer, IBaseCommandBuffer
{
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4845C20", Offset = "0x4845C20", VA = "0x4845C20")]
	internal ComputeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4845D00", Offset = "0x4845D00", VA = "0x4845D00", Slot = "92")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4845D20", Offset = "0x4845D20", VA = "0x4845D20", Slot = "4")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4845D40", Offset = "0x4845D40", VA = "0x4845D40", Slot = "5")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4845D60", Offset = "0x4845D60", VA = "0x4845D60", Slot = "6")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4845D80", Offset = "0x4845D80", VA = "0x4845D80", Slot = "7")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4845DA0", Offset = "0x4845DA0", VA = "0x4845DA0", Slot = "8")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4845E20", Offset = "0x4845E20", VA = "0x4845E20", Slot = "9")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4845E40", Offset = "0x4845E40", VA = "0x4845E40", Slot = "93")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4845E60", Offset = "0x4845E60", VA = "0x4845E60", Slot = "94")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4845E80", Offset = "0x4845E80", VA = "0x4845E80", Slot = "95")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4845EA0", Offset = "0x4845EA0", VA = "0x4845EA0", Slot = "96")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4845EC0", Offset = "0x4845EC0", VA = "0x4845EC0", Slot = "97")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4845EE0", Offset = "0x4845EE0", VA = "0x4845EE0", Slot = "98")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4845F00", Offset = "0x4845F00", VA = "0x4845F00", Slot = "99")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4845F20", Offset = "0x4845F20", VA = "0x4845F20", Slot = "100")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4845F40", Offset = "0x4845F40", VA = "0x4845F40", Slot = "101")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4845FC0", Offset = "0x4845FC0", VA = "0x4845FC0", Slot = "102")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4845FE0", Offset = "0x4845FE0", VA = "0x4845FE0", Slot = "103")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4846000", Offset = "0x4846000", VA = "0x4846000", Slot = "104")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4846020", Offset = "0x4846020", VA = "0x4846020", Slot = "105")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4846040", Offset = "0x4846040", VA = "0x4846040", Slot = "106")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4846060", Offset = "0x4846060", VA = "0x4846060", Slot = "107")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4846080", Offset = "0x4846080", VA = "0x4846080", Slot = "108")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x48460A0", Offset = "0x48460A0", VA = "0x48460A0", Slot = "109")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x48460C0", Offset = "0x48460C0", VA = "0x48460C0", Slot = "110")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x48460E0", Offset = "0x48460E0", VA = "0x48460E0", Slot = "111")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4846100", Offset = "0x4846100", VA = "0x4846100", Slot = "112")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4846120", Offset = "0x4846120", VA = "0x4846120", Slot = "113")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4846230", Offset = "0x4846230", VA = "0x4846230", Slot = "114")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4846250", Offset = "0x4846250", VA = "0x4846250", Slot = "115")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4846270", Offset = "0x4846270", VA = "0x4846270", Slot = "116")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4846290", Offset = "0x4846290", VA = "0x4846290", Slot = "117")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x48462B0", Offset = "0x48462B0", VA = "0x48462B0", Slot = "118")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x48462D0", Offset = "0x48462D0", VA = "0x48462D0", Slot = "119")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x48462F0", Offset = "0x48462F0", VA = "0x48462F0", Slot = "120")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4846310", Offset = "0x4846310", VA = "0x4846310", Slot = "121")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4846330", Offset = "0x4846330", VA = "0x4846330", Slot = "122")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4846350", Offset = "0x4846350", VA = "0x4846350", Slot = "123")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4846370", Offset = "0x4846370", VA = "0x4846370", Slot = "124")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4846390", Offset = "0x4846390", VA = "0x4846390", Slot = "125")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x48463A0", Offset = "0x48463A0", VA = "0x48463A0", Slot = "126")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x48463B0", Offset = "0x48463B0", VA = "0x48463B0", Slot = "127")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4846410", Offset = "0x4846410", VA = "0x4846410", Slot = "10")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000053")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000054")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4846430", Offset = "0x4846430", VA = "0x4846430", Slot = "13")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000056")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000057")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4846450", Offset = "0x4846450", VA = "0x4846450", Slot = "16")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4846470", Offset = "0x4846470", VA = "0x4846470", Slot = "17")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x600005A")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x600005B")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4846490", Offset = "0x4846490", VA = "0x4846490", Slot = "20")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x600005D")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x600005E")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x48464B0", Offset = "0x48464B0", VA = "0x48464B0", Slot = "23")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x48464D0", Offset = "0x48464D0", VA = "0x48464D0", Slot = "128")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x48464F0", Offset = "0x48464F0", VA = "0x48464F0", Slot = "129")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4846510", Offset = "0x4846510", VA = "0x4846510", Slot = "24")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4846530", Offset = "0x4846530", VA = "0x4846530", Slot = "25")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4846550", Offset = "0x4846550", VA = "0x4846550", Slot = "26")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4846570", Offset = "0x4846570", VA = "0x4846570", Slot = "27")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4846590", Offset = "0x4846590", VA = "0x4846590", Slot = "28")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4846610", Offset = "0x4846610", VA = "0x4846610", Slot = "29")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4846630", Offset = "0x4846630", VA = "0x4846630", Slot = "30")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4846650", Offset = "0x4846650", VA = "0x4846650", Slot = "31")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4846670", Offset = "0x4846670", VA = "0x4846670", Slot = "32")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4846690", Offset = "0x4846690", VA = "0x4846690", Slot = "33")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x48466B0", Offset = "0x48466B0", VA = "0x48466B0", Slot = "34")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4846790", Offset = "0x4846790", VA = "0x4846790", Slot = "35")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4846870", Offset = "0x4846870", VA = "0x4846870", Slot = "36")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4846960", Offset = "0x4846960", VA = "0x4846960", Slot = "37")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4846A50", Offset = "0x4846A50", VA = "0x4846A50", Slot = "38")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4846B50", Offset = "0x4846B50", VA = "0x4846B50", Slot = "39")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4846C50", Offset = "0x4846C50", VA = "0x4846C50", Slot = "40")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4846C70", Offset = "0x4846C70", VA = "0x4846C70", Slot = "41")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4846C90", Offset = "0x4846C90", VA = "0x4846C90", Slot = "42")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4846CB0", Offset = "0x4846CB0", VA = "0x4846CB0", Slot = "43")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4846CD0", Offset = "0x4846CD0", VA = "0x4846CD0", Slot = "44")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4846CF0", Offset = "0x4846CF0", VA = "0x4846CF0", Slot = "45")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4846D10", Offset = "0x4846D10", VA = "0x4846D10", Slot = "46")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4846D30", Offset = "0x4846D30", VA = "0x4846D30", Slot = "47")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4846D50", Offset = "0x4846D50", VA = "0x4846D50", Slot = "48")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4846D70", Offset = "0x4846D70", VA = "0x4846D70", Slot = "49")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4846D90", Offset = "0x4846D90", VA = "0x4846D90", Slot = "50")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4846DB0", Offset = "0x4846DB0", VA = "0x4846DB0", Slot = "51")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4846DD0", Offset = "0x4846DD0", VA = "0x4846DD0", Slot = "52")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4846DF0", Offset = "0x4846DF0", VA = "0x4846DF0", Slot = "53")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4846E10", Offset = "0x4846E10", VA = "0x4846E10", Slot = "54")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4846E30", Offset = "0x4846E30", VA = "0x4846E30", Slot = "55")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4846E50", Offset = "0x4846E50", VA = "0x4846E50", Slot = "56")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4846E70", Offset = "0x4846E70", VA = "0x4846E70", Slot = "57")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4846E90", Offset = "0x4846E90", VA = "0x4846E90", Slot = "58")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4846EB0", Offset = "0x4846EB0", VA = "0x4846EB0", Slot = "59")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4846ED0", Offset = "0x4846ED0", VA = "0x4846ED0", Slot = "60")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4846EF0", Offset = "0x4846EF0", VA = "0x4846EF0", Slot = "61")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4846F10", Offset = "0x4846F10", VA = "0x4846F10", Slot = "62")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4846F30", Offset = "0x4846F30", VA = "0x4846F30", Slot = "63")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4846F50", Offset = "0x4846F50", VA = "0x4846F50", Slot = "64")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4846F70", Offset = "0x4846F70", VA = "0x4846F70", Slot = "65")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4846F90", Offset = "0x4846F90", VA = "0x4846F90", Slot = "66")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4846FB0", Offset = "0x4846FB0", VA = "0x4846FB0", Slot = "67")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4846FD0", Offset = "0x4846FD0", VA = "0x4846FD0", Slot = "68")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4846FF0", Offset = "0x4846FF0", VA = "0x4846FF0", Slot = "69")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x48470C0", Offset = "0x48470C0", VA = "0x48470C0", Slot = "70")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4847190", Offset = "0x4847190", VA = "0x4847190", Slot = "71")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x48471B0", Offset = "0x48471B0", VA = "0x48471B0", Slot = "72")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x48471D0", Offset = "0x48471D0", VA = "0x48471D0", Slot = "73")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x48471F0", Offset = "0x48471F0", VA = "0x48471F0", Slot = "74")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4847210", Offset = "0x4847210", VA = "0x4847210", Slot = "75")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4847230", Offset = "0x4847230", VA = "0x4847230", Slot = "76")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4847250", Offset = "0x4847250", VA = "0x4847250", Slot = "77")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4847270", Offset = "0x4847270", VA = "0x4847270", Slot = "78")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4847290", Offset = "0x4847290", VA = "0x4847290", Slot = "79")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x48472B0", Offset = "0x48472B0", VA = "0x48472B0", Slot = "80")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x48472D0", Offset = "0x48472D0", VA = "0x48472D0", Slot = "81")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x48472F0", Offset = "0x48472F0", VA = "0x48472F0", Slot = "82")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4847310", Offset = "0x4847310", VA = "0x4847310", Slot = "83")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4847390", Offset = "0x4847390", VA = "0x4847390", Slot = "84")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4847410", Offset = "0x4847410", VA = "0x4847410", Slot = "85")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4847430", Offset = "0x4847430", VA = "0x4847430", Slot = "86")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4847450", Offset = "0x4847450", VA = "0x4847450", Slot = "87")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4847470", Offset = "0x4847470", VA = "0x4847470", Slot = "88")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4847490", Offset = "0x4847490", VA = "0x4847490", Slot = "89")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x48474B0", Offset = "0x48474B0", VA = "0x48474B0", Slot = "90")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x48474D0", Offset = "0x48474D0", VA = "0x48474D0", Slot = "91")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x48474F0", Offset = "0x48474F0", VA = "0x48474F0", Slot = "130")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4847510", Offset = "0x4847510", VA = "0x4847510", Slot = "131")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4847530", Offset = "0x4847530", VA = "0x4847530", Slot = "132")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4847550", Offset = "0x4847550", VA = "0x4847550", Slot = "133")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4847570", Offset = "0x4847570", VA = "0x4847570", Slot = "134")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4847590", Offset = "0x4847590", VA = "0x4847590", Slot = "135")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4847610", Offset = "0x4847610", VA = "0x4847610", Slot = "136")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4847630", Offset = "0x4847630", VA = "0x4847630", Slot = "137")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4847650", Offset = "0x4847650", VA = "0x4847650", Slot = "138")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4847670", Offset = "0x4847670", VA = "0x4847670", Slot = "139")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4847690", Offset = "0x4847690", VA = "0x4847690", Slot = "140")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x48476B0", Offset = "0x48476B0", VA = "0x48476B0", Slot = "141")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x48476D0", Offset = "0x48476D0", VA = "0x48476D0", Slot = "142")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x48476F0", Offset = "0x48476F0", VA = "0x48476F0", Slot = "143")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4847710", Offset = "0x4847710", VA = "0x4847710", Slot = "144")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4847730", Offset = "0x4847730", VA = "0x4847730", Slot = "145")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4847800", Offset = "0x4847800", VA = "0x4847800", Slot = "146")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x48478D0", Offset = "0x48478D0", VA = "0x48478D0", Slot = "147")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x48479A0", Offset = "0x48479A0", VA = "0x48479A0", Slot = "148")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4847A70", Offset = "0x4847A70", VA = "0x4847A70", Slot = "149")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4847A90", Offset = "0x4847A90", VA = "0x4847A90", Slot = "150")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4847AB0", Offset = "0x4847AB0", VA = "0x4847AB0", Slot = "151")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4847AD0", Offset = "0x4847AD0", VA = "0x4847AD0", Slot = "152")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4847AF0", Offset = "0x4847AF0", VA = "0x4847AF0", Slot = "153")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4847B10", Offset = "0x4847B10", VA = "0x4847B10", Slot = "154")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4847B30", Offset = "0x4847B30", VA = "0x4847B30", Slot = "155")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4847B50", Offset = "0x4847B50", VA = "0x4847B50", Slot = "156")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4847B70", Offset = "0x4847B70", VA = "0x4847B70", Slot = "157")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4847BD0", Offset = "0x4847BD0", VA = "0x4847BD0", Slot = "158")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4847BF0", Offset = "0x4847BF0", VA = "0x4847BF0", Slot = "159")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4847C10", Offset = "0x4847C10", VA = "0x4847C10", Slot = "160")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4847C30", Offset = "0x4847C30", VA = "0x4847C30", Slot = "161")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4847CF0", Offset = "0x4847CF0", VA = "0x4847CF0", Slot = "162")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
