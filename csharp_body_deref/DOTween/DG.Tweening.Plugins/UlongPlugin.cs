// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.UlongPlugin
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

[Token(Token = "0x2000078")]
public class UlongPlugin : ABSTweenPlugin<ulong, ulong, NoOptions>
{
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5745B0", Offset = "0x572BB0", VA = "0x1805745B0", Slot = "5")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x569C30", Offset = "0x568230", VA = "0x180569C30", Slot = "6")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, ulong fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "7")]
	public override ulong ConvertToStartValue(TweenerCore<ulong, ulong, NoOptions> t, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x569CC0", Offset = "0x5682C0", VA = "0x180569CC0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x569B80", Offset = "0x568180", VA = "0x180569B80", Slot = "9")]
	public override void SetChangeValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x574570", Offset = "0x572B70", VA = "0x180574570", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, ulong changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x574360", Offset = "0x572960", VA = "0x180574360", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<ulong> getter, DOSetter<ulong> setter, float elapsed, ulong startValue, ulong changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x574630", Offset = "0x572C30", VA = "0x180574630")]
	public UlongPlugin()
	{
	}
}
