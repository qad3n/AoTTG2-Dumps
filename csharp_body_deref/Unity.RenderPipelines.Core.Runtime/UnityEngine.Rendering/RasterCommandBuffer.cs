// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RasterCommandBuffer
// Update status: NEW in this game update
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
	[Address(RVA = "0x2ABA5B0", Offset = "0x2AB8BB0", VA = "0x182ABA5B0")]
	internal RasterCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x2ABD1D0", Offset = "0x2ABB7D0", VA = "0x182ABD1D0", Slot = "53")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x2ABDB40", Offset = "0x2ABC140", VA = "0x182ABDB40", Slot = "54")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2ABBC00", Offset = "0x2ABA200", VA = "0x182ABBC00", Slot = "55")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2ABBA70", Offset = "0x2ABA070", VA = "0x182ABBA70", Slot = "56")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2AC3D30", Offset = "0x2AC2330", VA = "0x182AC3D30", Slot = "4")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2AC3D70", Offset = "0x2AC2370", VA = "0x182AC3D70", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2AC3CE0", Offset = "0x2AC22E0", VA = "0x182AC3CE0", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2AC3DB0", Offset = "0x2AC23B0", VA = "0x182AC3DB0", Slot = "7")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2AC3DF0", Offset = "0x2AC23F0", VA = "0x182AC3DF0", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2ABCC10", Offset = "0x2ABB210", VA = "0x182ABCC10", Slot = "57")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2ABCC50", Offset = "0x2ABB250", VA = "0x182ABCC50", Slot = "58")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x2ABCCB0", Offset = "0x2ABB2B0", VA = "0x182ABCCB0", Slot = "59")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2ABD170", Offset = "0x2ABB770", VA = "0x182ABD170", Slot = "60")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2ABCA50", Offset = "0x2ABB050", VA = "0x182ABCA50", Slot = "61")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x2ABCD50", Offset = "0x2ABB350", VA = "0x182ABCD50", Slot = "62")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2ABBC30", Offset = "0x2ABA230", VA = "0x182ABBC30", Slot = "63")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0")]
	public void EnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0")]
	public void EnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0")]
	public void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2ABBA90", Offset = "0x2ABA090", VA = "0x182ABBA90", Slot = "67")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10")]
	public void DisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50")]
	public void DisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30")]
	public void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0")]
	public void SetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240")]
	public void SetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210")]
	public void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x2ABDAC0", Offset = "0x2ABC0C0", VA = "0x182ABDAC0", Slot = "74")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x2ABCB70", Offset = "0x2ABB170", VA = "0x182ABCB70", Slot = "75")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2ABCBD0", Offset = "0x2ABB1D0", VA = "0x182ABCBD0", Slot = "76")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2ABD130", Offset = "0x2ABB730", VA = "0x182ABD130", Slot = "77")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2ABCD10", Offset = "0x2ABB310", VA = "0x182ABCD10", Slot = "78")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2ABD270", Offset = "0x2ABB870", VA = "0x182ABD270", Slot = "79")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2ABBE20", Offset = "0x2ABA420", VA = "0x182ABBE20", Slot = "80")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2ABDB90", Offset = "0x2ABC190", VA = "0x182ABDB90", Slot = "81")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x2ABB880", Offset = "0x2AB9E80", VA = "0x182ABB880", Slot = "82")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2ABBC50", Offset = "0x2ABA250", VA = "0x182ABBC50", Slot = "83")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x2ABB8A0", Offset = "0x2AB9EA0", VA = "0x182ABB8A0", Slot = "84")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2ABBC70", Offset = "0x2ABA270", VA = "0x182ABBC70", Slot = "85")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "86")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "87")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2ABBC90", Offset = "0x2ABA290", VA = "0x182ABBC90", Slot = "88")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2AC4F80", Offset = "0x2AC3580", VA = "0x182AC4F80", Slot = "9")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x2AC4C60", Offset = "0x2AC3260", VA = "0x182AC4C60", Slot = "10")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x2AC4FE0", Offset = "0x2AC35E0", VA = "0x182AC4FE0", Slot = "11")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x2AC3E20", Offset = "0x2AC2420", VA = "0x182AC3E20", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x2ABDB70", Offset = "0x2ABC170", VA = "0x182ABDB70", Slot = "89")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2ABBCE0", Offset = "0x2ABA2E0", VA = "0x182ABBCE0", Slot = "90")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2AC4FC0", Offset = "0x2AC35C0", VA = "0x182AC4FC0", Slot = "13")]
	public void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2AC4FA0", Offset = "0x2AC35A0", VA = "0x182AC4FA0", Slot = "14")]
	public void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2AC4150", Offset = "0x2AC2750", VA = "0x182AC4150", Slot = "15")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2AC4020", Offset = "0x2AC2620", VA = "0x182AC4020", Slot = "16")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x2AC4090", Offset = "0x2AC2690", VA = "0x182AC4090", Slot = "17")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x2AC40F0", Offset = "0x2AC26F0", VA = "0x182AC40F0", Slot = "18")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x2AC41D0", Offset = "0x2AC27D0", VA = "0x182AC41D0", Slot = "19")]
	public void DrawMultipleMeshes(Matrix4x4[] matrices, Mesh[] meshes, int[] subsetIndices, int count, Material material, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x2AC4C30", Offset = "0x2AC3230", VA = "0x182AC4C30", Slot = "20")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x2AC4C00", Offset = "0x2AC3200", VA = "0x182AC4C00", Slot = "21")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x2AC4BE0", Offset = "0x2AC31E0", VA = "0x182AC4BE0", Slot = "22")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2AC4BA0", Offset = "0x2AC31A0", VA = "0x182AC4BA0", Slot = "23")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x2AC4A20", Offset = "0x2AC3020", VA = "0x182AC4A20", Slot = "24")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x2AC4B20", Offset = "0x2AC3120", VA = "0x182AC4B20", Slot = "25")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x2AC49B0", Offset = "0x2AC2FB0", VA = "0x182AC49B0", Slot = "26")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x2AC4890", Offset = "0x2AC2E90", VA = "0x182AC4890", Slot = "27")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x2AC4920", Offset = "0x2AC2F20", VA = "0x182AC4920", Slot = "28")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x2AC4AA0", Offset = "0x2AC30A0", VA = "0x182AC4AA0", Slot = "29")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x2AC4230", Offset = "0x2AC2830", VA = "0x182AC4230", Slot = "30")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x2AC4780", Offset = "0x2AC2D80", VA = "0x182AC4780", Slot = "31")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x2AC43D0", Offset = "0x2AC29D0", VA = "0x182AC43D0", Slot = "32")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2AC44C0", Offset = "0x2AC2AC0", VA = "0x182AC44C0", Slot = "33")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2AC46F0", Offset = "0x2AC2CF0", VA = "0x182AC46F0", Slot = "34")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2AC4440", Offset = "0x2AC2A40", VA = "0x182AC4440", Slot = "35")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x2AC4800", Offset = "0x2AC2E00", VA = "0x182AC4800", Slot = "36")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x2AC4670", Offset = "0x2AC2C70", VA = "0x182AC4670", Slot = "37")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x2AC4600", Offset = "0x2AC2C00", VA = "0x182AC4600", Slot = "38")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x2AC4560", Offset = "0x2AC2B60", VA = "0x182AC4560", Slot = "39")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x2AC4340", Offset = "0x2AC2940", VA = "0x182AC4340", Slot = "40")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2AC42C0", Offset = "0x2AC28C0", VA = "0x182AC42C0", Slot = "41")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2AC3FF0", Offset = "0x2AC25F0", VA = "0x182AC3FF0", Slot = "42")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x2AC3F90", Offset = "0x2AC2590", VA = "0x182AC3F90", Slot = "43")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x2AC3FC0", Offset = "0x2AC25C0", VA = "0x182AC3FC0", Slot = "44")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2AC3F60", Offset = "0x2AC2560", VA = "0x182AC3F60", Slot = "45")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2AC3E40", Offset = "0x2AC2440", VA = "0x182AC3E40", Slot = "46")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x2AC3E70", Offset = "0x2AC2470", VA = "0x182AC3E70", Slot = "47")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2AC3ED0", Offset = "0x2AC24D0", VA = "0x182AC3ED0", Slot = "48")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x2AC3EA0", Offset = "0x2AC24A0", VA = "0x182AC3EA0", Slot = "49")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2AC3F30", Offset = "0x2AC2530", VA = "0x182AC3F30", Slot = "50")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x2AC3F00", Offset = "0x2AC2500", VA = "0x182AC3F00", Slot = "51")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x2AC4200", Offset = "0x2AC2800", VA = "0x182AC4200", Slot = "52")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x2ABCC30", Offset = "0x2ABB230", VA = "0x182ABCC30", Slot = "91")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x2ABCC70", Offset = "0x2ABB270", VA = "0x182ABCC70", Slot = "92")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x2ABCC90", Offset = "0x2ABB290", VA = "0x182ABCC90", Slot = "93")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x2ABD1A0", Offset = "0x2ABB7A0", VA = "0x182ABD1A0", Slot = "94")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x2ABCA80", Offset = "0x2ABB080", VA = "0x182ABCA80", Slot = "95")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x2ABCDA0", Offset = "0x2ABB3A0", VA = "0x182ABCDA0", Slot = "96")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x2ABCBF0", Offset = "0x2ABB1F0", VA = "0x182ABCBF0", Slot = "97")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x2ABCBB0", Offset = "0x2ABB1B0", VA = "0x182ABCBB0", Slot = "98")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x2ABCB90", Offset = "0x2ABB190", VA = "0x182ABCB90", Slot = "99")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x2ABD0F0", Offset = "0x2ABB6F0", VA = "0x182ABD0F0", Slot = "100")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x2ABD150", Offset = "0x2ABB750", VA = "0x182ABD150", Slot = "101")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x2ABD110", Offset = "0x2ABB710", VA = "0x182ABD110", Slot = "102")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x2ABCCD0", Offset = "0x2ABB2D0", VA = "0x182ABCCD0", Slot = "103")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x2ABCD30", Offset = "0x2ABB330", VA = "0x182ABCD30", Slot = "104")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x2ABCCF0", Offset = "0x2ABB2F0", VA = "0x182ABCCF0", Slot = "105")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x2AC4C80", Offset = "0x2AC3280", VA = "0x182AC4C80", Slot = "106")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x2AC4E00", Offset = "0x2AC3400", VA = "0x182AC4E00", Slot = "107")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x2AC4D40", Offset = "0x2AC3340", VA = "0x182AC4D40", Slot = "108")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x2AC4EC0", Offset = "0x2AC34C0", VA = "0x182AC4EC0", Slot = "109")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x2ABC9F0", Offset = "0x2ABAFF0", VA = "0x182ABC9F0", Slot = "110")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x2ABC9D0", Offset = "0x2ABAFD0", VA = "0x182ABC9D0", Slot = "111")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x2ABCA30", Offset = "0x2ABB030", VA = "0x182ABCA30", Slot = "112")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x2ABCA10", Offset = "0x2ABB010", VA = "0x182ABCA10", Slot = "113")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x2ABCB40", Offset = "0x2ABB140", VA = "0x182ABCB40", Slot = "114")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x2ABCAE0", Offset = "0x2ABB0E0", VA = "0x182ABCAE0", Slot = "115")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x2ABCAB0", Offset = "0x2ABB0B0", VA = "0x182ABCAB0", Slot = "116")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x2ABCB10", Offset = "0x2ABB110", VA = "0x182ABCB10", Slot = "117")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x2ABDA50", Offset = "0x2ABC050", VA = "0x182ABDA50", Slot = "118")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2ABDAA0", Offset = "0x2ABC0A0", VA = "0x182ABDAA0", Slot = "119")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2ABBE00", Offset = "0x2ABA400", VA = "0x182ABBE00", Slot = "120")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2ABBDD0", Offset = "0x2ABA3D0", VA = "0x182ABBDD0", Slot = "121")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2ABBD00", Offset = "0x2ABA300", VA = "0x182ABBD00", Slot = "122")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2ABBDA0", Offset = "0x2ABA3A0", VA = "0x182ABBDA0", Slot = "123")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2ABBBA0", Offset = "0x2ABA1A0", VA = "0x182ABBBA0", Slot = "64")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2ABBBE0", Offset = "0x2ABA1E0", VA = "0x182ABBBE0", Slot = "65")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2ABBBC0", Offset = "0x2ABA1C0", VA = "0x182ABBBC0", Slot = "66")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EEnableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2ABBA10", Offset = "0x2ABA010", VA = "0x182ABBA10", Slot = "68")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(in GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2ABBA50", Offset = "0x2ABA050", VA = "0x182ABBA50", Slot = "69")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(Material material, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2ABBA30", Offset = "0x2ABA030", VA = "0x182ABBA30", Slot = "70")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002EDisableKeyword(ComputeShader computeShader, in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2ABD1F0", Offset = "0x2ABB7F0", VA = "0x182ABD1F0", Slot = "71")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(in GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2ABD240", Offset = "0x2ABB840", VA = "0x182ABD240", Slot = "72")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(Material material, in LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2ABD210", Offset = "0x2ABB810", VA = "0x182ABD210", Slot = "73")]
	private void UnityEngine_002ERendering_002EIBaseCommandBuffer_002ESetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value)
	{
	}
}
