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
	[Address(RVA = "0x22F7590", Offset = "0x22F7590", VA = "0x22F7590")]
	internal Sequence()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x22F76D0", Offset = "0x22F76D0", VA = "0x22F76D0")]
	internal static Sequence DoPrepend(Sequence inSequence, Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x22F7820", Offset = "0x22F7820", VA = "0x22F7820")]
	internal static Sequence DoInsert(Sequence inSequence, Tween t, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x22F7A90", Offset = "0x22F7A90", VA = "0x22F7A90")]
	internal static Sequence DoAppendInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x22F7AC0", Offset = "0x22F7AC0", VA = "0x22F7AC0")]
	internal static Sequence DoPrependInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x22F7BA0", Offset = "0x22F7BA0", VA = "0x22F7BA0")]
	internal static Sequence DoInsertCallback(Sequence inSequence, TweenCallback callback, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x22F7CE0", Offset = "0x22F7CE0", VA = "0x22F7CE0", Slot = "6")]
	internal override float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x22F7D10", Offset = "0x22F7D10", VA = "0x22F7D10", Slot = "4")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x22F7F80", Offset = "0x22F7F80", VA = "0x22F7F80", Slot = "5")]
	internal override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x22F8030", Offset = "0x22F8030", VA = "0x22F8030", Slot = "7")]
	internal override bool Startup()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x22F8330", Offset = "0x22F8330", VA = "0x22F8330", Slot = "8")]
	internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x22F1830", Offset = "0x22F1830", VA = "0x22F1830")]
	internal static void Setup(Sequence s)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x22F8040", Offset = "0x22F8040", VA = "0x22F8040")]
	internal static bool DoStartup(Sequence s)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x22F8340", Offset = "0x22F8340", VA = "0x22F8340")]
	internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x22F8910", Offset = "0x22F8910", VA = "0x22F8910")]
	private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x22F87D0", Offset = "0x22F87D0", VA = "0x22F87D0")]
	private static void StableSortSequencedObjs(List<ABSSequentiable> list)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x22F8780", Offset = "0x22F8780", VA = "0x22F8780")]
	private static bool IsAnyCallbackSet(Sequence s)
	{
		return default(bool);
	}
}
