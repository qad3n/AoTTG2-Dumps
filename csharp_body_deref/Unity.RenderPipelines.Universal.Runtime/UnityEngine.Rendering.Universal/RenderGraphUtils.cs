// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderGraphUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F6")]
internal static class RenderGraphUtils
{
	[Token(Token = "0x20001F7")]
	private class PassData
	{
		[Token(Token = "0x4000BF3")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle texture;

		[Token(Token = "0x4000BF4")]
		[FieldOffset(Offset = "0x20")]
		internal int nameID;

		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000BEF")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilingSampler s_SetGlobalTextureProfilingSampler;

	[Token(Token = "0x4000BF0")]
	internal const int GBufferSize = 7;

	[Token(Token = "0x4000BF1")]
	internal const int DBufferSize = 3;

	[Token(Token = "0x4000BF2")]
	internal const int LightTextureSize = 4;

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2CC5B00", Offset = "0x2CC4100", VA = "0x182CC5B00")]
	internal static void UseDBufferIfValid(IRasterRenderGraphBuilder builder, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x2CC5780", Offset = "0x2CC3D80", VA = "0x182CC5780")]
	public static void SetGlobalTexture(RenderGraph graph, int nameId, TextureHandle handle, string passName = "Set Global Texture", [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}
}
