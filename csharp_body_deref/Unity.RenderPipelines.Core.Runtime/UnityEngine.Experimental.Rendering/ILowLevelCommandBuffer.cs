using System;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000E")]
public interface ILowLevelCommandBuffer : IBaseCommandBuffer
{
	[Token(Token = "0x6000166")]
	void Clear();

	[Token(Token = "0x6000167")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor);

	[Token(Token = "0x6000168")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth);

	[Token(Token = "0x6000169")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x600016A")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x600016B")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil);

	[Token(Token = "0x600016C")]
	void SetInstanceMultiplier(uint multiplier);

	[Token(Token = "0x600016D")]
	void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode);

	[Token(Token = "0x600016E")]
	void ConfigureFoveatedRendering(IntPtr platformData);

	[Token(Token = "0x600016F")]
	void SetRenderTarget(RenderTargetIdentifier rt);

	[Token(Token = "0x6000170")]
	void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction);

	[Token(Token = "0x6000171")]
	void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[Token(Token = "0x6000172")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel);

	[Token(Token = "0x6000173")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace);

	[Token(Token = "0x6000174")]
	void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x6000175")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth);

	[Token(Token = "0x6000176")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel);

	[Token(Token = "0x6000177")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace);

	[Token(Token = "0x6000178")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x6000179")]
	void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction);

	[Token(Token = "0x600017A")]
	void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth);

	[Token(Token = "0x600017B")]
	void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x600017C")]
	void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice);

	[Token(Token = "0x600017D")]
	void SetRenderTarget(RenderTargetBinding binding);

	[Token(Token = "0x600017E")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties);

	[Token(Token = "0x600017F")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x6000180")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex);

	[Token(Token = "0x6000181")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material);

	[Token(Token = "0x6000182")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x6000183")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex);

	[Token(Token = "0x6000184")]
	void DrawRenderer(Renderer renderer, Material material);

	[Token(Token = "0x6000185")]
	void DrawRendererList(RendererList rendererList);

	[Token(Token = "0x6000186")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x6000187")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount);

	[Token(Token = "0x6000188")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount);

	[Token(Token = "0x6000189")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x600018A")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount);

	[Token(Token = "0x600018B")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount);

	[Token(Token = "0x600018C")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x600018D")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x600018E")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x600018F")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000190")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000191")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x6000192")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000193")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000194")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x6000195")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000196")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000197")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x6000198")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x6000199")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count);

	[Token(Token = "0x600019A")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices);

	[Token(Token = "0x600019B")]
	void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x600019C")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x600019D")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x600019E")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x600019F")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001A0")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001A1")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x60001A2")]
	void DrawOcclusionMesh(RectInt normalizedCamViewport);
}
