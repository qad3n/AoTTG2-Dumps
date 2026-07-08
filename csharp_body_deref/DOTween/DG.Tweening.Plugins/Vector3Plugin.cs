using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000086")]
public class Vector3Plugin : ABSTweenPlugin<Vector3, Vector3, VectorOptions>
{
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x2317C80", Offset = "0x2317C80", VA = "0x2317C80", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2317C90", Offset = "0x2317C90", VA = "0x2317C90", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Vector3, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x2317FE0", Offset = "0x2317FE0", VA = "0x2317FE0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Vector3, VectorOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2318430", Offset = "0x2318430", VA = "0x2318430", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Vector3, Vector3, VectorOptions> t, Vector3 value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x2318440", Offset = "0x2318440", VA = "0x2318440", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x2318480", Offset = "0x2318480", VA = "0x2318480", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x2318560", Offset = "0x2318560", VA = "0x2318560", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x2318630", Offset = "0x2318630", VA = "0x2318630", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x2318E20", Offset = "0x2318E20", VA = "0x2318E20")]
	public Vector3Plugin()
	{
	}
}
