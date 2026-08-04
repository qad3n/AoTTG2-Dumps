// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.Easing.EaseManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x238D7B0", Offset = "0x238D7B0", VA = "0x238D7B0")]
	public static float Evaluate(Tween t, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x238EAC0", Offset = "0x238EAC0", VA = "0x238EAC0")]
	public static float EvaluateUnclamped(Tween t, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x238D7D0", Offset = "0x238D7D0", VA = "0x238D7D0")]
	public static float Evaluate(Ease easeType, EaseFunction customEase, float time, float duration, float overshootOrAmplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x238EF60", Offset = "0x238EF60", VA = "0x238EF60")]
	public static EaseFunction ToEaseFunction(Ease ease)
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x2390590", Offset = "0x2390590", VA = "0x2390590")]
	internal static bool IsFlashEase(Ease ease)
	{
		return default(bool);
	}
}
