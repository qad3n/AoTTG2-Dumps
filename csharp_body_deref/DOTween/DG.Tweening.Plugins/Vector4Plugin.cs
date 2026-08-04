// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Vector4Plugin
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

[Token(Token = "0x2000082")]
public class Vector4Plugin : ABSTweenPlugin<Vector4, Vector4, VectorOptions>
{
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x237AE60", Offset = "0x237AE60", VA = "0x237AE60", Slot = "4")]
	public override void Reset(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x237AE70", Offset = "0x237AE70", VA = "0x237AE70", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x237B2B0", Offset = "0x237B2B0", VA = "0x237B2B0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x237B7D0", Offset = "0x237B7D0", VA = "0x237B7D0", Slot = "7")]
	public override Vector4 ConvertToStartValue(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 value)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x237B7E0", Offset = "0x237B7E0", VA = "0x237B7E0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x237B820", Offset = "0x237B820", VA = "0x237B820", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x237B950", Offset = "0x237B950", VA = "0x237B950", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector4 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x237BA10", Offset = "0x237BA10", VA = "0x237BA10", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector4> getter, DOSetter<Vector4> setter, float elapsed, Vector4 startValue, Vector4 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x237C440", Offset = "0x237C440", VA = "0x237C440")]
	public Vector4Plugin()
	{
	}
}
