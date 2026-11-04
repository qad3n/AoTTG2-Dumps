// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IUnsafeCommandBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000023")]
public interface IUnsafeCommandBuffer : IBaseCommandBuffer, IRasterCommandBuffer, IComputeCommandBuffer
{
	[Token(Token = "0x6000268")]
	void RequestAsyncReadback(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x6000269")]
	void RequestAsyncReadback(GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026A")]
	void RequestAsyncReadback(ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026B")]
	void RequestAsyncReadback(GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026C")]
	void RequestAsyncReadback(Texture src, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026D")]
	void RequestAsyncReadback(Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026E")]
	void RequestAsyncReadback(Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x600026F")]
	void RequestAsyncReadback(Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x6000270")]
	void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x6000271")]
	void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x6000272")]
	void RequestAsyncReadback(Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback);

	[Token(Token = "0x6000273")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000274")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, ComputeBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000275")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000276")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, GraphicsBuffer src, int size, int offset, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000277")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000278")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x6000279")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x600027A")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x600027B")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x600027C")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, TextureFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x600027D")]
	void RequestAsyncReadbackIntoNativeArray<T>(ref NativeArray<T> output, Texture src, int mipIndex, int x, int width, int y, int height, int z, int depth, GraphicsFormat dstFormat, Action<AsyncGPUReadbackRequest> callback) where T : struct;

	[Token(Token = "0x600027E")]
	void Clear();

	[Token(Token = "0x600027F")]
	void ClearRandomWriteTargets();

	[Token(Token = "0x6000280")]
	void SetRenderTarget(RenderTargetIdentifier rt);

	[Token(Token = "0x6000281")]
	void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction);

	[Token(Token = "0x6000282")]
	void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[Token(Token = "0x6000283")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel);

	[Token(Token = "0x6000284")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace);

	[Token(Token = "0x6000285")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x6000286")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth);

	[Token(Token = "0x6000287")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel);

	[Token(Token = "0x6000288")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace);

	[Token(Token = "0x6000289")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x600028A")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[Token(Token = "0x600028B")]
	void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth);

	[Token(Token = "0x600028C")]
	void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x600028D")]
	void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x600028E")]
	void SetRenderTarget(RenderTargetBinding binding);

	[Token(Token = "0x600028F")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt);

	[Token(Token = "0x6000290")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt);

	[Token(Token = "0x6000291")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel);

	[Token(Token = "0x6000292")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel);

	[Token(Token = "0x6000293")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x6000294")]
	void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element);

	[Token(Token = "0x6000295")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, string name, RenderTargetIdentifier rt);

	[Token(Token = "0x6000296")]
	void SetRayTracingTextureParam(RayTracingShader rayTracingShader, int nameID, RenderTargetIdentifier rt);

	[Token(Token = "0x6000297")]
	void GenerateMips(RenderTargetIdentifier rt);

	[Token(Token = "0x6000298")]
	void GenerateMips(RenderTexture rt);

	[Token(Token = "0x6000299")]
	void SetRandomWriteTarget(int index, RenderTargetIdentifier rt);

	[Token(Token = "0x600029A")]
	void SetRandomWriteTarget(int index, ComputeBuffer buffer, bool preserveCounterValue);

	[Token(Token = "0x600029B")]
	void SetRandomWriteTarget(int index, ComputeBuffer buffer);

	[Token(Token = "0x600029C")]
	void SetRandomWriteTarget(int index, GraphicsBuffer buffer, bool preserveCounterValue);

	[Token(Token = "0x600029D")]
	void SetRandomWriteTarget(int index, GraphicsBuffer buffer);

	[Token(Token = "0x600029E")]
	void CopyTexture(RenderTargetIdentifier src, RenderTargetIdentifier dst);

	[Token(Token = "0x600029F")]
	void CopyTexture(RenderTargetIdentifier src, int srcElement, RenderTargetIdentifier dst, int dstElement);

	[Token(Token = "0x60002A0")]
	void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, RenderTargetIdentifier dst, int dstElement, int dstMip);

	[Token(Token = "0x60002A1")]
	void CopyTexture(RenderTargetIdentifier src, int srcElement, int srcMip, int srcX, int srcY, int srcWidth, int srcHeight, RenderTargetIdentifier dst, int dstElement, int dstMip, int dstX, int dstY);

	[Token(Token = "0x60002A2")]
	void SetGlobalTexture(string name, RenderTargetIdentifier value);

	[Token(Token = "0x60002A3")]
	void SetGlobalTexture(int nameID, RenderTargetIdentifier value);

	[Token(Token = "0x60002A4")]
	void SetGlobalTexture(string name, RenderTargetIdentifier value, RenderTextureSubElement element);

	[Token(Token = "0x60002A5")]
	void SetGlobalTexture(int nameID, RenderTargetIdentifier value, RenderTextureSubElement element);
}
