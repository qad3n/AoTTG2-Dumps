// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.PathPlugin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x200007A")]
public class PathPlugin : ABSTweenPlugin<Vector3, Path, PathOptions>
{
	[Token(Token = "0x400015F")]
	public const float MinLookAhead = 0.0001f;

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x56A3F0", Offset = "0x5689F0", VA = "0x18056A3F0", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Path, PathOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Path, PathOptions> t, Path fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x56A380", Offset = "0x568980", VA = "0x18056A380")]
	public static ABSTweenPlugin<Vector3, Path, PathOptions> Get()
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x569E30", Offset = "0x568430", VA = "0x180569E30", Slot = "7")]
	public override Path ConvertToStartValue(TweenerCore<Vector3, Path, PathOptions> t, Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x56BDA0", Offset = "0x56A3A0", VA = "0x18056BDA0", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x56A470", Offset = "0x568A70", VA = "0x18056A470", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x56A360", Offset = "0x568960", VA = "0x18056A360", Slot = "10")]
	public override float GetSpeedBasedDuration(PathOptions options, float unitsXSecond, Path changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x569E90", Offset = "0x568490", VA = "0x180569E90", Slot = "11")]
	public override void EvaluateAndApply(PathOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Path startValue, Path changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x56AAF0", Offset = "0x5690F0", VA = "0x18056AAF0")]
	public void SetOrientation(PathOptions options, Tween t, Path path, float pathPerc, Vector3 tPos, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x569E50", Offset = "0x568450", VA = "0x180569E50")]
	private Vector3 DivideVectorByVector(Vector3 vector, Vector3 byVector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x56A3B0", Offset = "0x5689B0", VA = "0x18056A3B0")]
	private Vector3 MultiplyVectorByVector(Vector3 vector, Vector3 byVector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x56BE80", Offset = "0x56A480", VA = "0x18056BE80")]
	public PathPlugin()
	{
	}
}
