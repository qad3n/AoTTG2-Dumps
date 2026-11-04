// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Vector3Plugin
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

[Token(Token = "0x2000086")]
public class Vector3Plugin : ABSTweenPlugin<Vector3, Vector3, VectorOptions>
{
	[Token(Token = "0x6000367")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x575FC0", Offset = "0x5745C0", VA = "0x180575FC0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Vector3, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x576180", Offset = "0x574780", VA = "0x180576180", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Vector3, VectorOptions> t, Vector3 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x575A00", Offset = "0x574000", VA = "0x180575A00", Slot = "7")]
	public override Vector3 ConvertToStartValue(TweenerCore<Vector3, Vector3, VectorOptions> t, Vector3 value)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x570310", Offset = "0x56E910", VA = "0x180570310", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x575EE0", Offset = "0x5744E0", VA = "0x180575EE0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Vector3, VectorOptions> t)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x56F6F0", Offset = "0x56DCF0", VA = "0x18056F6F0", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector3 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x575A20", Offset = "0x574020", VA = "0x180575A20", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Vector3 startValue, Vector3 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5763B0", Offset = "0x5749B0", VA = "0x1805763B0")]
	public Vector3Plugin()
	{
	}
}
