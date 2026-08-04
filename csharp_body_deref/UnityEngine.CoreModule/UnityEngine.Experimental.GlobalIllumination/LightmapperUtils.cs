// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000344")]
public static class LightmapperUtils
{
	[Token(Token = "0x6001182")]
	[Address(RVA = "0x4E38E00", Offset = "0x4E38E00", VA = "0x4E38E00")]
	public static LightMode Extract(LightmapBakeType baketype)
	{
		return default(LightMode);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x4E38E20", Offset = "0x4E38E20", VA = "0x4E38E20")]
	public static LinearColor ExtractIndirect(Light l)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x4E38E80", Offset = "0x4E38E80", VA = "0x4E38E80")]
	public static float ExtractInnerCone(Light l)
	{
		return default(float);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x4E38ED0", Offset = "0x4E38ED0", VA = "0x4E38ED0")]
	private static Color ExtractColorTemperature(Light l)
	{
		return default(Color);
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x4E38F20", Offset = "0x4E38F20", VA = "0x4E38F20")]
	private static void ApplyColorTemperature(Color cct, ref LinearColor lightColor)
	{
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4E38F70", Offset = "0x4E38F70", VA = "0x4E38F70")]
	public static void Extract(Light l, ref DirectionalLight dir)
	{
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4E391D0", Offset = "0x4E391D0", VA = "0x4E391D0")]
	public static void Extract(Light l, ref PointLight point)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4E39450", Offset = "0x4E39450", VA = "0x4E39450")]
	public static void Extract(Light l, ref SpotLight spot)
	{
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4E39720", Offset = "0x4E39720", VA = "0x4E39720")]
	public static void Extract(Light l, ref RectangleLight rect)
	{
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4E399A0", Offset = "0x4E399A0", VA = "0x4E399A0")]
	public static void Extract(Light l, ref DiscLight disc)
	{
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4E39C20", Offset = "0x4E39C20", VA = "0x4E39C20")]
	public static void Extract(Light l, out Cookie cookie)
	{
	}
}
