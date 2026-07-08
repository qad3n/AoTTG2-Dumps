using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000341")]
public static class LightmapperUtils
{
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x4B114D0", Offset = "0x4B114D0", VA = "0x4B114D0")]
	public static LightMode Extract(LightmapBakeType baketype)
	{
		return default(LightMode);
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x4B114F0", Offset = "0x4B114F0", VA = "0x4B114F0")]
	public static LinearColor ExtractIndirect(Light l)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x4B11550", Offset = "0x4B11550", VA = "0x4B11550")]
	public static float ExtractInnerCone(Light l)
	{
		return default(float);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x4B115A0", Offset = "0x4B115A0", VA = "0x4B115A0")]
	private static Color ExtractColorTemperature(Light l)
	{
		return default(Color);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x4B115F0", Offset = "0x4B115F0", VA = "0x4B115F0")]
	private static void ApplyColorTemperature(Color cct, ref LinearColor lightColor)
	{
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x4B11640", Offset = "0x4B11640", VA = "0x4B11640")]
	public static void Extract(Light l, ref DirectionalLight dir)
	{
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x4B118A0", Offset = "0x4B118A0", VA = "0x4B118A0")]
	public static void Extract(Light l, ref PointLight point)
	{
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4B11B20", Offset = "0x4B11B20", VA = "0x4B11B20")]
	public static void Extract(Light l, ref SpotLight spot)
	{
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x4B11DF0", Offset = "0x4B11DF0", VA = "0x4B11DF0")]
	public static void Extract(Light l, ref RectangleLight rect)
	{
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x4B12070", Offset = "0x4B12070", VA = "0x4B12070")]
	public static void Extract(Light l, ref DiscLight disc)
	{
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4B122F0", Offset = "0x4B122F0", VA = "0x4B122F0")]
	public static void Extract(Light l, out Cookie cookie)
	{
	}
}
