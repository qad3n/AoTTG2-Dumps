// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ComputeCommandBuffer
// Update status: NEW in this game update
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
	[Address(RVA = "0x2ABA5B0", Offset = "0x2AB8BB0", VA = "0x182ABA5B0")]
	internal ComputeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2ABD1D0", Offset = "0x2ABB7D0", VA = "0x182ABD1D0", Slot = "96")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2ABC130", Offset = "0x2ABA730", VA = "0x182ABC130", Slot = "4")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2ABC1C0", Offset = "0x2ABA7C0", VA = "0x182ABC1C0", Slot = "5")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2ABC990", Offset = "0x2ABAF90", VA = "0x182ABC990", Slot = "6")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2ABC8F0", Offset = "0x2ABAEF0", VA = "0x182ABC8F0", Slot = "7")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2ABC340", Offset = "0x2ABA940", VA = "0x182ABC340", Slot = "8")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x2ABC280", Offset = "0x2ABA880", VA = "0x182ABC280", Slot = "9")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2ABD7D0", Offset = "0x2ABBDD0", VA = "0x182ABD7D0", Slot = "10")]
	public void SetRayTracingShaderPass(RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2ABDB40", Offset = "0x2ABC140", VA = "0x182ABDB40", Slot = "97")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2ABBC00", Offset = "0x2ABA200", VA = "0x182ABBC00", Slot = "98")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2ABBA70", Offset = "0x2ABA070", VA = "0x182ABBA70", Slot = "99")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2ABCC10", Offset = "0x2ABB210", VA = "0x182ABCC10", Slot = "100")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2ABCC50", Offset = "0x2ABB250", VA = "0x182ABCC50", Slot = "101")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2ABCCB0", Offset = "0x2ABB2B0", VA = "0x182ABCCB0", Slot = "102")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2ABD170", Offset = "0x2ABB770", VA = "0x182ABD170", Slot = "103")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2ABCA50", Offset = "0x2ABB050", VA = "0x182ABCA50", Slot = "104")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2ABCD50", Offset = "0x2ABB350", VA = "0x182ABCD50", Slot = "105")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2ABBC30", Offset = "0x2ABA230", VA = "0x182ABBC30", Slot = "106")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2ABBA90", Offset = "0x2ABA090", VA = "0x182ABBA90", Slot = "110")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2ABDAC0", Offset = "0x2ABC0C0", VA = "0x182ABDAC0", Slot = "117")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2ABCB70", Offset = "0x2ABB170", VA = "0x182ABCB70", Slot = "118")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2ABCBD0", Offset = "0x2ABB1D0", VA = "0x182ABCBD0", Slot = "119")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2ABD130", Offset = "0x2ABB730", VA = "0x182ABD130", Slot = "120")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2ABCD10", Offset = "0x2ABB310", VA = "0x182ABCD10", Slot = "121")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2ABD270", Offset = "0x2ABB870", VA = "0x182ABD270", Slot = "122")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2ABBE20", Offset = "0x2ABA420", VA = "0x182ABBE20", Slot = "123")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2ABDB90", Offset = "0x2ABC190", VA = "0x182ABDB90", Slot = "124")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2ABB880", Offset = "0x2AB9E80", VA = "0x182ABB880", Slot = "125")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2ABBC50", Offset = "0x2ABA250", VA = "0x182ABBC50", Slot = "126")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2ABB8A0", Offset = "0x2AB9EA0", VA = "0x182ABB8A0", Slot = "127")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2ABBC70", Offset = "0x2ABA270", VA = "0x182ABBC70", Slot = "128")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "129")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "130")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2ABBC90", Offset = "0x2ABA290", VA = "0x182ABBC90", Slot = "131")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2ABBF00", Offset = "0x2ABA500", VA = "0x182ABBF00", Slot = "11")]
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
	[Address(RVA = "0x2ABBEB0", Offset = "0x2ABA4B0", VA = "0x182ABBEB0", Slot = "14")]
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
	[Address(RVA = "0x2ABBE60", Offset = "0x2ABA460", VA = "0x182ABBE60", Slot = "17")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2ABBEE0", Offset = "0x2ABA4E0", VA = "0x182ABBEE0", Slot = "18")]
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
	[Address(RVA = "0x2ABBE80", Offset = "0x2ABA480", VA = "0x182ABBE80", Slot = "21")]
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
	[Address(RVA = "0x2ABBE40", Offset = "0x2ABA440", VA = "0x182ABBE40", Slot = "24")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x2ABDB70", Offset = "0x2ABC170", VA = "0x182ABDB70", Slot = "132")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x2ABBCE0", Offset = "0x2ABA2E0", VA = "0x182ABBCE0", Slot = "133")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2ABC100", Offset = "0x2ABA700", VA = "0x182ABC100", Slot = "25")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2ABC1F0", Offset = "0x2ABA7F0", VA = "0x182ABC1F0", Slot = "26")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2ABC950", Offset = "0x2ABAF50", VA = "0x182ABC950", Slot = "27")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x2ABC920", Offset = "0x2ABAF20", VA = "0x182ABC920", Slot = "28")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2ABC2E0", Offset = "0x2ABA8E0", VA = "0x182ABC2E0", Slot = "29")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2ABC2B0", Offset = "0x2ABA8B0", VA = "0x182ABC2B0", Slot = "30")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x2ABC190", Offset = "0x2ABA790", VA = "0x182ABC190", Slot = "31")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x2ABC160", Offset = "0x2ABA760", VA = "0x182ABC160", Slot = "32")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x2ABC220", Offset = "0x2ABA820", VA = "0x182ABC220", Slot = "33")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x2ABC250", Offset = "0x2ABA850", VA = "0x182ABC250", Slot = "34")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x2ABC660", Offset = "0x2ABAC60", VA = "0x182ABC660", Slot = "35")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2ABC590", Offset = "0x2ABAB90", VA = "0x182ABC590", Slot = "36")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2ABC3D0", Offset = "0x2ABA9D0", VA = "0x182ABC3D0", Slot = "37")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2ABC810", Offset = "0x2ABAE10", VA = "0x182ABC810", Slot = "38")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2ABC730", Offset = "0x2ABAD30", VA = "0x182ABC730", Slot = "39")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2ABC4B0", Offset = "0x2ABAAB0", VA = "0x182ABC4B0", Slot = "40")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2ABBFE0", Offset = "0x2ABA5E0", VA = "0x182ABBFE0", Slot = "41")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2ABBF50", Offset = "0x2ABA550", VA = "0x182ABBF50", Slot = "42")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2ABBFB0", Offset = "0x2ABA5B0", VA = "0x182ABBFB0", Slot = "43")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x2ABC010", Offset = "0x2ABA610", VA = "0x182ABC010", Slot = "44")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x2ABBF20", Offset = "0x2ABA520", VA = "0x182ABBF20", Slot = "45")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2ABBF80", Offset = "0x2ABA580", VA = "0x182ABBF80", Slot = "46")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x2ABC040", Offset = "0x2ABA640", VA = "0x182ABC040", Slot = "47")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2ABC0D0", Offset = "0x2ABA6D0", VA = "0x182ABC0D0", Slot = "48")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x2ABC070", Offset = "0x2ABA670", VA = "0x182ABC070", Slot = "49")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2ABC0A0", Offset = "0x2ABA6A0", VA = "0x182ABC0A0", Slot = "50")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2ABC3A0", Offset = "0x2ABA9A0", VA = "0x182ABC3A0", Slot = "51")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x2ABBB10", Offset = "0x2ABA110", VA = "0x182ABBB10", Slot = "52")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x2ABBAB0", Offset = "0x2ABA0B0", VA = "0x182ABBAB0", Slot = "53")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x2ABBAE0", Offset = "0x2ABA0E0", VA = "0x182ABBAE0", Slot = "54")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x2ABB8F0", Offset = "0x2AB9EF0", VA = "0x182ABB8F0", Slot = "55")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x2ABB910", Offset = "0x2AB9F10", VA = "0x182ABB910", Slot = "56")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x2ABB8C0", Offset = "0x2AB9EC0", VA = "0x182ABB8C0", Slot = "57")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x2ABD320", Offset = "0x2ABB920", VA = "0x182ABD320", Slot = "58")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x2ABD2C0", Offset = "0x2ABB8C0", VA = "0x182ABD2C0", Slot = "59")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x2ABD2F0", Offset = "0x2ABB8F0", VA = "0x182ABD2F0", Slot = "60")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x2ABD290", Offset = "0x2ABB890", VA = "0x182ABD290", Slot = "61")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2ABD410", Offset = "0x2ABBA10", VA = "0x182ABD410", Slot = "62")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x2ABD440", Offset = "0x2ABBA40", VA = "0x182ABD440", Slot = "63")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x2ABD380", Offset = "0x2ABB980", VA = "0x182ABD380", Slot = "64")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x2ABD3E0", Offset = "0x2ABB9E0", VA = "0x182ABD3E0", Slot = "65")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2ABD350", Offset = "0x2ABB950", VA = "0x182ABD350", Slot = "66")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2ABD3B0", Offset = "0x2ABB9B0", VA = "0x182ABD3B0", Slot = "67")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2ABD500", Offset = "0x2ABBB00", VA = "0x182ABD500", Slot = "68")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2ABD4A0", Offset = "0x2ABBAA0", VA = "0x182ABD4A0", Slot = "69")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2ABD4D0", Offset = "0x2ABBAD0", VA = "0x182ABD4D0", Slot = "70")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2ABD470", Offset = "0x2ABBA70", VA = "0x182ABD470", Slot = "71")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x2ABD7F0", Offset = "0x2ABBDF0", VA = "0x182ABD7F0", Slot = "72")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x2ABD8B0", Offset = "0x2ABBEB0", VA = "0x182ABD8B0", Slot = "73")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2ABD530", Offset = "0x2ABBB30", VA = "0x182ABD530", Slot = "74")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2ABD560", Offset = "0x2ABBB60", VA = "0x182ABD560", Slot = "75")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2ABD590", Offset = "0x2ABBB90", VA = "0x182ABD590", Slot = "76")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2ABD5C0", Offset = "0x2ABBBC0", VA = "0x182ABD5C0", Slot = "77")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2ABD5F0", Offset = "0x2ABBBF0", VA = "0x182ABD5F0", Slot = "78")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2ABD620", Offset = "0x2ABBC20", VA = "0x182ABD620", Slot = "79")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2ABD680", Offset = "0x2ABBC80", VA = "0x182ABD680", Slot = "80")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2ABD650", Offset = "0x2ABBC50", VA = "0x182ABD650", Slot = "81")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2ABDA10", Offset = "0x2ABC010", VA = "0x182ABDA10", Slot = "82")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2ABD9D0", Offset = "0x2ABBFD0", VA = "0x182ABD9D0", Slot = "83")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x2ABD970", Offset = "0x2ABBF70", VA = "0x182ABD970", Slot = "84")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2ABD9A0", Offset = "0x2ABBFA0", VA = "0x182ABD9A0", Slot = "85")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x2ABD770", Offset = "0x2ABBD70", VA = "0x182ABD770", Slot = "86")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x2ABD710", Offset = "0x2ABBD10", VA = "0x182ABD710", Slot = "87")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x2ABD6B0", Offset = "0x2ABBCB0", VA = "0x182ABD6B0", Slot = "88")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2ABD6E0", Offset = "0x2ABBCE0", VA = "0x182ABD6E0", Slot = "89")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2ABBB40", Offset = "0x2ABA140", VA = "0x182ABBB40", Slot = "90")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x2ABBB70", Offset = "0x2ABA170", VA = "0x182ABBB70", Slot = "91")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, Camera camera)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2ABB980", Offset = "0x2AB9F80", VA = "0x182ABB980", Slot = "92")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2ABB9B0", Offset = "0x2AB9FB0", VA = "0x182ABB9B0", Slot = "93")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x2ABB9E0", Offset = "0x2AB9FE0", VA = "0x182ABB9E0", Slot = "94")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2ABB950", Offset = "0x2AB9F50", VA = "0x182ABB950", Slot = "95")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x2ABCC30", Offset = "0x2ABB230", VA = "0x182ABCC30", Slot = "134")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x2ABCC70", Offset = "0x2ABB270", VA = "0x182ABCC70", Slot = "135")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2ABCC90", Offset = "0x2ABB290", VA = "0x182ABCC90", Slot = "136")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2ABD1A0", Offset = "0x2ABB7A0", VA = "0x182ABD1A0", Slot = "137")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2ABCA80", Offset = "0x2ABB080", VA = "0x182ABCA80", Slot = "138")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2ABCDA0", Offset = "0x2ABB3A0", VA = "0x182ABCDA0", Slot = "139")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2ABCBF0", Offset = "0x2ABB1F0", VA = "0x182ABCBF0", Slot = "140")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2ABCBB0", Offset = "0x2ABB1B0", VA = "0x182ABCBB0", Slot = "141")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2ABCB90", Offset = "0x2ABB190", VA = "0x182ABCB90", Slot = "142")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x2ABD0F0", Offset = "0x2ABB6F0", VA = "0x182ABD0F0", Slot = "143")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x2ABD150", Offset = "0x2ABB750", VA = "0x182ABD150", Slot = "144")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x2ABD110", Offset = "0x2ABB710", VA = "0x182ABD110", Slot = "145")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x2ABCCD0", Offset = "0x2ABB2D0", VA = "0x182ABCCD0", Slot = "146")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x2ABCD30", Offset = "0x2ABB330", VA = "0x182ABCD30", Slot = "147")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x2ABCCF0", Offset = "0x2ABB2F0", VA = "0x182ABCCF0", Slot = "148")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2ABCEB0", Offset = "0x2ABB4B0", VA = "0x182ABCEB0", Slot = "149")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x2ABD030", Offset = "0x2ABB630", VA = "0x182ABD030", Slot = "150")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2ABCDF0", Offset = "0x2ABB3F0", VA = "0x182ABCDF0", Slot = "151")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x2ABCF70", Offset = "0x2ABB570", VA = "0x182ABCF70", Slot = "152")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x2ABC9F0", Offset = "0x2ABAFF0", VA = "0x182ABC9F0", Slot = "153")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x2ABC9D0", Offset = "0x2ABAFD0", VA = "0x182ABC9D0", Slot = "154")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x2ABCA30", Offset = "0x2ABB030", VA = "0x182ABCA30", Slot = "155")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x2ABCA10", Offset = "0x2ABB010", VA = "0x182ABCA10", Slot = "156")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2ABCB40", Offset = "0x2ABB140", VA = "0x182ABCB40", Slot = "157")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2ABCAE0", Offset = "0x2ABB0E0", VA = "0x182ABCAE0", Slot = "158")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2ABCAB0", Offset = "0x2ABB0B0", VA = "0x182ABCAB0", Slot = "159")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2ABCB10", Offset = "0x2ABB110", VA = "0x182ABCB10", Slot = "160")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2ABDA50", Offset = "0x2ABC050", VA = "0x182ABDA50", Slot = "161")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2ABDAA0", Offset = "0x2ABC0A0", VA = "0x182ABDAA0", Slot = "162")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2ABBE00", Offset = "0x2ABA400", VA = "0x182ABBE00", Slot = "163")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2ABBDD0", Offset = "0x2ABA3D0", VA = "0x182ABBDD0", Slot = "164")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2ABBD00", Offset = "0x2ABA300", VA = "0x182ABBD00", Slot = "165")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2ABBDA0", Offset = "0x2ABA3A0", VA = "0x182ABBDA0", Slot = "166")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0", Slot = "107")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0", Slot = "108")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0", Slot = "109")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10", Slot = "111")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50", Slot = "112")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30", Slot = "113")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0", Slot = "114")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240", Slot = "115")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210", Slot = "116")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
