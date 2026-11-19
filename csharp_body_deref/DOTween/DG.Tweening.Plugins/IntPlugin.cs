// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.IntPlugin
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

[Token(Token = "0x200007C")]
public class IntPlugin : ABSTweenPlugin<int, int, NoOptions>
{
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3186A90", Offset = "0x3185A90", VA = "0x3186A90", Slot = "4")]
	public override void Reset(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3186AA0", Offset = "0x3185AA0", VA = "0x3186AA0", Slot = "5")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3186B10", Offset = "0x3185B10", VA = "0x3186B10", Slot = "6")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, int fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3186B90", Offset = "0x3185B90", VA = "0x3186B90", Slot = "7")]
	public override int ConvertToStartValue(TweenerCore<int, int, NoOptions> t, int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3186BA0", Offset = "0x3185BA0", VA = "0x3186BA0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3186BC0", Offset = "0x3185BC0", VA = "0x3186BC0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3186BE0", Offset = "0x3185BE0", VA = "0x3186BE0", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, int changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3186C00", Offset = "0x3185C00", VA = "0x3186C00", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<int> getter, DOSetter<int> setter, float elapsed, int startValue, int changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3186DE0", Offset = "0x3185DE0", VA = "0x3186DE0")]
	public IntPlugin()
	{
	}
}
