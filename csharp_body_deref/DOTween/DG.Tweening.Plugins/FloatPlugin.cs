using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000085")]
public class FloatPlugin : ABSTweenPlugin<float, float, FloatOptions>
{
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x23175E0", Offset = "0x23175E0", VA = "0x23175E0", Slot = "4")]
	public override void Reset(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x23175F0", Offset = "0x23175F0", VA = "0x23175F0", Slot = "5")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x2317790", Offset = "0x2317790", VA = "0x2317790", Slot = "6")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, float fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x2317940", Offset = "0x2317940", VA = "0x2317940", Slot = "7")]
	public override float ConvertToStartValue(TweenerCore<float, float, FloatOptions> t, float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x2317950", Offset = "0x2317950", VA = "0x2317950", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x2317980", Offset = "0x2317980", VA = "0x2317980", Slot = "9")]
	public override void SetChangeValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x23179B0", Offset = "0x23179B0", VA = "0x23179B0", Slot = "10")]
	public override float GetSpeedBasedDuration(FloatOptions options, float unitsXSecond, float changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x23179E0", Offset = "0x23179E0", VA = "0x23179E0", Slot = "11")]
	public override void EvaluateAndApply(FloatOptions options, Tween t, bool isRelative, DOGetter<float> getter, DOSetter<float> setter, float elapsed, float startValue, float changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x2317C40", Offset = "0x2317C40", VA = "0x2317C40")]
	public FloatPlugin()
	{
	}
}
