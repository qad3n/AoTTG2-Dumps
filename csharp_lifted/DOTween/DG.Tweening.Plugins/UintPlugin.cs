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
	[Address(RVA = "0x318A500", Offset = "0x3189500", VA = "0x318A500", Slot = "4")]
	public override void Reset(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x318A510", Offset = "0x3189510", VA = "0x318A510", Slot = "5")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x318A580", Offset = "0x3189580", VA = "0x318A580", Slot = "6")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, uint fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x318A600", Offset = "0x3189600", VA = "0x318A600", Slot = "7")]
	public override uint ConvertToStartValue(TweenerCore<uint, uint, UintOptions> t, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x318A610", Offset = "0x3189610", VA = "0x318A610", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x318A630", Offset = "0x3189630", VA = "0x318A630", Slot = "9")]
	public override void SetChangeValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x318A670", Offset = "0x3189670", VA = "0x318A670", Slot = "10")]
	public override float GetSpeedBasedDuration(UintOptions options, float unitsXSecond, uint changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x318A690", Offset = "0x3189690", VA = "0x318A690", Slot = "11")]
	public override void EvaluateAndApply(UintOptions options, Tween t, bool isRelative, DOGetter<uint> getter, DOSetter<uint> setter, float elapsed, uint startValue, uint changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x318A8B0", Offset = "0x31898B0", VA = "0x318A8B0")]
	public UintPlugin()
	{
	}
}
