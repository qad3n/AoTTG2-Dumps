// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnsafeCommandBuffer
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
using UnityEngine.Experimental.Rendering;
using UnityEngine.Profiling;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000025")]
public class UnsafeCommandBuffer : BaseCommandBuffer, IUnsafeCommandBuffer, IBaseCommandBuffer, IRasterCommandBuffer, IComputeCommandBuffer
{
	[Token(Token = "0x6000328")]
	[Address(RVA = "0x64B4B00", Offset = "0x64B3B00", VA = "0x64B4B00")]
	internal UnsafeCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x64B7D60", Offset = "0x64B6D60", VA = "0x64B7D60", Slot = "4")]
	public void RequestAsyncReadback(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x64B7D80", Offset = "0x64B6D80", VA = "0x64B7D80", Slot = "5")]
	public void RequestAsyncReadback(GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x64B7DA0", Offset = "0x64B6DA0", VA = "0x64B7DA0", Slot = "6")]
	public void RequestAsyncReadback(ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x64B7DC0", Offset = "0x64B6DC0", VA = "0x64B7DC0", Slot = "7")]
	public void RequestAsyncReadback(GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x64B7DE0", Offset = "0x64B6DE0", VA = "0x64B7DE0", Slot = "8")]
	public void RequestAsyncReadback(Texture src, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x64B7E00", Offset = "0x64B6E00", VA = "0x64B7E00", Slot = "9")]
	public void RequestAsyncReadback(Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x64B7E20", Offset = "0x64B6E20", VA = "0x64B7E20", Slot = "10")]
	public void RequestAsyncReadback(Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x64B7E40", Offset = "0x64B6E40", VA = "0x64B7E40", Slot = "11")]
	public void RequestAsyncReadback(Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x64B7E60", Offset = "0x64B6E60", VA = "0x64B7E60", Slot = "12")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x64B7EA0", Offset = "0x64B6EA0", VA = "0x64B7EA0", Slot = "13")]
	public void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x64B7EE0", Offset = "0x64B6EE0", VA = "0x64B7EE0", Slot = "14")]
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
	[Address(RVA = "0x64B7F20", Offset = "0x64B6F20", VA = "0x64B7F20", Slot = "66")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x64B7F40", Offset = "0x64B6F40", VA = "0x64B7F40", Slot = "186")]
	public void SetComputeFloatParam(ComputeShader computeShader, int nameID, float val)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x64B7F60", Offset = "0x64B6F60", VA = "0x64B7F60", Slot = "187")]
	public void SetComputeIntParam(ComputeShader computeShader, int nameID, int val)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x64B7F80", Offset = "0x64B6F80", VA = "0x64B7F80", Slot = "188")]
	public void SetComputeVectorParam(ComputeShader computeShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x64B7FA0", Offset = "0x64B6FA0", VA = "0x64B7FA0", Slot = "189")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x64B7FC0", Offset = "0x64B6FC0", VA = "0x64B7FC0", Slot = "190")]
	public void SetComputeMatrixParam(ComputeShader computeShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x64B7FE0", Offset = "0x64B6FE0", VA = "0x64B7FE0", Slot = "191")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x64B8000", Offset = "0x64B7000", VA = "0x64B8000", Slot = "192")]
	public void SetRayTracingShaderPass(RayTracingShader rayTracingShader, string passName)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x64B8020", Offset = "0x64B7020", VA = "0x64B8020", Slot = "26")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x64B8040", Offset = "0x64B7040", VA = "0x64B8040", Slot = "27")]
	public void ClearRandomWriteTargets()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x64B8060", Offset = "0x64B7060", VA = "0x64B8060", Slot = "67")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x64B8080", Offset = "0x64B7080", VA = "0x64B8080", Slot = "68")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x64B80A0", Offset = "0x64B70A0", VA = "0x64B80A0", Slot = "69")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x64B80C0", Offset = "0x64B70C0", VA = "0x64B80C0", Slot = "137")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x64B80E0", Offset = "0x64B70E0", VA = "0x64B80E0", Slot = "138")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x64B8100", Offset = "0x64B7100", VA = "0x64B8100", Slot = "139")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x64B8120", Offset = "0x64B7120", VA = "0x64B8120", Slot = "140")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x64B8140", Offset = "0x64B7140", VA = "0x64B8140", Slot = "141")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x64B8160", Offset = "0x64B7160", VA = "0x64B8160", Slot = "70")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x64B8180", Offset = "0x64B7180", VA = "0x64B8180", Slot = "71")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x64B81A0", Offset = "0x64B71A0", VA = "0x64B81A0", Slot = "72")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x64B81C0", Offset = "0x64B71C0", VA = "0x64B81C0", Slot = "73")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x64B81E0", Offset = "0x64B71E0", VA = "0x64B81E0", Slot = "74")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x64B8200", Offset = "0x64B7200", VA = "0x64B8200", Slot = "75")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x64B8220", Offset = "0x64B7220", VA = "0x64B8220", Slot = "76")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x64B8240", Offset = "0x64B7240", VA = "0x64B8240")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x64B8260", Offset = "0x64B7260", VA = "0x64B8260")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x64B8280", Offset = "0x64B7280", VA = "0x64B8280")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x64B82A0", Offset = "0x64B72A0", VA = "0x64B82A0", Slot = "80")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x64B82C0", Offset = "0x64B72C0", VA = "0x64B82C0")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x64B82E0", Offset = "0x64B72E0", VA = "0x64B82E0")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x64B8300", Offset = "0x64B7300", VA = "0x64B8300")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x64B8320", Offset = "0x64B7320", VA = "0x64B8320")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x64B8340", Offset = "0x64B7340", VA = "0x64B8340")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x64B8360", Offset = "0x64B7360", VA = "0x64B8360")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x64B8380", Offset = "0x64B7380", VA = "0x64B8380", Slot = "87")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x64B83A0", Offset = "0x64B73A0", VA = "0x64B83A0", Slot = "88")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x64B83C0", Offset = "0x64B73C0", VA = "0x64B83C0", Slot = "89")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x64B83E0", Offset = "0x64B73E0", VA = "0x64B83E0", Slot = "90")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x64B8400", Offset = "0x64B7400", VA = "0x64B8400", Slot = "91")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x64B8420", Offset = "0x64B7420", VA = "0x64B8420", Slot = "92")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x64B8440", Offset = "0x64B7440", VA = "0x64B8440", Slot = "93")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x64B8460", Offset = "0x64B7460", VA = "0x64B8460", Slot = "94")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x64B8480", Offset = "0x64B7480", VA = "0x64B8480", Slot = "95")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x64B84A0", Offset = "0x64B74A0", VA = "0x64B84A0", Slot = "96")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x64B84C0", Offset = "0x64B74C0", VA = "0x64B84C0", Slot = "97")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x64B84E0", Offset = "0x64B74E0", VA = "0x64B84E0", Slot = "98")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x64B8500", Offset = "0x64B7500", VA = "0x64B8500", Slot = "99")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x64B8510", Offset = "0x64B7510", VA = "0x64B8510", Slot = "100")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x64B8520", Offset = "0x64B7520", VA = "0x64B8520", Slot = "101")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x64B8540", Offset = "0x64B7540", VA = "0x64B8540", Slot = "142")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x64B8560", Offset = "0x64B7560", VA = "0x64B8560", Slot = "143")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x64B8580", Offset = "0x64B7580", VA = "0x64B8580", Slot = "144")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x64B85A0", Offset = "0x64B75A0", VA = "0x64B85A0", Slot = "145")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x64B85C0", Offset = "0x64B75C0", VA = "0x64B85C0", Slot = "28")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x64B85E0", Offset = "0x64B75E0", VA = "0x64B85E0", Slot = "29")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x64B8600", Offset = "0x64B7600", VA = "0x64B8600", Slot = "30")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x64B8620", Offset = "0x64B7620", VA = "0x64B8620", Slot = "31")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x64B8640", Offset = "0x64B7640", VA = "0x64B8640", Slot = "32")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x64B8660", Offset = "0x64B7660", VA = "0x64B8660", Slot = "33")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x64B8680", Offset = "0x64B7680", VA = "0x64B8680", Slot = "34")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x64B86A0", Offset = "0x64B76A0", VA = "0x64B86A0", Slot = "35")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x64B86C0", Offset = "0x64B76C0", VA = "0x64B86C0", Slot = "36")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x64B86E0", Offset = "0x64B76E0", VA = "0x64B86E0", Slot = "37")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x64B8700", Offset = "0x64B7700", VA = "0x64B8700", Slot = "38")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x64B8720", Offset = "0x64B7720", VA = "0x64B8720", Slot = "39")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x64B8740", Offset = "0x64B7740", VA = "0x64B8740", Slot = "40")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x64B8760", Offset = "0x64B7760", VA = "0x64B8760", Slot = "41")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x64B8780", Offset = "0x64B7780", VA = "0x64B8780", Slot = "42")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x64B87A0", Offset = "0x64B77A0", VA = "0x64B87A0", Slot = "193")]
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
	[Address(RVA = "0x64B87C0", Offset = "0x64B77C0", VA = "0x64B87C0", Slot = "196")]
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
	[Address(RVA = "0x64B87E0", Offset = "0x64B77E0", VA = "0x64B87E0", Slot = "199")]
	public void SetBufferCounterValue(ComputeBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x64B8800", Offset = "0x64B7800", VA = "0x64B8800", Slot = "200")]
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
	[Address(RVA = "0x64B8820", Offset = "0x64B7820", VA = "0x64B8820", Slot = "203")]
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
	[Address(RVA = "0x64B8840", Offset = "0x64B7840", VA = "0x64B8840", Slot = "206")]
	public void SetBufferCounterValue(GraphicsBuffer buffer, uint counterValue)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x64B8860", Offset = "0x64B7860", VA = "0x64B8860", Slot = "102")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x64B8880", Offset = "0x64B7880", VA = "0x64B8880", Slot = "103")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x64B88A0", Offset = "0x64B78A0", VA = "0x64B88A0", Slot = "146")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x64B88C0", Offset = "0x64B78C0", VA = "0x64B88C0", Slot = "147")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x64B88E0", Offset = "0x64B78E0", VA = "0x64B88E0", Slot = "207")]
	public void SetComputeFloatParam(ComputeShader computeShader, string name, float val)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x64B8900", Offset = "0x64B7900", VA = "0x64B8900", Slot = "208")]
	public void SetComputeIntParam(ComputeShader computeShader, string name, int val)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x64B8920", Offset = "0x64B7920", VA = "0x64B8920", Slot = "209")]
	public void SetComputeVectorParam(ComputeShader computeShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x64B8940", Offset = "0x64B7940", VA = "0x64B8940", Slot = "210")]
	public void SetComputeVectorArrayParam(ComputeShader computeShader, string name, Vector4[] values)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x64B8960", Offset = "0x64B7960", VA = "0x64B8960", Slot = "211")]
	public void SetComputeMatrixParam(ComputeShader computeShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x64B8980", Offset = "0x64B7980", VA = "0x64B8980", Slot = "212")]
	public void SetComputeMatrixArrayParam(ComputeShader computeShader, string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x64B89A0", Offset = "0x64B79A0", VA = "0x64B89A0", Slot = "213")]
	public void SetComputeFloatParams(ComputeShader computeShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x64B89C0", Offset = "0x64B79C0", VA = "0x64B89C0", Slot = "214")]
	public void SetComputeFloatParams(ComputeShader computeShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x64B89E0", Offset = "0x64B79E0", VA = "0x64B89E0", Slot = "215")]
	public void SetComputeIntParams(ComputeShader computeShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x64B8A00", Offset = "0x64B7A00", VA = "0x64B8A00", Slot = "216")]
	public void SetComputeIntParams(ComputeShader computeShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x64B8A20", Offset = "0x64B7A20", VA = "0x64B8A20", Slot = "43")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x64B8A40", Offset = "0x64B7A40", VA = "0x64B8A40", Slot = "217")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x64B8B00", Offset = "0x64B7B00", VA = "0x64B8B00", Slot = "44")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x64B8B20", Offset = "0x64B7B20", VA = "0x64B8B20", Slot = "218")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x64B8BE0", Offset = "0x64B7BE0", VA = "0x64B8BE0", Slot = "45")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x64B8C00", Offset = "0x64B7C00", VA = "0x64B8C00", Slot = "219")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x64B8CC0", Offset = "0x64B7CC0", VA = "0x64B8CC0", Slot = "46")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x64B8CE0", Offset = "0x64B7CE0", VA = "0x64B8CE0", Slot = "220")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x64B8DA0", Offset = "0x64B7DA0", VA = "0x64B8DA0", Slot = "47")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x64B8DF0", Offset = "0x64B7DF0", VA = "0x64B8DF0", Slot = "221")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x64B8EC0", Offset = "0x64B7EC0", VA = "0x64B8EC0", Slot = "48")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x64B8F10", Offset = "0x64B7F10", VA = "0x64B8F10", Slot = "222")]
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, TextureHandle rt, int mipLevel, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x64B8FE0", Offset = "0x64B7FE0", VA = "0x64B8FE0", Slot = "223")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x64B9000", Offset = "0x64B8000", VA = "0x64B9000", Slot = "224")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x64B9020", Offset = "0x64B8020", VA = "0x64B9020", Slot = "225")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x64B9040", Offset = "0x64B8040", VA = "0x64B9040", Slot = "226")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x64B9060", Offset = "0x64B8060", VA = "0x64B9060", Slot = "227")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x64B9080", Offset = "0x64B8080", VA = "0x64B9080", Slot = "228")]
	public void SetComputeBufferParam(ComputeShader computeShader, int kernelIndex, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x64B90A0", Offset = "0x64B80A0", VA = "0x64B90A0", Slot = "229")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x64B90C0", Offset = "0x64B80C0", VA = "0x64B90C0", Slot = "230")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x64B90E0", Offset = "0x64B80E0", VA = "0x64B90E0", Slot = "231")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x64B9100", Offset = "0x64B8100", VA = "0x64B9100", Slot = "232")]
	public void SetComputeConstantBufferParam(ComputeShader computeShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x64B9120", Offset = "0x64B8120", VA = "0x64B9120", Slot = "233")]
	public void SetComputeParamsFromMaterial(ComputeShader computeShader, int kernelIndex, Material material)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x64B9140", Offset = "0x64B8140", VA = "0x64B9140", Slot = "234")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x64B9160", Offset = "0x64B8160", VA = "0x64B9160", Slot = "235")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, ComputeBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x64B9180", Offset = "0x64B8180", VA = "0x64B9180", Slot = "236")]
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, GraphicsBuffer indirectBuffer, uint argsOffset)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x64B91A0", Offset = "0x64B81A0", VA = "0x64B91A0", Slot = "237")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x64B91C0", Offset = "0x64B81C0", VA = "0x64B91C0", Slot = "238")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, Vector3 relativeOrigin)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x64B91E0", Offset = "0x64B81E0", VA = "0x64B91E0", Slot = "239")]
	public void BuildRayTracingAccelerationStructure(RayTracingAccelerationStructure accelerationStructure, RayTracingAccelerationStructure.BuildSettings buildSettings)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x64B9200", Offset = "0x64B8200", VA = "0x64B9200", Slot = "240")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x64B9220", Offset = "0x64B8220", VA = "0x64B9220", Slot = "241")]
	public void SetRayTracingAccelerationStructure(RayTracingShader rayTracingShader, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x64B9240", Offset = "0x64B8240", VA = "0x64B9240", Slot = "242")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, string name, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x64B9260", Offset = "0x64B8260", VA = "0x64B9260", Slot = "243")]
	public void SetRayTracingAccelerationStructure(ComputeShader computeShader, int kernelIndex, int nameID, RayTracingAccelerationStructure rayTracingAccelerationStructure)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x64B9280", Offset = "0x64B8280", VA = "0x64B9280", Slot = "244")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x64B92A0", Offset = "0x64B82A0", VA = "0x64B92A0", Slot = "245")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x64B92C0", Offset = "0x64B82C0", VA = "0x64B92C0", Slot = "246")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x64B92E0", Offset = "0x64B82E0", VA = "0x64B92E0", Slot = "247")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x64B9300", Offset = "0x64B8300", VA = "0x64B9300", Slot = "248")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x64B9320", Offset = "0x64B8320", VA = "0x64B9320", Slot = "249")]
	public void SetRayTracingBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBufferHandle bufferHandle)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x64B9340", Offset = "0x64B8340", VA = "0x64B9340", Slot = "250")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x64B9360", Offset = "0x64B8360", VA = "0x64B9360", Slot = "251")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x64B9380", Offset = "0x64B8380", VA = "0x64B9380", Slot = "252")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, int nameID, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x64B93A0", Offset = "0x64B83A0", VA = "0x64B93A0", Slot = "253")]
	public void SetRayTracingConstantBufferParam(RayTracingShader rayTracingShader, string name, GraphicsBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x64B93C0", Offset = "0x64B83C0", VA = "0x64B93C0", Slot = "49")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x64B93E0", Offset = "0x64B83E0", VA = "0x64B93E0", Slot = "254")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x64B9490", Offset = "0x64B8490", VA = "0x64B9490", Slot = "50")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x64B94B0", Offset = "0x64B84B0", VA = "0x64B94B0", Slot = "255")]
	public void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, TextureHandle rt)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x64B9560", Offset = "0x64B8560", VA = "0x64B9560", Slot = "256")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, string name, float val)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x64B9580", Offset = "0x64B8580", VA = "0x64B9580", Slot = "257")]
	public void SetRayTracingFloatParam(RayTracingShader rayTracingShader, int nameID, float val)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x64B95A0", Offset = "0x64B85A0", VA = "0x64B95A0", Slot = "258")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, string name, params float[] values)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x64B95C0", Offset = "0x64B85C0", VA = "0x64B95C0", Slot = "259")]
	public void SetRayTracingFloatParams(RayTracingShader rayTracingShader, int nameID, params float[] values)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x64B95E0", Offset = "0x64B85E0", VA = "0x64B95E0", Slot = "260")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, string name, int val)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x64B9600", Offset = "0x64B8600", VA = "0x64B9600", Slot = "261")]
	public void SetRayTracingIntParam(RayTracingShader rayTracingShader, int nameID, int val)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x64B9620", Offset = "0x64B8620", VA = "0x64B9620", Slot = "262")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, string name, params int[] values)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x64B9640", Offset = "0x64B8640", VA = "0x64B9640", Slot = "263")]
	public void SetRayTracingIntParams(RayTracingShader rayTracingShader, int nameID, params int[] values)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x64B9660", Offset = "0x64B8660", VA = "0x64B9660", Slot = "264")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, string name, Vector4 val)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x64B9680", Offset = "0x64B8680", VA = "0x64B9680", Slot = "265")]
	public void SetRayTracingVectorParam(RayTracingShader rayTracingShader, int nameID, Vector4 val)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x64B96A0", Offset = "0x64B86A0", VA = "0x64B96A0", Slot = "266")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, string name, params Vector4[] values)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x64B96C0", Offset = "0x64B86C0", VA = "0x64B96C0", Slot = "267")]
	public void SetRayTracingVectorArrayParam(RayTracingShader rayTracingShader, int nameID, params Vector4[] values)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x64B96E0", Offset = "0x64B86E0", VA = "0x64B96E0", Slot = "268")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, string name, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x64B9700", Offset = "0x64B8700", VA = "0x64B9700", Slot = "269")]
	public void SetRayTracingMatrixParam(RayTracingShader rayTracingShader, int nameID, Matrix4x4 val)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x64B9720", Offset = "0x64B8720", VA = "0x64B9720", Slot = "270")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, string name, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x64B9740", Offset = "0x64B8740", VA = "0x64B9740", Slot = "271")]
	public void SetRayTracingMatrixArrayParam(RayTracingShader rayTracingShader, int nameID, params Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x64B9760", Offset = "0x64B8760", VA = "0x64B9760", Slot = "272")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, uint width, uint height, uint depth, Camera camera)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x64B9780", Offset = "0x64B8780", VA = "0x64B9780", Slot = "273")]
	public void DispatchRays(RayTracingShader rayTracingShader, string rayGenName, GraphicsBuffer argsBuffer, uint argsOffset, Camera camera)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x64B97A0", Offset = "0x64B87A0", VA = "0x64B97A0", Slot = "51")]
	public void GenerateMips(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x64B97C0", Offset = "0x64B87C0", VA = "0x64B97C0", Slot = "52")]
	public void GenerateMips(RenderTexture rt)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x64B97E0", Offset = "0x64B87E0", VA = "0x64B97E0", Slot = "148")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x64B9830", Offset = "0x64B8830", VA = "0x64B9830", Slot = "149")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x64B9850", Offset = "0x64B8850", VA = "0x64B9850", Slot = "150")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x64B9870", Offset = "0x64B8870", VA = "0x64B9870", Slot = "151")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x64B9890", Offset = "0x64B8890", VA = "0x64B9890", Slot = "152")]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x64B98C0", Offset = "0x64B88C0", VA = "0x64B98C0", Slot = "153")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x64B98E0", Offset = "0x64B88E0", VA = "0x64B98E0", Slot = "154")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x64B9900", Offset = "0x64B8900", VA = "0x64B9900", Slot = "155")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x64B9920", Offset = "0x64B8920", VA = "0x64B9920", Slot = "156")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x64B9940", Offset = "0x64B8940", VA = "0x64B9940", Slot = "157")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x64B99A0", Offset = "0x64B89A0", VA = "0x64B99A0", Slot = "158")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x64B99F0", Offset = "0x64B89F0", VA = "0x64B99F0", Slot = "159")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x64B9A10", Offset = "0x64B8A10", VA = "0x64B9A10", Slot = "160")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x64B9A80", Offset = "0x64B8A80", VA = "0x64B9A80", Slot = "161")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x64B9AE0", Offset = "0x64B8AE0", VA = "0x64B9AE0", Slot = "162")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x64B9B30", Offset = "0x64B8B30", VA = "0x64B9B30", Slot = "163")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x64B9B90", Offset = "0x64B8B90", VA = "0x64B9B90", Slot = "164")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x64B9BE0", Offset = "0x64B8BE0", VA = "0x64B9BE0", Slot = "165")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x64B9C00", Offset = "0x64B8C00", VA = "0x64B9C00", Slot = "166")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x64B9C70", Offset = "0x64B8C70", VA = "0x64B9C70", Slot = "167")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x64B9CD0", Offset = "0x64B8CD0", VA = "0x64B9CD0", Slot = "168")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x64B9D20", Offset = "0x64B8D20", VA = "0x64B9D20", Slot = "169")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x64B9D80", Offset = "0x64B8D80", VA = "0x64B9D80", Slot = "170")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x64B9DD0", Offset = "0x64B8DD0", VA = "0x64B9DD0", Slot = "171")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x64B9DF0", Offset = "0x64B8DF0", VA = "0x64B9DF0", Slot = "172")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x64B9E60", Offset = "0x64B8E60", VA = "0x64B9E60", Slot = "173")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x64B9EC0", Offset = "0x64B8EC0", VA = "0x64B9EC0", Slot = "174")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x64B9F10", Offset = "0x64B8F10", VA = "0x64B9F10", Slot = "175")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x64B9F40", Offset = "0x64B8F40", VA = "0x64B9F40", Slot = "176")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x64B9F70", Offset = "0x64B8F70", VA = "0x64B9F70", Slot = "177")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x64B9F90", Offset = "0x64B8F90", VA = "0x64B9F90", Slot = "178")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x64B9FB0", Offset = "0x64B8FB0", VA = "0x64B9FB0", Slot = "179")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x64B9FE0", Offset = "0x64B8FE0", VA = "0x64B9FE0", Slot = "180")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x64BA010", Offset = "0x64B9010", VA = "0x64BA010", Slot = "181")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x64BA030", Offset = "0x64B9030", VA = "0x64BA030", Slot = "182")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x64BA060", Offset = "0x64B9060", VA = "0x64BA060", Slot = "183")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x64BA090", Offset = "0x64B9090", VA = "0x64BA090", Slot = "184")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x64BA0B0", Offset = "0x64B90B0", VA = "0x64BA0B0", Slot = "185")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x64BA0D0", Offset = "0x64B90D0", VA = "0x64BA0D0", Slot = "53")]
	public void SetRandomWriteTarget(int index, RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x64BA0F0", Offset = "0x64B90F0", VA = "0x64BA0F0", Slot = "54")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x64BA110", Offset = "0x64B9110", VA = "0x64BA110", Slot = "55")]
	public void SetRandomWriteTarget(int index, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x64BA130", Offset = "0x64B9130", VA = "0x64BA130", Slot = "56")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x64BA150", Offset = "0x64B9150", VA = "0x64BA150", Slot = "57")]
	public void SetRandomWriteTarget(int index, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x64BA170", Offset = "0x64B9170", VA = "0x64BA170", Slot = "274")]
	public void CopyCounterValue(ComputeBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x64BA190", Offset = "0x64B9190", VA = "0x64BA190", Slot = "275")]
	public void CopyCounterValue(GraphicsBuffer src, ComputeBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x64BA1B0", Offset = "0x64B91B0", VA = "0x64BA1B0", Slot = "276")]
	public void CopyCounterValue(ComputeBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x64BA1D0", Offset = "0x64B91D0", VA = "0x64BA1D0", Slot = "277")]
	public void CopyCounterValue(GraphicsBuffer src, GraphicsBuffer dst, uint dstOffsetBytes)
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x64BA1F0", Offset = "0x64B91F0", VA = "0x64BA1F0", Slot = "58")]
	public void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst)
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x64BA210", Offset = "0x64B9210", VA = "0x64BA210", Slot = "59")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, RenderTargetIdentifier dst, int dstElement)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x64BA230", Offset = "0x64B9230", VA = "0x64BA230", Slot = "60")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x64BA250", Offset = "0x64B9250", VA = "0x64BA250", Slot = "61")]
	public void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x64BA320", Offset = "0x64B9320", VA = "0x64BA320", Slot = "104")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x64BA340", Offset = "0x64B9340", VA = "0x64BA340", Slot = "105")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x64BA360", Offset = "0x64B9360", VA = "0x64BA360", Slot = "106")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x64BA380", Offset = "0x64B9380", VA = "0x64BA380", Slot = "107")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x64BA3A0", Offset = "0x64B93A0", VA = "0x64BA3A0", Slot = "108")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x64BA3C0", Offset = "0x64B93C0", VA = "0x64BA3C0", Slot = "109")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x64BA3E0", Offset = "0x64B93E0", VA = "0x64BA3E0", Slot = "110")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x64BA400", Offset = "0x64B9400", VA = "0x64BA400", Slot = "111")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x64BA420", Offset = "0x64B9420", VA = "0x64BA420", Slot = "112")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x64BA440", Offset = "0x64B9440", VA = "0x64BA440", Slot = "113")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x64BA460", Offset = "0x64B9460", VA = "0x64BA460", Slot = "114")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x64BA480", Offset = "0x64B9480", VA = "0x64BA480", Slot = "115")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x64BA4A0", Offset = "0x64B94A0", VA = "0x64BA4A0", Slot = "116")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x64BA4C0", Offset = "0x64B94C0", VA = "0x64BA4C0", Slot = "117")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x64BA4E0", Offset = "0x64B94E0", VA = "0x64BA4E0", Slot = "118")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x64BA500", Offset = "0x64B9500", VA = "0x64BA500", Slot = "119")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x64BA5B0", Offset = "0x64B95B0", VA = "0x64BA5B0", Slot = "62")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x64BA5D0", Offset = "0x64B95D0", VA = "0x64BA5D0", Slot = "120")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x64BA670", Offset = "0x64B9670", VA = "0x64BA670", Slot = "63")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x64BA690", Offset = "0x64B9690", VA = "0x64BA690", Slot = "121")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x64BA740", Offset = "0x64B9740", VA = "0x64BA740", Slot = "64")]
	public void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x64BA760", Offset = "0x64B9760", VA = "0x64BA760", Slot = "122")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x64BA810", Offset = "0x64B9810", VA = "0x64BA810", Slot = "65")]
	public void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x64BA830", Offset = "0x64B9830", VA = "0x64BA830", Slot = "123")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x64BA850", Offset = "0x64B9850", VA = "0x64BA850", Slot = "124")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x64BA870", Offset = "0x64B9870", VA = "0x64BA870", Slot = "125")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x64BA890", Offset = "0x64B9890", VA = "0x64BA890", Slot = "126")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x64BA8B0", Offset = "0x64B98B0", VA = "0x64BA8B0", Slot = "127")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x64BA8D0", Offset = "0x64B98D0", VA = "0x64BA8D0", Slot = "128")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x64BA8F0", Offset = "0x64B98F0", VA = "0x64BA8F0", Slot = "129")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x64BA910", Offset = "0x64B9910", VA = "0x64BA910", Slot = "130")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x64BA930", Offset = "0x64B9930", VA = "0x64BA930", Slot = "131")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x64BA950", Offset = "0x64B9950", VA = "0x64BA950", Slot = "132")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x64BA970", Offset = "0x64B9970", VA = "0x64BA970", Slot = "133")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x64BA990", Offset = "0x64B9990", VA = "0x64BA990", Slot = "134")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x64BA9B0", Offset = "0x64B99B0", VA = "0x64BA9B0", Slot = "135")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x64BA9D0", Offset = "0x64B99D0", VA = "0x64BA9D0", Slot = "136")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x64BA9F0", Offset = "0x64B99F0", VA = "0x64BA9F0", Slot = "77")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x64BAA10", Offset = "0x64B9A10", VA = "0x64BAA10", Slot = "78")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x64BAA30", Offset = "0x64B9A30", VA = "0x64BAA30", Slot = "79")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x64BAA50", Offset = "0x64B9A50", VA = "0x64BAA50", Slot = "81")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x64BAA70", Offset = "0x64B9A70", VA = "0x64BAA70", Slot = "82")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x64BAA90", Offset = "0x64B9A90", VA = "0x64BAA90", Slot = "83")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x64BAAB0", Offset = "0x64B9AB0", VA = "0x64BAAB0", Slot = "84")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x64BAAD0", Offset = "0x64B9AD0", VA = "0x64BAAD0", Slot = "85")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x64BAAF0", Offset = "0x64B9AF0", VA = "0x64BAAF0", Slot = "86")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
