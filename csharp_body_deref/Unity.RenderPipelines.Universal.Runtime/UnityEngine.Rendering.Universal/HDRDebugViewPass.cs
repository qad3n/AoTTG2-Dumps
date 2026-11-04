// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.HDRDebugViewPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000124")]
internal class HDRDebugViewPass : ScriptableRenderPass
{
	[Token(Token = "0x2000125")]
	private enum HDRDebugPassId
	{
		[Token(Token = "0x400064B")]
		CIExyPrepass,
		[Token(Token = "0x400064C")]
		DebugViewPass
	}

	[Token(Token = "0x2000126")]
	private class PassDataCIExy
	{
		[Token(Token = "0x400064D")]
		[FieldOffset(Offset = "0x10")]
		internal Material material;

		[Token(Token = "0x400064E")]
		[FieldOffset(Offset = "0x18")]
		internal Vector4 luminanceParameters;

		[Token(Token = "0x400064F")]
		[FieldOffset(Offset = "0x28")]
		internal TextureHandle srcColor;

		[Token(Token = "0x4000650")]
		[FieldOffset(Offset = "0x38")]
		internal TextureHandle xyBuffer;

		[Token(Token = "0x4000651")]
		[FieldOffset(Offset = "0x48")]
		internal TextureHandle passThrough;

		[Token(Token = "0x600071A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassDataCIExy()
		{
		}
	}

	[Token(Token = "0x2000127")]
	private class PassDataDebugView
	{
		[Token(Token = "0x4000652")]
		[FieldOffset(Offset = "0x10")]
		internal Material material;

		[Token(Token = "0x4000653")]
		[FieldOffset(Offset = "0x18")]
		internal HDRDebugMode hdrDebugMode;

		[Token(Token = "0x4000654")]
		[FieldOffset(Offset = "0x20")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000655")]
		[FieldOffset(Offset = "0x28")]
		internal Vector4 luminanceParameters;

		[Token(Token = "0x4000656")]
		[FieldOffset(Offset = "0x38")]
		internal TextureHandle xyBuffer;

		[Token(Token = "0x4000657")]
		[FieldOffset(Offset = "0x48")]
		internal TextureHandle srcColor;

		[Token(Token = "0x4000658")]
		[FieldOffset(Offset = "0x58")]
		internal TextureHandle dstColor;

		[Token(Token = "0x600071B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassDataDebugView()
		{
		}
	}

	[Token(Token = "0x2000128")]
	internal class ShaderConstants
	{
		[Token(Token = "0x4000659")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _DebugHDRModeId;

		[Token(Token = "0x400065A")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _HDRDebugParamsId;

		[Token(Token = "0x400065B")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _xyTextureId;

		[Token(Token = "0x400065C")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _SizeOfHDRXYMapping;

		[Token(Token = "0x400065D")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _CIExyUAVIndex;

		[Token(Token = "0x600071C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ShaderConstants()
		{
		}
	}

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x60")]
	private RTHandle m_PassthroughRT;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x68")]
	private Material m_material;

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x2C59BF0", Offset = "0x2C581F0", VA = "0x182C59BF0")]
	public HDRDebugViewPass(Material mat)
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x2C58210", Offset = "0x2C56810", VA = "0x182C58210")]
	public static void ConfigureDescriptorForCIEPrepass(ref RenderTextureDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x2C58AF0", Offset = "0x2C570F0", VA = "0x182C58AF0")]
	internal static Vector4 GetLuminanceParameters(UniversalCameraData cameraData)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2C582F0", Offset = "0x2C568F0", VA = "0x182C582F0")]
	private static void ExecuteCIExyPrepass(CommandBuffer cmd, PassDataCIExy data, RTHandle sourceTexture, RTHandle xyTarget, RTHandle destTexture)
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x2C585D0", Offset = "0x2C56BD0", VA = "0x182C585D0")]
	private static void ExecuteHDRDebugViewFinalPass(RasterCommandBuffer cmd, in PassDataDebugView data, RTHandle source, Vector4 scaleBias, RTHandle destination, RTHandle xyTarget)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x2C582D0", Offset = "0x2C568D0", VA = "0x182C582D0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x2C59AB0", Offset = "0x2C580B0", VA = "0x182C59AB0")]
	public void Setup(UniversalCameraData cameraData, HDRDebugMode hdrdebugMode)
	{
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x2C58C60", Offset = "0x2C57260", VA = "0x182C58C60")]
	internal void RenderHDRDebug(RenderGraph renderGraph, UniversalCameraData cameraData, TextureHandle srcColor, TextureHandle overlayUITexture, TextureHandle dstColor, HDRDebugMode hdrDebugMode)
	{
	}
}
