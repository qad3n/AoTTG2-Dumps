// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.DoublePlugin
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

[Token(Token = "0x2000076")]
public class DoublePlugin : ABSTweenPlugin<double, double, NoOptions>
{
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x23721B0", Offset = "0x23721B0", VA = "0x23721B0", Slot = "4")]
	public override void Reset(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x23721C0", Offset = "0x23721C0", VA = "0x23721C0", Slot = "5")]
	public override void SetFrom(TweenerCore<double, double, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2372260", Offset = "0x2372260", VA = "0x2372260", Slot = "6")]
	public override void SetFrom(TweenerCore<double, double, NoOptions> t, double fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2372300", Offset = "0x2372300", VA = "0x2372300", Slot = "7")]
	public override double ConvertToStartValue(TweenerCore<double, double, NoOptions> t, double value)
	{
		return default(double);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2372310", Offset = "0x2372310", VA = "0x2372310", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2372340", Offset = "0x2372340", VA = "0x2372340", Slot = "9")]
	public override void SetChangeValue(TweenerCore<double, double, NoOptions> t)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2372370", Offset = "0x2372370", VA = "0x2372370", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, double changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x23723A0", Offset = "0x23723A0", VA = "0x23723A0", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<double> getter, DOSetter<double> setter, float elapsed, double startValue, double changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x23724B0", Offset = "0x23724B0", VA = "0x23724B0")]
	public DoublePlugin()
	{
	}
}
