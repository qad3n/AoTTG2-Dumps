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
	[Address(RVA = "0x483A790", Offset = "0x483A790", VA = "0x483A790")]
	public static float StandardIlluminantY(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x483A7C0", Offset = "0x483A7C0", VA = "0x483A7C0")]
	public static Vector3 CIExyToLMS(float x, float y)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x483A840", Offset = "0x483A840", VA = "0x483A840")]
	public static Vector3 ComputeColorBalance(float temperature, float tint)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x483A950", Offset = "0x483A950", VA = "0x483A950")]
	public static Vector3 ColorToLift(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x483A9A0", Offset = "0x483A9A0", VA = "0x483A9A0")]
	public static Vector3 ColorToInverseGamma(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x483AA20", Offset = "0x483AA20", VA = "0x483AA20")]
	public static Vector3 ColorToGain(Vector4 color)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x483AA80", Offset = "0x483AA80", VA = "0x483AA80")]
	public static float LogCToLinear(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x483AAE0", Offset = "0x483AAE0", VA = "0x483AAE0")]
	public static float LinearToLogC(float x)
	{
		return default(float);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x483AB40", Offset = "0x483AB40", VA = "0x483AB40")]
	public static uint ToHex(Color c)
	{
		return default(uint);
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x483ABC0", Offset = "0x483ABC0", VA = "0x483ABC0")]
	public static Color ToRGBA(uint hex)
	{
		return default(Color);
	}
}
