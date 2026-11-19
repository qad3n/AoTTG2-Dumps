// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ClearTargetsPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F9")]
internal class ClearTargetsPass
{
	[Token(Token = "0x20001FA")]
	private class PassData
	{
		[Token(Token = "0x4000BF8")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle color;

		[Token(Token = "0x4000BF9")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle depth;

		[Token(Token = "0x4000BFA")]
		[FieldOffset(Offset = "0x30")]
		internal RTClearFlags clearFlags;

		[Token(Token = "0x4000BFB")]
		[FieldOffset(Offset = "0x34")]
		internal Color clearColor;

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x66B25F0", Offset = "0x66B15F0", VA = "0x66B25F0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilingSampler s_ClearProfilingSampler;

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x66B1D20", Offset = "0x66B0D20", VA = "0x66B1D20")]
	internal static void Render(RenderGraph graph, TextureHandle colorHandle, TextureHandle depthHandle, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x66B1E00", Offset = "0x66B0E00", VA = "0x66B1E00")]
	internal static void Render(RenderGraph graph, TextureHandle colorHandle, TextureHandle depthHandle, RTClearFlags clearFlags, Color clearColor)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x66B2550", Offset = "0x66B1550", VA = "0x66B2550")]
	public ClearTargetsPass()
	{
	}
}
