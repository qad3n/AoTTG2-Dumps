// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.ColorPlugin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3186640", Offset = "0x3185640", VA = "0x3186640", Slot = "4")]
	public override void Reset(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3186650", Offset = "0x3185650", VA = "0x3186650", Slot = "5")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3186720", Offset = "0x3185720", VA = "0x3186720", Slot = "6")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, Color fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3186810", Offset = "0x3185810", VA = "0x3186810", Slot = "7")]
	public override Color ConvertToStartValue(TweenerCore<Color, Color, ColorOptions> t, Color value)
	{
		return default(Color);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3186820", Offset = "0x3185820", VA = "0x3186820", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3186860", Offset = "0x3185860", VA = "0x3186860", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x31868A0", Offset = "0x31858A0", VA = "0x31868A0", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x31868B0", Offset = "0x31858B0", VA = "0x31868B0", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color> getter, DOSetter<Color> setter, float elapsed, Color startValue, Color changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3186A50", Offset = "0x3185A50", VA = "0x3186A50")]
	public ColorPlugin()
	{
	}
}
