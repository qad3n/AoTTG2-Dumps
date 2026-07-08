using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000077")]
public class LongPlugin : ABSTweenPlugin<long, long, NoOptions>
{
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x230BC10", Offset = "0x230BC10", VA = "0x230BC10", Slot = "4")]
	public override void Reset(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x230BC20", Offset = "0x230BC20", VA = "0x230BC20", Slot = "5")]
	public override void SetFrom(TweenerCore<long, long, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x230BC90", Offset = "0x230BC90", VA = "0x230BC90", Slot = "6")]
	public override void SetFrom(TweenerCore<long, long, NoOptions> t, long fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x230BD20", Offset = "0x230BD20", VA = "0x230BD20", Slot = "7")]
	public override long ConvertToStartValue(TweenerCore<long, long, NoOptions> t, long value)
	{
		return default(long);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x230BD30", Offset = "0x230BD30", VA = "0x230BD30", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x230BD50", Offset = "0x230BD50", VA = "0x230BD50", Slot = "9")]
	public override void SetChangeValue(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x230BD80", Offset = "0x230BD80", VA = "0x230BD80", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, long changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x230BDB0", Offset = "0x230BDB0", VA = "0x230BDB0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<long> getter, DOSetter<long> setter, float elapsed, long startValue, long changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x230BFB0", Offset = "0x230BFB0", VA = "0x230BFB0")]
	public LongPlugin()
	{
	}
}
