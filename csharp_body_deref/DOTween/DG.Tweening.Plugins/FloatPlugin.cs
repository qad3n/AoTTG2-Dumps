// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.FloatPlugin
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

[Token(Token = "0x2000085")]
public class FloatPlugin : ABSTweenPlugin<float, float, FloatOptions>
{
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x318E4E0", Offset = "0x318D4E0", VA = "0x318E4E0", Slot = "4")]
	public override void Reset(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x318E4F0", Offset = "0x318D4F0", VA = "0x318E4F0", Slot = "5")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x318E670", Offset = "0x318D670", VA = "0x318E670", Slot = "6")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, float fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x318E810", Offset = "0x318D810", VA = "0x318E810", Slot = "7")]
	public override float ConvertToStartValue(TweenerCore<float, float, FloatOptions> t, float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x318E820", Offset = "0x318D820", VA = "0x318E820", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x318E850", Offset = "0x318D850", VA = "0x318E850", Slot = "9")]
	public override void SetChangeValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x318E880", Offset = "0x318D880", VA = "0x318E880", Slot = "10")]
	public override float GetSpeedBasedDuration(FloatOptions options, float unitsXSecond, float changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x318E8A0", Offset = "0x318D8A0", VA = "0x318E8A0", Slot = "11")]
	public override void EvaluateAndApply(FloatOptions options, Tween t, bool isRelative, DOGetter<float> getter, DOSetter<float> setter, float elapsed, float startValue, float changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x318EAE0", Offset = "0x318DAE0", VA = "0x318EAE0")]
	public FloatPlugin()
	{
	}
}
