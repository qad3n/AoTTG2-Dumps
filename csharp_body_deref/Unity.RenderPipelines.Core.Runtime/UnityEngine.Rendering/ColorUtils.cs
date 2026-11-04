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
		[Address(RVA = "0x2B40A40", Offset = "0x2B3F040", VA = "0x182B40A40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x2B408B0", Offset = "0x2B3EEB0", VA = "0x182B408B0")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x2B3FBB0", Offset = "0x2B3E1B0", VA = "0x182B3FBB0")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x2B3FC40", Offset = "0x2B3E240", VA = "0x182B3FC40")]
	public static Vector3 ColorBalanceToLMSCoeffs(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x2B404E0", Offset = "0x2B3EAE0", VA = "0x182B404E0")]
	public static (Vector4, Vector4, Vector4) PrepareShadowsMidtonesHighlights(in Vector4 inShadows, in Vector4 inMidtones, in Vector4 inHighlights)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x2B40150", Offset = "0x2B3E750", VA = "0x182B40150")]
	public static (Vector4, Vector4, Vector4) PrepareLiftGammaGain(in Vector4 inLift, in Vector4 inGamma, in Vector4 inGain)
	{
		return default((Vector4, Vector4, Vector4));
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x2B407D0", Offset = "0x2B3EDD0", VA = "0x182B407D0")]
	public static (Vector4, Vector4) PrepareSplitToning(in Vector4 inShadows, in Vector4 inHighlights, float balance)
	{
		return default((Vector4, Vector4));
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x2B40120", Offset = "0x2B3E720", VA = "0x182B40120")]
	public static float Luminance(in Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x2B3FE80", Offset = "0x2B3E480", VA = "0x182B3FE80")]
	public static float ComputeEV100(float aperture, float shutterSpeed, float ISO)
	{
		return default(float);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x2B3FF50", Offset = "0x2B3E550", VA = "0x182B3FF50")]
	public static float ConvertEV100ToExposure(float EV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x2B40020", Offset = "0x2B3E620", VA = "0x182B40020")]
	public static float ConvertExposureToEV100(float exposure)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x2B3FDD0", Offset = "0x2B3E3D0", VA = "0x182B3FDD0")]
	public static float ComputeEV100FromAvgLuminance(float avgLuminance)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x2B3FF00", Offset = "0x2B3E500", VA = "0x182B3FF00")]
	public static float ComputeISO(float aperture, float shutterSpeed, float targetEV100)
	{
		return default(float);
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x2B408E0", Offset = "0x2B3EEE0", VA = "0x182B408E0")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x2B40970", Offset = "0x2B3EF70", VA = "0x182B40970")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
