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
	[Address(RVA = "0x2376A30", Offset = "0x2376A30", VA = "0x2376A30", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x2376A40", Offset = "0x2376A40", VA = "0x2376A40", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x23771E0", Offset = "0x23771E0", VA = "0x23771E0", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x2377320", Offset = "0x2377320", VA = "0x2377320", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Quaternion value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2377340", Offset = "0x2377340", VA = "0x2377340", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2377380", Offset = "0x2377380", VA = "0x2377380", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2377600", Offset = "0x2377600", VA = "0x2377600", Slot = "10")]
	public override float GetSpeedBasedDuration(QuaternionOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x23776D0", Offset = "0x23776D0", VA = "0x23776D0", Slot = "11")]
	public override void EvaluateAndApply(QuaternionOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2376F60", Offset = "0x2376F60", VA = "0x2376F60")]
	private Vector3 GetEulerValForCalculations(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 val, Vector3 counterVal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2377E80", Offset = "0x2377E80", VA = "0x2377E80")]
	private Vector3 FlipEulerAngles(Vector3 euler)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2377EB0", Offset = "0x2377EB0", VA = "0x2377EB0")]
	public QuaternionPlugin()
	{
	}
}
