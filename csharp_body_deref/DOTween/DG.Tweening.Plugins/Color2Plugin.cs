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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x564620", Offset = "0x562C20", VA = "0x180564620", Slot = "5")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x564450", Offset = "0x562A50", VA = "0x180564450", Slot = "6")]
	public override void SetFrom(TweenerCore<Color2, Color2, ColorOptions> t, Color2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x564050", Offset = "0x562650", VA = "0x180564050", Slot = "7")]
	public override Color2 ConvertToStartValue(TweenerCore<Color2, Color2, ColorOptions> t, Color2 value)
	{
		return default(Color2);
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x564850", Offset = "0x562E50", VA = "0x180564850", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x5643D0", Offset = "0x5629D0", VA = "0x1805643D0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Color2, Color2, ColorOptions> t)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5643C0", Offset = "0x5629C0", VA = "0x1805643C0", Slot = "10")]
	public override float GetSpeedBasedDuration(ColorOptions options, float unitsXSecond, Color2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x564070", Offset = "0x562670", VA = "0x180564070", Slot = "11")]
	public override void EvaluateAndApply(ColorOptions options, Tween t, bool isRelative, DOGetter<Color2> getter, DOSetter<Color2> setter, float elapsed, Color2 startValue, Color2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x5648D0", Offset = "0x562ED0", VA = "0x1805648D0")]
	public Color2Plugin()
	{
	}
}
