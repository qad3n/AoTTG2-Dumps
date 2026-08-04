// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.IRasterCommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000F")]
public interface IRasterCommandBuffer : IBaseCommandBuffer
{
	[Token(Token = "0x60001A3")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor);

	[Token(Token = "0x60001A4")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth);

	[Token(Token = "0x60001A5")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x60001A6")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x60001A7")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil);

	[Token(Token = "0x60001A8")]
	void SetInstanceMultiplier(uint multiplier);

	[Token(Token = "0x60001A9")]
	void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode);

	[Token(Token = "0x60001AA")]
	void SetWireframe(bool enable);

	[Token(Token = "0x60001AB")]
	void ConfigureFoveatedRendering(IntPtr platformData);

	[Token(Token = "0x60001AC")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties);

	[Token(Token = "0x60001AD")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x60001AE")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex);

	[Token(Token = "0x60001AF")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material);

	[Token(Token = "0x60001B0")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x60001B1")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex);

	[Token(Token = "0x60001B2")]
	void DrawRenderer(Renderer renderer, Material material);

	[Token(Token = "0x60001B3")]
	void DrawRendererList(RendererList rendererList);

	[Token(Token = "0x60001B4")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x60001B5")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount);

	[Token(Token = "0x60001B6")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount);

	[Token(Token = "0x60001B7")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x60001B8")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount);

	[Token(Token = "0x60001B9")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount);

	[Token(Token = "0x60001BA")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001BB")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001BC")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x60001BD")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001BE")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001BF")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x60001C0")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001C1")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001C2")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x60001C3")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001C4")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001C5")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x60001C6")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x60001C7")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count);

	[Token(Token = "0x60001C8")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices);

	[Token(Token = "0x60001C9")]
	void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x60001CA")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001CB")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001CC")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x60001CD")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x60001CE")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x60001CF")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x60001D0")]
	void DrawOcclusionMesh(RectInt normalizedCamViewport);
}
