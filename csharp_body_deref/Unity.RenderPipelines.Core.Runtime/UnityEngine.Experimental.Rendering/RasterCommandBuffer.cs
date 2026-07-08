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
	[Address(RVA = "0x4845BB0", Offset = "0x4845BB0", VA = "0x4845BB0")]
	internal RasterCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x484A3D0", Offset = "0x484A3D0", VA = "0x484A3D0", Slot = "50")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x484A3F0", Offset = "0x484A3F0", VA = "0x484A3F0", Slot = "51")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x484A410", Offset = "0x484A410", VA = "0x484A410", Slot = "52")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x484A430", Offset = "0x484A430", VA = "0x484A430", Slot = "53")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x484A450", Offset = "0x484A450", VA = "0x484A450", Slot = "4")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x484A470", Offset = "0x484A470", VA = "0x484A470", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x484A490", Offset = "0x484A490", VA = "0x484A490", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x484A4B0", Offset = "0x484A4B0", VA = "0x484A4B0", Slot = "7")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x484A4D0", Offset = "0x484A4D0", VA = "0x484A4D0", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x484A4F0", Offset = "0x484A4F0", VA = "0x484A4F0", Slot = "54")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x484A510", Offset = "0x484A510", VA = "0x484A510", Slot = "55")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x484A530", Offset = "0x484A530", VA = "0x484A530", Slot = "56")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x484A550", Offset = "0x484A550", VA = "0x484A550", Slot = "57")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x484A570", Offset = "0x484A570", VA = "0x484A570", Slot = "58")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x484A590", Offset = "0x484A590", VA = "0x484A590", Slot = "59")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x484A610", Offset = "0x484A610", VA = "0x484A610", Slot = "60")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x484A630", Offset = "0x484A630", VA = "0x484A630", Slot = "61")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x484A650", Offset = "0x484A650", VA = "0x484A650", Slot = "62")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x484A670", Offset = "0x484A670", VA = "0x484A670", Slot = "63")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x484A690", Offset = "0x484A690", VA = "0x484A690", Slot = "64")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x484A6B0", Offset = "0x484A6B0", VA = "0x484A6B0", Slot = "65")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x484A6D0", Offset = "0x484A6D0", VA = "0x484A6D0", Slot = "66")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x484A6F0", Offset = "0x484A6F0", VA = "0x484A6F0", Slot = "67")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x484A710", Offset = "0x484A710", VA = "0x484A710", Slot = "68")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x484A730", Offset = "0x484A730", VA = "0x484A730", Slot = "69")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x484A750", Offset = "0x484A750", VA = "0x484A750", Slot = "70")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x484A770", Offset = "0x484A770", VA = "0x484A770", Slot = "71")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x484A880", Offset = "0x484A880", VA = "0x484A880", Slot = "72")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x484A8A0", Offset = "0x484A8A0", VA = "0x484A8A0", Slot = "73")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x484A8C0", Offset = "0x484A8C0", VA = "0x484A8C0", Slot = "74")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x484A8E0", Offset = "0x484A8E0", VA = "0x484A8E0", Slot = "75")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x484A900", Offset = "0x484A900", VA = "0x484A900", Slot = "76")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x484A920", Offset = "0x484A920", VA = "0x484A920", Slot = "77")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x484A940", Offset = "0x484A940", VA = "0x484A940", Slot = "78")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x484A960", Offset = "0x484A960", VA = "0x484A960", Slot = "79")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x484A980", Offset = "0x484A980", VA = "0x484A980", Slot = "80")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x484A9A0", Offset = "0x484A9A0", VA = "0x484A9A0", Slot = "81")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x484A9C0", Offset = "0x484A9C0", VA = "0x484A9C0", Slot = "82")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x484A9E0", Offset = "0x484A9E0", VA = "0x484A9E0", Slot = "83")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x484A9F0", Offset = "0x484A9F0", VA = "0x484A9F0", Slot = "84")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x484AA00", Offset = "0x484AA00", VA = "0x484AA00", Slot = "85")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x484AA60", Offset = "0x484AA60", VA = "0x484AA60", Slot = "9")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x484AA80", Offset = "0x484AA80", VA = "0x484AA80", Slot = "10")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x484AAA0", Offset = "0x484AAA0", VA = "0x484AAA0", Slot = "11")]
	public void SetWireframe(bool enable)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x484AAC0", Offset = "0x484AAC0", VA = "0x484AAC0", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x484AAE0", Offset = "0x484AAE0", VA = "0x484AAE0", Slot = "86")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x484AB00", Offset = "0x484AB00", VA = "0x484AB00", Slot = "87")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x484AB20", Offset = "0x484AB20", VA = "0x484AB20", Slot = "13")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x484ABB0", Offset = "0x484ABB0", VA = "0x484ABB0", Slot = "14")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x484AC30", Offset = "0x484AC30", VA = "0x484AC30", Slot = "15")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x484ACB0", Offset = "0x484ACB0", VA = "0x484ACB0", Slot = "16")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x484AD30", Offset = "0x484AD30", VA = "0x484AD30", Slot = "17")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x484AD50", Offset = "0x484AD50", VA = "0x484AD50", Slot = "18")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x484AD70", Offset = "0x484AD70", VA = "0x484AD70", Slot = "19")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x484AD90", Offset = "0x484AD90", VA = "0x484AD90", Slot = "20")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x484ADE0", Offset = "0x484ADE0", VA = "0x484ADE0", Slot = "21")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x484AE80", Offset = "0x484AE80", VA = "0x484AE80", Slot = "22")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x484AF10", Offset = "0x484AF10", VA = "0x484AF10", Slot = "23")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x484AF90", Offset = "0x484AF90", VA = "0x484AF90", Slot = "24")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x484B040", Offset = "0x484B040", VA = "0x484B040", Slot = "25")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x484B0E0", Offset = "0x484B0E0", VA = "0x484B0E0", Slot = "26")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x484B170", Offset = "0x484B170", VA = "0x484B170", Slot = "27")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x484B210", Offset = "0x484B210", VA = "0x484B210", Slot = "28")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x484B2A0", Offset = "0x484B2A0", VA = "0x484B2A0", Slot = "29")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x484B320", Offset = "0x484B320", VA = "0x484B320", Slot = "30")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x484B3D0", Offset = "0x484B3D0", VA = "0x484B3D0", Slot = "31")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x484B470", Offset = "0x484B470", VA = "0x484B470", Slot = "32")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x484B500", Offset = "0x484B500", VA = "0x484B500", Slot = "33")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x484B5A0", Offset = "0x484B5A0", VA = "0x484B5A0", Slot = "34")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x484B630", Offset = "0x484B630", VA = "0x484B630", Slot = "35")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x484B6B0", Offset = "0x484B6B0", VA = "0x484B6B0", Slot = "36")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x484B760", Offset = "0x484B760", VA = "0x484B760", Slot = "37")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x484B800", Offset = "0x484B800", VA = "0x484B800", Slot = "38")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x484B890", Offset = "0x484B890", VA = "0x484B890", Slot = "39")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x484B8C0", Offset = "0x484B8C0", VA = "0x484B8C0", Slot = "40")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x484B8F0", Offset = "0x484B8F0", VA = "0x484B8F0", Slot = "41")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x484B910", Offset = "0x484B910", VA = "0x484B910", Slot = "42")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x484B930", Offset = "0x484B930", VA = "0x484B930", Slot = "43")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x484B960", Offset = "0x484B960", VA = "0x484B960", Slot = "44")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x484B990", Offset = "0x484B990", VA = "0x484B990", Slot = "45")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x484B9B0", Offset = "0x484B9B0", VA = "0x484B9B0", Slot = "46")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x484B9E0", Offset = "0x484B9E0", VA = "0x484B9E0", Slot = "47")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x484BA10", Offset = "0x484BA10", VA = "0x484BA10", Slot = "48")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x484BA30", Offset = "0x484BA30", VA = "0x484BA30", Slot = "49")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x484BA50", Offset = "0x484BA50", VA = "0x484BA50", Slot = "88")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x484BA70", Offset = "0x484BA70", VA = "0x484BA70", Slot = "89")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x484BA90", Offset = "0x484BA90", VA = "0x484BA90", Slot = "90")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x484BAB0", Offset = "0x484BAB0", VA = "0x484BAB0", Slot = "91")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x484BAD0", Offset = "0x484BAD0", VA = "0x484BAD0", Slot = "92")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x484BAF0", Offset = "0x484BAF0", VA = "0x484BAF0", Slot = "93")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x484BB70", Offset = "0x484BB70", VA = "0x484BB70", Slot = "94")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x484BB90", Offset = "0x484BB90", VA = "0x484BB90", Slot = "95")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x484BBB0", Offset = "0x484BBB0", VA = "0x484BBB0", Slot = "96")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x484BBD0", Offset = "0x484BBD0", VA = "0x484BBD0", Slot = "97")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x484BBF0", Offset = "0x484BBF0", VA = "0x484BBF0", Slot = "98")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x484BC10", Offset = "0x484BC10", VA = "0x484BC10", Slot = "99")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x484BC30", Offset = "0x484BC30", VA = "0x484BC30", Slot = "100")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x484BC50", Offset = "0x484BC50", VA = "0x484BC50", Slot = "101")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x484BC70", Offset = "0x484BC70", VA = "0x484BC70", Slot = "102")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x484BC90", Offset = "0x484BC90", VA = "0x484BC90", Slot = "103")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x484BD60", Offset = "0x484BD60", VA = "0x484BD60", Slot = "104")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x484BE30", Offset = "0x484BE30", VA = "0x484BE30", Slot = "105")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x484BF00", Offset = "0x484BF00", VA = "0x484BF00", Slot = "106")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x484BFD0", Offset = "0x484BFD0", VA = "0x484BFD0", Slot = "107")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x484BFF0", Offset = "0x484BFF0", VA = "0x484BFF0", Slot = "108")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x484C010", Offset = "0x484C010", VA = "0x484C010", Slot = "109")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x484C030", Offset = "0x484C030", VA = "0x484C030", Slot = "110")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x484C050", Offset = "0x484C050", VA = "0x484C050", Slot = "111")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x484C070", Offset = "0x484C070", VA = "0x484C070", Slot = "112")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x484C090", Offset = "0x484C090", VA = "0x484C090", Slot = "113")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x484C0B0", Offset = "0x484C0B0", VA = "0x484C0B0", Slot = "114")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x484C0D0", Offset = "0x484C0D0", VA = "0x484C0D0", Slot = "115")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x484C130", Offset = "0x484C130", VA = "0x484C130", Slot = "116")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x484C150", Offset = "0x484C150", VA = "0x484C150", Slot = "117")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x484C170", Offset = "0x484C170", VA = "0x484C170", Slot = "118")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x484C190", Offset = "0x484C190", VA = "0x484C190", Slot = "119")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x484C250", Offset = "0x484C250", VA = "0x484C250", Slot = "120")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
