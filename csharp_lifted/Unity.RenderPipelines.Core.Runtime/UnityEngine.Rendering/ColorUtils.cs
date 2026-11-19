// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ColorUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001BE")]
public static class ColorUtils
{
	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x0")]
	public static float s_LightMeterCalibrationConstant;

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x4")]
	public static float s_LensAttenuation;

	[Token(Token = "0x170001C1")]
	public static float lensImperfectionExposureScale
	{
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x653F430", Offset = "0x653E430", VA = "0x653F430")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x653F490", Offset = "0x653E490", VA = "0x653F490")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x653F4C0", Offset = "0x653E4C0", VA = "0x653F4C0")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x653F540", Offset = "0x653E540", VA = "0x653F540")]
	public static Vector3 ColorBalanceToLMSCoeffs(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x653F6B0", Offset = "0x653E6B0", VA = "0x653F6B0")]
	public static (Vector4, Vector4, Vector4) PrepareShadowsMidtonesHighlights(in Vector4 inShadows, in Vector4 inMidtones, in Vector4 inHighlights)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x653F950", Offset = "0x653E950", VA = "0x653F950")]
	public static (Vector4, Vector4, Vector4) PrepareLiftGammaGain(in Vector4 inLift, in Vector4 inGamma, in Vector4 inGain)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x653FCB0", Offset = "0x653ECB0", VA = "0x653FCB0")]
	public static (Vector4, Vector4) PrepareSplitToning(in Vector4 inShadows, in Vector4 inHighlights, float balance)
	{
		return default((Vector4, Vector4));
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x653FC80", Offset = "0x653EC80", VA = "0x653FC80")]
	public static float Luminance(in Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x653FD40", Offset = "0x653ED40", VA = "0x653FD40")]
	public static float ComputeEV100(float aperture, float shutterSpeed, float ISO)
	{
		return default(float);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x653FE10", Offset = "0x653EE10", VA = "0x653FE10")]
	public static float ConvertEV100ToExposure(float EV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x653FF20", Offset = "0x653EF20", VA = "0x653FF20")]
	public static float ConvertExposureToEV100(float exposure)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x65400B0", Offset = "0x653F0B0", VA = "0x65400B0")]
	public static float ComputeEV100FromAvgLuminance(float avgLuminance)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x65401D0", Offset = "0x653F1D0", VA = "0x65401D0")]
	public static float ComputeISO(float aperture, float shutterSpeed, float targetEV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x6540210", Offset = "0x653F210", VA = "0x6540210")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x65402A0", Offset = "0x653F2A0", VA = "0x65402A0")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
