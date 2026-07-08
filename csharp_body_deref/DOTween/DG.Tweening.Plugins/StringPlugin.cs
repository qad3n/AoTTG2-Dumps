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
	[Address(RVA = "0x2315BA0", Offset = "0x2315BA0", VA = "0x2315BA0", Slot = "5")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2315C30", Offset = "0x2315C30", VA = "0x2315C30", Slot = "6")]
	public override void SetFrom(TweenerCore<string, string, StringOptions> t, string fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2315D10", Offset = "0x2315D10", VA = "0x2315D10", Slot = "4")]
	public override void Reset(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2315DA0", Offset = "0x2315DA0", VA = "0x2315DA0", Slot = "7")]
	public override string ConvertToStartValue(TweenerCore<string, string, StringOptions> t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2315DB0", Offset = "0x2315DB0", VA = "0x2315DB0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2315DC0", Offset = "0x2315DC0", VA = "0x2315DC0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<string, string, StringOptions> t)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2316030", Offset = "0x2316030", VA = "0x2316030", Slot = "10")]
	public override float GetSpeedBasedDuration(StringOptions options, float unitsXSecond, string changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x2316080", Offset = "0x2316080", VA = "0x2316080", Slot = "11")]
	public override void EvaluateAndApply(StringOptions options, Tween t, bool isRelative, DOGetter<string> getter, DOSetter<string> setter, float elapsed, string startValue, string changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x2316670", Offset = "0x2316670", VA = "0x2316670")]
	private StringBuilder Append(string value, int startIndex, int length, bool richTextEnabled)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x2316E80", Offset = "0x2316E80", VA = "0x2316E80")]
	private char[] ScrambledCharsToUse(StringOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x23170C0", Offset = "0x23170C0", VA = "0x23170C0")]
	public StringPlugin()
	{
	}
}
