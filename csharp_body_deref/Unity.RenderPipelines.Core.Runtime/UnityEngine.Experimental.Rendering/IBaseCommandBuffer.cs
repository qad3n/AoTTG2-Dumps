using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Experimental.Rendering.RenderGraphModule;
using UnityEngine.Profiling;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000C")]
public interface IBaseCommandBuffer
{
	[Token(Token = "0x60000C7")]
	void SetInvertCulling(bool invertCulling);

	[Token(Token = "0x60000C8")]
	void SetViewport(Rect pixelRect);

	[Token(Token = "0x60000C9")]
	void EnableScissorRect(Rect scissor);

	[Token(Token = "0x60000CA")]
	void DisableScissorRect();

	[Token(Token = "0x60000CB")]
	void SetGlobalFloat(int nameID, float value);

	[Token(Token = "0x60000CC")]
	void SetGlobalInt(int nameID, int value);

	[Token(Token = "0x60000CD")]
	void SetGlobalInteger(int nameID, int value);

	[Token(Token = "0x60000CE")]
	void SetGlobalVector(int nameID, Vector4 value);

	[Token(Token = "0x60000CF")]
	void SetGlobalColor(int nameID, Color value);

	[Token(Token = "0x60000D0")]
	void SetGlobalMatrix(int nameID, Matrix4x4 value);

	[Token(Token = "0x60000D1")]
	void EnableShaderKeyword(string keyword);

	[Token(Token = "0x60000D2")]
	void EnableKeyword(ref GlobalKeyword keyword);

	[Token(Token = "0x60000D3")]
	void EnableKeyword(Material material, ref LocalKeyword keyword);

	[Token(Token = "0x60000D4")]
	void EnableKeyword(ComputeShader computeShader, ref LocalKeyword keyword);

	[Token(Token = "0x60000D5")]
	void DisableShaderKeyword(string keyword);

	[Token(Token = "0x60000D6")]
	void DisableKeyword(ref GlobalKeyword keyword);

	[Token(Token = "0x60000D7")]
	void DisableKeyword(Material material, ref LocalKeyword keyword);

	[Token(Token = "0x60000D8")]
	void DisableKeyword(ComputeShader computeShader, ref LocalKeyword keyword);

	[Token(Token = "0x60000D9")]
	void SetKeyword(ref GlobalKeyword keyword, bool value);

	[Token(Token = "0x60000DA")]
	void SetKeyword(Material material, ref LocalKeyword keyword, bool value);

	[Token(Token = "0x60000DB")]
	void SetKeyword(ComputeShader computeShader, ref LocalKeyword keyword, bool value);

	[Token(Token = "0x60000DC")]
	void SetViewProjectionMatrices(Matrix4x4 view, Matrix4x4 proj);

	[Token(Token = "0x60000DD")]
	void SetGlobalDepthBias(float bias, float slopeBias);

	[Token(Token = "0x60000DE")]
	void SetGlobalFloatArray(int nameID, float[] values);

	[Token(Token = "0x60000DF")]
	void SetGlobalVectorArray(int nameID, Vector4[] values);

	[Token(Token = "0x60000E0")]
	void SetGlobalMatrixArray(int nameID, Matrix4x4[] values);

	[Token(Token = "0x60000E1")]
	void SetLateLatchProjectionMatrices(Matrix4x4[] projectionMat);

	[Token(Token = "0x60000E2")]
	void MarkLateLatchMatrixShaderPropertyID(CameraLateLatchMatrixType matrixPropertyType, int shaderPropertyID);

	[Token(Token = "0x60000E3")]
	void UnmarkLateLatchMatrix(CameraLateLatchMatrixType matrixPropertyType);

	[Token(Token = "0x60000E4")]
	void BeginSample(string name);

	[Token(Token = "0x60000E5")]
	void EndSample(string name);

	[Token(Token = "0x60000E6")]
	void BeginSample(CustomSampler sampler);

	[Token(Token = "0x60000E7")]
	void EndSample(CustomSampler sampler);

	[Token(Token = "0x60000E8")]
	void BeginSample(ProfilerMarker marker);

	[Token(Token = "0x60000E9")]
	void EndSample(ProfilerMarker marker);

	[Token(Token = "0x60000EA")]
	void IncrementUpdateCount(RenderTargetIdentifier dest);

