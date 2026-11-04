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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public override void Reset(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x574C90", Offset = "0x573290", VA = "0x180574C90", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x574AE0", Offset = "0x5730E0", VA = "0x180574AE0", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x546D10", Offset = "0x545310", VA = "0x180546D10", Slot = "7")]
	public override Vector2 ConvertToStartValue(TweenerCore<Vector2, Vector2, VectorOptions> t, Vector2 value)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x574DD0", Offset = "0x5733D0", VA = "0x180574DD0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x574A50", Offset = "0x573050", VA = "0x180574A50", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector2, Vector2, VectorOptions> t)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x5749A0", Offset = "0x572FA0", VA = "0x1805749A0", Slot = "10")]
	public override float GetSpeedBasedDuration(VectorOptions options, float unitsXSecond, Vector2 changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x574670", Offset = "0x572C70", VA = "0x180574670", Slot = "11")]
	public override void EvaluateAndApply(VectorOptions options, Tween t, bool isRelative, DOGetter<Vector2> getter, DOSetter<Vector2> setter, float elapsed, Vector2 startValue, Vector2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x574E00", Offset = "0x573400", VA = "0x180574E00")]
	public Vector2Plugin()
	{
	}
}
