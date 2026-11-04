// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LightUnitUtils
// Update status: NEW in this game update
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
		[Address(RVA = "0x2B5D990", Offset = "0x2B5BF90", VA = "0x182B5D990")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D9")]
	private static float k_EvToLuminanceFactor
	{
		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x2B5D970", Offset = "0x2B5BF70", VA = "0x182B5D970")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x2B5D3D0", Offset = "0x2B5B9D0", VA = "0x182B5D3D0")]
	public static LightUnit GetNativeLightUnit(LightType lightType)
	{
		return default(LightUnit);
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x2B5D870", Offset = "0x2B5BE70", VA = "0x182B5D870")]
	public static bool IsLightUnitSupported(LightType lightType, LightUnit lightUnit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x2B5D470", Offset = "0x2B5BA70", VA = "0x182B5D470")]
	public static float GetSolidAngleFromPointLight()
	{
		return default(float);
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x2B5D580", Offset = "0x2B5BB80", VA = "0x182B5D580")]
	public static float GetSolidAngleFromSpotLight(float spotAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x2B5D480", Offset = "0x2B5BA80", VA = "0x182B5D480")]
	public static float GetSolidAngleFromPyramidLight(float spotAngle, float aspectRatio)
	{
		return default(float);
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x2B5D610", Offset = "0x2B5BC10", VA = "0x182B5D610")]
	internal static float GetSolidAngle(LightType lightType, bool spotReflector, float spotAngle, float aspectRatio)
	{
		return default(float);
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x2B5D370", Offset = "0x2B5B970", VA = "0x182B5D370")]
	public static float GetAreaFromRectangleLight(float rectSizeX, float rectSizeY)
	{
		return default(float);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x2B5D390", Offset = "0x2B5B990", VA = "0x182B5D390")]
	public static float GetAreaFromRectangleLight(Vector2 rectSize)
	{
		return default(float);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x2B5D350", Offset = "0x2B5B950", VA = "0x182B5D350")]
	public static float GetAreaFromDiscLight(float discRadius)
	{
		return default(float);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x2B5D3B0", Offset = "0x2B5B9B0", VA = "0x182B5D3B0")]
	public static float GetAreaFromTubeLight(float tubeLength)
	{
		return default(float);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x2B5D8E0", Offset = "0x2B5BEE0", VA = "0x182B5D8E0")]
	public static float LumenToCandela(float lumen, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x29D80F0", Offset = "0x29D66F0", VA = "0x1829D80F0")]
	public static float CandelaToLumen(float candela, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x2B5D8E0", Offset = "0x2B5BEE0", VA = "0x182B5D8E0")]
	public static float LumenToNits(float lumen, float area)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x29D80F0", Offset = "0x29D66F0", VA = "0x1829D80F0")]
	public static float NitsToLumen(float nits, float area)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x2B5D8F0", Offset = "0x2B5BEF0", VA = "0x182B5D8F0")]
	public static float LuxToCandela(float lux, float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x2B5C910", Offset = "0x2B5AF10", VA = "0x182B5C910")]
	public static float CandelaToLux(float candela, float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x2B5D310", Offset = "0x2B5B910", VA = "0x182B5D310")]
	public static float Ev100ToNits(float ev100)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x2B5D900", Offset = "0x2B5BF00", VA = "0x182B5D900")]
	public static float NitsToEv100(float nits)
	{
		return default(float);
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x2B5D310", Offset = "0x2B5B910", VA = "0x182B5D310")]
	public static float Ev100ToCandela(float ev100)
	{
		return default(float);
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x2B5C900", Offset = "0x2B5AF00", VA = "0x182B5C900")]
	public static float CandelaToEv100(float candela)
	{
		return default(float);
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x2B5C920", Offset = "0x2B5AF20", VA = "0x182B5C920")]
	internal static float ConvertIntensityInternal(float intensity, LightUnit fromUnit, LightUnit toUnit, LightType lightType, float area, float luxAtDistance, float solidAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x2B5D140", Offset = "0x2B5B740", VA = "0x182B5D140")]
	public static float ConvertIntensity(Light light, float intensity, LightUnit fromUnit, LightUnit toUnit)
	{
		return default(float);
	}
}
