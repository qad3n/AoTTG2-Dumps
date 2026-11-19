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
	[Address(RVA = "0x3183280", Offset = "0x3182280", VA = "0x3183280", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x31832E0", Offset = "0x31822E0", VA = "0x31832E0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x31832F0", Offset = "0x31822F0", VA = "0x31832F0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3[] fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3183300", Offset = "0x3182300", VA = "0x3183300", Slot = "7")]
	public override Vector3[] ConvertToStartValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3183400", Offset = "0x3182400", VA = "0x3183400", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3183530", Offset = "0x3182530", VA = "0x3183530", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3183630", Offset = "0x3182630", VA = "0x3183630", Slot = "10")]
	public override float GetSpeedBasedDuration(Vector3ArrayOptions options, float unitsXSecond, Vector3[] changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3183800", Offset = "0x3182800", VA = "0x3183800", Slot = "11")]
	public override void EvaluateAndApply(Vector3ArrayOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Vector3[] startValue, Vector3[] changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3184260", Offset = "0x3183260", VA = "0x3184260")]
	public Vector3ArrayPlugin()
	{
	}
}
