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
	[Address(RVA = "0x318B540", Offset = "0x318A540", VA = "0x318B540", Slot = "4")]
	public override void Reset(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x318B550", Offset = "0x318A550", VA = "0x318B550", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x318B990", Offset = "0x318A990", VA = "0x318B990", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x318BEA0", Offset = "0x318AEA0", VA = "0x318BEA0", Slot = "7")]
	public override Vector4 ConvertToStartValue(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 value)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x318BEB0", Offset = "0x318AEB0", VA = "0x318BEB0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x318BEF0", Offset = "0x318AEF0", VA = "0x318BEF0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x318C010", Offset = "0x318B010", VA = "0x318C010", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector4 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x318C0E0", Offset = "0x318B0E0", VA = "0x318C0E0", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector4> getter, DOSetter<Vector4> setter, float elapsed, Vector4 startValue, Vector4 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x318CAF0", Offset = "0x318BAF0", VA = "0x318CAF0")]
	public Vector4Plugin()
	{
	}
}
