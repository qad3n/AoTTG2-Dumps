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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x576B40", Offset = "0x575140", VA = "0x180576B40", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x576D70", Offset = "0x575370", VA = "0x180576D70", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x564920", Offset = "0x562F20", VA = "0x180564920", Slot = "7")]
	public override Vector4 ConvertToStartValue(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 value)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x564EF0", Offset = "0x5634F0", VA = "0x180564EF0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x576A30", Offset = "0x575030", VA = "0x180576A30", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x576980", Offset = "0x574F80", VA = "0x180576980", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector4 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5763F0", Offset = "0x5749F0", VA = "0x1805763F0", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector4> getter, DOSetter<Vector4> setter, float elapsed, Vector4 startValue, Vector4 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x576FF0", Offset = "0x5755F0", VA = "0x180576FF0")]
	public Vector4Plugin()
	{
	}
}
