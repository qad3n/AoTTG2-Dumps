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
	[Address(RVA = "0x2B5C880", Offset = "0x2B5AE80", VA = "0x182B5C880")]
	public static void ResetAnimationCurve(AnimationCurve curve)
	{
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x2B5C630", Offset = "0x2B5AC30", VA = "0x182B5C630")]
	private static Keyframe LerpSingleKeyframe(Keyframe lhs, Keyframe rhs, float t)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x2B5BEA0", Offset = "0x2B5A4A0", VA = "0x182B5BEA0")]
	private static Keyframe GetKeyframeAndClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x2B5BC70", Offset = "0x2B5A270", VA = "0x182B5BC70")]
	private static Keyframe FetchKeyFromIndexClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index, float segmentStartTime, float segmentEndTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x2B5B920", Offset = "0x2B59F20", VA = "0x182B5B920")]
	private static void EvalCurveSegmentAndDeriv(out float dstValue, out float dstDeriv, Keyframe lhsKey, Keyframe rhsKey, float desiredTime)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x2B5BB10", Offset = "0x2B5A110", VA = "0x182B5BB10")]
	private static Keyframe EvalKeyAtTime([DisallowNull] NativeArray<Keyframe> keys, int lhsIndex, int rhsIndex, float startTime, float endTime, float currTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x2B5BFA0", Offset = "0x2B5A5A0", VA = "0x182B5BFA0")]
	public static void InterpAnimationCurve(ref AnimationCurve lhsAndResultCurve, [DisallowNull] AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public KeyframeUtility()
	{
	}
}
