using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000076")]
public class DoublePlugin : ABSTweenPlugin<double, double, NoOptions>
{
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x230B8D0", Offset = "0x230B8D0", VA = "0x230B8D0", Slot = "4")]
	public override void Reset(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x230B8E0", Offset = "0x230B8E0", VA = "0x230B8E0", Slot = "5")]
	public override void SetFrom(TweenerCore<double, double, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x230B980", Offset = "0x230B980", VA = "0x230B980", Slot = "6")]
	public override void SetFrom(TweenerCore<double, double, NoOptions> t, double fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x230BA20", Offset = "0x230BA20", VA = "0x230BA20", Slot = "7")]
	public override double ConvertToStartValue(TweenerCore<double, double, NoOptions> t, double value)
	{
		return default(double);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x230BA30", Offset = "0x230BA30", VA = "0x230BA30", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x230BA60", Offset = "0x230BA60", VA = "0x230BA60", Slot = "9")]
	public override void SetChangeValue(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x230BA90", Offset = "0x230BA90", VA = "0x230BA90", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, double changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x230BAC0", Offset = "0x230BAC0", VA = "0x230BAC0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<double> getter, DOSetter<double> setter, float elapsed, double startValue, double changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x230BBD0", Offset = "0x230BBD0", VA = "0x230BBD0")]
	public DoublePlugin()
	{
	}
}
