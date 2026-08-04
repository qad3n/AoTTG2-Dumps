// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRBuiltinShaderConstants
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000012")]
public static class XRBuiltinShaderConstants
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int unity_StereoCameraProjection;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int unity_StereoCameraInvProjection;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int unity_StereoMatrixV;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0xC")]
	public static readonly int unity_StereoMatrixInvV;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int unity_StereoMatrixP;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x14")]
	public static readonly int unity_StereoMatrixInvP;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x18")]
	public static readonly int unity_StereoMatrixVP;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x1C")]
	public static readonly int unity_StereoMatrixInvVP;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x20")]
	public static readonly int unity_StereoWorldSpaceCameraPos;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x28")]
	private static Matrix4x4[] s_cameraProjMatrix;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x30")]
	private static Matrix4x4[] s_invCameraProjMatrix;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x38")]
	private static Matrix4x4[] s_viewMatrix;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x40")]
	private static Matrix4x4[] s_invViewMatrix;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x48")]
	private static Matrix4x4[] s_projMatrix;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x50")]
	private static Matrix4x4[] s_invProjMatrix;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x58")]
	private static Matrix4x4[] s_viewProjMatrix;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x60")]
	private static Matrix4x4[] s_invViewProjMatrix;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x68")]
	private static Vector4[] s_worldSpaceCameraPos;

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4B71360", Offset = "0x4B71360", VA = "0x4B71360")]
	public static void UpdateBuiltinShaderConstants(Matrix4x4 viewMatrix, Matrix4x4 projMatrix, bool renderIntoTexture, int viewIndex)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4B71E90", Offset = "0x4B71E90", VA = "0x4B71E90")]
	public static void SetBuiltinShaderConstants(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4B72000", Offset = "0x4B72000", VA = "0x4B72000")]
	public static void SetBuiltinShaderConstants(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4B72060", Offset = "0x4B72060", VA = "0x4B72060")]
	public static void Update(XRPass xrPass, CommandBuffer cmd, bool renderIntoTexture)
	{
	}
}
