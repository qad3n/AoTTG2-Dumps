// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRBuiltinShaderConstants
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000A")]
public static class XRBuiltinShaderConstants
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int unity_StereoCameraProjection;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int unity_StereoCameraInvProjection;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int unity_StereoMatrixV;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0xC")]
	public static readonly int unity_StereoMatrixInvV;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int unity_StereoMatrixP;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x14")]
	public static readonly int unity_StereoMatrixInvP;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x18")]
	public static readonly int unity_StereoMatrixVP;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x1C")]
	public static readonly int unity_StereoMatrixInvVP;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x20")]
	public static readonly int unity_StereoWorldSpaceCameraPos;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x24")]
	public static readonly int unity_StereoEyeIndex;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x28")]
	private static Matrix4x4[] s_cameraProjMatrix;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x30")]
	private static Matrix4x4[] s_invCameraProjMatrix;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x38")]
	private static Matrix4x4[] s_viewMatrix;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x40")]
	private static Matrix4x4[] s_invViewMatrix;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x48")]
	private static Matrix4x4[] s_projMatrix;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x50")]
	private static Matrix4x4[] s_invProjMatrix;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x58")]
	private static Matrix4x4[] s_viewProjMatrix;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x60")]
	private static Matrix4x4[] s_invViewProjMatrix;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x68")]
	private static Vector4[] s_worldSpaceCameraPos;

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2AC75E0", Offset = "0x2AC5BE0", VA = "0x182AC75E0")]
	public static void UpdateBuiltinShaderConstants(Matrix4x4 viewMatrix, Matrix4x4 projMatrix, bool renderIntoTexture, int viewIndex)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2AC7460", Offset = "0x2AC5A60", VA = "0x182AC7460")]
	public static void SetBuiltinShaderConstants(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2AC7290", Offset = "0x2AC5890", VA = "0x182AC7290")]
	public static void SetBuiltinShaderConstants(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2AC7AE0", Offset = "0x2AC60E0", VA = "0x182AC7AE0")]
	public static void Update(XRPass xrPass, CommandBuffer cmd, bool renderIntoTexture)
	{
	}
}
