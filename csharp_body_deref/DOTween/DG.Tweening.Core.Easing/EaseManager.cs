using System;
using Il2CppDummyDll;

namespace DG.Tweening.Core.Easing;

[Token(Token = "0x20000C3")]
public static class EaseManager
{
	[Token(Token = "0x4000286")]
	private const float _PiOver2 = (float)Math.PI / 2f;

	[Token(Token = "0x4000287")]
	private const float _TwoPi = (float)Math.PI * 2f;

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x2326ED0", Offset = "0x2326ED0", VA = "0x2326ED0")]
	public static float Evaluate(Tween t, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x23281E0", Offset = "0x23281E0", VA = "0x23281E0")]
	public static float EvaluateUnclamped(Tween t, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x2326EF0", Offset = "0x2326EF0", VA = "0x2326EF0")]
	public static float Evaluate(Ease easeType, EaseFunction customEase, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x2328680", Offset = "0x2328680", VA = "0x2328680")]
	public static EaseFunction ToEaseFunction(Ease ease)
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x2329CB0", Offset = "0x2329CB0", VA = "0x2329CB0")]
	internal static bool IsFlashEase(Ease ease)
	{
		return default(bool);
	}
}
