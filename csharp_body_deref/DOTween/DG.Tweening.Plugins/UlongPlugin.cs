using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000078")]
public class UlongPlugin : ABSTweenPlugin<ulong, ulong, NoOptions>
{
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x230BFF0", Offset = "0x230BFF0", VA = "0x230BFF0", Slot = "4")]
	public override void Reset(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x230C000", Offset = "0x230C000", VA = "0x230C000", Slot = "5")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x230C070", Offset = "0x230C070", VA = "0x230C070", Slot = "6")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, ulong fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x230C100", Offset = "0x230C100", VA = "0x230C100", Slot = "7")]
	public override ulong ConvertToStartValue(TweenerCore<ulong, ulong, NoOptions> t, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x230C110", Offset = "0x230C110", VA = "0x230C110", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x230C130", Offset = "0x230C130", VA = "0x230C130", Slot = "9")]
	public override void SetChangeValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x230C160", Offset = "0x230C160", VA = "0x230C160", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, ulong changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x230C1B0", Offset = "0x230C1B0", VA = "0x230C1B0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<ulong> getter, DOSetter<ulong> setter, float elapsed, ulong startValue, ulong changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x230C340", Offset = "0x230C340", VA = "0x230C340")]
	public UlongPlugin()
	{
	}
}
