// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IRasterCommandBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000022")]
public interface IRasterCommandBuffer : IBaseCommandBuffer
{
	[Token(Token = "0x6000237")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor);

	[Token(Token = "0x6000238")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth);

	[Token(Token = "0x6000239")]
	void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x600023A")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil);

	[Token(Token = "0x600023B")]
	void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil);

	[Token(Token = "0x600023C")]
	void SetInstanceMultiplier(uint multiplier);

	[Token(Token = "0x600023D")]
	void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode);

	[Token(Token = "0x600023E")]
	void SetWireframe(bool enable);

	[Token(Token = "0x600023F")]
	void ConfigureFoveatedRendering(IntPtr platformData);

	[Token(Token = "0x6000240")]
	void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize);

	[Token(Token = "0x6000241")]
	void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner);

	[Token(Token = "0x6000242")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties);

	[Token(Token = "0x6000243")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x6000244")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex);

	[Token(Token = "0x6000245")]
	void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material);

	[Token(Token = "0x6000246")]
	void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties);

	[Token(Token = "0x6000247")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass);

	[Token(Token = "0x6000248")]
	void DrawRenderer(Renderer renderer, Material material, int submeshIndex);

	[Token(Token = "0x6000249")]
	void DrawRenderer(Renderer renderer, Material material);

	[Token(Token = "0x600024A")]
	void DrawRendererList(RendererList rendererList);

	[Token(Token = "0x600024B")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x600024C")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount);

	[Token(Token = "0x600024D")]
	void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount);

	[Token(Token = "0x600024E")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties);

	[Token(Token = "0x600024F")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount);

	[Token(Token = "0x6000250")]
	void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount);

	[Token(Token = "0x6000251")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000252")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000253")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x6000254")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000255")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000256")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x6000257")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000258")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000259")]
	void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x600025A")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x600025B")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x600025C")]
	void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x600025D")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x600025E")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count);

	[Token(Token = "0x600025F")]
	void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices);

	[Token(Token = "0x6000260")]
	void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties);

	[Token(Token = "0x6000261")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000262")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000263")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs);

	[Token(Token = "0x6000264")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties);

	[Token(Token = "0x6000265")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset);

	[Token(Token = "0x6000266")]
	void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs);

	[Token(Token = "0x6000267")]
	void DrawOcclusionMesh(RectInt normalizedCamViewport);
}
