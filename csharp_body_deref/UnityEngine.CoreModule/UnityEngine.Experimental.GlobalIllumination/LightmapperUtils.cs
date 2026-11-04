// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x20003EB")]
public static class LightmapperUtils
{
	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x2F78C60", Offset = "0x2F77260", VA = "0x182F78C60")]
	public static LightMode Extract(LightmapBakeType baketype)
	{
		return default(LightMode);
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x2F78330", Offset = "0x2F76930", VA = "0x182F78330")]
	public static LinearColor ExtractIndirect(Light l)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x2F783C0", Offset = "0x2F769C0", VA = "0x182F783C0")]
	public static float ExtractInnerCone(Light l)
	{
		return default(float);
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x2F78220", Offset = "0x2F76820", VA = "0x182F78220")]
	private static Color ExtractColorTemperature(Light l)
	{
		return default(Color);
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x2F781B0", Offset = "0x2F767B0", VA = "0x182F781B0")]
	private static void ApplyColorTemperature(Color cct, ref LinearColor lightColor)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x2F786E0", Offset = "0x2F76CE0", VA = "0x182F786E0")]
	public static void Extract(Light l, ref DirectionalLight dir)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x2F78990", Offset = "0x2F76F90", VA = "0x182F78990")]
	public static void Extract(Light l, ref PointLight point)
	{
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x2F78C80", Offset = "0x2F77280", VA = "0x182F78C80")]
	public static void Extract(Light l, ref SpotLight spot)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x2F78410", Offset = "0x2F76A10", VA = "0x182F78410")]
	public static void Extract(Light l, ref RectangleLight rect)
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x2F78FA0", Offset = "0x2F775A0", VA = "0x182F78FA0")]
	public static void Extract(Light l, ref DiscLight disc)
	{
	}

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x2F79270", Offset = "0x2F77870", VA = "0x182F79270")]
	public static void Extract(Light l, out Cookie cookie)
	{
	}
}
