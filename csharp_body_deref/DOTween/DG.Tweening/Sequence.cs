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
	[Address(RVA = "0x5502C0", Offset = "0x54E8C0", VA = "0x1805502C0")]
	internal Sequence()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x54F7D0", Offset = "0x54DDD0", VA = "0x18054F7D0")]
	internal static Sequence DoPrepend(Sequence inSequence, Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x54F470", Offset = "0x54DA70", VA = "0x18054F470")]
	internal static Sequence DoInsert(Sequence inSequence, Tween t, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x54EEB0", Offset = "0x54D4B0", VA = "0x18054EEB0")]
	internal static Sequence DoAppendInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x54F6F0", Offset = "0x54DCF0", VA = "0x18054F6F0")]
	internal static Sequence DoPrependInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x54F340", Offset = "0x54D940", VA = "0x18054F340")]
	internal static Sequence DoInsertCallback(Sequence inSequence, TweenCallback callback, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x5501D0", Offset = "0x54E7D0", VA = "0x1805501D0", Slot = "6")]
	internal override float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x54FD40", Offset = "0x54E340", VA = "0x18054FD40", Slot = "4")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x550200", Offset = "0x54E800", VA = "0x180550200", Slot = "5")]
	internal override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5501C0", Offset = "0x54E7C0", VA = "0x1805501C0", Slot = "7")]
	internal override bool Startup()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x54EE90", Offset = "0x54D490", VA = "0x18054EE90", Slot = "8")]
	internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x54FF60", Offset = "0x54E560", VA = "0x18054FF60")]
	internal static void Setup(Sequence s)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x54F910", Offset = "0x54DF10", VA = "0x18054F910")]
	internal static bool DoStartup(Sequence s)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x54EEF0", Offset = "0x54D4F0", VA = "0x18054EEF0")]
	internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x54E5F0", Offset = "0x54CBF0", VA = "0x18054E5F0")]
	private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x550090", Offset = "0x54E690", VA = "0x180550090")]
	private static void StableSortSequencedObjs(List<ABSSequentiable> list)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x54FCE0", Offset = "0x54E2E0", VA = "0x18054FCE0")]
	private static bool IsAnyCallbackSet(Sequence s)
	{
		return default(bool);
	}
}
