// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.RectPlugin
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

[Token(Token = "0x200007F")]
public class RectPlugin : ABSTweenPlugin<Rect, Rect, RectOptions>
{
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x5718E0", Offset = "0x56FEE0", VA = "0x1805718E0", Slot = "5")]
	public override void SetFrom(TweenerCore<Rect, Rect, RectOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x571AF0", Offset = "0x5700F0", VA = "0x180571AF0", Slot = "6")]
	public override void SetFrom(TweenerCore<Rect, Rect, RectOptions> t, Rect fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x564920", Offset = "0x562F20", VA = "0x180564920", Slot = "7")]
	public override Rect ConvertToStartValue(TweenerCore<Rect, Rect, RectOptions> t, Rect value)
	{
		return default(Rect);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x571D30", Offset = "0x570330", VA = "0x180571D30", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x571830", Offset = "0x56FE30", VA = "0x180571830", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Rect, Rect, RectOptions> t)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x571760", Offset = "0x56FD60", VA = "0x180571760", Slot = "10")]
	public override float GetSpeedBasedDuration(RectOptions options, float unitsXSecond, Rect changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x5713D0", Offset = "0x56F9D0", VA = "0x1805713D0", Slot = "11")]
	public override void EvaluateAndApply(RectOptions options, Tween t, bool isRelative, DOGetter<Rect> getter, DOSetter<Rect> setter, float elapsed, Rect startValue, Rect changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x571DE0", Offset = "0x5703E0", VA = "0x180571DE0")]
	public RectPlugin()
	{
	}
}
