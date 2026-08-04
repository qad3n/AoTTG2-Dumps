// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ColorUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200007A")]
public static class ColorUtilities
{
	[Token(Token = "0x400022D")]
	private const float logC_cut = 0.011361f;

	[Token(Token = "0x400022E")]
	private const float logC_a = 5.555556f;

	[Token(Token = "0x400022F")]
	private const float logC_b = 0.047996f;

	[Token(Token = "0x4000230")]
	private const float logC_c = 0.244161f;

	[Token(Token = "0x4000231")]
	private const float logC_d = 0.386036f;

	[Token(Token = "0x4000232")]
	private const float logC_e = 5.301883f;

	[Token(Token = "0x4000233")]
	private const float logC_f = 0.092819f;

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4B5F880", Offset = "0x4B5F880", VA = "0x4B5F880")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4B5F8B0", Offset = "0x4B5F8B0", VA = "0x4B5F8B0")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4B5F930", Offset = "0x4B5F930", VA = "0x4B5F930")]
	public static Vector3 ComputeColorBalance(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4B5FA40", Offset = "0x4B5FA40", VA = "0x4B5FA40")]
	public static Vector3 ColorToLift(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4B5FA90", Offset = "0x4B5FA90", VA = "0x4B5FA90")]
	public static Vector3 ColorToInverseGamma(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4B5FB10", Offset = "0x4B5FB10", VA = "0x4B5FB10")]
	public static Vector3 ColorToGain(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4B5FB70", Offset = "0x4B5FB70", VA = "0x4B5FB70")]
	public static float LogCToLinear(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4B5FBD0", Offset = "0x4B5FBD0", VA = "0x4B5FBD0")]
	public static float LinearToLogC(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4B5FC30", Offset = "0x4B5FC30", VA = "0x4B5FC30")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4B5FCB0", Offset = "0x4B5FCB0", VA = "0x4B5FCB0")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
