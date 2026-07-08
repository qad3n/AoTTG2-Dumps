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
	[Address(RVA = "0x230D400", Offset = "0x230D400", VA = "0x230D400", Slot = "4")]
	public override void Reset(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x230D620", Offset = "0x230D620", VA = "0x230D620", Slot = "5")]
	public override void SetFrom(TweenerCore<Vector3, Path, PathOptions> t, bool isRelative)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x230D630", Offset = "0x230D630", VA = "0x230D630", Slot = "6")]
	public override void SetFrom(TweenerCore<Vector3, Path, PathOptions> t, Path fromValue, bool setImmediately, bool isRelative)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x230D640", Offset = "0x230D640", VA = "0x230D640")]
	public static ABSTweenPlugin<Vector3, Path, PathOptions> Get()
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x230D670", Offset = "0x230D670", VA = "0x230D670", Slot = "7")]
	public override Path ConvertToStartValue(TweenerCore<Vector3, Path, PathOptions> t, Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x230D690", Offset = "0x230D690", VA = "0x230D690", Slot = "8")]
	public override void SetRelativeEndValue(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x230D760", Offset = "0x230D760", VA = "0x230D760", Slot = "9")]
	public override void SetChangeValue(TweenerCore<Vector3, Path, PathOptions> t)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x230DF20", Offset = "0x230DF20", VA = "0x230DF20", Slot = "10")]
	public override float GetSpeedBasedDuration(PathOptions options, float unitsXSecond, Path changeValue)
	{
		return default(float);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x230DF40", Offset = "0x230DF40", VA = "0x230DF40", Slot = "11")]
	public override void EvaluateAndApply(PathOptions options, Tween t, bool isRelative, DOGetter<Vector3> getter, DOSetter<Vector3> setter, float elapsed, Path startValue, Path changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x230EB90", Offset = "0x230EB90", VA = "0x230EB90")]
	public void SetOrientation(PathOptions options, Tween t, Path path, float pathPerc, Vector3 tPos, UpdateNotice updateNotice)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x230F8F0", Offset = "0x230F8F0", VA = "0x230F8F0")]
	private Vector3 DivideVectorByVector(Vector3 vector, Vector3 byVector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x230F900", Offset = "0x230F900", VA = "0x230F900")]
	private Vector3 MultiplyVectorByVector(Vector3 vector, Vector3 byVector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x230F910", Offset = "0x230F910", VA = "0x230F910")]
	public PathPlugin()
	{
	}
}
