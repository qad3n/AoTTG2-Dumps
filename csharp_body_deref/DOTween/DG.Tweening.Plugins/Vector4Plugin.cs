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
	[Address(RVA = "0x2314580", Offset = "0x2314580", VA = "0x2314580", Slot = "4")]
	public override void Reset(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x2314590", Offset = "0x2314590", VA = "0x2314590", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x23149D0", Offset = "0x23149D0", VA = "0x23149D0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x2314EF0", Offset = "0x2314EF0", VA = "0x2314EF0", Slot = "7")]
	public override Vector4 ConvertToStartValue(TweenerCore<Vector4, Vector4, VectorOptions> t, Vector4 value)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2314F00", Offset = "0x2314F00", VA = "0x2314F00", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2314F40", Offset = "0x2314F40", VA = "0x2314F40", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector4, Vector4, VectorOptions> t)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2315070", Offset = "0x2315070", VA = "0x2315070", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector4 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2315130", Offset = "0x2315130", VA = "0x2315130", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector4> getter, DOSetter<Vector4> setter, float elapsed, Vector4 startValue, Vector4 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2315B60", Offset = "0x2315B60", VA = "0x2315B60")]
	public Vector4Plugin()
	{
	}
}
