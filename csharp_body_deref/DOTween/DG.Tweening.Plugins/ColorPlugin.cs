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
	[Address(RVA = "0x2376230", Offset = "0x2376230", VA = "0x2376230", Slot = "4")]
	public override void Reset(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x2376240", Offset = "0x2376240", VA = "0x2376240", Slot = "5")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x2376310", Offset = "0x2376310", VA = "0x2376310", Slot = "6")]
	public override void SetFrom(TweenerCore<Color, Color, ColorOptions> t, Color fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x2376400", Offset = "0x2376400", VA = "0x2376400", Slot = "7")]
	public override Color ConvertToStartValue(TweenerCore<Color, Color, ColorOptions> t, Color value)
	{
		return default(Color);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x2376410", Offset = "0x2376410", VA = "0x2376410", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x2376450", Offset = "0x2376450", VA = "0x2376450", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color, Color, ColorOptions> t)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x2376490", Offset = "0x2376490", VA = "0x2376490", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x23764A0", Offset = "0x23764A0", VA = "0x23764A0", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color> getter, DOSetter<Color> setter, float elapsed, Color startValue, Color changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x2376640", Offset = "0x2376640", VA = "0x2376640")]
	public ColorPlugin()
	{
	}
}
