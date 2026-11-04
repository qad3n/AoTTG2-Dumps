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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x569420", Offset = "0x567A20", VA = "0x180569420", Slot = "5")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x569390", Offset = "0x567990", VA = "0x180569390", Slot = "6")]
	public override void SetFrom(TweenerCore<int, int, NoOptions> t, int fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x5691B0", Offset = "0x5677B0", VA = "0x1805691B0", Slot = "7")]
	public override int ConvertToStartValue(TweenerCore<int, int, NoOptions> t, int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x5694A0", Offset = "0x567AA0", VA = "0x1805694A0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x569360", Offset = "0x567960", VA = "0x180569360", Slot = "9")]
	public override void SetChangeValue(TweenerCore<int, int, NoOptions> t)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x569340", Offset = "0x567940", VA = "0x180569340", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, int changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x5691C0", Offset = "0x5677C0", VA = "0x1805691C0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<int> getter, DOSetter<int> setter, float elapsed, int startValue, int changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x5694D0", Offset = "0x567AD0", VA = "0x1805694D0")]
	public IntPlugin()
	{
	}
}
