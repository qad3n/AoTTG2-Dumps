using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.XR;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000014")]
internal static class XRMirrorView
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MaterialPropertyBlock s_MirrorViewMaterialProperty;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilingSampler k_MirrorViewProfilingSampler;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int k_SourceTex;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int k_SourceTexArraySlice;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int k_ScaleBias;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int k_ScaleBiasRt;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int k_SRGBRead;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int k_SRGBWrite;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int k_MaxNits;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int k_SourceMaxNits;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int k_SourceHDREncoding;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int k_ColorTransform;

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x484FE70", Offset = "0x484FE70", VA = "0x484FE70")]
	internal static void RenderMirrorView(CommandBuffer cmd, Camera camera, Material mat, XRDisplaySubsystem display)
	{
	}
}
