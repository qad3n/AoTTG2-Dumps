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
	[Address(RVA = "0x230C380", Offset = "0x230C380", VA = "0x230C380", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x230C3E0", Offset = "0x230C3E0", VA = "0x230C3E0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x230C3F0", Offset = "0x230C3F0", VA = "0x230C3F0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3[] fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x230C400", Offset = "0x230C400", VA = "0x230C400", Slot = "7")]
	public override Vector3[] ConvertToStartValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x230C510", Offset = "0x230C510", VA = "0x230C510", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x230C610", Offset = "0x230C610", VA = "0x230C610", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x230C710", Offset = "0x230C710", VA = "0x230C710", Slot = "10")]
	public override float GetSpeedBasedDuration(Vector3ArrayOptions options, float unitsXSecond, Vector3[] changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x230C8F0", Offset = "0x230C8F0", VA = "0x230C8F0", Slot = "11")]
	public override void EvaluateAndApply(Vector3ArrayOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Vector3[] startValue, Vector3[] changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x230D3C0", Offset = "0x230D3C0", VA = "0x230D3C0")]
	public Vector3ArrayPlugin()
	{
	}
}
