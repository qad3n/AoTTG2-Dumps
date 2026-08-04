// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ColorUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A4")]
public static class ColorUtils
{
	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x0")]
	public static float s_LightMeterCalibrationConstant;

	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x4")]
	public static float s_LensAttenuation;

	[Token(Token = "0x17000176")]
	public static float lensImperfectionExposureScale
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x4BF6C70", Offset = "0x4BF6C70", VA = "0x4BF6C70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4BF6CD0", Offset = "0x4BF6CD0", VA = "0x4BF6CD0")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4BF6D00", Offset = "0x4BF6D00", VA = "0x4BF6D00")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x4BF6D80", Offset = "0x4BF6D80", VA = "0x4BF6D80")]
	public static Vector3 ColorBalanceToLMSCoeffs(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4BF6EF0", Offset = "0x4BF6EF0", VA = "0x4BF6EF0")]
	public static (Vector4, Vector4, Vector4) PrepareShadowsMidtonesHighlights(in Vector4 inShadows, in Vector4 inMidtones, in Vector4 inHighlights)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4BF71C0", Offset = "0x4BF71C0", VA = "0x4BF71C0")]
	public static (Vector4, Vector4, Vector4) PrepareLiftGammaGain(in Vector4 inLift, in Vector4 inGamma, in Vector4 inGain)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x4BF74F0", Offset = "0x4BF74F0", VA = "0x4BF74F0")]
	public static (Vector4, Vector4) PrepareSplitToning(in Vector4 inShadows, in Vector4 inHighlights, float balance)
	{
		return default((Vector4, Vector4));
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x4BF74C0", Offset = "0x4BF74C0", VA = "0x4BF74C0")]
	public static float Luminance(in Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x4BF7580", Offset = "0x4BF7580", VA = "0x4BF7580")]
	public static float ComputeEV100(float aperture, float shutterSpeed, float ISO)
	{
		return default(float);
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4BF7610", Offset = "0x4BF7610", VA = "0x4BF7610")]
	public static float ConvertEV100ToExposure(float EV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x4BF7720", Offset = "0x4BF7720", VA = "0x4BF7720")]
	public static float ConvertExposureToEV100(float exposure)
	{
		return default(float);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4BF7880", Offset = "0x4BF7880", VA = "0x4BF7880")]
	public static float ComputeEV100FromAvgLuminance(float avgLuminance)
	{
		return default(float);
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4BF7970", Offset = "0x4BF7970", VA = "0x4BF7970")]
	public static float ComputeISO(float aperture, float shutterSpeed, float targetEV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4BF79B0", Offset = "0x4BF79B0", VA = "0x4BF79B0")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4BF7A30", Offset = "0x4BF7A30", VA = "0x4BF7A30")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
