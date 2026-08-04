// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Vector3ArrayPlugin
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

[Token(Token = "0x2000079")]
public class Vector3ArrayPlugin : ABSTweenPlugin<Vector3, Vector3[], Vector3ArrayOptions>
{
	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x2372C60", Offset = "0x2372C60", VA = "0x2372C60", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x2372CC0", Offset = "0x2372CC0", VA = "0x2372CC0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x2372CD0", Offset = "0x2372CD0", VA = "0x2372CD0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3[] fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x2372CE0", Offset = "0x2372CE0", VA = "0x2372CE0", Slot = "7")]
	public override Vector3[] ConvertToStartValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2372DF0", Offset = "0x2372DF0", VA = "0x2372DF0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2372EF0", Offset = "0x2372EF0", VA = "0x2372EF0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x2372FF0", Offset = "0x2372FF0", VA = "0x2372FF0", Slot = "10")]
	public override float GetSpeedBasedDuration(Vector3ArrayOptions options, float unitsXSecond, Vector3[] changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x23731D0", Offset = "0x23731D0", VA = "0x23731D0", Slot = "11")]
	public override void EvaluateAndApply(Vector3ArrayOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Vector3[] startValue, Vector3[] changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2373CA0", Offset = "0x2373CA0", VA = "0x2373CA0")]
	public Vector3ArrayPlugin()
	{
	}
}
