// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StpUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001AC")]
internal static class StpUtils
{
	[Token(Token = "0x400093B")]
	[FieldOffset(Offset = "0x0")]
	internal static TemporalAA.JitterFunc s_JitterFunc;

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x2C97FE0", Offset = "0x2C965E0", VA = "0x182C97FE0")]
	private static void CalculateJitter(int frameIndex, out Vector2 jitter, out bool allowScaling)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x2C98390", Offset = "0x2C96990", VA = "0x182C98390")]
	private static void PopulateStpConfig(UniversalCameraData cameraData, TextureHandle inputColor, TextureHandle inputDepth, TextureHandle inputMotion, int debugViewIndex, TextureHandle debugView, TextureHandle destination, Texture2D noiseTexture, out STP.Config config)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2C98070", Offset = "0x2C96670", VA = "0x182C98070")]
	internal static void Execute(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, TextureHandle inputColor, TextureHandle inputDepth, TextureHandle inputMotion, TextureHandle destination, Texture2D noiseTexture)
	{
	}
}
