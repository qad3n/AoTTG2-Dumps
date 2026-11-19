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
	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x696B620", Offset = "0x696A620", VA = "0x696B620")]
	public static LightMode Extract(LightmapBakeType baketype)
	{
		return default(LightMode);
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x696B640", Offset = "0x696A640", VA = "0x696B640")]
	public static LinearColor ExtractIndirect(Light l)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x696B6A0", Offset = "0x696A6A0", VA = "0x696B6A0")]
	public static float ExtractInnerCone(Light l)
	{
		return default(float);
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x696B6F0", Offset = "0x696A6F0", VA = "0x696B6F0")]
	private static Color ExtractColorTemperature(Light l)
	{
		return default(Color);
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x696B780", Offset = "0x696A780", VA = "0x696B780")]
	private static void ApplyColorTemperature(Color cct, ref LinearColor lightColor)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x696B7F0", Offset = "0x696A7F0", VA = "0x696B7F0")]
	public static void Extract(Light l, ref DirectionalLight dir)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x696BAA0", Offset = "0x696AAA0", VA = "0x696BAA0")]
	public static void Extract(Light l, ref PointLight point)
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x696BD60", Offset = "0x696AD60", VA = "0x696BD60")]
	public static void Extract(Light l, ref SpotLight spot)
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x696C080", Offset = "0x696B080", VA = "0x696C080")]
	public static void Extract(Light l, ref RectangleLight rect)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x696C340", Offset = "0x696B340", VA = "0x696C340")]
	public static void Extract(Light l, ref DiscLight disc)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x696C600", Offset = "0x696B600", VA = "0x696C600")]
	public static void Extract(Light l, out Cookie cookie)
	{
	}
}
