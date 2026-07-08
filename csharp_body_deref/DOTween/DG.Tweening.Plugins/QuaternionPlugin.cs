using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007D")]
public class QuaternionPlugin : ABSTweenPlugin<Quaternion, Vector3, QuaternionOptions>
{
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x2310150", Offset = "0x2310150", VA = "0x2310150", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x2310160", Offset = "0x2310160", VA = "0x2310160", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x2310900", Offset = "0x2310900", VA = "0x2310900", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x2310A40", Offset = "0x2310A40", VA = "0x2310A40", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Quaternion value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2310A60", Offset = "0x2310A60", VA = "0x2310A60", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2310AA0", Offset = "0x2310AA0", VA = "0x2310AA0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2310D20", Offset = "0x2310D20", VA = "0x2310D20", Slot = "10")]
	public override float GetSpeedBasedDuration(QuaternionOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2310DF0", Offset = "0x2310DF0", VA = "0x2310DF0", Slot = "11")]
	public override void EvaluateAndApply(QuaternionOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2310680", Offset = "0x2310680", VA = "0x2310680")]
	private Vector3 GetEulerValForCalculations(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 val, Vector3 counterVal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x23115A0", Offset = "0x23115A0", VA = "0x23115A0")]
	private Vector3 FlipEulerAngles(Vector3 euler)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x23115D0", Offset = "0x23115D0", VA = "0x23115D0")]
	public QuaternionPlugin()
	{
	}
}
