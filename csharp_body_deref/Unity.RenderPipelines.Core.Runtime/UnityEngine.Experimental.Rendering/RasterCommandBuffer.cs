// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RasterCommandBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Experimental.Rendering.RenderGraphModule;
using UnityEngine.Profiling;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000011")]
public class RasterCommandBuffer : BaseCommandBuffer, IRasterCommandBuffer, IBaseCommandBuffer
{
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4B6ACA0", Offset = "0x4B6ACA0", VA = "0x4B6ACA0")]
	internal RasterCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4B6F4C0", Offset = "0x4B6F4C0", VA = "0x4B6F4C0", Slot = "50")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4B6F4E0", Offset = "0x4B6F4E0", VA = "0x4B6F4E0", Slot = "51")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4B6F500", Offset = "0x4B6F500", VA = "0x4B6F500", Slot = "52")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4B6F520", Offset = "0x4B6F520", VA = "0x4B6F520", Slot = "53")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4B6F540", Offset = "0x4B6F540", VA = "0x4B6F540", Slot = "4")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4B6F560", Offset = "0x4B6F560", VA = "0x4B6F560", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4B6F580", Offset = "0x4B6F580", VA = "0x4B6F580", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4B6F5A0", Offset = "0x4B6F5A0", VA = "0x4B6F5A0", Slot = "7")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4B6F5C0", Offset = "0x4B6F5C0", VA = "0x4B6F5C0", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4B6F5E0", Offset = "0x4B6F5E0", VA = "0x4B6F5E0", Slot = "54")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x4B6F600", Offset = "0x4B6F600", VA = "0x4B6F600", Slot = "55")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4B6F620", Offset = "0x4B6F620", VA = "0x4B6F620", Slot = "56")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4B6F640", Offset = "0x4B6F640", VA = "0x4B6F640", Slot = "57")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4B6F660", Offset = "0x4B6F660", VA = "0x4B6F660", Slot = "58")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4B6F680", Offset = "0x4B6F680", VA = "0x4B6F680", Slot = "59")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4B6F700", Offset = "0x4B6F700", VA = "0x4B6F700", Slot = "60")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4B6F720", Offset = "0x4B6F720", VA = "0x4B6F720", Slot = "61")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4B6F740", Offset = "0x4B6F740", VA = "0x4B6F740", Slot = "62")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4B6F760", Offset = "0x4B6F760", VA = "0x4B6F760", Slot = "63")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4B6F780", Offset = "0x4B6F780", VA = "0x4B6F780", Slot = "64")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4B6F7A0", Offset = "0x4B6F7A0", VA = "0x4B6F7A0", Slot = "65")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4B6F7C0", Offset = "0x4B6F7C0", VA = "0x4B6F7C0", Slot = "66")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4B6F7E0", Offset = "0x4B6F7E0", VA = "0x4B6F7E0", Slot = "67")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4B6F800", Offset = "0x4B6F800", VA = "0x4B6F800", Slot = "68")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4B6F820", Offset = "0x4B6F820", VA = "0x4B6F820", Slot = "69")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4B6F840", Offset = "0x4B6F840", VA = "0x4B6F840", Slot = "70")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4B6F860", Offset = "0x4B6F860", VA = "0x4B6F860", Slot = "71")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4B6F970", Offset = "0x4B6F970", VA = "0x4B6F970", Slot = "72")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4B6F990", Offset = "0x4B6F990", VA = "0x4B6F990", Slot = "73")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4B6F9B0", Offset = "0x4B6F9B0", VA = "0x4B6F9B0", Slot = "74")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4B6F9D0", Offset = "0x4B6F9D0", VA = "0x4B6F9D0", Slot = "75")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4B6F9F0", Offset = "0x4B6F9F0", VA = "0x4B6F9F0", Slot = "76")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4B6FA10", Offset = "0x4B6FA10", VA = "0x4B6FA10", Slot = "77")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4B6FA30", Offset = "0x4B6FA30", VA = "0x4B6FA30", Slot = "78")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4B6FA50", Offset = "0x4B6FA50", VA = "0x4B6FA50", Slot = "79")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4B6FA70", Offset = "0x4B6FA70", VA = "0x4B6FA70", Slot = "80")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4B6FA90", Offset = "0x4B6FA90", VA = "0x4B6FA90", Slot = "81")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4B6FAB0", Offset = "0x4B6FAB0", VA = "0x4B6FAB0", Slot = "82")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4B6FAD0", Offset = "0x4B6FAD0", VA = "0x4B6FAD0", Slot = "83")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4B6FAE0", Offset = "0x4B6FAE0", VA = "0x4B6FAE0", Slot = "84")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4B6FAF0", Offset = "0x4B6FAF0", VA = "0x4B6FAF0", Slot = "85")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4B6FB50", Offset = "0x4B6FB50", VA = "0x4B6FB50", Slot = "9")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4B6FB70", Offset = "0x4B6FB70", VA = "0x4B6FB70", Slot = "10")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4B6FB90", Offset = "0x4B6FB90", VA = "0x4B6FB90", Slot = "11")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4B6FBB0", Offset = "0x4B6FBB0", VA = "0x4B6FBB0", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4B6FBD0", Offset = "0x4B6FBD0", VA = "0x4B6FBD0", Slot = "86")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4B6FBF0", Offset = "0x4B6FBF0", VA = "0x4B6FBF0", Slot = "87")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4B6FC10", Offset = "0x4B6FC10", VA = "0x4B6FC10", Slot = "13")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4B6FCA0", Offset = "0x4B6FCA0", VA = "0x4B6FCA0", Slot = "14")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x4B6FD20", Offset = "0x4B6FD20", VA = "0x4B6FD20", Slot = "15")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x4B6FDA0", Offset = "0x4B6FDA0", VA = "0x4B6FDA0", Slot = "16")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4B6FE20", Offset = "0x4B6FE20", VA = "0x4B6FE20", Slot = "17")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x4B6FE40", Offset = "0x4B6FE40", VA = "0x4B6FE40", Slot = "18")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4B6FE60", Offset = "0x4B6FE60", VA = "0x4B6FE60", Slot = "19")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4B6FE80", Offset = "0x4B6FE80", VA = "0x4B6FE80", Slot = "20")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4B6FED0", Offset = "0x4B6FED0", VA = "0x4B6FED0", Slot = "21")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4B6FF70", Offset = "0x4B6FF70", VA = "0x4B6FF70", Slot = "22")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4B70000", Offset = "0x4B70000", VA = "0x4B70000", Slot = "23")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4B70080", Offset = "0x4B70080", VA = "0x4B70080", Slot = "24")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4B70130", Offset = "0x4B70130", VA = "0x4B70130", Slot = "25")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4B701D0", Offset = "0x4B701D0", VA = "0x4B701D0", Slot = "26")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4B70260", Offset = "0x4B70260", VA = "0x4B70260", Slot = "27")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4B70300", Offset = "0x4B70300", VA = "0x4B70300", Slot = "28")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4B70390", Offset = "0x4B70390", VA = "0x4B70390", Slot = "29")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4B70410", Offset = "0x4B70410", VA = "0x4B70410", Slot = "30")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4B704C0", Offset = "0x4B704C0", VA = "0x4B704C0", Slot = "31")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4B70560", Offset = "0x4B70560", VA = "0x4B70560", Slot = "32")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4B705F0", Offset = "0x4B705F0", VA = "0x4B705F0", Slot = "33")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4B70690", Offset = "0x4B70690", VA = "0x4B70690", Slot = "34")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x4B70720", Offset = "0x4B70720", VA = "0x4B70720", Slot = "35")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4B707A0", Offset = "0x4B707A0", VA = "0x4B707A0", Slot = "36")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4B70850", Offset = "0x4B70850", VA = "0x4B70850", Slot = "37")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4B708F0", Offset = "0x4B708F0", VA = "0x4B708F0", Slot = "38")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4B70980", Offset = "0x4B70980", VA = "0x4B70980", Slot = "39")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x4B709B0", Offset = "0x4B709B0", VA = "0x4B709B0", Slot = "40")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4B709E0", Offset = "0x4B709E0", VA = "0x4B709E0", Slot = "41")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x4B70A00", Offset = "0x4B70A00", VA = "0x4B70A00", Slot = "42")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x4B70A20", Offset = "0x4B70A20", VA = "0x4B70A20", Slot = "43")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4B70A50", Offset = "0x4B70A50", VA = "0x4B70A50", Slot = "44")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4B70A80", Offset = "0x4B70A80", VA = "0x4B70A80", Slot = "45")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4B70AA0", Offset = "0x4B70AA0", VA = "0x4B70AA0", Slot = "46")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4B70AD0", Offset = "0x4B70AD0", VA = "0x4B70AD0", Slot = "47")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4B70B00", Offset = "0x4B70B00", VA = "0x4B70B00", Slot = "48")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x4B70B20", Offset = "0x4B70B20", VA = "0x4B70B20", Slot = "49")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4B70B40", Offset = "0x4B70B40", VA = "0x4B70B40", Slot = "88")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4B70B60", Offset = "0x4B70B60", VA = "0x4B70B60", Slot = "89")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4B70B80", Offset = "0x4B70B80", VA = "0x4B70B80", Slot = "90")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4B70BA0", Offset = "0x4B70BA0", VA = "0x4B70BA0", Slot = "91")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4B70BC0", Offset = "0x4B70BC0", VA = "0x4B70BC0", Slot = "92")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4B70BE0", Offset = "0x4B70BE0", VA = "0x4B70BE0", Slot = "93")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4B70C60", Offset = "0x4B70C60", VA = "0x4B70C60", Slot = "94")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4B70C80", Offset = "0x4B70C80", VA = "0x4B70C80", Slot = "95")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4B70CA0", Offset = "0x4B70CA0", VA = "0x4B70CA0", Slot = "96")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4B70CC0", Offset = "0x4B70CC0", VA = "0x4B70CC0", Slot = "97")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4B70CE0", Offset = "0x4B70CE0", VA = "0x4B70CE0", Slot = "98")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4B70D00", Offset = "0x4B70D00", VA = "0x4B70D00", Slot = "99")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4B70D20", Offset = "0x4B70D20", VA = "0x4B70D20", Slot = "100")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4B70D40", Offset = "0x4B70D40", VA = "0x4B70D40", Slot = "101")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4B70D60", Offset = "0x4B70D60", VA = "0x4B70D60", Slot = "102")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4B70D80", Offset = "0x4B70D80", VA = "0x4B70D80", Slot = "103")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4B70E50", Offset = "0x4B70E50", VA = "0x4B70E50", Slot = "104")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4B70F20", Offset = "0x4B70F20", VA = "0x4B70F20", Slot = "105")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4B70FF0", Offset = "0x4B70FF0", VA = "0x4B70FF0", Slot = "106")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4B710C0", Offset = "0x4B710C0", VA = "0x4B710C0", Slot = "107")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4B710E0", Offset = "0x4B710E0", VA = "0x4B710E0", Slot = "108")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4B71100", Offset = "0x4B71100", VA = "0x4B71100", Slot = "109")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4B71120", Offset = "0x4B71120", VA = "0x4B71120", Slot = "110")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4B71140", Offset = "0x4B71140", VA = "0x4B71140", Slot = "111")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4B71160", Offset = "0x4B71160", VA = "0x4B71160", Slot = "112")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4B71180", Offset = "0x4B71180", VA = "0x4B71180", Slot = "113")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4B711A0", Offset = "0x4B711A0", VA = "0x4B711A0", Slot = "114")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4B711C0", Offset = "0x4B711C0", VA = "0x4B711C0", Slot = "115")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4B71220", Offset = "0x4B71220", VA = "0x4B71220", Slot = "116")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4B71240", Offset = "0x4B71240", VA = "0x4B71240", Slot = "117")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4B71260", Offset = "0x4B71260", VA = "0x4B71260", Slot = "118")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4B71280", Offset = "0x4B71280", VA = "0x4B71280", Slot = "119")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4B71340", Offset = "0x4B71340", VA = "0x4B71340", Slot = "120")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
