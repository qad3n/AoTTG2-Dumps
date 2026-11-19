// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ComputeCommandBuffer
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
using UnityEngine.Profiling;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001F")]
public class ComputeCommandBuffer : BaseCommandBuffer, IComputeCommandBuffer, IBaseCommandBuffer
{
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x64B4A90", Offset = "0x64B3A90", VA = "0x64B4A90")]
	internal ComputeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x64B4B70", Offset = "0x64B3B70", VA = "0x64B4B70", Slot = "96")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x64B4B90", Offset = "0x64B3B90", VA = "0x64B4B90", Slot = "4")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x64B4BB0", Offset = "0x64B3BB0", VA = "0x64B4BB0", Slot = "5")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x64B4BD0", Offset = "0x64B3BD0", VA = "0x64B4BD0", Slot = "6")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x64B4BF0", Offset = "0x64B3BF0", VA = "0x64B4BF0", Slot = "7")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x64B4C10", Offset = "0x64B3C10", VA = "0x64B4C10", Slot = "8")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x64B4C30", Offset = "0x64B3C30", VA = "0x64B4C30", Slot = "9")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x64B4C50", Offset = "0x64B3C50", VA = "0x64B4C50", Slot = "10")]
	public void SetRayTracingShaderPass(RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x64B4C70", Offset = "0x64B3C70", VA = "0x64B4C70", Slot = "97")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x64B4C90", Offset = "0x64B3C90", VA = "0x64B4C90", Slot = "98")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x64B4CB0", Offset = "0x64B3CB0", VA = "0x64B4CB0", Slot = "99")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x64B4CD0", Offset = "0x64B3CD0", VA = "0x64B4CD0", Slot = "100")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x64B4CF0", Offset = "0x64B3CF0", VA = "0x64B4CF0", Slot = "101")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x64B4D10", Offset = "0x64B3D10", VA = "0x64B4D10", Slot = "102")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x64B4D30", Offset = "0x64B3D30", VA = "0x64B4D30", Slot = "103")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x64B4D50", Offset = "0x64B3D50", VA = "0x64B4D50", Slot = "104")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x64B4D70", Offset = "0x64B3D70", VA = "0x64B4D70", Slot = "105")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x64B4D90", Offset = "0x64B3D90", VA = "0x64B4D90", Slot = "106")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x64B4DB0", Offset = "0x64B3DB0", VA = "0x64B4DB0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x64B4DD0", Offset = "0x64B3DD0", VA = "0x64B4DD0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x64B4DF0", Offset = "0x64B3DF0", VA = "0x64B4DF0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x64B4E10", Offset = "0x64B3E10", VA = "0x64B4E10", Slot = "110")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x64B4E30", Offset = "0x64B3E30", VA = "0x64B4E30")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x64B4E50", Offset = "0x64B3E50", VA = "0x64B4E50")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x64B4E70", Offset = "0x64B3E70", VA = "0x64B4E70")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x64B4E90", Offset = "0x64B3E90", VA = "0x64B4E90")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x64B4EB0", Offset = "0x64B3EB0", VA = "0x64B4EB0")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x64B4ED0", Offset = "0x64B3ED0", VA = "0x64B4ED0")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x64B4EF0", Offset = "0x64B3EF0", VA = "0x64B4EF0", Slot = "117")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x64B4F10", Offset = "0x64B3F10", VA = "0x64B4F10", Slot = "118")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x64B4F30", Offset = "0x64B3F30", VA = "0x64B4F30", Slot = "119")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x64B4F50", Offset = "0x64B3F50", VA = "0x64B4F50", Slot = "120")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x64B4F70", Offset = "0x64B3F70", VA = "0x64B4F70", Slot = "121")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x64B4F90", Offset = "0x64B3F90", VA = "0x64B4F90", Slot = "122")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x64B4FB0", Offset = "0x64B3FB0", VA = "0x64B4FB0", Slot = "123")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x64B4FD0", Offset = "0x64B3FD0", VA = "0x64B4FD0", Slot = "124")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x64B4FF0", Offset = "0x64B3FF0", VA = "0x64B4FF0", Slot = "125")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x64B5010", Offset = "0x64B4010", VA = "0x64B5010", Slot = "126")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x64B5030", Offset = "0x64B4030", VA = "0x64B5030", Slot = "127")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x64B5050", Offset = "0x64B4050", VA = "0x64B5050", Slot = "128")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x64B5070", Offset = "0x64B4070", VA = "0x64B5070", Slot = "129")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x64B5080", Offset = "0x64B4080", VA = "0x64B5080", Slot = "130")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x64B5090", Offset = "0x64B4090", VA = "0x64B5090", Slot = "131")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x64B50B0", Offset = "0x64B40B0", VA = "0x64B50B0", Slot = "11")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000114")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000115")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x64B50D0", Offset = "0x64B40D0", VA = "0x64B50D0", Slot = "14")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000117")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000118")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x64B50F0", Offset = "0x64B40F0", VA = "0x64B50F0", Slot = "17")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x64B5110", Offset = "0x64B4110", VA = "0x64B5110", Slot = "18")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x600011B")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x600011C")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x64B5130", Offset = "0x64B4130", VA = "0x64B5130", Slot = "21")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x600011E")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x600011F")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x64B5150", Offset = "0x64B4150", VA = "0x64B5150", Slot = "24")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x64B5170", Offset = "0x64B4170", VA = "0x64B5170", Slot = "132")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x64B5190", Offset = "0x64B4190", VA = "0x64B5190", Slot = "133")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x64B51B0", Offset = "0x64B41B0", VA = "0x64B51B0", Slot = "25")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x64B51D0", Offset = "0x64B41D0", VA = "0x64B51D0", Slot = "26")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x64B51F0", Offset = "0x64B41F0", VA = "0x64B51F0", Slot = "27")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x64B5210", Offset = "0x64B4210", VA = "0x64B5210", Slot = "28")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x64B5230", Offset = "0x64B4230", VA = "0x64B5230", Slot = "29")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x64B5250", Offset = "0x64B4250", VA = "0x64B5250", Slot = "30")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x64B5270", Offset = "0x64B4270", VA = "0x64B5270", Slot = "31")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x64B5290", Offset = "0x64B4290", VA = "0x64B5290", Slot = "32")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x64B52B0", Offset = "0x64B42B0", VA = "0x64B52B0", Slot = "33")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x64B52D0", Offset = "0x64B42D0", VA = "0x64B52D0", Slot = "34")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x64B52F0", Offset = "0x64B42F0", VA = "0x64B52F0", Slot = "35")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x64B53B0", Offset = "0x64B43B0", VA = "0x64B53B0", Slot = "36")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x64B5470", Offset = "0x64B4470", VA = "0x64B5470", Slot = "37")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x64B5530", Offset = "0x64B4530", VA = "0x64B5530", Slot = "38")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x64B55F0", Offset = "0x64B45F0", VA = "0x64B55F0", Slot = "39")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x64B56C0", Offset = "0x64B46C0", VA = "0x64B56C0", Slot = "40")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x64B5790", Offset = "0x64B4790", VA = "0x64B5790", Slot = "41")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x64B57B0", Offset = "0x64B47B0", VA = "0x64B57B0", Slot = "42")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x64B57D0", Offset = "0x64B47D0", VA = "0x64B57D0", Slot = "43")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x64B57F0", Offset = "0x64B47F0", VA = "0x64B57F0", Slot = "44")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x64B5810", Offset = "0x64B4810", VA = "0x64B5810", Slot = "45")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x64B5830", Offset = "0x64B4830", VA = "0x64B5830", Slot = "46")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x64B5850", Offset = "0x64B4850", VA = "0x64B5850", Slot = "47")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x64B5870", Offset = "0x64B4870", VA = "0x64B5870", Slot = "48")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x64B5890", Offset = "0x64B4890", VA = "0x64B5890", Slot = "49")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x64B58B0", Offset = "0x64B48B0", VA = "0x64B58B0", Slot = "50")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x64B58D0", Offset = "0x64B48D0", VA = "0x64B58D0", Slot = "51")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x64B58F0", Offset = "0x64B48F0", VA = "0x64B58F0", Slot = "52")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x64B5910", Offset = "0x64B4910", VA = "0x64B5910", Slot = "53")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x64B5930", Offset = "0x64B4930", VA = "0x64B5930", Slot = "54")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x64B5950", Offset = "0x64B4950", VA = "0x64B5950", Slot = "55")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x64B5970", Offset = "0x64B4970", VA = "0x64B5970", Slot = "56")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x64B5990", Offset = "0x64B4990", VA = "0x64B5990", Slot = "57")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x64B59B0", Offset = "0x64B49B0", VA = "0x64B59B0", Slot = "58")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x64B59D0", Offset = "0x64B49D0", VA = "0x64B59D0", Slot = "59")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x64B59F0", Offset = "0x64B49F0", VA = "0x64B59F0", Slot = "60")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x64B5A10", Offset = "0x64B4A10", VA = "0x64B5A10", Slot = "61")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x64B5A30", Offset = "0x64B4A30", VA = "0x64B5A30", Slot = "62")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x64B5A50", Offset = "0x64B4A50", VA = "0x64B5A50", Slot = "63")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x64B5A70", Offset = "0x64B4A70", VA = "0x64B5A70", Slot = "64")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x64B5A90", Offset = "0x64B4A90", VA = "0x64B5A90", Slot = "65")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x64B5AB0", Offset = "0x64B4AB0", VA = "0x64B5AB0", Slot = "66")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x64B5AD0", Offset = "0x64B4AD0", VA = "0x64B5AD0", Slot = "67")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x64B5AF0", Offset = "0x64B4AF0", VA = "0x64B5AF0", Slot = "68")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x64B5B10", Offset = "0x64B4B10", VA = "0x64B5B10", Slot = "69")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x64B5B30", Offset = "0x64B4B30", VA = "0x64B5B30", Slot = "70")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x64B5B50", Offset = "0x64B4B50", VA = "0x64B5B50", Slot = "71")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x64B5B70", Offset = "0x64B4B70", VA = "0x64B5B70", Slot = "72")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x64B5C20", Offset = "0x64B4C20", VA = "0x64B5C20", Slot = "73")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x64B5CD0", Offset = "0x64B4CD0", VA = "0x64B5CD0", Slot = "74")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x64B5CF0", Offset = "0x64B4CF0", VA = "0x64B5CF0", Slot = "75")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x64B5D10", Offset = "0x64B4D10", VA = "0x64B5D10", Slot = "76")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x64B5D30", Offset = "0x64B4D30", VA = "0x64B5D30", Slot = "77")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x64B5D50", Offset = "0x64B4D50", VA = "0x64B5D50", Slot = "78")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x64B5D70", Offset = "0x64B4D70", VA = "0x64B5D70", Slot = "79")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x64B5D90", Offset = "0x64B4D90", VA = "0x64B5D90", Slot = "80")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x64B5DB0", Offset = "0x64B4DB0", VA = "0x64B5DB0", Slot = "81")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x64B5DD0", Offset = "0x64B4DD0", VA = "0x64B5DD0", Slot = "82")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x64B5DF0", Offset = "0x64B4DF0", VA = "0x64B5DF0", Slot = "83")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x64B5E10", Offset = "0x64B4E10", VA = "0x64B5E10", Slot = "84")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x64B5E30", Offset = "0x64B4E30", VA = "0x64B5E30", Slot = "85")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x64B5E50", Offset = "0x64B4E50", VA = "0x64B5E50", Slot = "86")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x64B5E70", Offset = "0x64B4E70", VA = "0x64B5E70", Slot = "87")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x64B5E90", Offset = "0x64B4E90", VA = "0x64B5E90", Slot = "88")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x64B5EB0", Offset = "0x64B4EB0", VA = "0x64B5EB0", Slot = "89")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x64B5ED0", Offset = "0x64B4ED0", VA = "0x64B5ED0", Slot = "90")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x64B5EF0", Offset = "0x64B4EF0", VA = "0x64B5EF0", Slot = "91")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, Camera camera)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x64B5F10", Offset = "0x64B4F10", VA = "0x64B5F10", Slot = "92")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x64B5F30", Offset = "0x64B4F30", VA = "0x64B5F30", Slot = "93")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x64B5F50", Offset = "0x64B4F50", VA = "0x64B5F50", Slot = "94")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x64B5F70", Offset = "0x64B4F70", VA = "0x64B5F70", Slot = "95")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x64B5F90", Offset = "0x64B4F90", VA = "0x64B5F90", Slot = "134")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x64B5FB0", Offset = "0x64B4FB0", VA = "0x64B5FB0", Slot = "135")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x64B5FD0", Offset = "0x64B4FD0", VA = "0x64B5FD0", Slot = "136")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x64B5FF0", Offset = "0x64B4FF0", VA = "0x64B5FF0", Slot = "137")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x64B6010", Offset = "0x64B5010", VA = "0x64B6010", Slot = "138")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x64B6030", Offset = "0x64B5030", VA = "0x64B6030", Slot = "139")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x64B6050", Offset = "0x64B5050", VA = "0x64B6050", Slot = "140")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x64B6070", Offset = "0x64B5070", VA = "0x64B6070", Slot = "141")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x64B6090", Offset = "0x64B5090", VA = "0x64B6090", Slot = "142")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x64B60B0", Offset = "0x64B50B0", VA = "0x64B60B0", Slot = "143")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x64B60D0", Offset = "0x64B50D0", VA = "0x64B60D0", Slot = "144")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x64B60F0", Offset = "0x64B50F0", VA = "0x64B60F0", Slot = "145")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x64B6110", Offset = "0x64B5110", VA = "0x64B6110", Slot = "146")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x64B6130", Offset = "0x64B5130", VA = "0x64B6130", Slot = "147")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x64B6150", Offset = "0x64B5150", VA = "0x64B6150", Slot = "148")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x64B6170", Offset = "0x64B5170", VA = "0x64B6170", Slot = "149")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x64B6220", Offset = "0x64B5220", VA = "0x64B6220", Slot = "150")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x64B62C0", Offset = "0x64B52C0", VA = "0x64B62C0", Slot = "151")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x64B6370", Offset = "0x64B5370", VA = "0x64B6370", Slot = "152")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x64B6420", Offset = "0x64B5420", VA = "0x64B6420", Slot = "153")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x64B6440", Offset = "0x64B5440", VA = "0x64B6440", Slot = "154")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x64B6460", Offset = "0x64B5460", VA = "0x64B6460", Slot = "155")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x64B6480", Offset = "0x64B5480", VA = "0x64B6480", Slot = "156")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x64B64A0", Offset = "0x64B54A0", VA = "0x64B64A0", Slot = "157")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x64B64C0", Offset = "0x64B54C0", VA = "0x64B64C0", Slot = "158")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x64B64E0", Offset = "0x64B54E0", VA = "0x64B64E0", Slot = "159")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x64B6500", Offset = "0x64B5500", VA = "0x64B6500", Slot = "160")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x64B6520", Offset = "0x64B5520", VA = "0x64B6520", Slot = "161")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x64B6540", Offset = "0x64B5540", VA = "0x64B6540", Slot = "162")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x64B6560", Offset = "0x64B5560", VA = "0x64B6560", Slot = "163")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x64B6580", Offset = "0x64B5580", VA = "0x64B6580", Slot = "164")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x64B65A0", Offset = "0x64B55A0", VA = "0x64B65A0", Slot = "165")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x64B65C0", Offset = "0x64B55C0", VA = "0x64B65C0", Slot = "166")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x64B65E0", Offset = "0x64B55E0", VA = "0x64B65E0", Slot = "107")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x64B6600", Offset = "0x64B5600", VA = "0x64B6600", Slot = "108")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x64B6620", Offset = "0x64B5620", VA = "0x64B6620", Slot = "109")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x64B6640", Offset = "0x64B5640", VA = "0x64B6640", Slot = "111")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x64B6660", Offset = "0x64B5660", VA = "0x64B6660", Slot = "112")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x64B6680", Offset = "0x64B5680", VA = "0x64B6680", Slot = "113")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x64B66A0", Offset = "0x64B56A0", VA = "0x64B66A0", Slot = "114")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x64B66C0", Offset = "0x64B56C0", VA = "0x64B66C0", Slot = "115")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x64B66E0", Offset = "0x64B56E0", VA = "0x64B66E0", Slot = "116")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
