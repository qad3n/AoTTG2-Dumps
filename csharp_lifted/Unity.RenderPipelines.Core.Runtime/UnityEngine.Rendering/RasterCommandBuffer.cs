// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RasterCommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Profiling;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000024")]
public class RasterCommandBuffer : BaseCommandBuffer, IRasterCommandBuffer, IBaseCommandBuffer
{
	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x64B4A20", Offset = "0x64B3A20", VA = "0x64B4A20")]
	internal RasterCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x64B6700", Offset = "0x64B5700", VA = "0x64B6700", Slot = "53")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x64B6720", Offset = "0x64B5720", VA = "0x64B6720", Slot = "54")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x64B6740", Offset = "0x64B5740", VA = "0x64B6740", Slot = "55")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x64B6760", Offset = "0x64B5760", VA = "0x64B6760", Slot = "56")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x64B6780", Offset = "0x64B5780", VA = "0x64B6780", Slot = "4")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x64B67A0", Offset = "0x64B57A0", VA = "0x64B67A0", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x64B67C0", Offset = "0x64B57C0", VA = "0x64B67C0", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x64B67E0", Offset = "0x64B57E0", VA = "0x64B67E0", Slot = "7")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x64B6800", Offset = "0x64B5800", VA = "0x64B6800", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x64B6820", Offset = "0x64B5820", VA = "0x64B6820", Slot = "57")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x64B6840", Offset = "0x64B5840", VA = "0x64B6840", Slot = "58")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x64B6860", Offset = "0x64B5860", VA = "0x64B6860", Slot = "59")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x64B6880", Offset = "0x64B5880", VA = "0x64B6880", Slot = "60")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x64B68A0", Offset = "0x64B58A0", VA = "0x64B68A0", Slot = "61")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x64B68C0", Offset = "0x64B58C0", VA = "0x64B68C0", Slot = "62")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x64B68E0", Offset = "0x64B58E0", VA = "0x64B68E0", Slot = "63")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x64B6900", Offset = "0x64B5900", VA = "0x64B6900")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x64B6920", Offset = "0x64B5920", VA = "0x64B6920")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x64B6940", Offset = "0x64B5940", VA = "0x64B6940")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x64B6960", Offset = "0x64B5960", VA = "0x64B6960", Slot = "67")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x64B6980", Offset = "0x64B5980", VA = "0x64B6980")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x64B69A0", Offset = "0x64B59A0", VA = "0x64B69A0")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x64B69C0", Offset = "0x64B59C0", VA = "0x64B69C0")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x64B69E0", Offset = "0x64B59E0", VA = "0x64B69E0")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x64B6A00", Offset = "0x64B5A00", VA = "0x64B6A00")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x64B6A20", Offset = "0x64B5A20", VA = "0x64B6A20")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x64B6A40", Offset = "0x64B5A40", VA = "0x64B6A40", Slot = "74")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x64B6A60", Offset = "0x64B5A60", VA = "0x64B6A60", Slot = "75")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x64B6A80", Offset = "0x64B5A80", VA = "0x64B6A80", Slot = "76")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x64B6AA0", Offset = "0x64B5AA0", VA = "0x64B6AA0", Slot = "77")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x64B6AC0", Offset = "0x64B5AC0", VA = "0x64B6AC0", Slot = "78")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x64B6AE0", Offset = "0x64B5AE0", VA = "0x64B6AE0", Slot = "79")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x64B6B00", Offset = "0x64B5B00", VA = "0x64B6B00", Slot = "80")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x64B6B20", Offset = "0x64B5B20", VA = "0x64B6B20", Slot = "81")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x64B6B40", Offset = "0x64B5B40", VA = "0x64B6B40", Slot = "82")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x64B6B60", Offset = "0x64B5B60", VA = "0x64B6B60", Slot = "83")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x64B6B80", Offset = "0x64B5B80", VA = "0x64B6B80", Slot = "84")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x64B6BA0", Offset = "0x64B5BA0", VA = "0x64B6BA0", Slot = "85")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x64B6BC0", Offset = "0x64B5BC0", VA = "0x64B6BC0", Slot = "86")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x64B6BD0", Offset = "0x64B5BD0", VA = "0x64B6BD0", Slot = "87")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x64B6BE0", Offset = "0x64B5BE0", VA = "0x64B6BE0", Slot = "88")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x64B6C00", Offset = "0x64B5C00", VA = "0x64B6C00", Slot = "9")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x64B6C20", Offset = "0x64B5C20", VA = "0x64B6C20", Slot = "10")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x64B6C40", Offset = "0x64B5C40", VA = "0x64B6C40", Slot = "11")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x64B6C60", Offset = "0x64B5C60", VA = "0x64B6C60", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x64B6C80", Offset = "0x64B5C80", VA = "0x64B6C80", Slot = "89")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x64B6CA0", Offset = "0x64B5CA0", VA = "0x64B6CA0", Slot = "90")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x64B6CC0", Offset = "0x64B5CC0", VA = "0x64B6CC0", Slot = "13")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x64B6CE0", Offset = "0x64B5CE0", VA = "0x64B6CE0", Slot = "14")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x64B6D00", Offset = "0x64B5D00", VA = "0x64B6D00", Slot = "15")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x64B6D50", Offset = "0x64B5D50", VA = "0x64B6D50", Slot = "16")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x64B6D70", Offset = "0x64B5D70", VA = "0x64B6D70", Slot = "17")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x64B6D90", Offset = "0x64B5D90", VA = "0x64B6D90", Slot = "18")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x64B6DB0", Offset = "0x64B5DB0", VA = "0x64B6DB0", Slot = "19")]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x64B6DE0", Offset = "0x64B5DE0", VA = "0x64B6DE0", Slot = "20")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x64B6E00", Offset = "0x64B5E00", VA = "0x64B6E00", Slot = "21")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x64B6E20", Offset = "0x64B5E20", VA = "0x64B6E20", Slot = "22")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x64B6E40", Offset = "0x64B5E40", VA = "0x64B6E40", Slot = "23")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x64B6E60", Offset = "0x64B5E60", VA = "0x64B6E60", Slot = "24")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x64B6EC0", Offset = "0x64B5EC0", VA = "0x64B6EC0", Slot = "25")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x64B6F10", Offset = "0x64B5F10", VA = "0x64B6F10", Slot = "26")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x64B6F30", Offset = "0x64B5F30", VA = "0x64B6F30", Slot = "27")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x64B6FA0", Offset = "0x64B5FA0", VA = "0x64B6FA0", Slot = "28")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x64B7000", Offset = "0x64B6000", VA = "0x64B7000", Slot = "29")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x64B7050", Offset = "0x64B6050", VA = "0x64B7050", Slot = "30")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x64B70B0", Offset = "0x64B60B0", VA = "0x64B70B0", Slot = "31")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x64B7100", Offset = "0x64B6100", VA = "0x64B7100", Slot = "32")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x64B7120", Offset = "0x64B6120", VA = "0x64B7120", Slot = "33")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x64B7190", Offset = "0x64B6190", VA = "0x64B7190", Slot = "34")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x64B71F0", Offset = "0x64B61F0", VA = "0x64B71F0", Slot = "35")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x64B7240", Offset = "0x64B6240", VA = "0x64B7240", Slot = "36")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x64B72A0", Offset = "0x64B62A0", VA = "0x64B72A0", Slot = "37")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x64B72F0", Offset = "0x64B62F0", VA = "0x64B72F0", Slot = "38")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x64B7310", Offset = "0x64B6310", VA = "0x64B7310", Slot = "39")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x64B7380", Offset = "0x64B6380", VA = "0x64B7380", Slot = "40")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x64B73E0", Offset = "0x64B63E0", VA = "0x64B73E0", Slot = "41")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x64B7430", Offset = "0x64B6430", VA = "0x64B7430", Slot = "42")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x64B7460", Offset = "0x64B6460", VA = "0x64B7460", Slot = "43")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x64B7490", Offset = "0x64B6490", VA = "0x64B7490", Slot = "44")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x64B74B0", Offset = "0x64B64B0", VA = "0x64B74B0", Slot = "45")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x64B74D0", Offset = "0x64B64D0", VA = "0x64B74D0", Slot = "46")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x64B7500", Offset = "0x64B6500", VA = "0x64B7500", Slot = "47")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x64B7530", Offset = "0x64B6530", VA = "0x64B7530", Slot = "48")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x64B7550", Offset = "0x64B6550", VA = "0x64B7550", Slot = "49")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x64B7580", Offset = "0x64B6580", VA = "0x64B7580", Slot = "50")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x64B75B0", Offset = "0x64B65B0", VA = "0x64B75B0", Slot = "51")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x64B75D0", Offset = "0x64B65D0", VA = "0x64B75D0", Slot = "52")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x64B75F0", Offset = "0x64B65F0", VA = "0x64B75F0", Slot = "91")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x64B7610", Offset = "0x64B6610", VA = "0x64B7610", Slot = "92")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x64B7630", Offset = "0x64B6630", VA = "0x64B7630", Slot = "93")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x64B7650", Offset = "0x64B6650", VA = "0x64B7650", Slot = "94")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x64B7670", Offset = "0x64B6670", VA = "0x64B7670", Slot = "95")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x64B7690", Offset = "0x64B6690", VA = "0x64B7690", Slot = "96")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x64B76B0", Offset = "0x64B66B0", VA = "0x64B76B0", Slot = "97")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x64B76D0", Offset = "0x64B66D0", VA = "0x64B76D0", Slot = "98")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x64B76F0", Offset = "0x64B66F0", VA = "0x64B76F0", Slot = "99")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x64B7710", Offset = "0x64B6710", VA = "0x64B7710", Slot = "100")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x64B7730", Offset = "0x64B6730", VA = "0x64B7730", Slot = "101")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x64B7750", Offset = "0x64B6750", VA = "0x64B7750", Slot = "102")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x64B7770", Offset = "0x64B6770", VA = "0x64B7770", Slot = "103")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x64B7790", Offset = "0x64B6790", VA = "0x64B7790", Slot = "104")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x64B77B0", Offset = "0x64B67B0", VA = "0x64B77B0", Slot = "105")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x64B77D0", Offset = "0x64B67D0", VA = "0x64B77D0", Slot = "106")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x64B7880", Offset = "0x64B6880", VA = "0x64B7880", Slot = "107")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x64B7920", Offset = "0x64B6920", VA = "0x64B7920", Slot = "108")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x64B79D0", Offset = "0x64B69D0", VA = "0x64B79D0", Slot = "109")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x64B7A80", Offset = "0x64B6A80", VA = "0x64B7A80", Slot = "110")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x64B7AA0", Offset = "0x64B6AA0", VA = "0x64B7AA0", Slot = "111")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x64B7AC0", Offset = "0x64B6AC0", VA = "0x64B7AC0", Slot = "112")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x64B7AE0", Offset = "0x64B6AE0", VA = "0x64B7AE0", Slot = "113")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x64B7B00", Offset = "0x64B6B00", VA = "0x64B7B00", Slot = "114")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x64B7B20", Offset = "0x64B6B20", VA = "0x64B7B20", Slot = "115")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x64B7B40", Offset = "0x64B6B40", VA = "0x64B7B40", Slot = "116")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x64B7B60", Offset = "0x64B6B60", VA = "0x64B7B60", Slot = "117")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x64B7B80", Offset = "0x64B6B80", VA = "0x64B7B80", Slot = "118")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x64B7BA0", Offset = "0x64B6BA0", VA = "0x64B7BA0", Slot = "119")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x64B7BC0", Offset = "0x64B6BC0", VA = "0x64B7BC0", Slot = "120")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x64B7BE0", Offset = "0x64B6BE0", VA = "0x64B7BE0", Slot = "121")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x64B7C00", Offset = "0x64B6C00", VA = "0x64B7C00", Slot = "122")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x64B7C20", Offset = "0x64B6C20", VA = "0x64B7C20", Slot = "123")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x64B7C40", Offset = "0x64B6C40", VA = "0x64B7C40", Slot = "64")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x64B7C60", Offset = "0x64B6C60", VA = "0x64B7C60", Slot = "65")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x64B7C80", Offset = "0x64B6C80", VA = "0x64B7C80", Slot = "66")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x64B7CA0", Offset = "0x64B6CA0", VA = "0x64B7CA0", Slot = "68")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x64B7CC0", Offset = "0x64B6CC0", VA = "0x64B7CC0", Slot = "69")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x64B7CE0", Offset = "0x64B6CE0", VA = "0x64B7CE0", Slot = "70")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x64B7D00", Offset = "0x64B6D00", VA = "0x64B7D00", Slot = "71")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x64B7D20", Offset = "0x64B6D20", VA = "0x64B7D20", Slot = "72")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x64B7D40", Offset = "0x64B6D40", VA = "0x64B7D40", Slot = "73")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
