// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.CirclePlugin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x31811C0", Offset = "0x31801C0", VA = "0x31811C0", Slot = "4")]
	public override void Reset(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x31811D0", Offset = "0x31801D0", VA = "0x31811D0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, CircleOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x31815C0", Offset = "0x31805C0", VA = "0x31815C0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, CircleOptions> t, Vector2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x31817D0", Offset = "0x31807D0", VA = "0x31817D0")]
	public static ABSTweenPlugin<Vector2, Vector2, CircleOptions> Get()
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3181800", Offset = "0x3180800", VA = "0x3181800", Slot = "7")]
	public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, CircleOptions> t, Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3181810", Offset = "0x3180810", VA = "0x3181810", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3181960", Offset = "0x3180960", VA = "0x3181960", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector2, Vector2, CircleOptions> t)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3181AC0", Offset = "0x3180AC0", VA = "0x3181AC0", Slot = "10")]
	public override float GetSpeedBasedDuration(CircleOptions options, float unitsXSecond, Vector2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3181AD0", Offset = "0x3180AD0", VA = "0x3181AD0", Slot = "11")]
	public override void EvaluateAndApply(CircleOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x31813C0", Offset = "0x31803C0", VA = "0x31813C0")]
	public Vector2 GetPositionOnCircle(CircleOptions options, float degrees)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3181BF0", Offset = "0x3180BF0", VA = "0x3181BF0")]
	public CirclePlugin()
	{
	}
}
