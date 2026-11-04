// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.StringPlugin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000083")]
public class StringPlugin : ABSTweenPlugin<string, string, StringOptions>
{
	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x0")]
	private static readonly StringBuilder _Buffer;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<char> _OpenedTags;

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x573C70", Offset = "0x572270", VA = "0x180573C70", Slot = "5")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x573BA0", Offset = "0x5721A0", VA = "0x180573BA0", Slot = "6")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, string fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x573770", Offset = "0x571D70", VA = "0x180573770", Slot = "4")]
	public override void Reset(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "7")]
	public override string ConvertToStartValue(TweenerCore<string, string, StringOptions> t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x573910", Offset = "0x571F10", VA = "0x180573910", Slot = "9")]
	public override void SetChangeValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x573730", Offset = "0x571D30", VA = "0x180573730", Slot = "10")]
	public override float GetSpeedBasedDuration(StringOptions options, float unitsXSecond, string changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x573220", Offset = "0x571820", VA = "0x180573220", Slot = "11")]
	public override void EvaluateAndApply(StringOptions options, Tween t, bool isRelative, DOGetter<string> getter, DOSetter<string> setter, float elapsed, string startValue, string changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x572AC0", Offset = "0x5710C0", VA = "0x180572AC0")]
	private StringBuilder Append(string value, int startIndex, int length, bool richTextEnabled)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x573800", Offset = "0x571E00", VA = "0x180573800")]
	private char[] ScrambledCharsToUse(StringOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x573DE0", Offset = "0x5723E0", VA = "0x180573DE0")]
	public StringPlugin()
	{
	}
}
