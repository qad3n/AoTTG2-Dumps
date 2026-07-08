using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.CustomPlugins;

[Token(Token = "0x200009F")]
public class PureQuaternionPlugin : ABSTweenPlugin<Quaternion, Quaternion, NoOptions>
{
	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x0")]
	private static PureQuaternionPlugin _plug;

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x231CBA0", Offset = "0x231CBA0", VA = "0x231CBA0")]
	public static PureQuaternionPlugin Plug()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x231CC90", Offset = "0x231CC90", VA = "0x231CC90", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x231CCA0", Offset = "0x231CCA0", VA = "0x231CCA0", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x231CE00", Offset = "0x231CE00", VA = "0x231CE00", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x231D010", Offset = "0x231D010", VA = "0x231D010", Slot = "7")]
	public override Quaternion ConvertToStartValue(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion value)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x231D020", Offset = "0x231D020", VA = "0x231D020", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x231D110", Offset = "0x231D110", VA = "0x231D110", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x231D130", Offset = "0x231D130", VA = "0x231D130", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, Quaternion changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x231D230", Offset = "0x231D230", VA = "0x231D230", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Quaternion startValue, Quaternion changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x231CC50", Offset = "0x231CC50", VA = "0x231CC50")]
	public PureQuaternionPlugin()
	{
	}
}
