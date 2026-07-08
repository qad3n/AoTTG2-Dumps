using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200006D")]
public static class TweenSettingsExtensions
{
	[Token(Token = "0x600024A")]
	public static T SetAutoKill<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	public static T SetAutoKill<T>(this T t, bool autoKillOnCompletion) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	public static T SetId<T>(this T t, object objectId) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	public static T SetId<T>(this T t, string stringId) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600024E")]
	public static T SetId<T>(this T t, int intId) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600024F")]
	public static T SetLink<T>(this T t, GameObject gameObject) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	public static T SetLink<T>(this T t, GameObject gameObject, LinkBehaviour behaviour) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	public static T SetTarget<T>(this T t, object target) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	public static T SetLoops<T>(this T t, int loops) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	public static T SetLoops<T>(this T t, int loops, LoopType loopType) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	public static T SetEase<T>(this T t, Ease ease) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	public static T SetEase<T>(this T t, Ease ease, float overshoot) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	public static T SetEase<T>(this T t, Ease ease, float amplitude, float period) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	public static T SetEase<T>(this T t, AnimationCurve animCurve) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	public static T SetEase<T>(this T t, EaseFunction customEase) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	public static T SetRecyclable<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	public static T SetRecyclable<T>(this T t, bool recyclable) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	public static T SetUpdate<T>(this T t, bool isIndependentUpdate) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	public static T SetUpdate<T>(this T t, UpdateType updateType) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	public static T SetUpdate<T>(this T t, UpdateType updateType, bool isIndependentUpdate) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	public static T SetInverted<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	public static T SetInverted<T>(this T t, bool inverted) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	public static T OnStart<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	public static T OnPlay<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	public static T OnPause<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	public static T OnRewind<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	public static T OnUpdate<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	public static T OnStepComplete<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	public static T OnComplete<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	public static T OnKill<T>(this T t, TweenCallback action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	public static T OnWaypointChange<T>(this T t, TweenCallback<int> action) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	public static T SetAs<T>(this T t, Tween asTween) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	public static T SetAs<T>(this T t, TweenParams tweenParams) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x2301EA0", Offset = "0x2301EA0", VA = "0x2301EA0")]
	public static Sequence Append(this Sequence s, Tween t)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x2308A00", Offset = "0x2308A00", VA = "0x2308A00")]
	public static Sequence Prepend(this Sequence s, Tween t)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x2301EE0", Offset = "0x2301EE0", VA = "0x2301EE0")]
	public static Sequence Join(this Sequence s, Tween t)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x2308A30", Offset = "0x2308A30", VA = "0x2308A30")]
	public static Sequence Insert(this Sequence s, float atPosition, Tween t)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x22F4930", Offset = "0x22F4930", VA = "0x22F4930")]
	public static Sequence AppendInterval(this Sequence s, float interval)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x2308A70", Offset = "0x2308A70", VA = "0x2308A70")]
	public static Sequence PrependInterval(this Sequence s, float interval)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x2308AC0", Offset = "0x2308AC0", VA = "0x2308AC0")]
	public static Sequence AppendCallback(this Sequence s, TweenCallback callback)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x2308B20", Offset = "0x2308B20", VA = "0x2308B20")]
	public static Sequence PrependCallback(this Sequence s, TweenCallback callback)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x2308B80", Offset = "0x2308B80", VA = "0x2308B80")]
	public static Sequence JoinCallback(this Sequence s, TweenCallback callback)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x2308BE0", Offset = "0x2308BE0", VA = "0x2308BE0")]
	public static Sequence InsertCallback(this Sequence s, float atPosition, TweenCallback callback)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x2308970", Offset = "0x2308970", VA = "0x2308970")]
	private static bool ValidateAddToSequence(Sequence s, Tween t, bool ignoreTween = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	public static T From<T>(this T t) where T : Tweener
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	public static T From<T>(this T t, bool isRelative) where T : Tweener
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	public static T From<T>(this T t, bool setImmediately, bool isRelative) where T : Tweener
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	public static TweenerCore<T1, T2, TPlugOptions> From<T1, T2, TPlugOptions>(this TweenerCore<T1, T2, TPlugOptions> t, T2 fromValue, bool setImmediately = true, bool isRelative = false) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x2308C40", Offset = "0x2308C40", VA = "0x2308C40")]
	public static TweenerCore<Color, Color, ColorOptions> From(this TweenerCore<Color, Color, ColorOptions> t, float fromAlphaValue, bool setImmediately = true, bool isRelative = false)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x2308CE0", Offset = "0x2308CE0", VA = "0x2308CE0")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> From(this TweenerCore<Vector3, Vector3, VectorOptions> t, float fromValue, bool setImmediately = true, bool isRelative = false)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x2308D70", Offset = "0x2308D70", VA = "0x2308D70")]
	public static TweenerCore<Vector2, Vector2, CircleOptions> From(this TweenerCore<Vector2, Vector2, CircleOptions> t, float fromValueDegrees, bool setImmediately = true, bool isRelative = false)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	public static T SetDelay<T>(this T t, float delay) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	public static T SetDelay<T>(this T t, float delay, bool asPrependedIntervalIfSequence) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	public static T SetRelative<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	public static T SetRelative<T>(this T t, bool isRelative) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	public static T SetSpeedBased<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	public static T SetSpeedBased<T>(this T t, bool isSpeedBased) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2308E00", Offset = "0x2308E00", VA = "0x2308E00")]
	public static Tweener SetOptions(this TweenerCore<float, float, FloatOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2308E20", Offset = "0x2308E20", VA = "0x2308E20")]
	public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, VectorOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x2308E40", Offset = "0x2308E40", VA = "0x2308E40")]
	public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, VectorOptions> t, AxisConstraint axisConstraint, bool snapping = false)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x22FDB20", Offset = "0x22FDB20", VA = "0x22FDB20")]
	public static Tweener SetOptions(this TweenerCore<Vector3, Vector3, VectorOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x22FDD60", Offset = "0x22FDD60", VA = "0x22FDD60")]
	public static Tweener SetOptions(this TweenerCore<Vector3, Vector3, VectorOptions> t, AxisConstraint axisConstraint, bool snapping = false)
	{
		return null;
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x2308E60", Offset = "0x2308E60", VA = "0x2308E60")]
	public static Tweener SetOptions(this TweenerCore<Vector4, Vector4, VectorOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x2308E80", Offset = "0x2308E80", VA = "0x2308E80")]
	public static Tweener SetOptions(this TweenerCore<Vector4, Vector4, VectorOptions> t, AxisConstraint axisConstraint, bool snapping = false)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x2308EA0", Offset = "0x2308EA0", VA = "0x2308EA0")]
	public static Tweener SetOptions(this TweenerCore<Quaternion, Vector3, QuaternionOptions> t, bool useShortest360Route = true)
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x22EFEB0", Offset = "0x22EFEB0", VA = "0x22EFEB0")]
	public static Tweener SetOptions(this TweenerCore<Color, Color, ColorOptions> t, bool alphaOnly)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x2308EC0", Offset = "0x2308EC0", VA = "0x2308EC0")]
	public static Tweener SetOptions(this TweenerCore<Rect, Rect, RectOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2308EE0", Offset = "0x2308EE0", VA = "0x2308EE0")]
	public static Tweener SetOptions(this TweenerCore<string, string, StringOptions> t, bool richTextEnabled, [Optional][DefaultParameterValue(0)] ScrambleMode scrambleMode, [Optional] string scrambleChars)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x23001B0", Offset = "0x23001B0", VA = "0x23001B0")]
	public static Tweener SetOptions(this TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, bool snapping)
	{
		return null;
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x2308FC0", Offset = "0x2308FC0", VA = "0x2308FC0")]
	public static Tweener SetOptions(this TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> t, AxisConstraint axisConstraint, bool snapping = false)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x2308FE0", Offset = "0x2308FE0", VA = "0x2308FE0")]
	public static Tweener SetOptions(this TweenerCore<Vector2, Vector2, CircleOptions> t, float endValueDegrees, bool relativeCenter = true, bool snapping = false)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2309010", Offset = "0x2309010", VA = "0x2309010")]
	public static TweenerCore<Vector3, Path, PathOptions> SetOptions(this TweenerCore<Vector3, Path, PathOptions> t, AxisConstraint lockPosition, AxisConstraint lockRotation = AxisConstraint.None)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2309040", Offset = "0x2309040", VA = "0x2309040")]
	public static TweenerCore<Vector3, Path, PathOptions> SetOptions(this TweenerCore<Vector3, Path, PathOptions> t, bool closePath, AxisConstraint lockPosition = AxisConstraint.None, AxisConstraint lockRotation = AxisConstraint.None)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2309070", Offset = "0x2309070", VA = "0x2309070")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, Vector3 lookAtPosition, [Optional] Vector3? forwardDirection, [Optional] Vector3? up)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x23091A0", Offset = "0x23091A0", VA = "0x23091A0")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, Vector3 lookAtPosition, bool stableZRotation)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x23091F0", Offset = "0x23091F0", VA = "0x23091F0")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, Transform lookAtTransform, [Optional] Vector3? forwardDirection, [Optional] Vector3? up)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x23092D0", Offset = "0x23092D0", VA = "0x23092D0")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, Transform lookAtTransform, bool stableZRotation)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x2309390", Offset = "0x2309390", VA = "0x2309390")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, float lookAhead, [Optional] Vector3? forwardDirection, [Optional] Vector3? up)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x2309470", Offset = "0x2309470", VA = "0x2309470")]
	public static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, float lookAhead, bool stableZRotation)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x23090C0", Offset = "0x23090C0", VA = "0x23090C0")]
	private static TweenerCore<Vector3, Path, PathOptions> SetLookAt(this TweenerCore<Vector3, Path, PathOptions> t, OrientType orientType, Vector3 lookAtPosition, Transform lookAtTransform, float lookAhead, [Optional] Vector3? forwardDirection, [Optional] Vector3? up, bool stableZRotation = false)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x2309530", Offset = "0x2309530", VA = "0x2309530")]
	private static void SetPathForwardDirection(this TweenerCore<Vector3, Path, PathOptions> t, [Optional] Vector3? forwardDirection, [Optional] Vector3? up)
	{
	}
}
