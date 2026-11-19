// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.KeyframeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001F1")]
public class KeyframeUtility
{
	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x6551670", Offset = "0x6550670", VA = "0x6551670")]
	public static void ResetAnimationCurve(AnimationCurve curve)
	{
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x6551690", Offset = "0x6550690", VA = "0x6551690")]
	private static Keyframe LerpSingleKeyframe(Keyframe lhs, Keyframe rhs, float t)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x6551870", Offset = "0x6550870", VA = "0x6551870")]
	private static Keyframe GetKeyframeAndClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x6551960", Offset = "0x6550960", VA = "0x6551960")]
	private static Keyframe FetchKeyFromIndexClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index, float segmentStartTime, float segmentEndTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x6551AC0", Offset = "0x6550AC0", VA = "0x6551AC0")]
	private static void EvalCurveSegmentAndDeriv(out float dstValue, out float dstDeriv, Keyframe lhsKey, Keyframe rhsKey, float desiredTime)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x6551CB0", Offset = "0x6550CB0", VA = "0x6551CB0")]
	private static Keyframe EvalKeyAtTime([DisallowNull] NativeArray<Keyframe> keys, int lhsIndex, int rhsIndex, float startTime, float endTime, float currTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x6551D90", Offset = "0x6550D90", VA = "0x6551D90")]
	public static void InterpAnimationCurve(ref AnimationCurve lhsAndResultCurve, [DisallowNull] AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x6552980", Offset = "0x6551980", VA = "0x6552980")]
	public KeyframeUtility()
	{
	}
}
