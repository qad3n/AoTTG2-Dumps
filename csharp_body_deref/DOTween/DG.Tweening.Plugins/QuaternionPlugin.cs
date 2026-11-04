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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x56F980", Offset = "0x56DF80", VA = "0x18056F980", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x570150", Offset = "0x56E750", VA = "0x180570150", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x56EA30", Offset = "0x56D030", VA = "0x18056EA30", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Quaternion value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x570310", Offset = "0x56E910", VA = "0x180570310", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x56F720", Offset = "0x56DD20", VA = "0x18056F720", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Vector3, QuaternionOptions> t)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x56F6F0", Offset = "0x56DCF0", VA = "0x18056F6F0", Slot = "10")]
	public override float GetSpeedBasedDuration(QuaternionOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x56EAA0", Offset = "0x56D0A0", VA = "0x18056EAA0", Slot = "11")]
	public override void EvaluateAndApply(QuaternionOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x56F4B0", Offset = "0x56DAB0", VA = "0x18056F4B0")]
	private Vector3 GetEulerValForCalculations(TweenerCore<Quaternion, Vector3, QuaternionOptions> t, Vector3 val, Vector3 counterVal)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x56F470", Offset = "0x56DA70", VA = "0x18056F470")]
	private Vector3 FlipEulerAngles(Vector3 euler)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x570360", Offset = "0x56E960", VA = "0x180570360")]
	public QuaternionPlugin()
	{
	}
}
