// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.ComputeCommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B6AD10", Offset = "0x4B6AD10", VA = "0x4B6AD10")]
	internal ComputeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4B6ADF0", Offset = "0x4B6ADF0", VA = "0x4B6ADF0", Slot = "92")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4B6AE10", Offset = "0x4B6AE10", VA = "0x4B6AE10", Slot = "4")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4B6AE30", Offset = "0x4B6AE30", VA = "0x4B6AE30", Slot = "5")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4B6AE50", Offset = "0x4B6AE50", VA = "0x4B6AE50", Slot = "6")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4B6AE70", Offset = "0x4B6AE70", VA = "0x4B6AE70", Slot = "7")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4B6AE90", Offset = "0x4B6AE90", VA = "0x4B6AE90", Slot = "8")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4B6AF10", Offset = "0x4B6AF10", VA = "0x4B6AF10", Slot = "9")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4B6AF30", Offset = "0x4B6AF30", VA = "0x4B6AF30", Slot = "93")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4B6AF50", Offset = "0x4B6AF50", VA = "0x4B6AF50", Slot = "94")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4B6AF70", Offset = "0x4B6AF70", VA = "0x4B6AF70", Slot = "95")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4B6AF90", Offset = "0x4B6AF90", VA = "0x4B6AF90", Slot = "96")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4B6AFB0", Offset = "0x4B6AFB0", VA = "0x4B6AFB0", Slot = "97")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B6AFD0", Offset = "0x4B6AFD0", VA = "0x4B6AFD0", Slot = "98")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B6AFF0", Offset = "0x4B6AFF0", VA = "0x4B6AFF0", Slot = "99")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B6B010", Offset = "0x4B6B010", VA = "0x4B6B010", Slot = "100")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B6B030", Offset = "0x4B6B030", VA = "0x4B6B030", Slot = "101")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B6B0B0", Offset = "0x4B6B0B0", VA = "0x4B6B0B0", Slot = "102")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B6B0D0", Offset = "0x4B6B0D0", VA = "0x4B6B0D0", Slot = "103")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B6B0F0", Offset = "0x4B6B0F0", VA = "0x4B6B0F0", Slot = "104")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B6B110", Offset = "0x4B6B110", VA = "0x4B6B110", Slot = "105")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4B6B130", Offset = "0x4B6B130", VA = "0x4B6B130", Slot = "106")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B6B150", Offset = "0x4B6B150", VA = "0x4B6B150", Slot = "107")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B6B170", Offset = "0x4B6B170", VA = "0x4B6B170", Slot = "108")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4B6B190", Offset = "0x4B6B190", VA = "0x4B6B190", Slot = "109")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4B6B1B0", Offset = "0x4B6B1B0", VA = "0x4B6B1B0", Slot = "110")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B6B1D0", Offset = "0x4B6B1D0", VA = "0x4B6B1D0", Slot = "111")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B6B1F0", Offset = "0x4B6B1F0", VA = "0x4B6B1F0", Slot = "112")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4B6B210", Offset = "0x4B6B210", VA = "0x4B6B210", Slot = "113")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B6B320", Offset = "0x4B6B320", VA = "0x4B6B320", Slot = "114")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B6B340", Offset = "0x4B6B340", VA = "0x4B6B340", Slot = "115")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B6B360", Offset = "0x4B6B360", VA = "0x4B6B360", Slot = "116")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B6B380", Offset = "0x4B6B380", VA = "0x4B6B380", Slot = "117")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4B6B3A0", Offset = "0x4B6B3A0", VA = "0x4B6B3A0", Slot = "118")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B6B3C0", Offset = "0x4B6B3C0", VA = "0x4B6B3C0", Slot = "119")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B6B3E0", Offset = "0x4B6B3E0", VA = "0x4B6B3E0", Slot = "120")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B6B400", Offset = "0x4B6B400", VA = "0x4B6B400", Slot = "121")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B6B420", Offset = "0x4B6B420", VA = "0x4B6B420", Slot = "122")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B6B440", Offset = "0x4B6B440", VA = "0x4B6B440", Slot = "123")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B6B460", Offset = "0x4B6B460", VA = "0x4B6B460", Slot = "124")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B6B480", Offset = "0x4B6B480", VA = "0x4B6B480", Slot = "125")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B6B490", Offset = "0x4B6B490", VA = "0x4B6B490", Slot = "126")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4B6B4A0", Offset = "0x4B6B4A0", VA = "0x4B6B4A0", Slot = "127")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4B6B500", Offset = "0x4B6B500", VA = "0x4B6B500", Slot = "10")]
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
	[Address(RVA = "0x4B6B520", Offset = "0x4B6B520", VA = "0x4B6B520", Slot = "13")]
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
	[Address(RVA = "0x4B6B540", Offset = "0x4B6B540", VA = "0x4B6B540", Slot = "16")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B6B560", Offset = "0x4B6B560", VA = "0x4B6B560", Slot = "17")]
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
	[Address(RVA = "0x4B6B580", Offset = "0x4B6B580", VA = "0x4B6B580", Slot = "20")]
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
	[Address(RVA = "0x4B6B5A0", Offset = "0x4B6B5A0", VA = "0x4B6B5A0", Slot = "23")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4B6B5C0", Offset = "0x4B6B5C0", VA = "0x4B6B5C0", Slot = "128")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4B6B5E0", Offset = "0x4B6B5E0", VA = "0x4B6B5E0", Slot = "129")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4B6B600", Offset = "0x4B6B600", VA = "0x4B6B600", Slot = "24")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4B6B620", Offset = "0x4B6B620", VA = "0x4B6B620", Slot = "25")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4B6B640", Offset = "0x4B6B640", VA = "0x4B6B640", Slot = "26")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4B6B660", Offset = "0x4B6B660", VA = "0x4B6B660", Slot = "27")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4B6B680", Offset = "0x4B6B680", VA = "0x4B6B680", Slot = "28")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4B6B700", Offset = "0x4B6B700", VA = "0x4B6B700", Slot = "29")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4B6B720", Offset = "0x4B6B720", VA = "0x4B6B720", Slot = "30")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4B6B740", Offset = "0x4B6B740", VA = "0x4B6B740", Slot = "31")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4B6B760", Offset = "0x4B6B760", VA = "0x4B6B760", Slot = "32")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4B6B780", Offset = "0x4B6B780", VA = "0x4B6B780", Slot = "33")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4B6B7A0", Offset = "0x4B6B7A0", VA = "0x4B6B7A0", Slot = "34")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4B6B880", Offset = "0x4B6B880", VA = "0x4B6B880", Slot = "35")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4B6B960", Offset = "0x4B6B960", VA = "0x4B6B960", Slot = "36")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4B6BA50", Offset = "0x4B6BA50", VA = "0x4B6BA50", Slot = "37")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4B6BB40", Offset = "0x4B6BB40", VA = "0x4B6BB40", Slot = "38")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4B6BC40", Offset = "0x4B6BC40", VA = "0x4B6BC40", Slot = "39")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4B6BD40", Offset = "0x4B6BD40", VA = "0x4B6BD40", Slot = "40")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4B6BD60", Offset = "0x4B6BD60", VA = "0x4B6BD60", Slot = "41")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4B6BD80", Offset = "0x4B6BD80", VA = "0x4B6BD80", Slot = "42")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4B6BDA0", Offset = "0x4B6BDA0", VA = "0x4B6BDA0", Slot = "43")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B6BDC0", Offset = "0x4B6BDC0", VA = "0x4B6BDC0", Slot = "44")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B6BDE0", Offset = "0x4B6BDE0", VA = "0x4B6BDE0", Slot = "45")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B6BE00", Offset = "0x4B6BE00", VA = "0x4B6BE00", Slot = "46")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B6BE20", Offset = "0x4B6BE20", VA = "0x4B6BE20", Slot = "47")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B6BE40", Offset = "0x4B6BE40", VA = "0x4B6BE40", Slot = "48")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B6BE60", Offset = "0x4B6BE60", VA = "0x4B6BE60", Slot = "49")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B6BE80", Offset = "0x4B6BE80", VA = "0x4B6BE80", Slot = "50")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4B6BEA0", Offset = "0x4B6BEA0", VA = "0x4B6BEA0", Slot = "51")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4B6BEC0", Offset = "0x4B6BEC0", VA = "0x4B6BEC0", Slot = "52")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4B6BEE0", Offset = "0x4B6BEE0", VA = "0x4B6BEE0", Slot = "53")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4B6BF00", Offset = "0x4B6BF00", VA = "0x4B6BF00", Slot = "54")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4B6BF20", Offset = "0x4B6BF20", VA = "0x4B6BF20", Slot = "55")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4B6BF40", Offset = "0x4B6BF40", VA = "0x4B6BF40", Slot = "56")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4B6BF60", Offset = "0x4B6BF60", VA = "0x4B6BF60", Slot = "57")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4B6BF80", Offset = "0x4B6BF80", VA = "0x4B6BF80", Slot = "58")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4B6BFA0", Offset = "0x4B6BFA0", VA = "0x4B6BFA0", Slot = "59")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4B6BFC0", Offset = "0x4B6BFC0", VA = "0x4B6BFC0", Slot = "60")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4B6BFE0", Offset = "0x4B6BFE0", VA = "0x4B6BFE0", Slot = "61")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4B6C000", Offset = "0x4B6C000", VA = "0x4B6C000", Slot = "62")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4B6C020", Offset = "0x4B6C020", VA = "0x4B6C020", Slot = "63")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4B6C040", Offset = "0x4B6C040", VA = "0x4B6C040", Slot = "64")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4B6C060", Offset = "0x4B6C060", VA = "0x4B6C060", Slot = "65")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4B6C080", Offset = "0x4B6C080", VA = "0x4B6C080", Slot = "66")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4B6C0A0", Offset = "0x4B6C0A0", VA = "0x4B6C0A0", Slot = "67")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4B6C0C0", Offset = "0x4B6C0C0", VA = "0x4B6C0C0", Slot = "68")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4B6C0E0", Offset = "0x4B6C0E0", VA = "0x4B6C0E0", Slot = "69")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4B6C1B0", Offset = "0x4B6C1B0", VA = "0x4B6C1B0", Slot = "70")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4B6C280", Offset = "0x4B6C280", VA = "0x4B6C280", Slot = "71")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4B6C2A0", Offset = "0x4B6C2A0", VA = "0x4B6C2A0", Slot = "72")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4B6C2C0", Offset = "0x4B6C2C0", VA = "0x4B6C2C0", Slot = "73")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4B6C2E0", Offset = "0x4B6C2E0", VA = "0x4B6C2E0", Slot = "74")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4B6C300", Offset = "0x4B6C300", VA = "0x4B6C300", Slot = "75")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4B6C320", Offset = "0x4B6C320", VA = "0x4B6C320", Slot = "76")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4B6C340", Offset = "0x4B6C340", VA = "0x4B6C340", Slot = "77")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4B6C360", Offset = "0x4B6C360", VA = "0x4B6C360", Slot = "78")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4B6C380", Offset = "0x4B6C380", VA = "0x4B6C380", Slot = "79")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4B6C3A0", Offset = "0x4B6C3A0", VA = "0x4B6C3A0", Slot = "80")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4B6C3C0", Offset = "0x4B6C3C0", VA = "0x4B6C3C0", Slot = "81")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4B6C3E0", Offset = "0x4B6C3E0", VA = "0x4B6C3E0", Slot = "82")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4B6C400", Offset = "0x4B6C400", VA = "0x4B6C400", Slot = "83")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4B6C480", Offset = "0x4B6C480", VA = "0x4B6C480", Slot = "84")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4B6C500", Offset = "0x4B6C500", VA = "0x4B6C500", Slot = "85")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4B6C520", Offset = "0x4B6C520", VA = "0x4B6C520", Slot = "86")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4B6C540", Offset = "0x4B6C540", VA = "0x4B6C540", Slot = "87")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4B6C560", Offset = "0x4B6C560", VA = "0x4B6C560", Slot = "88")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4B6C580", Offset = "0x4B6C580", VA = "0x4B6C580", Slot = "89")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4B6C5A0", Offset = "0x4B6C5A0", VA = "0x4B6C5A0", Slot = "90")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4B6C5C0", Offset = "0x4B6C5C0", VA = "0x4B6C5C0", Slot = "91")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4B6C5E0", Offset = "0x4B6C5E0", VA = "0x4B6C5E0", Slot = "130")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4B6C600", Offset = "0x4B6C600", VA = "0x4B6C600", Slot = "131")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4B6C620", Offset = "0x4B6C620", VA = "0x4B6C620", Slot = "132")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4B6C640", Offset = "0x4B6C640", VA = "0x4B6C640", Slot = "133")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4B6C660", Offset = "0x4B6C660", VA = "0x4B6C660", Slot = "134")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4B6C680", Offset = "0x4B6C680", VA = "0x4B6C680", Slot = "135")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4B6C700", Offset = "0x4B6C700", VA = "0x4B6C700", Slot = "136")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4B6C720", Offset = "0x4B6C720", VA = "0x4B6C720", Slot = "137")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4B6C740", Offset = "0x4B6C740", VA = "0x4B6C740", Slot = "138")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4B6C760", Offset = "0x4B6C760", VA = "0x4B6C760", Slot = "139")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4B6C780", Offset = "0x4B6C780", VA = "0x4B6C780", Slot = "140")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4B6C7A0", Offset = "0x4B6C7A0", VA = "0x4B6C7A0", Slot = "141")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4B6C7C0", Offset = "0x4B6C7C0", VA = "0x4B6C7C0", Slot = "142")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4B6C7E0", Offset = "0x4B6C7E0", VA = "0x4B6C7E0", Slot = "143")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4B6C800", Offset = "0x4B6C800", VA = "0x4B6C800", Slot = "144")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4B6C820", Offset = "0x4B6C820", VA = "0x4B6C820", Slot = "145")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4B6C8F0", Offset = "0x4B6C8F0", VA = "0x4B6C8F0", Slot = "146")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4B6C9C0", Offset = "0x4B6C9C0", VA = "0x4B6C9C0", Slot = "147")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4B6CA90", Offset = "0x4B6CA90", VA = "0x4B6CA90", Slot = "148")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4B6CB60", Offset = "0x4B6CB60", VA = "0x4B6CB60", Slot = "149")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4B6CB80", Offset = "0x4B6CB80", VA = "0x4B6CB80", Slot = "150")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4B6CBA0", Offset = "0x4B6CBA0", VA = "0x4B6CBA0", Slot = "151")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4B6CBC0", Offset = "0x4B6CBC0", VA = "0x4B6CBC0", Slot = "152")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4B6CBE0", Offset = "0x4B6CBE0", VA = "0x4B6CBE0", Slot = "153")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4B6CC00", Offset = "0x4B6CC00", VA = "0x4B6CC00", Slot = "154")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4B6CC20", Offset = "0x4B6CC20", VA = "0x4B6CC20", Slot = "155")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4B6CC40", Offset = "0x4B6CC40", VA = "0x4B6CC40", Slot = "156")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4B6CC60", Offset = "0x4B6CC60", VA = "0x4B6CC60", Slot = "157")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4B6CCC0", Offset = "0x4B6CCC0", VA = "0x4B6CCC0", Slot = "158")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4B6CCE0", Offset = "0x4B6CCE0", VA = "0x4B6CCE0", Slot = "159")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4B6CD00", Offset = "0x4B6CD00", VA = "0x4B6CD00", Slot = "160")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4B6CD20", Offset = "0x4B6CD20", VA = "0x4B6CD20", Slot = "161")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4B6CDE0", Offset = "0x4B6CDE0", VA = "0x4B6CDE0", Slot = "162")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
