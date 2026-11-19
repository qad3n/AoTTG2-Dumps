// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderGraphUtils
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66B1C80", Offset = "0x66B0C80", VA = "0x66B1C80")]
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
	[Address(RVA = "0x66B1260", Offset = "0x66B0260", VA = "0x66B1260")]
	internal static void UseDBufferIfValid(IRasterRenderGraphBuilder builder, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x66B1740", Offset = "0x66B0740", VA = "0x66B1740")]
	public static void SetGlobalTexture(RenderGraph graph, int nameId, TextureHandle handle, string passName = "Set Global Texture", [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}
}
