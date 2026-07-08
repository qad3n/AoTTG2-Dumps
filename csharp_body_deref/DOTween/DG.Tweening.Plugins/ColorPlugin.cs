using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007B")]
public class ColorPlugin : ABSTweenPlugin<Color, Color, ColorOptions>
{
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x230F950", Offset = "0x230F950", VA = "0x230F950", Slot = "4")]
	public override void Reset(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x230F960", Offset = "0x230F960", VA = "0x230F960", Slot = "5")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x230FA30", Offset = "0x230FA30", VA = "0x230FA30", Slot = "6")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, Color fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x230FB20", Offset = "0x230FB20", VA = "0x230FB20", Slot = "7")]
	public override Color ConvertToStartValue(TweenerCore<Color, Color, ColorOptions> t, Color value)
	{
		return default(Color);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x230FB30", Offset = "0x230FB30", VA = "0x230FB30", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x230FB70", Offset = "0x230FB70", VA = "0x230FB70", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x230FBB0", Offset = "0x230FBB0", VA = "0x230FBB0", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x230FBC0", Offset = "0x230FBC0", VA = "0x230FBC0", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color> getter, DOSetter<Color> setter, float elapsed, Color startValue, Color changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x230FD60", Offset = "0x230FD60", VA = "0x230FD60")]
	public ColorPlugin()
	{
	}
}
