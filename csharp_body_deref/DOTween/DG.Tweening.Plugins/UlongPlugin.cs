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
	[Address(RVA = "0x3182F10", Offset = "0x3181F10", VA = "0x3182F10", Slot = "4")]
	public override void Reset(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3182F20", Offset = "0x3181F20", VA = "0x3182F20", Slot = "5")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3182F90", Offset = "0x3181F90", VA = "0x3182F90", Slot = "6")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, ulong fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3183010", Offset = "0x3182010", VA = "0x3183010", Slot = "7")]
	public override ulong ConvertToStartValue(TweenerCore<ulong, ulong, NoOptions> t, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3183020", Offset = "0x3182020", VA = "0x3183020", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3183040", Offset = "0x3182040", VA = "0x3183040", Slot = "9")]
	public override void SetChangeValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3183070", Offset = "0x3182070", VA = "0x3183070", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, ulong changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x31830B0", Offset = "0x31820B0", VA = "0x31830B0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<ulong> getter, DOSetter<ulong> setter, float elapsed, ulong startValue, ulong changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3183240", Offset = "0x3182240", VA = "0x3183240")]
	public UlongPlugin()
	{
	}
}
