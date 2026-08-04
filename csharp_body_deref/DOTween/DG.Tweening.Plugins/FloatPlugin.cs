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
	[Address(RVA = "0x237DEC0", Offset = "0x237DEC0", VA = "0x237DEC0", Slot = "4")]
	public override void Reset(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x237DED0", Offset = "0x237DED0", VA = "0x237DED0", Slot = "5")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x237E070", Offset = "0x237E070", VA = "0x237E070", Slot = "6")]
	public override void SetFrom(TweenerCore<float, float, FloatOptions> t, float fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x237E220", Offset = "0x237E220", VA = "0x237E220", Slot = "7")]
	public override float ConvertToStartValue(TweenerCore<float, float, FloatOptions> t, float value)
	{
		return default(float);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x237E230", Offset = "0x237E230", VA = "0x237E230", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x237E260", Offset = "0x237E260", VA = "0x237E260", Slot = "9")]
	public override void SetChangeValue(TweenerCore<float, float, FloatOptions> t)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x237E290", Offset = "0x237E290", VA = "0x237E290", Slot = "10")]
	public override float GetSpeedBasedDuration(FloatOptions options, float unitsXSecond, float changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x237E2C0", Offset = "0x237E2C0", VA = "0x237E2C0", Slot = "11")]
	public override void EvaluateAndApply(FloatOptions options, Tween t, bool isRelative, DOGetter<float> getter, DOSetter<float> setter, float elapsed, float startValue, float changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x237E520", Offset = "0x237E520", VA = "0x237E520")]
	public FloatPlugin()
	{
	}
}
