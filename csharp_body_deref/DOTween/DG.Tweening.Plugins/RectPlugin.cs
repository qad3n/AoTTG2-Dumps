using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007F")]
public class RectPlugin : ABSTweenPlugin<Rect, Rect, RectOptions>
{
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2312740", Offset = "0x2312740", VA = "0x2312740", Slot = "4")]
	public override void Reset(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2312750", Offset = "0x2312750", VA = "0x2312750", Slot = "5")]
	public override void SetFrom(TweenerCore<Rect, Rect, RectOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2312B10", Offset = "0x2312B10", VA = "0x2312B10", Slot = "6")]
	public override void SetFrom(TweenerCore<Rect, Rect, RectOptions> t, Rect fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x2312EF0", Offset = "0x2312EF0", VA = "0x2312EF0", Slot = "7")]
	public override Rect ConvertToStartValue(TweenerCore<Rect, Rect, RectOptions> t, Rect value)
	{
		return default(Rect);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x2312F00", Offset = "0x2312F00", VA = "0x2312F00", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x2312F30", Offset = "0x2312F30", VA = "0x2312F30", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2312F60", Offset = "0x2312F60", VA = "0x2312F60", Slot = "10")]
	public override float GetSpeedBasedDuration(RectOptions options, float unitsXSecond, Rect changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2312FF0", Offset = "0x2312FF0", VA = "0x2312FF0", Slot = "11")]
	public override void EvaluateAndApply(RectOptions options, Tween t, bool isRelative, DOGetter<Rect> getter, DOSetter<Rect> setter, float elapsed, Rect startValue, Rect changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x23134A0", Offset = "0x23134A0", VA = "0x23134A0")]
	public RectPlugin()
	{
	}
}
