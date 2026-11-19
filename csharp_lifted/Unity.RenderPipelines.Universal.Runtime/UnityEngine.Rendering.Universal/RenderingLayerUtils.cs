// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingLayerUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000195")]
internal static class RenderingLayerUtils
{
	[Token(Token = "0x2000196")]
	public enum Event
	{
		[Token(Token = "0x40008F1")]
		DepthNormalPrePass,
		[Token(Token = "0x40008F2")]
		Opaque
	}

	[Token(Token = "0x2000197")]
	public enum MaskSize
	{
		[Token(Token = "0x40008F4")]
		Bits8,
		[Token(Token = "0x40008F5")]
		Bits16,
		[Token(Token = "0x40008F6")]
		Bits24,
		[Token(Token = "0x40008F7")]
		Bits32
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x66819E0", Offset = "0x66809E0", VA = "0x66819E0")]
	public static void CombineRendererEvents(bool isDeferred, int msaaSampleCount, Event rendererEvent, ref Event combinedEvent)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x6681A10", Offset = "0x6680A10", VA = "0x6681A10")]
	public static bool RequireRenderingLayers(UniversalRenderer universalRenderer, List<ScriptableRendererFeature> rendererFeatures, int msaaSampleCount, out Event combinedEvent, out MaskSize combinedMaskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x6681A70", Offset = "0x6680A70", VA = "0x6681A70")]
	internal static bool RequireRenderingLayers(List<ScriptableRendererFeature> rendererFeatures, RenderingMode renderingMode, bool accurateGbufferNormals, int msaaSampleCount, out Event combinedEvent, out MaskSize combinedMaskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x6681D90", Offset = "0x6680D90", VA = "0x6681D90")]
	public static void SetupProperties(CommandBuffer cmd, MaskSize maskSize)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x6681EA0", Offset = "0x6680EA0", VA = "0x6681EA0")]
	internal static void SetupProperties(RasterCommandBuffer cmd, MaskSize maskSize)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x6681FD0", Offset = "0x6680FD0", VA = "0x6681FD0")]
	public static GraphicsFormat GetFormat(MaskSize maskSize)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x6682020", Offset = "0x6681020", VA = "0x6682020")]
	public static uint ToValidRenderingLayers(uint renderingLayers)
	{
		return default(uint);
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x6681D60", Offset = "0x6680D60", VA = "0x6681D60")]
	private static MaskSize GetMaskSize(int bits)
	{
		return default(MaskSize);
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x6681F80", Offset = "0x6680F80", VA = "0x6681F80")]
	private static int GetBits(MaskSize maskSize)
	{
		return default(int);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x6681A00", Offset = "0x6680A00", VA = "0x6681A00")]
	private static Event Combine(Event a, Event b)
	{
		return default(Event);
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x6681D50", Offset = "0x6680D50", VA = "0x6681D50")]
	private static MaskSize Combine(MaskSize a, MaskSize b)
	{
		return default(MaskSize);
	}
}
