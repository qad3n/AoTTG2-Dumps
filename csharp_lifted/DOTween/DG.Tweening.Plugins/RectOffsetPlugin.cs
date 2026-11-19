// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.RectOffsetPlugin
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

[Token(Token = "0x200007E")]
public class RectOffsetPlugin : ABSTweenPlugin<RectOffset, RectOffset, NoOptions>
{
	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x0")]
	private static RectOffset _r;

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3188390", Offset = "0x3187390", VA = "0x3188390", Slot = "4")]
	public override void Reset(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x31883F0", Offset = "0x31873F0", VA = "0x31883F0", Slot = "5")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3188570", Offset = "0x3187570", VA = "0x3188570", Slot = "6")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3188790", Offset = "0x3187790", VA = "0x3188790", Slot = "7")]
	public override RectOffset ConvertToStartValue(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3188830", Offset = "0x3187830", VA = "0x3188830", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3188940", Offset = "0x3187940", VA = "0x3188940", Slot = "9")]
	public override void SetChangeValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3188AC0", Offset = "0x3187AC0", VA = "0x3188AC0", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, RectOffset changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3188B90", Offset = "0x3187B90", VA = "0x3188B90", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<RectOffset> getter, DOSetter<RectOffset> setter, float elapsed, RectOffset startValue, RectOffset changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3189430", Offset = "0x3188430", VA = "0x3189430")]
	public RectOffsetPlugin()
	{
	}
}
