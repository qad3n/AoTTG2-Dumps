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
	[Address(RVA = "0x4845C90", Offset = "0x4845C90", VA = "0x4845C90")]
	internal LowLevelCommandBuffer(CommandBuffer wrapped, RenderGraphPass executingPass, bool isAsync)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4847D10", Offset = "0x4847D10", VA = "0x4847D10", Slot = "65")]
	public void SetInvertCulling(bool invertCulling)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4847D30", Offset = "0x4847D30", VA = "0x4847D30", Slot = "4")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4847D50", Offset = "0x4847D50", VA = "0x4847D50", Slot = "66")]
	public void SetViewport(Rect pixelRect)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4847D70", Offset = "0x4847D70", VA = "0x4847D70", Slot = "67")]
	public void EnableScissorRect(Rect scissor)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4847D90", Offset = "0x4847D90", VA = "0x4847D90", Slot = "68")]
	public void DisableScissorRect()
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4847DB0", Offset = "0x4847DB0", VA = "0x4847DB0", Slot = "5")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4847DD0", Offset = "0x4847DD0", VA = "0x4847DD0", Slot = "6")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4847DF0", Offset = "0x4847DF0", VA = "0x4847DF0", Slot = "7")]
	public void ClearRenderTarget(bool clearDepth, bool clearColor, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4847E10", Offset = "0x4847E10", VA = "0x4847E10", Slot = "8")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color backgroundColor, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4847E30", Offset = "0x4847E30", VA = "0x4847E30", Slot = "9")]
	public void ClearRenderTarget(RTClearFlags clearFlags, Color[] backgroundColors, float depth, uint stencil)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4847E50", Offset = "0x4847E50", VA = "0x4847E50", Slot = "69")]
	public void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4847E70", Offset = "0x4847E70", VA = "0x4847E70", Slot = "70")]
	public void SetGlobalInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4847E90", Offset = "0x4847E90", VA = "0x4847E90", Slot = "71")]
	public void SetGlobalInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4847EB0", Offset = "0x4847EB0", VA = "0x4847EB0", Slot = "72")]
	public void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4847ED0", Offset = "0x4847ED0", VA = "0x4847ED0", Slot = "73")]
	public void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4847EF0", Offset = "0x4847EF0", VA = "0x4847EF0", Slot = "74")]
	public void SetGlobalMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4847F70", Offset = "0x4847F70", VA = "0x4847F70", Slot = "75")]
	public void EnableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4847F90", Offset = "0x4847F90", VA = "0x4847F90", Slot = "76")]
	public void EnableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4847FB0", Offset = "0x4847FB0", VA = "0x4847FB0", Slot = "77")]
	public void EnableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4847FD0", Offset = "0x4847FD0", VA = "0x4847FD0", Slot = "78")]
	public void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4847FF0", Offset = "0x4847FF0", VA = "0x4847FF0", Slot = "79")]
	public void DisableShaderKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4848010", Offset = "0x4848010", VA = "0x4848010", Slot = "80")]
	public void DisableKeyword(ref GlobalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4848030", Offset = "0x4848030", VA = "0x4848030", Slot = "81")]
	public void DisableKeyword(Material material, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4848050", Offset = "0x4848050", VA = "0x4848050", Slot = "82")]
	public void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4848070", Offset = "0x4848070", VA = "0x4848070", Slot = "83")]
	public void SetKeyword(ref GlobalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4848090", Offset = "0x4848090", VA = "0x4848090", Slot = "84")]
	public void SetKeyword(Material material, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x48480B0", Offset = "0x48480B0", VA = "0x48480B0", Slot = "85")]
	public void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value)
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x48480D0", Offset = "0x48480D0", VA = "0x48480D0", Slot = "86")]
	public void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x48481E0", Offset = "0x48481E0", VA = "0x48481E0", Slot = "87")]
	public void SetGlobalDepthBias(float bias, float slopeBias)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4848200", Offset = "0x4848200", VA = "0x4848200", Slot = "88")]
	public void SetGlobalFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4848220", Offset = "0x4848220", VA = "0x4848220", Slot = "89")]
	public void SetGlobalVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4848240", Offset = "0x4848240", VA = "0x4848240", Slot = "90")]
	public void SetGlobalMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4848260", Offset = "0x4848260", VA = "0x4848260", Slot = "91")]
	public void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4848280", Offset = "0x4848280", VA = "0x4848280", Slot = "92")]
	public void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x48482A0", Offset = "0x48482A0", VA = "0x48482A0", Slot = "93")]
	public void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x48482C0", Offset = "0x48482C0", VA = "0x48482C0", Slot = "94")]
	public void BeginSample(string name)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x48482E0", Offset = "0x48482E0", VA = "0x48482E0", Slot = "95")]
	public void EndSample(string name)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4848300", Offset = "0x4848300", VA = "0x4848300", Slot = "96")]
	public void BeginSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4848320", Offset = "0x4848320", VA = "0x4848320", Slot = "97")]
	public void EndSample(CustomSampler sampler)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4848340", Offset = "0x4848340", VA = "0x4848340", Slot = "98")]
	public void BeginSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4848350", Offset = "0x4848350", VA = "0x4848350", Slot = "99")]
	public void EndSample(ProfilerMarker marker)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4848360", Offset = "0x4848360", VA = "0x4848360", Slot = "100")]
	public void IncrementUpdateCount(RenderTargetIdentifier dest)
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x48483C0", Offset = "0x48483C0", VA = "0x48483C0", Slot = "10")]
	public void SetInstanceMultiplier(uint multiplier)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x48483E0", Offset = "0x48483E0", VA = "0x48483E0", Slot = "11")]
	public void SetFoveatedRenderingMode(FoveatedRenderingMode foveatedRenderingMode)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4848400", Offset = "0x4848400", VA = "0x4848400", Slot = "12")]
	public void ConfigureFoveatedRendering(IntPtr platformData)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4848420", Offset = "0x4848420", VA = "0x4848420", Slot = "13")]
	public void SetRenderTarget(RenderTargetIdentifier rt)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4848480", Offset = "0x4848480", VA = "0x4848480", Slot = "14")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x48484E0", Offset = "0x48484E0", VA = "0x48484E0", Slot = "15")]
	public void SetRenderTarget(RenderTargetIdentifier rt, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4848540", Offset = "0x4848540", VA = "0x4848540", Slot = "16")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x48485A0", Offset = "0x48485A0", VA = "0x48485A0", Slot = "17")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4848600", Offset = "0x4848600", VA = "0x4848600", Slot = "18")]
	public void SetRenderTarget(RenderTargetIdentifier rt, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4848660", Offset = "0x4848660", VA = "0x4848660", Slot = "19")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4848720", Offset = "0x4848720", VA = "0x4848720", Slot = "20")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x48487E0", Offset = "0x48487E0", VA = "0x48487E0", Slot = "21")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x48488A0", Offset = "0x48488A0", VA = "0x48488A0", Slot = "22")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4848960", Offset = "0x4848960", VA = "0x4848960", Slot = "23")]
	public void SetRenderTarget(RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4848A20", Offset = "0x4848A20", VA = "0x4848A20", Slot = "24")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4848A80", Offset = "0x4848A80", VA = "0x4848A80", Slot = "25")]
	public void SetRenderTarget(RenderTargetIdentifier[] colors, RenderTargetIdentifier depth, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4848AE0", Offset = "0x4848AE0", VA = "0x4848AE0", Slot = "26")]
	public void SetRenderTarget(RenderTargetBinding binding, int mipLevel, CubemapFace cubemapFace, int depthSlice)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4848B90", Offset = "0x4848B90", VA = "0x4848B90", Slot = "27")]
	public void SetRenderTarget(RenderTargetBinding binding)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4848C40", Offset = "0x4848C40", VA = "0x4848C40", Slot = "101")]
	public void SetupCameraProperties(Camera camera)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4848C60", Offset = "0x4848C60", VA = "0x4848C60", Slot = "102")]
	public void InvokeOnRenderObjectCallbacks()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4848C80", Offset = "0x4848C80", VA = "0x4848C80", Slot = "28")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4848D10", Offset = "0x4848D10", VA = "0x4848D10", Slot = "29")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4848D90", Offset = "0x4848D90", VA = "0x4848D90", Slot = "30")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4848E10", Offset = "0x4848E10", VA = "0x4848E10", Slot = "31")]
	public void DrawMesh(Mesh mesh, Matrix4x4 matrix, Material material)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4848E90", Offset = "0x4848E90", VA = "0x4848E90", Slot = "32")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4848EB0", Offset = "0x4848EB0", VA = "0x4848EB0", Slot = "33")]
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4848ED0", Offset = "0x4848ED0", VA = "0x4848ED0", Slot = "34")]
	public void DrawRenderer(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4848EF0", Offset = "0x4848EF0", VA = "0x4848EF0", Slot = "35")]
	public void DrawRendererList(RendererList rendererList)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4848F40", Offset = "0x4848F40", VA = "0x4848F40", Slot = "36")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4848FE0", Offset = "0x4848FE0", VA = "0x4848FE0", Slot = "37")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount, int instanceCount)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4849070", Offset = "0x4849070", VA = "0x4849070", Slot = "38")]
	public void DrawProcedural(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int vertexCount)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x48490F0", Offset = "0x48490F0", VA = "0x48490F0", Slot = "39")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x48491A0", Offset = "0x48491A0", VA = "0x48491A0", Slot = "40")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount, int instanceCount)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4849240", Offset = "0x4849240", VA = "0x4849240", Slot = "41")]
	public void DrawProcedural(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, int indexCount)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x48492D0", Offset = "0x48492D0", VA = "0x48492D0", Slot = "42")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4849370", Offset = "0x4849370", VA = "0x4849370", Slot = "43")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4849400", Offset = "0x4849400", VA = "0x4849400", Slot = "44")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4849480", Offset = "0x4849480", VA = "0x4849480", Slot = "45")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4849530", Offset = "0x4849530", VA = "0x4849530", Slot = "46")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x48495D0", Offset = "0x48495D0", VA = "0x48495D0", Slot = "47")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4849660", Offset = "0x4849660", VA = "0x4849660", Slot = "48")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4849700", Offset = "0x4849700", VA = "0x4849700", Slot = "49")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4849790", Offset = "0x4849790", VA = "0x4849790", Slot = "50")]
	public void DrawProceduralIndirect(Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4849810", Offset = "0x4849810", VA = "0x4849810", Slot = "51")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x48498C0", Offset = "0x48498C0", VA = "0x48498C0", Slot = "52")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4849960", Offset = "0x4849960", VA = "0x4849960", Slot = "53")]
	public void DrawProceduralIndirect(GraphicsBuffer indexBuffer, Matrix4x4 matrix, Material material, int shaderPass, MeshTopology topology, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x48499F0", Offset = "0x48499F0", VA = "0x48499F0", Slot = "54")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4849A20", Offset = "0x4849A20", VA = "0x4849A20", Slot = "55")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices, int count)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4849A50", Offset = "0x4849A50", VA = "0x4849A50", Slot = "56")]
	public void DrawMeshInstanced(Mesh mesh, int submeshIndex, Material material, int shaderPass, Matrix4x4[] matrices)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4849A70", Offset = "0x4849A70", VA = "0x4849A70", Slot = "57")]
	public void DrawMeshInstancedProcedural(Mesh mesh, int submeshIndex, Material material, int shaderPass, int count, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4849A90", Offset = "0x4849A90", VA = "0x4849A90", Slot = "58")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4849AC0", Offset = "0x4849AC0", VA = "0x4849AC0", Slot = "59")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4849AF0", Offset = "0x4849AF0", VA = "0x4849AF0", Slot = "60")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, ComputeBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4849B10", Offset = "0x4849B10", VA = "0x4849B10", Slot = "61")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset, MaterialPropertyBlock properties)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4849B40", Offset = "0x4849B40", VA = "0x4849B40", Slot = "62")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs, int argsOffset)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4849B70", Offset = "0x4849B70", VA = "0x4849B70", Slot = "63")]
	public void DrawMeshInstancedIndirect(Mesh mesh, int submeshIndex, Material material, int shaderPass, GraphicsBuffer bufferWithArgs)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4849B90", Offset = "0x4849B90", VA = "0x4849B90", Slot = "64")]
	public void DrawOcclusionMesh(RectInt normalizedCamViewport)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4849BB0", Offset = "0x4849BB0", VA = "0x4849BB0", Slot = "103")]
	public void SetGlobalFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4849BD0", Offset = "0x4849BD0", VA = "0x4849BD0", Slot = "104")]
	public void SetGlobalInt(string name, int value)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4849BF0", Offset = "0x4849BF0", VA = "0x4849BF0", Slot = "105")]
	public void SetGlobalInteger(string name, int value)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4849C10", Offset = "0x4849C10", VA = "0x4849C10", Slot = "106")]
	public void SetGlobalVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4849C30", Offset = "0x4849C30", VA = "0x4849C30", Slot = "107")]
	public void SetGlobalColor(string name, Color value)
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4849C50", Offset = "0x4849C50", VA = "0x4849C50", Slot = "108")]
	public void SetGlobalMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4849CD0", Offset = "0x4849CD0", VA = "0x4849CD0", Slot = "109")]
	public void SetGlobalFloatArray(string propertyName, List<float> values)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4849CF0", Offset = "0x4849CF0", VA = "0x4849CF0", Slot = "110")]
	public void SetGlobalFloatArray(int nameID, List<float> values)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4849D10", Offset = "0x4849D10", VA = "0x4849D10", Slot = "111")]
	public void SetGlobalFloatArray(string propertyName, float[] values)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4849D30", Offset = "0x4849D30", VA = "0x4849D30", Slot = "112")]
	public void SetGlobalVectorArray(string propertyName, List<Vector4> values)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4849D50", Offset = "0x4849D50", VA = "0x4849D50", Slot = "113")]
	public void SetGlobalVectorArray(int nameID, List<Vector4> values)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4849D70", Offset = "0x4849D70", VA = "0x4849D70", Slot = "114")]
	public void SetGlobalVectorArray(string propertyName, Vector4[] values)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4849D90", Offset = "0x4849D90", VA = "0x4849D90", Slot = "115")]
	public void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4849DB0", Offset = "0x4849DB0", VA = "0x4849DB0", Slot = "116")]
	public void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4849DD0", Offset = "0x4849DD0", VA = "0x4849DD0", Slot = "117")]
	public void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4849DF0", Offset = "0x4849DF0", VA = "0x4849DF0", Slot = "118")]
	public void SetGlobalTexture(string name, TextureHandle value)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4849EC0", Offset = "0x4849EC0", VA = "0x4849EC0", Slot = "119")]
	public void SetGlobalTexture(int nameID, TextureHandle value)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4849F90", Offset = "0x4849F90", VA = "0x4849F90", Slot = "120")]
	public void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x484A060", Offset = "0x484A060", VA = "0x484A060", Slot = "121")]
	public void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x484A130", Offset = "0x484A130", VA = "0x484A130", Slot = "122")]
	public void SetGlobalBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x484A150", Offset = "0x484A150", VA = "0x484A150", Slot = "123")]
	public void SetGlobalBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x484A170", Offset = "0x484A170", VA = "0x484A170", Slot = "124")]
	public void SetGlobalBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x484A190", Offset = "0x484A190", VA = "0x484A190", Slot = "125")]
	public void SetGlobalBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x484A1B0", Offset = "0x484A1B0", VA = "0x484A1B0", Slot = "126")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x484A1D0", Offset = "0x484A1D0", VA = "0x484A1D0", Slot = "127")]
	public void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x484A1F0", Offset = "0x484A1F0", VA = "0x484A1F0", Slot = "128")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x484A210", Offset = "0x484A210", VA = "0x484A210", Slot = "129")]
	public void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x484A230", Offset = "0x484A230", VA = "0x484A230", Slot = "130")]
	public void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x484A290", Offset = "0x484A290", VA = "0x484A290", Slot = "131")]
	public void SetSinglePassStereo(SinglePassStereoMode mode)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x484A2B0", Offset = "0x484A2B0", VA = "0x484A2B0", Slot = "132")]
	public void IssuePluginEvent(IntPtr callback, int eventID)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x484A2D0", Offset = "0x484A2D0", VA = "0x484A2D0", Slot = "133")]
	public void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x484A2F0", Offset = "0x484A2F0", VA = "0x484A2F0", Slot = "134")]
	public void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x484A3B0", Offset = "0x484A3B0", VA = "0x484A3B0", Slot = "135")]
	public void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData)
	{
	}
}
