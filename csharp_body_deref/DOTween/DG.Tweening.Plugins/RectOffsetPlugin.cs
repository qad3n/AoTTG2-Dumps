using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007E")]
public class RectOffsetPlugin : ABSTweenPlugin<RectOffset, RectOffset, NoOptions>
{
	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x0")]
	private static RectOffset _r;

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2311610", Offset = "0x2311610", VA = "0x2311610", Slot = "4")]
	public override void Reset(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2311670", Offset = "0x2311670", VA = "0x2311670", Slot = "5")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x23117F0", Offset = "0x23117F0", VA = "0x23117F0", Slot = "6")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2311A00", Offset = "0x2311A00", VA = "0x2311A00", Slot = "7")]
	public override RectOffset ConvertToStartValue(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2311AA0", Offset = "0x2311AA0", VA = "0x2311AA0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2311BB0", Offset = "0x2311BB0", VA = "0x2311BB0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2311D30", Offset = "0x2311D30", VA = "0x2311D30", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, RectOffset changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2311E10", Offset = "0x2311E10", VA = "0x2311E10", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<RectOffset> getter, DOSetter<RectOffset> setter, float elapsed, RectOffset startValue, RectOffset changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2312690", Offset = "0x2312690", VA = "0x2312690")]
	public RectOffsetPlugin()
	{
	}
}
