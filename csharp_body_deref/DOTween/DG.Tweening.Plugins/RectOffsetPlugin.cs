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
	[Address(RVA = "0x2377EF0", Offset = "0x2377EF0", VA = "0x2377EF0", Slot = "4")]
	public override void Reset(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2377F50", Offset = "0x2377F50", VA = "0x2377F50", Slot = "5")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x23780D0", Offset = "0x23780D0", VA = "0x23780D0", Slot = "6")]
	public override void SetFrom(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x23782E0", Offset = "0x23782E0", VA = "0x23782E0", Slot = "7")]
	public override RectOffset ConvertToStartValue(TweenerCore<RectOffset, RectOffset, NoOptions> t, RectOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2378380", Offset = "0x2378380", VA = "0x2378380", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2378490", Offset = "0x2378490", VA = "0x2378490", Slot = "9")]
	public override void SetChangeValue(TweenerCore<RectOffset, RectOffset, NoOptions> t)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2378610", Offset = "0x2378610", VA = "0x2378610", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, RectOffset changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x23786F0", Offset = "0x23786F0", VA = "0x23786F0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<RectOffset> getter, DOSetter<RectOffset> setter, float elapsed, RectOffset startValue, RectOffset changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2378F70", Offset = "0x2378F70", VA = "0x2378F70")]
	public RectOffsetPlugin()
	{
	}
}
