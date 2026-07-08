using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000081")]
public class Vector2Plugin : ABSTweenPlugin<Vector2, Vector2, VectorOptions>
{
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x23138F0", Offset = "0x23138F0", VA = "0x23138F0", Slot = "4")]
	public override void Reset(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x2313900", Offset = "0x2313900", VA = "0x2313900", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x2313B60", Offset = "0x2313B60", VA = "0x2313B60", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x2313E30", Offset = "0x2313E30", VA = "0x2313E30", Slot = "7")]
	public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x2313E40", Offset = "0x2313E40", VA = "0x2313E40", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x2313E70", Offset = "0x2313E70", VA = "0x2313E70", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x2313EF0", Offset = "0x2313EF0", VA = "0x2313EF0", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x2313FA0", Offset = "0x2313FA0", VA = "0x2313FA0", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x2314540", Offset = "0x2314540", VA = "0x2314540")]
	public Vector2Plugin()
	{
	}
}
