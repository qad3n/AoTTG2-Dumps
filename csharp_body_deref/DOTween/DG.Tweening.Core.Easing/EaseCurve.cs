// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.Easing.EaseCurve
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x2391CC0", Offset = "0x2391CC0", VA = "0x2391CC0")]
	public EaseCurve(AnimationCurve animCurve)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x2391CF0", Offset = "0x2391CF0", VA = "0x2391CF0")]
	public float Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod)
	{
		return default(float);
	}
}
