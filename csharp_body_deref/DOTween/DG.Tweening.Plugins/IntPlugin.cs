using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007C")]
public class IntPlugin : ABSTweenPlugin<int, int, NoOptions>
{
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x230FDA0", Offset = "0x230FDA0", VA = "0x230FDA0", Slot = "4")]
	public override void Reset(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x230FDB0", Offset = "0x230FDB0", VA = "0x230FDB0", Slot = "5")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x230FE20", Offset = "0x230FE20", VA = "0x230FE20", Slot = "6")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, int fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x230FEA0", Offset = "0x230FEA0", VA = "0x230FEA0", Slot = "7")]
	public override int ConvertToStartValue(TweenerCore<int, int, NoOptions> t, int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x230FEB0", Offset = "0x230FEB0", VA = "0x230FEB0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x230FED0", Offset = "0x230FED0", VA = "0x230FED0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x230FEF0", Offset = "0x230FEF0", VA = "0x230FEF0", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, int changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x230FF20", Offset = "0x230FF20", VA = "0x230FF20", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<int> getter, DOSetter<int> setter, float elapsed, int startValue, int changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x2310110", Offset = "0x2310110", VA = "0x2310110")]
	public IntPlugin()
	{
	}
}
