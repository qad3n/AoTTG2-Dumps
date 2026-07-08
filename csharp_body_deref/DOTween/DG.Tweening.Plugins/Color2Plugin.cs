using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000075")]
internal class Color2Plugin : ABSTweenPlugin<Color2, Color2, ColorOptions>
{
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x230A9B0", Offset = "0x230A9B0", VA = "0x230A9B0", Slot = "4")]
	public override void Reset(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x230A9C0", Offset = "0x230A9C0", VA = "0x230A9C0", Slot = "5")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x230AC50", Offset = "0x230AC50", VA = "0x230AC50", Slot = "6")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, Color2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x230AF50", Offset = "0x230AF50", VA = "0x230AF50", Slot = "7")]
	public override Color2 ConvertToStartValue(TweenerCore<Color2, Color2, ColorOptions> t, Color2 value)
	{
		return default(Color2);
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x230AF70", Offset = "0x230AF70", VA = "0x230AF70", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x230B030", Offset = "0x230B030", VA = "0x230B030", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x230B0F0", Offset = "0x230B0F0", VA = "0x230B0F0", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x230B100", Offset = "0x230B100", VA = "0x230B100", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color2> getter, DOSetter<Color2> setter, float elapsed, Color2 startValue, Color2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x230B890", Offset = "0x230B890", VA = "0x230B890")]
	public Color2Plugin()
	{
	}
}
