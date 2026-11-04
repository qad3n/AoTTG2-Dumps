// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.UintPlugin
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

[Token(Token = "0x2000080")]
public class UintPlugin : ABSTweenPlugin<uint, uint, UintOptions>
{
	[Token(Token = "0x6000334")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x5742A0", Offset = "0x5728A0", VA = "0x1805742A0", Slot = "5")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x569390", Offset = "0x567990", VA = "0x180569390", Slot = "6")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, uint fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x5691B0", Offset = "0x5677B0", VA = "0x1805691B0", Slot = "7")]
	public override uint ConvertToStartValue(TweenerCore<uint, uint, UintOptions> t, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x5694A0", Offset = "0x567AA0", VA = "0x1805694A0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x574250", Offset = "0x572850", VA = "0x180574250", Slot = "9")]
	public override void SetChangeValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x574220", Offset = "0x572820", VA = "0x180574220", Slot = "10")]
	public override float GetSpeedBasedDuration(UintOptions options, float unitsXSecond, uint changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x574070", Offset = "0x572670", VA = "0x180574070", Slot = "11")]
	public override void EvaluateAndApply(UintOptions options, Tween t, bool isRelative, DOGetter<uint> getter, DOSetter<uint> setter, float elapsed, uint startValue, uint changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x574320", Offset = "0x572920", VA = "0x180574320")]
	public UintPlugin()
	{
	}
}
