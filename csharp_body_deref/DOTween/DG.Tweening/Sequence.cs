// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Sequence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using Il2CppDummyDll;

namespace DG.Tweening;

[Token(Token = "0x200001E")]
public sealed class Sequence : Tween
{
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x120")]
	internal readonly List<Tween> sequencedTweens;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x128")]
	private readonly List<ABSSequentiable> _sequencedObjs;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x130")]
	internal float lastTweenInsertTime;

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x235DE70", Offset = "0x235DE70", VA = "0x235DE70")]
	internal Sequence()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x235DFB0", Offset = "0x235DFB0", VA = "0x235DFB0")]
	internal static Sequence DoPrepend(Sequence inSequence, Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x235E100", Offset = "0x235E100", VA = "0x235E100")]
	internal static Sequence DoInsert(Sequence inSequence, Tween t, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x235E370", Offset = "0x235E370", VA = "0x235E370")]
	internal static Sequence DoAppendInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x235E3A0", Offset = "0x235E3A0", VA = "0x235E3A0")]
	internal static Sequence DoPrependInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x235E480", Offset = "0x235E480", VA = "0x235E480")]
	internal static Sequence DoInsertCallback(Sequence inSequence, TweenCallback callback, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x235E5C0", Offset = "0x235E5C0", VA = "0x235E5C0", Slot = "6")]
	internal override float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x235E5F0", Offset = "0x235E5F0", VA = "0x235E5F0", Slot = "4")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x235E860", Offset = "0x235E860", VA = "0x235E860", Slot = "5")]
	internal override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x235E910", Offset = "0x235E910", VA = "0x235E910", Slot = "7")]
	internal override bool Startup()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x235EC10", Offset = "0x235EC10", VA = "0x235EC10", Slot = "8")]
	internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2358110", Offset = "0x2358110", VA = "0x2358110")]
	internal static void Setup(Sequence s)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x235E920", Offset = "0x235E920", VA = "0x235E920")]
	internal static bool DoStartup(Sequence s)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x235EC20", Offset = "0x235EC20", VA = "0x235EC20")]
	internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x235F1F0", Offset = "0x235F1F0", VA = "0x235F1F0")]
	private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x235F0B0", Offset = "0x235F0B0", VA = "0x235F0B0")]
	private static void StableSortSequencedObjs(List<ABSSequentiable> list)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x235F060", Offset = "0x235F060", VA = "0x235F060")]
	private static bool IsAnyCallbackSet(Sequence s)
	{
		return default(bool);
	}
}
