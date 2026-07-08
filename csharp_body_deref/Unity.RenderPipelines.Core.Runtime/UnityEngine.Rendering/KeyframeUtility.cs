using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D4")]
public class KeyframeUtility
{
	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x48DF030", Offset = "0x48DF030", VA = "0x48DF030")]
	public static void ResetAnimationCurve(AnimationCurve curve)
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x48DF050", Offset = "0x48DF050", VA = "0x48DF050")]
	private static Keyframe LerpSingleKeyframe(Keyframe lhs, Keyframe rhs, float t)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x48DF230", Offset = "0x48DF230", VA = "0x48DF230")]
	private static Keyframe GetKeyframeAndClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x48DF330", Offset = "0x48DF330", VA = "0x48DF330")]
	private static Keyframe FetchKeyFromIndexClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index, float segmentStartTime, float segmentEndTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x48DF4B0", Offset = "0x48DF4B0", VA = "0x48DF4B0")]
	private static void EvalCurveSegmentAndDeriv(out float dstValue, out float dstDeriv, Keyframe lhsKey, Keyframe rhsKey, float desiredTime)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x48DF6A0", Offset = "0x48DF6A0", VA = "0x48DF6A0")]
	private static Keyframe EvalKeyAtTime([DisallowNull] NativeArray<Keyframe> keys, int lhsIndex, int rhsIndex, float startTime, float endTime, float currTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x48DF7B0", Offset = "0x48DF7B0", VA = "0x48DF7B0")]
	public static void InterpAnimationCurve(ref AnimationCurve lhsAndResultCurve, [DisallowNull] AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x48E0450", Offset = "0x48E0450", VA = "0x48E0450")]
	public KeyframeUtility()
	{
	}
}
