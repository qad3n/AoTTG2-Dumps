// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.QuaternionPlugin
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
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007D")]
public class QuaternionPlugin : ABSTweenPlugin<Quaternion, Vector3, QuaternionOptions>
{
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3186E20", Offset = "0x3185E20", VA = "0x3186E20", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3186E30", Offset = "0x3185E30", VA = "0x3186E30", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x3187640", Offset = "0x3186640", VA = "0x3187640", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x31877A0", Offset = "0x31867A0", VA = "0x31877A0", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Quaternion value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x31877E0", Offset = "0x31867E0", VA = "0x31877E0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3187820", Offset = "0x3186820", VA = "0x3187820", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3187A70", Offset = "0x3186A70", VA = "0x3187A70", Slot = "10")]
	public override float GetSpeedBasedDuration(QuaternionOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3187B40", Offset = "0x3186B40", VA = "0x3187B40", Slot = "11")]
	public override void EvaluateAndApply(QuaternionOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x3187350", Offset = "0x3186350", VA = "0x3187350")]
	private Vector3 GetEulerValForCalculations(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 val, Vector3 counterVal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3188320", Offset = "0x3187320", VA = "0x3188320")]
	private Vector3 FlipEulerAngles(Vector3 euler)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3188350", Offset = "0x3187350", VA = "0x3188350")]
	public QuaternionPlugin()
	{
	}
}
