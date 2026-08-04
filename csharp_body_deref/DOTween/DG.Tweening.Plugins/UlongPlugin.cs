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
	[Address(RVA = "0x23728D0", Offset = "0x23728D0", VA = "0x23728D0", Slot = "4")]
	public override void Reset(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x23728E0", Offset = "0x23728E0", VA = "0x23728E0", Slot = "5")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x2372950", Offset = "0x2372950", VA = "0x2372950", Slot = "6")]
	public override void SetFrom(TweenerCore<ulong, ulong, NoOptions> t, ulong fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x23729E0", Offset = "0x23729E0", VA = "0x23729E0", Slot = "7")]
	public override ulong ConvertToStartValue(TweenerCore<ulong, ulong, NoOptions> t, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x23729F0", Offset = "0x23729F0", VA = "0x23729F0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2372A10", Offset = "0x2372A10", VA = "0x2372A10", Slot = "9")]
	public override void SetChangeValue(TweenerCore<ulong, ulong, NoOptions> t)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2372A40", Offset = "0x2372A40", VA = "0x2372A40", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, ulong changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2372A90", Offset = "0x2372A90", VA = "0x2372A90", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<ulong> getter, DOSetter<ulong> setter, float elapsed, ulong startValue, ulong changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x2372C20", Offset = "0x2372C20", VA = "0x2372C20")]
	public UlongPlugin()
	{
	}
}
