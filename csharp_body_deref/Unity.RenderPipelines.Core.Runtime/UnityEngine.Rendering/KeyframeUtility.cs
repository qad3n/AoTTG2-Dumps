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

[Token(Token = "0x20001D4")]
public class KeyframeUtility
{
	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x4C040A0", Offset = "0x4C040A0", VA = "0x4C040A0")]
	public static void ResetAnimationCurve(AnimationCurve curve)
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x4C040C0", Offset = "0x4C040C0", VA = "0x4C040C0")]
	private static Keyframe LerpSingleKeyframe(Keyframe lhs, Keyframe rhs, float t)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x4C042A0", Offset = "0x4C042A0", VA = "0x4C042A0")]
	private static Keyframe GetKeyframeAndClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x4C043A0", Offset = "0x4C043A0", VA = "0x4C043A0")]
	private static Keyframe FetchKeyFromIndexClampEdge([DisallowNull] NativeArray<Keyframe> keys, int index, float segmentStartTime, float segmentEndTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x4C04520", Offset = "0x4C04520", VA = "0x4C04520")]
	private static void EvalCurveSegmentAndDeriv(out float dstValue, out float dstDeriv, Keyframe lhsKey, Keyframe rhsKey, float desiredTime)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x4C04710", Offset = "0x4C04710", VA = "0x4C04710")]
	private static Keyframe EvalKeyAtTime([DisallowNull] NativeArray<Keyframe> keys, int lhsIndex, int rhsIndex, float startTime, float endTime, float currTime)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4C04820", Offset = "0x4C04820", VA = "0x4C04820")]
	public static void InterpAnimationCurve(ref AnimationCurve lhsAndResultCurve, [DisallowNull] AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4C054C0", Offset = "0x4C054C0", VA = "0x4C054C0")]
	public KeyframeUtility()
	{
	}
}
