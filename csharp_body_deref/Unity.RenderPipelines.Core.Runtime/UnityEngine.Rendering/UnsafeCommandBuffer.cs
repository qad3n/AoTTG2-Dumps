// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnsafeCommandBuffer
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
using UnityEngine.Experimental.Rendering;
using UnityEngine.Profiling;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000025")]
public class UnsafeCommandBuffer : BaseCommandBuffer, IUnsafeCommandBuffer, IBaseCommandBuffer, IRasterCommandBuffer, IComputeCommandBuffer
{
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2ABA5B0", Offset = "0x2AB8BB0", VA = "0x182ABA5B0")]
	internal UnsafeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2AC5D90", Offset = "0x2AC4390", VA = "0x182AC5D90", Slot = "4")]
	public void RequestAsyncReadback(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2AC5C90", Offset = "0x2AC4290", VA = "0x182AC5C90", Slot = "5")]
	public void RequestAsyncReadback(GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2AC5CE0", Offset = "0x2AC42E0", VA = "0x182AC5CE0", Slot = "6")]
	public void RequestAsyncReadback(ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2AC5C30", Offset = "0x2AC4230", VA = "0x182AC5C30", Slot = "7")]
	public void RequestAsyncReadback(GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2AC5D10", Offset = "0x2AC4310", VA = "0x182AC5D10", Slot = "8")]
	public void RequestAsyncReadback(Texture src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x2AC5C60", Offset = "0x2AC4260", VA = "0x182AC5C60", Slot = "9")]
	public void RequestAsyncReadback(Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x2AC5D30", Offset = "0x2AC4330", VA = "0x182AC5D30", Slot = "10")]
	public void RequestAsyncReadback(Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x2AC5BD0", Offset = "0x2AC41D0", VA = "0x182AC5BD0", Slot = "11")]
	public void RequestAsyncReadback(Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2AC5C00", Offset = "0x2AC4200", VA = "0x182AC5C00", Slot = "12")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2AC5CB0", Offset = "0x2AC42B0", VA = "0x182AC5CB0", Slot = "13")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x2AC5D60", Offset = "0x2AC4360", VA = "0x182AC5D60", Slot = "14")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000334")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6000335")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6000336")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6000337")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6000338")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x6000339")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033A")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033B")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033C")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033D")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033E")]
	public void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x2ABD1D0", Offset = "0x2ABB7D0", VA = "0x182ABD1D0", Slot = "66")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x2ABC130", Offset = "0x2ABA730", VA = "0x182ABC130", Slot = "186")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x2ABC1C0", Offset = "0x2ABA7C0", VA = "0x182ABC1C0", Slot = "187")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x2ABC990", Offset = "0x2ABAF90", VA = "0x182ABC990", Slot = "188")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x2ABC8F0", Offset = "0x2ABAEF0", VA = "0x182ABC8F0", Slot = "189")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x2ABC340", Offset = "0x2ABA940", VA = "0x182ABC340", Slot = "190")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x2ABC280", Offset = "0x2ABA880", VA = "0x182ABC280", Slot = "191")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x2ABD7D0", Offset = "0x2ABBDD0", VA = "0x182ABD7D0", Slot = "192")]
	public void SetRayTracingShaderPass(RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x2AC58D0", Offset = "0x2AC3ED0", VA = "0x182AC58D0", Slot = "26")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x2AC58B0", Offset = "0x2AC3EB0", VA = "0x182AC58B0", Slot = "27")]
	public void ClearRandomWriteTargets()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x2ABDB40", Offset = "0x2ABC140", VA = "0x182ABDB40", Slot = "67")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2ABBC00", Offset = "0x2ABA200", VA = "0x182ABBC00", Slot = "68")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2ABBA70", Offset = "0x2ABA070", VA = "0x182ABBA70", Slot = "69")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2AC3D30", Offset = "0x2AC2330", VA = "0x182AC3D30", Slot = "137")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2AC3D70", Offset = "0x2AC2370", VA = "0x182AC3D70", Slot = "138")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2AC3CE0", Offset = "0x2AC22E0", VA = "0x182AC3CE0", Slot = "139")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2AC3DB0", Offset = "0x2AC23B0", VA = "0x182AC3DB0", Slot = "140")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2AC3DF0", Offset = "0x2AC23F0", VA = "0x182AC3DF0", Slot = "141")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2ABCC10", Offset = "0x2ABB210", VA = "0x182ABCC10", Slot = "70")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2ABCC50", Offset = "0x2ABB250", VA = "0x182ABCC50", Slot = "71")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2ABCCB0", Offset = "0x2ABB2B0", VA = "0x182ABCCB0", Slot = "72")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2ABD170", Offset = "0x2ABB770", VA = "0x182ABD170", Slot = "73")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2ABCA50", Offset = "0x2ABB050", VA = "0x182ABCA50", Slot = "74")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x2ABCD50", Offset = "0x2ABB350", VA = "0x182ABCD50", Slot = "75")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x2ABBC30", Offset = "0x2ABA230", VA = "0x182ABBC30", Slot = "76")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x2ABBA90", Offset = "0x2ABA090", VA = "0x182ABBA90", Slot = "80")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x2ABDAC0", Offset = "0x2ABC0C0", VA = "0x182ABDAC0", Slot = "87")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x2ABCB70", Offset = "0x2ABB170", VA = "0x182ABCB70", Slot = "88")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x2ABCBD0", Offset = "0x2ABB1D0", VA = "0x182ABCBD0", Slot = "89")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x2ABD130", Offset = "0x2ABB730", VA = "0x182ABD130", Slot = "90")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x2ABCD10", Offset = "0x2ABB310", VA = "0x182ABCD10", Slot = "91")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x2ABD270", Offset = "0x2ABB870", VA = "0x182ABD270", Slot = "92")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2ABBE20", Offset = "0x2ABA420", VA = "0x182ABBE20", Slot = "93")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x2ABDB90", Offset = "0x2ABC190", VA = "0x182ABDB90", Slot = "94")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2ABB880", Offset = "0x2AB9E80", VA = "0x182ABB880", Slot = "95")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x2ABBC50", Offset = "0x2ABA250", VA = "0x182ABBC50", Slot = "96")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x2ABB8A0", Offset = "0x2AB9EA0", VA = "0x182ABB8A0", Slot = "97")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x2ABBC70", Offset = "0x2ABA270", VA = "0x182ABBC70", Slot = "98")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "99")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "100")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x2ABBC90", Offset = "0x2ABA290", VA = "0x182ABBC90", Slot = "101")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x2AC4F80", Offset = "0x2AC3580", VA = "0x182AC4F80", Slot = "142")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x2AC4C60", Offset = "0x2AC3260", VA = "0x182AC4C60", Slot = "143")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x2AC4FE0", Offset = "0x2AC35E0", VA = "0x182AC4FE0", Slot = "144")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x2AC3E20", Offset = "0x2AC2420", VA = "0x182AC3E20", Slot = "145")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x2AC71F0", Offset = "0x2AC57F0", VA = "0x182AC71F0", Slot = "28")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x2AC7240", Offset = "0x2AC5840", VA = "0x182AC7240", Slot = "29")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x2AC6FE0", Offset = "0x2AC55E0", VA = "0x182AC6FE0", Slot = "30")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x2AC6CE0", Offset = "0x2AC52E0", VA = "0x182AC6CE0", Slot = "31")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x2AC7040", Offset = "0x2AC5640", VA = "0x182AC7040", Slot = "32")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x2AC6C80", Offset = "0x2AC5280", VA = "0x182AC6C80", Slot = "33")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x2AC70F0", Offset = "0x2AC56F0", VA = "0x182AC70F0", Slot = "34")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x2AC6EA0", Offset = "0x2AC54A0", VA = "0x182AC6EA0", Slot = "35")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x2AC6F60", Offset = "0x2AC5560", VA = "0x182AC6F60", Slot = "36")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x2AC7160", Offset = "0x2AC5760", VA = "0x182AC7160", Slot = "37")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x2AC6D90", Offset = "0x2AC5390", VA = "0x182AC6D90", Slot = "38")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x2AC6F10", Offset = "0x2AC5510", VA = "0x182AC6F10", Slot = "39")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x2AC6D30", Offset = "0x2AC5330", VA = "0x182AC6D30", Slot = "40")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x2AC6E30", Offset = "0x2AC5430", VA = "0x182AC6E30", Slot = "41")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x2AC7090", Offset = "0x2AC5690", VA = "0x182AC7090", Slot = "42")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x2ABBF00", Offset = "0x2ABA500", VA = "0x182ABBF00", Slot = "193")]
	public void SetBufferData(ComputeBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x6000385")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000386")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x2ABBEB0", Offset = "0x2ABA4B0", VA = "0x182ABBEB0", Slot = "196")]
	public void SetBufferData(ComputeBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x6000388")]
	public void SetBufferData<T>(ComputeBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000389")]
	public void SetBufferData<T>(ComputeBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x2ABBE60", Offset = "0x2ABA460", VA = "0x182ABBE60", Slot = "199")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x2ABBEE0", Offset = "0x2ABA4E0", VA = "0x182ABBEE0", Slot = "200")]
	public void SetBufferData(GraphicsBuffer buffer, Array data)
	{
	}

	[Token(Token = "0x600038C")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data) where T : struct
	{
	}

	[Token(Token = "0x600038D")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data) where T : struct
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x2ABBE80", Offset = "0x2ABA480", VA = "0x182ABBE80", Slot = "203")]
	public void SetBufferData(GraphicsBuffer buffer, Array data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count)
	{
	}

	[Token(Token = "0x600038F")]
	public void SetBufferData<T>(GraphicsBuffer buffer, List<T> data, int managedBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000390")]
	public void SetBufferData<T>(GraphicsBuffer buffer, NativeArray<T> data, int nativeBufferStartIndex, int graphicsBufferStartIndex, int count) where T : struct
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x2ABBE40", Offset = "0x2ABA440", VA = "0x182ABBE40", Slot = "206")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x2ABDB70", Offset = "0x2ABC170", VA = "0x182ABDB70", Slot = "102")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x2ABBCE0", Offset = "0x2ABA2E0", VA = "0x182ABBCE0", Slot = "103")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x2AC4FC0", Offset = "0x2AC35C0", VA = "0x182AC4FC0", Slot = "146")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x2AC4FA0", Offset = "0x2AC35A0", VA = "0x182AC4FA0", Slot = "147")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2ABC100", Offset = "0x2ABA700", VA = "0x182ABC100", Slot = "207")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2ABC1F0", Offset = "0x2ABA7F0", VA = "0x182ABC1F0", Slot = "208")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2ABC950", Offset = "0x2ABAF50", VA = "0x182ABC950", Slot = "209")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2ABC920", Offset = "0x2ABAF20", VA = "0x182ABC920", Slot = "210")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2ABC2E0", Offset = "0x2ABA8E0", VA = "0x182ABC2E0", Slot = "211")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x2ABC2B0", Offset = "0x2ABA8B0", VA = "0x182ABC2B0", Slot = "212")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2ABC190", Offset = "0x2ABA790", VA = "0x182ABC190", Slot = "213")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x2ABC160", Offset = "0x2ABA760", VA = "0x182ABC160", Slot = "214")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x2ABC220", Offset = "0x2ABA820", VA = "0x182ABC220", Slot = "215")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2ABC250", Offset = "0x2ABA850", VA = "0x182ABC250", Slot = "216")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2AC6110", Offset = "0x2AC4710", VA = "0x182AC6110", Slot = "43")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x2AC6040", Offset = "0x2AC4640", VA = "0x182AC6040", Slot = "217")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x2AC5FE0", Offset = "0x2AC45E0", VA = "0x182AC5FE0", Slot = "44")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x2AC6460", Offset = "0x2AC4A60", VA = "0x182AC6460", Slot = "218")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x2AC6240", Offset = "0x2AC4840", VA = "0x182AC6240", Slot = "45")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x2AC5E90", Offset = "0x2AC4490", VA = "0x182AC5E90", Slot = "219")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x2AC61E0", Offset = "0x2AC47E0", VA = "0x182AC61E0", Slot = "46")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x2AC62A0", Offset = "0x2AC48A0", VA = "0x182AC62A0", Slot = "220")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x2AC5F70", Offset = "0x2AC4570", VA = "0x182AC5F70", Slot = "47")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x2AC6380", Offset = "0x2AC4980", VA = "0x182AC6380", Slot = "221")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2AC6170", Offset = "0x2AC4770", VA = "0x182AC6170", Slot = "48")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x2AC5DB0", Offset = "0x2AC43B0", VA = "0x182AC5DB0", Slot = "222")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x2ABBFE0", Offset = "0x2ABA5E0", VA = "0x182ABBFE0", Slot = "223")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x2ABBF50", Offset = "0x2ABA550", VA = "0x182ABBF50", Slot = "224")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x2ABBFB0", Offset = "0x2ABA5B0", VA = "0x182ABBFB0", Slot = "225")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2ABC010", Offset = "0x2ABA610", VA = "0x182ABC010", Slot = "226")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x2ABBF20", Offset = "0x2ABA520", VA = "0x182ABBF20", Slot = "227")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x2ABBF80", Offset = "0x2ABA580", VA = "0x182ABBF80", Slot = "228")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x2ABC040", Offset = "0x2ABA640", VA = "0x182ABC040", Slot = "229")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x2ABC0D0", Offset = "0x2ABA6D0", VA = "0x182ABC0D0", Slot = "230")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x2ABC070", Offset = "0x2ABA670", VA = "0x182ABC070", Slot = "231")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x2ABC0A0", Offset = "0x2ABA6A0", VA = "0x182ABC0A0", Slot = "232")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x2ABC3A0", Offset = "0x2ABA9A0", VA = "0x182ABC3A0", Slot = "233")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x2ABBB10", Offset = "0x2ABA110", VA = "0x182ABBB10", Slot = "234")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x2ABBAB0", Offset = "0x2ABA0B0", VA = "0x182ABBAB0", Slot = "235")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x2ABBAE0", Offset = "0x2ABA0E0", VA = "0x182ABBAE0", Slot = "236")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x2ABB8F0", Offset = "0x2AB9EF0", VA = "0x182ABB8F0", Slot = "237")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x2ABB910", Offset = "0x2AB9F10", VA = "0x182ABB910", Slot = "238")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x2ABB8C0", Offset = "0x2AB9EC0", VA = "0x182ABB8C0", Slot = "239")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x2ABD320", Offset = "0x2ABB920", VA = "0x182ABD320", Slot = "240")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x2ABD2C0", Offset = "0x2ABB8C0", VA = "0x182ABD2C0", Slot = "241")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2ABD2F0", Offset = "0x2ABB8F0", VA = "0x182ABD2F0", Slot = "242")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x2ABD290", Offset = "0x2ABB890", VA = "0x182ABD290", Slot = "243")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x2ABD410", Offset = "0x2ABBA10", VA = "0x182ABD410", Slot = "244")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2ABD440", Offset = "0x2ABBA40", VA = "0x182ABD440", Slot = "245")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x2ABD380", Offset = "0x2ABB980", VA = "0x182ABD380", Slot = "246")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x2ABD3E0", Offset = "0x2ABB9E0", VA = "0x182ABD3E0", Slot = "247")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x2ABD350", Offset = "0x2ABB950", VA = "0x182ABD350", Slot = "248")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x2ABD3B0", Offset = "0x2ABB9B0", VA = "0x182ABD3B0", Slot = "249")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2ABD500", Offset = "0x2ABBB00", VA = "0x182ABD500", Slot = "250")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2ABD4A0", Offset = "0x2ABBAA0", VA = "0x182ABD4A0", Slot = "251")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x2ABD4D0", Offset = "0x2ABBAD0", VA = "0x182ABD4D0", Slot = "252")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x2ABD470", Offset = "0x2ABBA70", VA = "0x182ABD470", Slot = "253")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x2AC6BE0", Offset = "0x2AC51E0", VA = "0x182AC6BE0", Slot = "49")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x2AC6B20", Offset = "0x2AC5120", VA = "0x182AC6B20", Slot = "254")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x2AC6C30", Offset = "0x2AC5230", VA = "0x182AC6C30", Slot = "50")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x2AC6A60", Offset = "0x2AC5060", VA = "0x182AC6A60", Slot = "255")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x2ABD530", Offset = "0x2ABBB30", VA = "0x182ABD530", Slot = "256")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x2ABD560", Offset = "0x2ABBB60", VA = "0x182ABD560", Slot = "257")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x2ABD590", Offset = "0x2ABBB90", VA = "0x182ABD590", Slot = "258")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x2ABD5C0", Offset = "0x2ABBBC0", VA = "0x182ABD5C0", Slot = "259")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x2ABD5F0", Offset = "0x2ABBBF0", VA = "0x182ABD5F0", Slot = "260")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x2ABD620", Offset = "0x2ABBC20", VA = "0x182ABD620", Slot = "261")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x2ABD680", Offset = "0x2ABBC80", VA = "0x182ABD680", Slot = "262")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x2ABD650", Offset = "0x2ABBC50", VA = "0x182ABD650", Slot = "263")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x2ABDA10", Offset = "0x2ABC010", VA = "0x182ABDA10", Slot = "264")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x2ABD9D0", Offset = "0x2ABBFD0", VA = "0x182ABD9D0", Slot = "265")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x2ABD970", Offset = "0x2ABBF70", VA = "0x182ABD970", Slot = "266")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x2ABD9A0", Offset = "0x2ABBFA0", VA = "0x182ABD9A0", Slot = "267")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x2ABD770", Offset = "0x2ABBD70", VA = "0x182ABD770", Slot = "268")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x2ABD710", Offset = "0x2ABBD10", VA = "0x182ABD710", Slot = "269")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x2ABD6B0", Offset = "0x2ABBCB0", VA = "0x182ABD6B0", Slot = "270")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x2ABD6E0", Offset = "0x2ABBCE0", VA = "0x182ABD6E0", Slot = "271")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x2ABBB40", Offset = "0x2ABA140", VA = "0x182ABBB40", Slot = "272")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x2ABBB70", Offset = "0x2ABA170", VA = "0x182ABBB70", Slot = "273")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, Camera camera)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x2AC5B60", Offset = "0x2AC4160", VA = "0x182AC5B60", Slot = "51")]
	public void GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x2AC5BB0", Offset = "0x2AC41B0", VA = "0x182AC5BB0", Slot = "52")]
	public void GenerateMips(RenderTexture rt)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x2AC4150", Offset = "0x2AC2750", VA = "0x182AC4150", Slot = "148")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x2AC4020", Offset = "0x2AC2620", VA = "0x182AC4020", Slot = "149")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x2AC4090", Offset = "0x2AC2690", VA = "0x182AC4090", Slot = "150")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x2AC40F0", Offset = "0x2AC26F0", VA = "0x182AC40F0", Slot = "151")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x2AC41D0", Offset = "0x2AC27D0", VA = "0x182AC41D0", Slot = "152")]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x2AC4C30", Offset = "0x2AC3230", VA = "0x182AC4C30", Slot = "153")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x2AC4C00", Offset = "0x2AC3200", VA = "0x182AC4C00", Slot = "154")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x2AC4BE0", Offset = "0x2AC31E0", VA = "0x182AC4BE0", Slot = "155")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x2AC4BA0", Offset = "0x2AC31A0", VA = "0x182AC4BA0", Slot = "156")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x2AC4A20", Offset = "0x2AC3020", VA = "0x182AC4A20", Slot = "157")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x2AC4B20", Offset = "0x2AC3120", VA = "0x182AC4B20", Slot = "158")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x2AC49B0", Offset = "0x2AC2FB0", VA = "0x182AC49B0", Slot = "159")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x2AC4890", Offset = "0x2AC2E90", VA = "0x182AC4890", Slot = "160")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x2AC4920", Offset = "0x2AC2F20", VA = "0x182AC4920", Slot = "161")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2AC4AA0", Offset = "0x2AC30A0", VA = "0x182AC4AA0", Slot = "162")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x2AC4230", Offset = "0x2AC2830", VA = "0x182AC4230", Slot = "163")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x2AC4780", Offset = "0x2AC2D80", VA = "0x182AC4780", Slot = "164")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x2AC43D0", Offset = "0x2AC29D0", VA = "0x182AC43D0", Slot = "165")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x2AC44C0", Offset = "0x2AC2AC0", VA = "0x182AC44C0", Slot = "166")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2AC46F0", Offset = "0x2AC2CF0", VA = "0x182AC46F0", Slot = "167")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x2AC4440", Offset = "0x2AC2A40", VA = "0x182AC4440", Slot = "168")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2AC4800", Offset = "0x2AC2E00", VA = "0x182AC4800", Slot = "169")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x2AC4670", Offset = "0x2AC2C70", VA = "0x182AC4670", Slot = "170")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x2AC4600", Offset = "0x2AC2C00", VA = "0x182AC4600", Slot = "171")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x2AC4560", Offset = "0x2AC2B60", VA = "0x182AC4560", Slot = "172")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x2AC4340", Offset = "0x2AC2940", VA = "0x182AC4340", Slot = "173")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x2AC42C0", Offset = "0x2AC28C0", VA = "0x182AC42C0", Slot = "174")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x2AC3FF0", Offset = "0x2AC25F0", VA = "0x182AC3FF0", Slot = "175")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x2AC3F90", Offset = "0x2AC2590", VA = "0x182AC3F90", Slot = "176")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x2AC3FC0", Offset = "0x2AC25C0", VA = "0x182AC3FC0", Slot = "177")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x2AC3F60", Offset = "0x2AC2560", VA = "0x182AC3F60", Slot = "178")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x2AC3E40", Offset = "0x2AC2440", VA = "0x182AC3E40", Slot = "179")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x2AC3E70", Offset = "0x2AC2470", VA = "0x182AC3E70", Slot = "180")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x2AC3ED0", Offset = "0x2AC24D0", VA = "0x182AC3ED0", Slot = "181")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x2AC3EA0", Offset = "0x2AC24A0", VA = "0x182AC3EA0", Slot = "182")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x2AC3F30", Offset = "0x2AC2530", VA = "0x182AC3F30", Slot = "183")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x2AC3F00", Offset = "0x2AC2500", VA = "0x182AC3F00", Slot = "184")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x2AC4200", Offset = "0x2AC2800", VA = "0x182AC4200", Slot = "185")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x2AC69D0", Offset = "0x2AC4FD0", VA = "0x182AC69D0", Slot = "53")]
	public void SetRandomWriteTarget(int index, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x2AC6970", Offset = "0x2AC4F70", VA = "0x182AC6970", Slot = "54")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x2AC6A20", Offset = "0x2AC5020", VA = "0x182AC6A20", Slot = "55")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x2AC69A0", Offset = "0x2AC4FA0", VA = "0x182AC69A0", Slot = "56")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x2AC6A40", Offset = "0x2AC5040", VA = "0x182AC6A40", Slot = "57")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x2ABB980", Offset = "0x2AB9F80", VA = "0x182ABB980", Slot = "274")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x2ABB9B0", Offset = "0x2AB9FB0", VA = "0x182ABB9B0", Slot = "275")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x2ABB9E0", Offset = "0x2AB9FE0", VA = "0x182ABB9E0", Slot = "276")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x2ABB950", Offset = "0x2AB9F50", VA = "0x182ABB950", Slot = "277")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x2AC58F0", Offset = "0x2AC3EF0", VA = "0x182AC58F0", Slot = "58")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x2AC5A40", Offset = "0x2AC4040", VA = "0x182AC5A40", Slot = "59")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, RenderTargetIdentifier dst, int dstElement)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x2AC5AC0", Offset = "0x2AC40C0", VA = "0x182AC5AC0", Slot = "60")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x2AC5960", Offset = "0x2AC3F60", VA = "0x182AC5960", Slot = "61")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x2ABCC30", Offset = "0x2ABB230", VA = "0x182ABCC30", Slot = "104")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x2ABCC70", Offset = "0x2ABB270", VA = "0x182ABCC70", Slot = "105")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x2ABCC90", Offset = "0x2ABB290", VA = "0x182ABCC90", Slot = "106")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x2ABD1A0", Offset = "0x2ABB7A0", VA = "0x182ABD1A0", Slot = "107")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x2ABCA80", Offset = "0x2ABB080", VA = "0x182ABCA80", Slot = "108")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x2ABCDA0", Offset = "0x2ABB3A0", VA = "0x182ABCDA0", Slot = "109")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x2ABCBF0", Offset = "0x2ABB1F0", VA = "0x182ABCBF0", Slot = "110")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x2ABCBB0", Offset = "0x2ABB1B0", VA = "0x182ABCBB0", Slot = "111")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x2ABCB90", Offset = "0x2ABB190", VA = "0x182ABCB90", Slot = "112")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x2ABD0F0", Offset = "0x2ABB6F0", VA = "0x182ABD0F0", Slot = "113")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x2ABD150", Offset = "0x2ABB750", VA = "0x182ABD150", Slot = "114")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x2ABD110", Offset = "0x2ABB710", VA = "0x182ABD110", Slot = "115")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x2ABCCD0", Offset = "0x2ABB2D0", VA = "0x182ABCCD0", Slot = "116")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x2ABCD30", Offset = "0x2ABB330", VA = "0x182ABCD30", Slot = "117")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x2ABCCF0", Offset = "0x2ABB2F0", VA = "0x182ABCCF0", Slot = "118")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x2AC6580", Offset = "0x2AC4B80", VA = "0x182AC6580", Slot = "119")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x2AC6700", Offset = "0x2AC4D00", VA = "0x182AC6700", Slot = "62")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x2AC6640", Offset = "0x2AC4C40", VA = "0x182AC6640", Slot = "120")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x2AC6750", Offset = "0x2AC4D50", VA = "0x182AC6750", Slot = "63")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x2AC67F0", Offset = "0x2AC4DF0", VA = "0x182AC67F0", Slot = "121")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x2AC67A0", Offset = "0x2AC4DA0", VA = "0x182AC67A0", Slot = "64")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x2AC68B0", Offset = "0x2AC4EB0", VA = "0x182AC68B0", Slot = "122")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x2AC6530", Offset = "0x2AC4B30", VA = "0x182AC6530", Slot = "65")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x2ABC9F0", Offset = "0x2ABAFF0", VA = "0x182ABC9F0", Slot = "123")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2ABC9D0", Offset = "0x2ABAFD0", VA = "0x182ABC9D0", Slot = "124")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x2ABCA30", Offset = "0x2ABB030", VA = "0x182ABCA30", Slot = "125")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x2ABCA10", Offset = "0x2ABB010", VA = "0x182ABCA10", Slot = "126")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x2ABCB40", Offset = "0x2ABB140", VA = "0x182ABCB40", Slot = "127")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2ABCAE0", Offset = "0x2ABB0E0", VA = "0x182ABCAE0", Slot = "128")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x2ABCAB0", Offset = "0x2ABB0B0", VA = "0x182ABCAB0", Slot = "129")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x2ABCB10", Offset = "0x2ABB110", VA = "0x182ABCB10", Slot = "130")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x2ABDA50", Offset = "0x2ABC050", VA = "0x182ABDA50", Slot = "131")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x2ABDAA0", Offset = "0x2ABC0A0", VA = "0x182ABDAA0", Slot = "132")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x2ABBE00", Offset = "0x2ABA400", VA = "0x182ABBE00", Slot = "133")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x2ABBDD0", Offset = "0x2ABA3D0", VA = "0x182ABBDD0", Slot = "134")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x2ABBD00", Offset = "0x2ABA300", VA = "0x182ABBD00", Slot = "135")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x2ABBDA0", Offset = "0x2ABA3A0", VA = "0x182ABBDA0", Slot = "136")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0", Slot = "77")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0", Slot = "78")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0", Slot = "79")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10", Slot = "81")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50", Slot = "82")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30", Slot = "83")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0", Slot = "84")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240", Slot = "85")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210", Slot = "86")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
