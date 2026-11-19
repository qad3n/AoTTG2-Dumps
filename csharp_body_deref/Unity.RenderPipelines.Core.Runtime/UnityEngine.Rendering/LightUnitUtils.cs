// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LightUnitUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001E2")]
public static class LightUnitUtils
{
	[Token(Token = "0x400094C")]
	public const float SphereSolidAngle = (float)Math.PI * 4f;

	[Token(Token = "0x170001D8")]
	private static float k_LuminanceToEvFactor
	{
		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x654D3B0", Offset = "0x654C3B0", VA = "0x654D3B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D9")]
	private static float k_EvToLuminanceFactor
	{
		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x654D4C0", Offset = "0x654C4C0", VA = "0x654D4C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x654D4D0", Offset = "0x654C4D0", VA = "0x654D4D0")]
	public static LightUnit GetNativeLightUnit(LightType lightType)
	{
		return default(LightUnit);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x654D520", Offset = "0x654C520", VA = "0x654D520")]
	public static bool IsLightUnitSupported(LightType lightType, LightUnit lightUnit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x654D560", Offset = "0x654C560", VA = "0x654D560")]
	public static float GetSolidAngleFromPointLight()
	{
		return default(float);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x654D570", Offset = "0x654C570", VA = "0x654D570")]
	public static float GetSolidAngleFromSpotLight(float spotAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x654D600", Offset = "0x654C600", VA = "0x654D600")]
	public static float GetSolidAngleFromPyramidLight(float spotAngle, float aspectRatio)
	{
		return default(float);
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x654D700", Offset = "0x654C700", VA = "0x654D700")]
	internal static float GetSolidAngle(LightType lightType, bool spotReflector, float spotAngle, float aspectRatio)
	{
		return default(float);
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x654D950", Offset = "0x654C950", VA = "0x654D950")]
	public static float GetAreaFromRectangleLight(float rectSizeX, float rectSizeY)
	{
		return default(float);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x654D970", Offset = "0x654C970", VA = "0x654D970")]
	public static float GetAreaFromRectangleLight(Vector2 rectSize)
	{
		return default(float);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x654D990", Offset = "0x654C990", VA = "0x654D990")]
	public static float GetAreaFromDiscLight(float discRadius)
	{
		return default(float);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x654D9B0", Offset = "0x654C9B0", VA = "0x654D9B0")]
	public static float GetAreaFromTubeLight(float tubeLength)
	{
		return default(float);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x654D9D0", Offset = "0x654C9D0", VA = "0x654D9D0")]
	public static float LumenToCandela(float lumen, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x654D9E0", Offset = "0x654C9E0", VA = "0x654D9E0")]
	public static float CandelaToLumen(float candela, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x654D9F0", Offset = "0x654C9F0", VA = "0x654D9F0")]
	public static float LumenToNits(float lumen, float area)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x654DA00", Offset = "0x654CA00", VA = "0x654DA00")]
	public static float NitsToLumen(float nits, float area)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x654DA10", Offset = "0x654CA10", VA = "0x654DA10")]
	public static float LuxToCandela(float lux, float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x654DA20", Offset = "0x654CA20", VA = "0x654DA20")]
	public static float CandelaToLux(float candela, float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x654DA30", Offset = "0x654CA30", VA = "0x654DA30")]
	public static float Ev100ToNits(float ev100)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x654DA50", Offset = "0x654CA50", VA = "0x654DA50")]
	public static float NitsToEv100(float nits)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x654DAE0", Offset = "0x654CAE0", VA = "0x654DAE0")]
	public static float Ev100ToCandela(float ev100)
	{
		return default(float);
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x654DB00", Offset = "0x654CB00", VA = "0x654DB00")]
	public static float CandelaToEv100(float candela)
	{
		return default(float);
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x654DB90", Offset = "0x654CB90", VA = "0x654DB90")]
	internal static float ConvertIntensityInternal(float intensity, LightUnit fromUnit, LightUnit toUnit, LightType lightType, float area, float luxAtDistance, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x654E140", Offset = "0x654D140", VA = "0x654E140")]
	public static float ConvertIntensity(Light light, float intensity, LightUnit fromUnit, LightUnit toUnit)
	{
		return default(float);
	}
}
