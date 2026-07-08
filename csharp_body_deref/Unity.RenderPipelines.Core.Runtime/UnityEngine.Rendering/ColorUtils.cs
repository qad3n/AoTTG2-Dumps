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
		[Address(RVA = "0x48D1C00", Offset = "0x48D1C00", VA = "0x48D1C00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x48D1C60", Offset = "0x48D1C60", VA = "0x48D1C60")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x48D1C90", Offset = "0x48D1C90", VA = "0x48D1C90")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x48D1D10", Offset = "0x48D1D10", VA = "0x48D1D10")]
	public static Vector3 ColorBalanceToLMSCoeffs(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x48D1E80", Offset = "0x48D1E80", VA = "0x48D1E80")]
	public static (Vector4, Vector4, Vector4) PrepareShadowsMidtonesHighlights(in Vector4 inShadows, in Vector4 inMidtones, in Vector4 inHighlights)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x48D2150", Offset = "0x48D2150", VA = "0x48D2150")]
	public static (Vector4, Vector4, Vector4) PrepareLiftGammaGain(in Vector4 inLift, in Vector4 inGamma, in Vector4 inGain)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x48D2480", Offset = "0x48D2480", VA = "0x48D2480")]
	public static (Vector4, Vector4) PrepareSplitToning(in Vector4 inShadows, in Vector4 inHighlights, float balance)
	{
		return default((Vector4, Vector4));
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x48D2450", Offset = "0x48D2450", VA = "0x48D2450")]
	public static float Luminance(in Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x48D2510", Offset = "0x48D2510", VA = "0x48D2510")]
	public static float ComputeEV100(float aperture, float shutterSpeed, float ISO)
	{
		return default(float);
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x48D25A0", Offset = "0x48D25A0", VA = "0x48D25A0")]
	public static float ConvertEV100ToExposure(float EV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x48D26B0", Offset = "0x48D26B0", VA = "0x48D26B0")]
	public static float ConvertExposureToEV100(float exposure)
	{
		return default(float);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x48D2810", Offset = "0x48D2810", VA = "0x48D2810")]
	public static float ComputeEV100FromAvgLuminance(float avgLuminance)
	{
		return default(float);
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x48D2900", Offset = "0x48D2900", VA = "0x48D2900")]
	public static float ComputeISO(float aperture, float shutterSpeed, float targetEV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x48D2940", Offset = "0x48D2940", VA = "0x48D2940")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x48D29C0", Offset = "0x48D29C0", VA = "0x48D29C0")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
