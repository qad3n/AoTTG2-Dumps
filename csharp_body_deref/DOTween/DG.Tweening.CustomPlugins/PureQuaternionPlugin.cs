// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.CustomPlugins.PureQuaternionPlugin
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

namespace DG.Tweening.CustomPlugins;

[Token(Token = "0x200009F")]
public class PureQuaternionPlugin : ABSTweenPlugin<Quaternion, Quaternion, NoOptions>
{
	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x0")]
	private static PureQuaternionPlugin _plug;

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x2383480", Offset = "0x2383480", VA = "0x2383480")]
	public static PureQuaternionPlugin Plug()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x2383570", Offset = "0x2383570", VA = "0x2383570", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x2383580", Offset = "0x2383580", VA = "0x2383580", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x23836E0", Offset = "0x23836E0", VA = "0x23836E0", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x23838F0", Offset = "0x23838F0", VA = "0x23838F0", Slot = "7")]
	public override Quaternion ConvertToStartValue(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion value)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2383900", Offset = "0x2383900", VA = "0x2383900", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x23839F0", Offset = "0x23839F0", VA = "0x23839F0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x2383A10", Offset = "0x2383A10", VA = "0x2383A10", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, Quaternion changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2383B10", Offset = "0x2383B10", VA = "0x2383B10", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Quaternion startValue, Quaternion changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x2383530", Offset = "0x2383530", VA = "0x2383530")]
	public PureQuaternionPlugin()
	{
	}
}