	[Token(Token = "0x60000EB")]
	void SetupCameraProperties(Camera camera);

	[Token(Token = "0x60000EC")]
	void InvokeOnRenderObjectCallbacks();

	[Token(Token = "0x60000ED")]
	void SetGlobalFloat(string name, float value);

	[Token(Token = "0x60000EE")]
	void SetGlobalInt(string name, int value);

	[Token(Token = "0x60000EF")]
	void SetGlobalInteger(string name, int value);

	[Token(Token = "0x60000F0")]
	void SetGlobalVector(string name, Vector4 value);

	[Token(Token = "0x60000F1")]
	void SetGlobalColor(string name, Color value);

	[Token(Token = "0x60000F2")]
	void SetGlobalMatrix(string name, Matrix4x4 value);

	[Token(Token = "0x60000F3")]
	void SetGlobalFloatArray(string propertyName, List<float> values);

	[Token(Token = "0x60000F4")]
	void SetGlobalFloatArray(int nameID, List<float> values);

	[Token(Token = "0x60000F5")]
	void SetGlobalFloatArray(string propertyName, float[] values);

	[Token(Token = "0x60000F6")]
	void SetGlobalVectorArray(string propertyName, List<Vector4> values);

	[Token(Token = "0x60000F7")]
	void SetGlobalVectorArray(int nameID, List<Vector4> values);

	[Token(Token = "0x60000F8")]
	void SetGlobalVectorArray(string propertyName, Vector4[] values);

	[Token(Token = "0x60000F9")]
	void SetGlobalMatrixArray(string propertyName, List<Matrix4x4> values);

	[Token(Token = "0x60000FA")]
	void SetGlobalMatrixArray(int nameID, List<Matrix4x4> values);

	[Token(Token = "0x60000FB")]
	void SetGlobalMatrixArray(string propertyName, Matrix4x4[] values);

	[Token(Token = "0x60000FC")]
	void SetGlobalTexture(string name, TextureHandle value);

	[Token(Token = "0x60000FD")]
	void SetGlobalTexture(int nameID, TextureHandle value);

	[Token(Token = "0x60000FE")]
	void SetGlobalTexture(string name, TextureHandle value, RenderTextureSubElement element);

	[Token(Token = "0x60000FF")]
	void SetGlobalTexture(int nameID, TextureHandle value, RenderTextureSubElement element);

	[Token(Token = "0x6000100")]
	void SetGlobalBuffer(string name, ComputeBuffer value);

	[Token(Token = "0x6000101")]
	void SetGlobalBuffer(int nameID, ComputeBuffer value);

	[Token(Token = "0x6000102")]
	void SetGlobalBuffer(string name, GraphicsBuffer value);

	[Token(Token = "0x6000103")]
	void SetGlobalBuffer(int nameID, GraphicsBuffer value);

	[Token(Token = "0x6000104")]
	void SetGlobalConstantBuffer(ComputeBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x6000105")]
	void SetGlobalConstantBuffer(ComputeBuffer buffer, string name, int offset, int size);

	[Token(Token = "0x6000106")]
	void SetGlobalConstantBuffer(GraphicsBuffer buffer, int nameID, int offset, int size);

	[Token(Token = "0x6000107")]
	void SetGlobalConstantBuffer(GraphicsBuffer buffer, string name, int offset, int size);

	[Token(Token = "0x6000108")]
	void SetShadowSamplingMode(RenderTargetIdentifier shadowmap, ShadowSamplingMode mode);

	[Token(Token = "0x6000109")]
	void SetSinglePassStereo(SinglePassStereoMode mode);

	[Token(Token = "0x600010A")]
	void IssuePluginEvent(IntPtr callback, int eventID);

	[Token(Token = "0x600010B")]
	void IssuePluginEventAndData(IntPtr callback, int eventID, IntPtr data);

	[Token(Token = "0x600010C")]
	void IssuePluginCustomBlit(IntPtr callback, uint command, RenderTargetIdentifier source, RenderTargetIdentifier dest, uint commandParam, uint commandFlags);

	[Token(Token = "0x600010D")]
	void IssuePluginCustomTextureUpdateV2(IntPtr callback, Texture targetTexture, uint userData);
}
