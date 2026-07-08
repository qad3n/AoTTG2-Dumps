using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000074")]
public class CirclePlugin : ABSTweenPlugin<Vector2, Vector2, CircleOptions>
{
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x2309F00", Offset = "0x2309F00", VA = "0x2309F00", Slot = "4")]
	public override void Reset(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x2309F10", Offset = "0x2309F10", VA = "0x2309F10", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, CircleOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x230A300", Offset = "0x230A300", VA = "0x230A300", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, CircleOptions> t, Vector2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x230A530", Offset = "0x230A530", VA = "0x230A530")]
	public static ABSTweenPlugin<Vector2, Vector2, CircleOptions> Get()
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x230A560", Offset = "0x230A560", VA = "0x230A560", Slot = "7")]
	public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, CircleOptions> t, Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x230A570", Offset = "0x230A570", VA = "0x230A570", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x230A6D0", Offset = "0x230A6D0", VA = "0x230A6D0", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x230A840", Offset = "0x230A840", VA = "0x230A840", Slot = "10")]
	public override float GetSpeedBasedDuration(CircleOptions options, float unitsXSecond, Vector2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x230A850", Offset = "0x230A850", VA = "0x230A850", Slot = "11")]
	public override void EvaluateAndApply(CircleOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x230A100", Offset = "0x230A100", VA = "0x230A100")]
	public Vector2 GetPositionOnCircle(CircleOptions options, float degrees)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x230A970", Offset = "0x230A970", VA = "0x230A970")]
	public CirclePlugin()
	{
	}
}
