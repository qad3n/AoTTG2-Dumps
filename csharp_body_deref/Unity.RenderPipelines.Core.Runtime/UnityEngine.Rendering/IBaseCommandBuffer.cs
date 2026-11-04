// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IBaseCommandBuffer
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

[Token(Token = "0x2000020")]
public interface IBaseCommandBuffer
{
	[Token(Token = "0x6000194")]
	void SetInvertCulling(bool invertCulling);

	[Token(Token = "0x6000195")]
	void SetViewport(Rect pixelRect);

	[Token(Token = "0x6000196")]
	void EnableScissorRect(Rect scissor);

	[Token(Token = "0x6000197")]
	void DisableScissorRect();

	[Token(Token = "0x6000198")]
	void SetGlobalFloat(int nameID, float value);

	[Token(Token = "0x6000199")]
	void SetGlobalInt(int nameID, int value);

	[Token(Token = "0x600019A")]
	void SetGlobalInteger(int nameID, int value);

	[Token(Token = "0x600019B")]
	void SetGlobalVector(int nameID, Vector4 value);

	[Token(Token = "0x600019C")]
	void SetGlobalColor(int nameID, Color value);

	[Token(Token = "0x600019D")]
	void SetGlobalMatrix(int nameID, Matrix4x4 value);

	[Token(Token = "0x600019E")]
	void EnableShaderKeyword(string keyword);

	[Token(Token = "0x600019F")]
	void EnableKeyword(in GlobalKeyword keyword);

	[Token(Token = "0x60001A0")]
	void EnableKeyword(Material material, in LocalKeyword keyword);

	[Token(Token = "0x60001A1")]
	void EnableKeyword(ComputeShader computeShader, in LocalKeyword keyword);

	[Token(Token = "0x60001A2")]
	void DisableShaderKeyword(string keyword);

	[Token(Token = "0x60001A3")]
	void DisableKeyword(in GlobalKeyword keyword);

	[Token(Token = "0x60001A4")]
	void DisableKeyword(Material material, in LocalKeyword keyword);

	[Token(Token = "0x60001A5")]
	void DisableKeyword(ComputeShader computeShader, in LocalKeyword keyword);

	[Token(Token = "0x60001A6")]
	void SetKeyword(in GlobalKeyword keyword, bool value);

	[Token(Token = "0x60001A7")]
	void SetKeyword(Material material, in LocalKeyword keyword, bool value);

	[Token(Token = "0x60001A8")]
	void SetKeyword(ComputeShader computeShader, in LocalKeyword keyword, bool value);

	[Token(Token = "0x60001A9")]
	void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj);

	[Token(Token = "0x60001AA")]
	void SetGlobalDepthBias(float bias, float slopeBias);

	[Token(Token = "0x60001AB")]
	void SetGlobalFloatArray(int nameID, float[] values);

	[Token(Token = "0x60001AC")]
	void SetGlobalVectorArray(int nameID, Vector4[] values);

	[Token(Token = "0x60001AD")]
	void SetGlobalMatrixArray(int nameID, Matrix4x4[] values);

	[Token(Token = "0x60001AE")]
	void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat);

	[Token(Token = "0x60001AF")]
	void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[Token(Token = "0x60001B0")]
	void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType);

	[Token(Token = "0x60001B1")]
	void BeginSample(string name);

	[Token(Token = "0x60001B2")]
	void EndSample(string name);

	[Token(Token = "0x60001B3")]
	void BeginSample(CustomSampler sampler);

	[Token(Token = "0x60001B4")]
	void EndSample(CustomSampler sampler);

	[Token(Token = "0x60001B5")]
	void BeginSample(ProfilerMarker marker);

	[Token(Token = "0x60001B6")]
	void EndSample(ProfilerMarker marker);

	[Token(Token = "0x60001B7")]
	void IncrementUpdateCount(RenderTargetIdentifier dest);

	[Token(Token = "0x60001B8")]
	void SetupCameraProperties(Camera camera);

	[Token(Token = "0x60001B9")]
	void InvokeOnRenderObjectCallbacks();

	[Token(Token = "0x60001BA")]
	void SetGlobalFloat(string name, float value);

	[Token(Token = "0x60001BB")]
	void SetGlobalInt(string name, int value);

	[Token(Token = "0x60001BC")]
	void SetGlobalInteger(string name, int value);

	[Token(Token = "0x60001BD")]
	void SetGlobalVector(string name, Vector4 value);

	[Token(Token = "0x60001BE")]
	void SetGlobalColor(string name, Color value);

	[Token(Token = "0x60001BF")]
	void SetGlobalMatrix(string name, Matrix4x4 value);

	[Token(Token = "0x60001C0")]
	void SetGlobalFloatArray(string propertyName, List<float> values);

	[Token(Token = "0x60001C1")]
	void SetGlobalFloatArray(int nameID, List<float> values);

	[Token(Token = "0x60001C2")]
	void SetGlobalFloatArray(string propertyName, float[] values);

	[Token(Token = "0x60001C3")]
	void SetGlobalVectorArray(string propertyName, List<Vector4> values);

	[Token(Token = "0x60001C4")]
	void SetGlobalVectorArray(int nameID, List<Vector4> values);

	[Token(Token = "0x60001C5")]
	void SetGlobalVectorArray(string propertyName, Vector4[] values);

	[Token(Token = "0x60001C6")]
	void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values);

	[Token(Token = "0x60001C7")]
	void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values);

	[Token(Token = "0x60001C8")]
	void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values);

	[Token(Token = "0x60001C9")]
	void SetGlobalTexture(string name, TextureHandle value);

	[Token(Token = "0x60001CA")]
	void SetGlobalTexture(int nameID, TextureHandle value);

	[Token(Token = "0x60001CB")]
	void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element);

	[Token(Token = "0x60001CC")]
	void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element);

	[Token(Token = "0x60001CD")]
	void SetGlobalBuffer(string name, ComputeBuffer value);

	[Token(Token = "0x60001CE")]
	void SetGlobalBuffer(int nameID, ComputeBuffer value);

	[Token(Token = "0x60001CF")]
	void SetGlobalBuffer(string name, GraphicsBuffer value);

	[Token(Token = "0x60001D0")]
	void SetGlobalBuffer(int nameID, GraphicsBuffer value);

	[Token(Token = "0x60001D1")]
	void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x60001D2")]
	void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size);

	[Token(Token = "0x60001D3")]
	void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x60001D4")]
	void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size);

	[Token(Token = "0x60001D5")]
	void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[Token(Token = "0x60001D6")]
	void SetSinglePassStereo(SinglePassStereoMode mode);

	[Token(Token = "0x60001D7")]
	void IssuePluginEvent(IntPtr callback, int eventID);

	[Token(Token = "0x60001D8")]
	void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data);

	[Token(Token = "0x60001D9")]
	void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[Token(Token = "0x60001DA")]
	void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData);
}
