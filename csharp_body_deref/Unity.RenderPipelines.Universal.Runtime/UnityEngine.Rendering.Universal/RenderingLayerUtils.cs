// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingLayerUtils
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C78CB0", Offset = "0x2C772B0", VA = "0x182C78CB0")]
	public static void CombineRendererEvents(bool isDeferred, int msaaSampleCount, Event rendererEvent, ref Event combinedEvent)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x2C78E30", Offset = "0x2C77430", VA = "0x182C78E30")]
	public static bool RequireRenderingLayers(UniversalRenderer universalRenderer, List<ScriptableRendererFeature> rendererFeatures, int msaaSampleCount, out Event combinedEvent, out MaskSize combinedMaskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x2C78EB0", Offset = "0x2C774B0", VA = "0x182C78EB0")]
	internal static bool RequireRenderingLayers(List<ScriptableRendererFeature> rendererFeatures, RenderingMode renderingMode, bool accurateGbufferNormals, int msaaSampleCount, out Event combinedEvent, out MaskSize combinedMaskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x2C79280", Offset = "0x2C77880", VA = "0x182C79280")]
	public static void SetupProperties(CommandBuffer cmd, MaskSize maskSize)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x2C791A0", Offset = "0x2C777A0", VA = "0x182C791A0")]
	internal static void SetupProperties(RasterCommandBuffer cmd, MaskSize maskSize)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x2C78D70", Offset = "0x2C77370", VA = "0x182C78D70")]
	public static GraphicsFormat GetFormat(MaskSize maskSize)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x2C793A0", Offset = "0x2C779A0", VA = "0x182C793A0")]
	public static uint ToValidRenderingLayers(uint renderingLayers)
	{
		return default(uint);
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x2C78DF0", Offset = "0x2C773F0", VA = "0x182C78DF0")]
	private static MaskSize GetMaskSize(int bits)
	{
		return default(MaskSize);
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x2C78CE0", Offset = "0x2C772E0", VA = "0x182C78CE0")]
	private static int GetBits(MaskSize maskSize)
	{
		return default(int);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x669FE0", Offset = "0x6685E0", VA = "0x180669FE0")]
	private static Event Combine(Event a, Event b)
	{
		return default(Event);
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x2C78CD0", Offset = "0x2C772D0", VA = "0x182C78CD0")]
	private static MaskSize Combine(MaskSize a, MaskSize b)
	{
		return default(MaskSize);
	}
}
