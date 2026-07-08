using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Core.Easing;

[Token(Token = "0x20000C5")]
public class EaseCurve
{
	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x10")]
	private readonly AnimationCurve _animCurve;

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x232B3E0", Offset = "0x232B3E0", VA = "0x232B3E0")]
	public EaseCurve(AnimationCurve animCurve)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x232B410", Offset = "0x232B410", VA = "0x232B410")]
	public float Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod)
	{
		return default(float);
	}
}
