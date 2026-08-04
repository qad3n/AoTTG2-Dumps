// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Vector2Plugin
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

[Token(Token = "0x2000081")]
public class Vector2Plugin : ABSTweenPlugin<Vector2, Vector2, VectorOptions>
{
	[Token(Token = "0x600033D")]
	[Address(RVA = "0x237A1D0", Offset = "0x237A1D0", VA = "0x237A1D0", Slot = "4")]
	public override void Reset(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x237A1E0", Offset = "0x237A1E0", VA = "0x237A1E0", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x237A440", Offset = "0x237A440", VA = "0x237A440", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x237A710", Offset = "0x237A710", VA = "0x237A710", Slot = "7")]
	public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x237A720", Offset = "0x237A720", VA = "0x237A720", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x237A750", Offset = "0x237A750", VA = "0x237A750", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x237A7D0", Offset = "0x237A7D0", VA = "0x237A7D0", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x237A880", Offset = "0x237A880", VA = "0x237A880", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x237AE20", Offset = "0x237AE20", VA = "0x237AE20")]
	public Vector2Plugin()
	{
	}
}
