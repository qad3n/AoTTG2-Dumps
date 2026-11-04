// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ClearTargetsPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilingSampler s_ClearProfilingSampler;

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x2CB7AF0", Offset = "0x2CB60F0", VA = "0x182CB7AF0")]
	internal static void Render(RenderGraph graph, TextureHandle colorHandle, TextureHandle depthHandle, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x2CB75C0", Offset = "0x2CB5BC0", VA = "0x182CB75C0")]
	internal static void Render(RenderGraph graph, TextureHandle colorHandle, TextureHandle depthHandle, RTClearFlags clearFlags, Color clearColor)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ClearTargetsPass()
	{
	}
}
