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
	[Address(RVA = "0x3193B10", Offset = "0x3192B10", VA = "0x3193B10")]
	public static PureQuaternionPlugin Plug()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x3193C00", Offset = "0x3192C00", VA = "0x3193C00", Slot = "4")]
	public override void Reset(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x3193C10", Offset = "0x3192C10", VA = "0x3193C10", Slot = "5")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x3193D60", Offset = "0x3192D60", VA = "0x3193D60", Slot = "6")]
	public override void SetFrom(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x3193F70", Offset = "0x3192F70", VA = "0x3193F70", Slot = "7")]
	public override Quaternion ConvertToStartValue(TweenerCore<Quaternion, Quaternion, NoOptions> t, Quaternion value)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x3193F80", Offset = "0x3192F80", VA = "0x3193F80", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x3194060", Offset = "0x3193060", VA = "0x3194060", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Quaternion, Quaternion, NoOptions> t)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3194080", Offset = "0x3193080", VA = "0x3194080", Slot = "10")]
	public override float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, Quaternion changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x3194180", Offset = "0x3193180", VA = "0x3194180", Slot = "11")]
	public override void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, float elapsed, Quaternion startValue, Quaternion changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3193BC0", Offset = "0x3192BC0", VA = "0x3193BC0")]
	public PureQuaternionPlugin()
	{
	}
}
