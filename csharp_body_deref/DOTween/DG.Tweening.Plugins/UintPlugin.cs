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
	[Address(RVA = "0x2379DC0", Offset = "0x2379DC0", VA = "0x2379DC0", Slot = "4")]
	public override void Reset(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2379DD0", Offset = "0x2379DD0", VA = "0x2379DD0", Slot = "5")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2379E40", Offset = "0x2379E40", VA = "0x2379E40", Slot = "6")]
	public override void SetFrom(TweenerCore<uint, uint, UintOptions> t, uint fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x2379EC0", Offset = "0x2379EC0", VA = "0x2379EC0", Slot = "7")]
	public override uint ConvertToStartValue(TweenerCore<uint, uint, UintOptions> t, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x2379ED0", Offset = "0x2379ED0", VA = "0x2379ED0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2379EF0", Offset = "0x2379EF0", VA = "0x2379EF0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<uint, uint, UintOptions> t)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2379F30", Offset = "0x2379F30", VA = "0x2379F30", Slot = "10")]
	public override float GetSpeedBasedDuration(UintOptions options, float unitsXSecond, uint changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2379F60", Offset = "0x2379F60", VA = "0x2379F60", Slot = "11")]
	public override void EvaluateAndApply(UintOptions options, Tween t, bool isRelative, DOGetter<uint> getter, DOSetter<uint> setter, float elapsed, uint startValue, uint changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x237A190", Offset = "0x237A190", VA = "0x237A190")]
	public UintPlugin()
	{
	}
}
