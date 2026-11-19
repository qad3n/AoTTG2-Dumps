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
	[Address(RVA = "0x318CB30", Offset = "0x318BB30", VA = "0x318CB30", Slot = "5")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x318CBC0", Offset = "0x318BBC0", VA = "0x318CBC0", Slot = "6")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, string fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x318CCA0", Offset = "0x318BCA0", VA = "0x318CCA0", Slot = "4")]
	public override void Reset(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x318CD30", Offset = "0x318BD30", VA = "0x318CD30", Slot = "7")]
	public override string ConvertToStartValue(TweenerCore<string, string, StringOptions> t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x318CD40", Offset = "0x318BD40", VA = "0x318CD40", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x318CD50", Offset = "0x318BD50", VA = "0x318CD50", Slot = "9")]
	public override void SetChangeValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x318CFD0", Offset = "0x318BFD0", VA = "0x318CFD0", Slot = "10")]
	public override float GetSpeedBasedDuration(StringOptions options, float unitsXSecond, string changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x318D010", Offset = "0x318C010", VA = "0x318D010", Slot = "11")]
	public override void EvaluateAndApply(StringOptions options, Tween t, bool isRelative, DOGetter<string> getter, DOSetter<string> setter, float elapsed, string startValue, string changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x318D570", Offset = "0x318C570", VA = "0x318D570")]
	private StringBuilder Append(string value, int startIndex, int length, bool richTextEnabled)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x318DD90", Offset = "0x318CD90", VA = "0x318DD90")]
	private char[] ScrambledCharsToUse(StringOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x318DFC0", Offset = "0x318CFC0", VA = "0x318DFC0")]
	public StringPlugin()
	{
	}
}
