// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Color2Plugin
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

[Token(Token = "0x2000075")]
internal class Color2Plugin : ABSTweenPlugin<Color2, Color2, ColorOptions>
{
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2371290", Offset = "0x2371290", VA = "0x2371290", Slot = "4")]
	public override void Reset(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x23712A0", Offset = "0x23712A0", VA = "0x23712A0", Slot = "5")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2371530", Offset = "0x2371530", VA = "0x2371530", Slot = "6")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, Color2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x2371830", Offset = "0x2371830", VA = "0x2371830", Slot = "7")]
	public override Color2 ConvertToStartValue(TweenerCore<Color2, Color2, ColorOptions> t, Color2 value)
	{
		return default(Color2);
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x2371850", Offset = "0x2371850", VA = "0x2371850", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2371910", Offset = "0x2371910", VA = "0x2371910", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x23719D0", Offset = "0x23719D0", VA = "0x23719D0", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x23719E0", Offset = "0x23719E0", VA = "0x23719E0", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color2> getter, DOSetter<Color2> setter, float elapsed, Color2 startValue, Color2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x2372170", Offset = "0x2372170", VA = "0x2372170")]
	public Color2Plugin()
	{
	}
}
