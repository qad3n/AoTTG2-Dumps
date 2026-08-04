// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.LowLevelCommandBuffer
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

[Token(Token = "0x2000010")]
public class LowLevelCommandBuffer : BaseCommandBuffer, ILowLevelCommandBuffer, IBaseCommandBuffer
{
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4B6AD80", Offset = "0x4B6AD80", VA = "0x4B6AD80")]
	internal LowLevelCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4B6CE00", Offset = "0x4B6CE00", VA = "0x4B6CE00", Slot = "65")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4B6CE20", Offset = "0x4B6CE20", VA = "0x4B6CE20", Slot = "4")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4B6CE40", Offset = "0x4B6CE40", VA = "0x4B6CE40", Slot = "66")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4B6CE60", Offset = "0x4B6CE60", VA = "0x4B6CE60", Slot = "67")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4B6CE80", Offset = "0x4B6CE80", VA = "0x4B6CE80", Slot = "68")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4B6CEA0", Offset = "0x4B6CEA0", VA = "0x4B6CEA0", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4B6CEC0", Offset = "0x4B6CEC0", VA = "0x4B6CEC0", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4B6CEE0", Offset = "0x4B6CEE0", VA = "0x4B6CEE0", Slot = "7")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4B6CF00", Offset = "0x4B6CF00", VA = "0x4B6CF00", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4B6CF20", Offset = "0x4B6CF20", VA = "0x4B6CF20", Slot = "9")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4B6CF40", Offset = "0x4B6CF40", VA = "0x4B6CF40", Slot = "69")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4B6CF60", Offset = "0x4B6CF60", VA = "0x4B6CF60", Slot = "70")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4B6CF80", Offset = "0x4B6CF80", VA = "0x4B6CF80", Slot = "71")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4B6CFA0", Offset = "0x4B6CFA0", VA = "0x4B6CFA0", Slot = "72")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4B6CFC0", Offset = "0x4B6CFC0", VA = "0x4B6CFC0", Slot = "73")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4B6CFE0", Offset = "0x4B6CFE0", VA = "0x4B6CFE0", Slot = "74")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4B6D060", Offset = "0x4B6D060", VA = "0x4B6D060", Slot = "75")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4B6D080", Offset = "0x4B6D080", VA = "0x4B6D080", Slot = "76")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4B6D0A0", Offset = "0x4B6D0A0", VA = "0x4B6D0A0", Slot = "77")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4B6D0C0", Offset = "0x4B6D0C0", VA = "0x4B6D0C0", Slot = "78")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4B6D0E0", Offset = "0x4B6D0E0", VA = "0x4B6D0E0", Slot = "79")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4B6D100", Offset = "0x4B6D100", VA = "0x4B6D100", Slot = "80")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4B6D120", Offset = "0x4B6D120", VA = "0x4B6D120", Slot = "81")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4B6D140", Offset = "0x4B6D140", VA = "0x4B6D140", Slot = "82")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4B6D160", Offset = "0x4B6D160", VA = "0x4B6D160", Slot = "83")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4B6D180", Offset = "0x4B6D180", VA = "0x4B6D180", Slot = "84")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4B6D1A0", Offset = "0x4B6D1A0", VA = "0x4B6D1A0", Slot = "85")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4B6D1C0", Offset = "0x4B6D1C0", VA = "0x4B6D1C0", Slot = "86")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4B6D2D0", Offset = "0x4B6D2D0", VA = "0x4B6D2D0", Slot = "87")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4B6D2F0", Offset = "0x4B6D2F0", VA = "0x4B6D2F0", Slot = "88")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4B6D310", Offset = "0x4B6D310", VA = "0x4B6D310", Slot = "89")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4B6D330", Offset = "0x4B6D330", VA = "0x4B6D330", Slot = "90")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4B6D350", Offset = "0x4B6D350", VA = "0x4B6D350", Slot = "91")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4B6D370", Offset = "0x4B6D370", VA = "0x4B6D370", Slot = "92")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4B6D390", Offset = "0x4B6D390", VA = "0x4B6D390", Slot = "93")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4B6D3B0", Offset = "0x4B6D3B0", VA = "0x4B6D3B0", Slot = "94")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4B6D3D0", Offset = "0x4B6D3D0", VA = "0x4B6D3D0", Slot = "95")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4B6D3F0", Offset = "0x4B6D3F0", VA = "0x4B6D3F0", Slot = "96")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4B6D410", Offset = "0x4B6D410", VA = "0x4B6D410", Slot = "97")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4B6D430", Offset = "0x4B6D430", VA = "0x4B6D430", Slot = "98")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4B6D440", Offset = "0x4B6D440", VA = "0x4B6D440", Slot = "99")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4B6D450", Offset = "0x4B6D450", VA = "0x4B6D450", Slot = "100")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4B6D4B0", Offset = "0x4B6D4B0", VA = "0x4B6D4B0", Slot = "10")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4B6D4D0", Offset = "0x4B6D4D0", VA = "0x4B6D4D0", Slot = "11")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4B6D4F0", Offset = "0x4B6D4F0", VA = "0x4B6D4F0", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4B6D510", Offset = "0x4B6D510", VA = "0x4B6D510", Slot = "13")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4B6D570", Offset = "0x4B6D570", VA = "0x4B6D570", Slot = "14")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4B6D5D0", Offset = "0x4B6D5D0", VA = "0x4B6D5D0", Slot = "15")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4B6D630", Offset = "0x4B6D630", VA = "0x4B6D630", Slot = "16")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4B6D690", Offset = "0x4B6D690", VA = "0x4B6D690", Slot = "17")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4B6D6F0", Offset = "0x4B6D6F0", VA = "0x4B6D6F0", Slot = "18")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4B6D750", Offset = "0x4B6D750", VA = "0x4B6D750", Slot = "19")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4B6D810", Offset = "0x4B6D810", VA = "0x4B6D810", Slot = "20")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4B6D8D0", Offset = "0x4B6D8D0", VA = "0x4B6D8D0", Slot = "21")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4B6D990", Offset = "0x4B6D990", VA = "0x4B6D990", Slot = "22")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4B6DA50", Offset = "0x4B6DA50", VA = "0x4B6DA50", Slot = "23")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4B6DB10", Offset = "0x4B6DB10", VA = "0x4B6DB10", Slot = "24")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4B6DB70", Offset = "0x4B6DB70", VA = "0x4B6DB70", Slot = "25")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4B6DBD0", Offset = "0x4B6DBD0", VA = "0x4B6DBD0", Slot = "26")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4B6DC80", Offset = "0x4B6DC80", VA = "0x4B6DC80", Slot = "27")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4B6DD30", Offset = "0x4B6DD30", VA = "0x4B6DD30", Slot = "101")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4B6DD50", Offset = "0x4B6DD50", VA = "0x4B6DD50", Slot = "102")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4B6DD70", Offset = "0x4B6DD70", VA = "0x4B6DD70", Slot = "28")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4B6DE00", Offset = "0x4B6DE00", VA = "0x4B6DE00", Slot = "29")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4B6DE80", Offset = "0x4B6DE80", VA = "0x4B6DE80", Slot = "30")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4B6DF00", Offset = "0x4B6DF00", VA = "0x4B6DF00", Slot = "31")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4B6DF80", Offset = "0x4B6DF80", VA = "0x4B6DF80", Slot = "32")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4B6DFA0", Offset = "0x4B6DFA0", VA = "0x4B6DFA0", Slot = "33")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4B6DFC0", Offset = "0x4B6DFC0", VA = "0x4B6DFC0", Slot = "34")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4B6DFE0", Offset = "0x4B6DFE0", VA = "0x4B6DFE0", Slot = "35")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4B6E030", Offset = "0x4B6E030", VA = "0x4B6E030", Slot = "36")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4B6E0D0", Offset = "0x4B6E0D0", VA = "0x4B6E0D0", Slot = "37")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4B6E160", Offset = "0x4B6E160", VA = "0x4B6E160", Slot = "38")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4B6E1E0", Offset = "0x4B6E1E0", VA = "0x4B6E1E0", Slot = "39")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4B6E290", Offset = "0x4B6E290", VA = "0x4B6E290", Slot = "40")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4B6E330", Offset = "0x4B6E330", VA = "0x4B6E330", Slot = "41")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4B6E3C0", Offset = "0x4B6E3C0", VA = "0x4B6E3C0", Slot = "42")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4B6E460", Offset = "0x4B6E460", VA = "0x4B6E460", Slot = "43")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4B6E4F0", Offset = "0x4B6E4F0", VA = "0x4B6E4F0", Slot = "44")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4B6E570", Offset = "0x4B6E570", VA = "0x4B6E570", Slot = "45")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4B6E620", Offset = "0x4B6E620", VA = "0x4B6E620", Slot = "46")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4B6E6C0", Offset = "0x4B6E6C0", VA = "0x4B6E6C0", Slot = "47")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4B6E750", Offset = "0x4B6E750", VA = "0x4B6E750", Slot = "48")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4B6E7F0", Offset = "0x4B6E7F0", VA = "0x4B6E7F0", Slot = "49")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4B6E880", Offset = "0x4B6E880", VA = "0x4B6E880", Slot = "50")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4B6E900", Offset = "0x4B6E900", VA = "0x4B6E900", Slot = "51")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4B6E9B0", Offset = "0x4B6E9B0", VA = "0x4B6E9B0", Slot = "52")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4B6EA50", Offset = "0x4B6EA50", VA = "0x4B6EA50", Slot = "53")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4B6EAE0", Offset = "0x4B6EAE0", VA = "0x4B6EAE0", Slot = "54")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4B6EB10", Offset = "0x4B6EB10", VA = "0x4B6EB10", Slot = "55")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4B6EB40", Offset = "0x4B6EB40", VA = "0x4B6EB40", Slot = "56")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4B6EB60", Offset = "0x4B6EB60", VA = "0x4B6EB60", Slot = "57")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4B6EB80", Offset = "0x4B6EB80", VA = "0x4B6EB80", Slot = "58")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4B6EBB0", Offset = "0x4B6EBB0", VA = "0x4B6EBB0", Slot = "59")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4B6EBE0", Offset = "0x4B6EBE0", VA = "0x4B6EBE0", Slot = "60")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4B6EC00", Offset = "0x4B6EC00", VA = "0x4B6EC00", Slot = "61")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4B6EC30", Offset = "0x4B6EC30", VA = "0x4B6EC30", Slot = "62")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4B6EC60", Offset = "0x4B6EC60", VA = "0x4B6EC60", Slot = "63")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4B6EC80", Offset = "0x4B6EC80", VA = "0x4B6EC80", Slot = "64")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4B6ECA0", Offset = "0x4B6ECA0", VA = "0x4B6ECA0", Slot = "103")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4B6ECC0", Offset = "0x4B6ECC0", VA = "0x4B6ECC0", Slot = "104")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4B6ECE0", Offset = "0x4B6ECE0", VA = "0x4B6ECE0", Slot = "105")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4B6ED00", Offset = "0x4B6ED00", VA = "0x4B6ED00", Slot = "106")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4B6ED20", Offset = "0x4B6ED20", VA = "0x4B6ED20", Slot = "107")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4B6ED40", Offset = "0x4B6ED40", VA = "0x4B6ED40", Slot = "108")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4B6EDC0", Offset = "0x4B6EDC0", VA = "0x4B6EDC0", Slot = "109")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4B6EDE0", Offset = "0x4B6EDE0", VA = "0x4B6EDE0", Slot = "110")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4B6EE00", Offset = "0x4B6EE00", VA = "0x4B6EE00", Slot = "111")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4B6EE20", Offset = "0x4B6EE20", VA = "0x4B6EE20", Slot = "112")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4B6EE40", Offset = "0x4B6EE40", VA = "0x4B6EE40", Slot = "113")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4B6EE60", Offset = "0x4B6EE60", VA = "0x4B6EE60", Slot = "114")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4B6EE80", Offset = "0x4B6EE80", VA = "0x4B6EE80", Slot = "115")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4B6EEA0", Offset = "0x4B6EEA0", VA = "0x4B6EEA0", Slot = "116")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4B6EEC0", Offset = "0x4B6EEC0", VA = "0x4B6EEC0", Slot = "117")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4B6EEE0", Offset = "0x4B6EEE0", VA = "0x4B6EEE0", Slot = "118")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4B6EFB0", Offset = "0x4B6EFB0", VA = "0x4B6EFB0", Slot = "119")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4B6F080", Offset = "0x4B6F080", VA = "0x4B6F080", Slot = "120")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4B6F150", Offset = "0x4B6F150", VA = "0x4B6F150", Slot = "121")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4B6F220", Offset = "0x4B6F220", VA = "0x4B6F220", Slot = "122")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4B6F240", Offset = "0x4B6F240", VA = "0x4B6F240", Slot = "123")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4B6F260", Offset = "0x4B6F260", VA = "0x4B6F260", Slot = "124")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4B6F280", Offset = "0x4B6F280", VA = "0x4B6F280", Slot = "125")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4B6F2A0", Offset = "0x4B6F2A0", VA = "0x4B6F2A0", Slot = "126")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4B6F2C0", Offset = "0x4B6F2C0", VA = "0x4B6F2C0", Slot = "127")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4B6F2E0", Offset = "0x4B6F2E0", VA = "0x4B6F2E0", Slot = "128")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4B6F300", Offset = "0x4B6F300", VA = "0x4B6F300", Slot = "129")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4B6F320", Offset = "0x4B6F320", VA = "0x4B6F320", Slot = "130")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4B6F380", Offset = "0x4B6F380", VA = "0x4B6F380", Slot = "131")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4B6F3A0", Offset = "0x4B6F3A0", VA = "0x4B6F3A0", Slot = "132")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x4B6F3C0", Offset = "0x4B6F3C0", VA = "0x4B6F3C0", Slot = "133")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4B6F3E0", Offset = "0x4B6F3E0", VA = "0x4B6F3E0", Slot = "134")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4B6F4A0", Offset = "0x4B6F4A0", VA = "0x4B6F4A0", Slot = "135")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
