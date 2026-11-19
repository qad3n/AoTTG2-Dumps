// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.StpUtils
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x668EDB0", Offset = "0x668DDB0", VA = "0x668EDB0")]
	private static void CalculateJitter(int frameIndex, out Vector2 jitter, out bool allowScaling)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x668EE10", Offset = "0x668DE10", VA = "0x668EE10")]
	private static void PopulateStpConfig(UniversalCameraData cameraData, TextureHandle inputColor, TextureHandle inputDepth, TextureHandle inputMotion, int debugViewIndex, TextureHandle debugView, TextureHandle destination, Texture2D noiseTexture, out STP.Config config)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x668F6E0", Offset = "0x668E6E0", VA = "0x668F6E0")]
	internal static void Execute(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, TextureHandle inputColor, TextureHandle inputDepth, TextureHandle inputMotion, TextureHandle destination, Texture2D noiseTexture)
	{
	}
}
