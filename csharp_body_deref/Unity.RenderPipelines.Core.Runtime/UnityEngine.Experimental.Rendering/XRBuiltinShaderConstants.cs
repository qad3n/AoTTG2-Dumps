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
	[Address(RVA = "0x484C270", Offset = "0x484C270", VA = "0x484C270")]
	public static void UpdateBuiltinShaderConstants(Matrix4x4 viewMatrix, Matrix4x4 projMatrix, bool renderIntoTexture, int viewIndex)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x484CDA0", Offset = "0x484CDA0", VA = "0x484CDA0")]
	public static void SetBuiltinShaderConstants(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x484CF10", Offset = "0x484CF10", VA = "0x484CF10")]
	public static void SetBuiltinShaderConstants(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x484CF70", Offset = "0x484CF70", VA = "0x484CF70")]
	public static void Update(XRPass xrPass, CommandBuffer cmd, bool renderIntoTexture)
	{
	}
}
