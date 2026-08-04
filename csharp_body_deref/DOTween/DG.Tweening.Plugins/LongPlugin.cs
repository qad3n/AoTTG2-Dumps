// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.LongPlugin
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

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000077")]
public class LongPlugin : ABSTweenPlugin<long, long, NoOptions>
{
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x23724F0", Offset = "0x23724F0", VA = "0x23724F0", Slot = "4")]
	public override void Reset(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x2372500", Offset = "0x2372500", VA = "0x2372500", Slot = "5")]
	public override void SetFrom(TweenerCore<long, long, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x2372570", Offset = "0x2372570", VA = "0x2372570", Slot = "6")]
	public override void SetFrom(TweenerCore<long, long, NoOptions> t, long fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x2372600", Offset = "0x2372600", VA = "0x2372600", Slot = "7")]
	public override long ConvertToStartValue(TweenerCore<long, long, NoOptions> t, long value)
	{
		return default(long);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2372610", Offset = "0x2372610", VA = "0x2372610", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x2372630", Offset = "0x2372630", VA = "0x2372630", Slot = "9")]
	public override void SetChangeValue(TweenerCore<long, long, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x2372660", Offset = "0x2372660", VA = "0x2372660", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, long changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x2372690", Offset = "0x2372690", VA = "0x2372690", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<long> getter, DOSetter<long> setter, float elapsed, long startValue, long changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x2372890", Offset = "0x2372890", VA = "0x2372890")]
	public LongPlugin()
	{
	}
}
