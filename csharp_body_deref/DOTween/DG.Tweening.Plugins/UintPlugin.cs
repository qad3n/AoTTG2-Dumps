using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000080")]
public class UintPlugin : ABSTweenPlugin<uint, uint, UintOptions>
{
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x23134E0", Offset = "0x23134E0", VA = "0x23134E0", Slot = "4")]
	public override void Reset(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x23134F0", Offset = "0x23134F0", VA = "0x23134F0", Slot = "5")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2313560", Offset = "0x2313560", VA = "0x2313560", Slot = "6")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, uint fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x23135E0", Offset = "0x23135E0", VA = "0x23135E0", Slot = "7")]
	public override uint ConvertToStartValue(TweenerCore<uint, uint, UintOptions> t, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x23135F0", Offset = "0x23135F0", VA = "0x23135F0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2313610", Offset = "0x2313610", VA = "0x2313610", Slot = "9")]
	public override void SetChangeValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2313650", Offset = "0x2313650", VA = "0x2313650", Slot = "10")]
	public override float GetSpeedBasedDuration(UintOptions options, float unitsXSecond, uint changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2313680", Offset = "0x2313680", VA = "0x2313680", Slot = "11")]
	public override void EvaluateAndApply(UintOptions options, Tween t, bool isRelative, DOGetter<uint> getter, DOSetter<uint> setter, float elapsed, uint startValue, uint changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x23138B0", Offset = "0x23138B0", VA = "0x23138B0")]
	public UintPlugin()
	{
	}
}
