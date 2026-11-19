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
	[Address(RVA = "0x316E750", Offset = "0x316D750", VA = "0x316E750")]
	internal Sequence()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x316E890", Offset = "0x316D890", VA = "0x316E890")]
	internal static Sequence DoPrepend(Sequence inSequence, Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x316E9D0", Offset = "0x316D9D0", VA = "0x316E9D0")]
	internal static Sequence DoInsert(Sequence inSequence, Tween t, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x316EC30", Offset = "0x316DC30", VA = "0x316EC30")]
	internal static Sequence DoAppendInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x316EC60", Offset = "0x316DC60", VA = "0x316EC60")]
	internal static Sequence DoPrependInterval(Sequence inSequence, float interval)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x316ED40", Offset = "0x316DD40", VA = "0x316ED40")]
	internal static Sequence DoInsertCallback(Sequence inSequence, TweenCallback callback, float atPosition)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x316EE80", Offset = "0x316DE80", VA = "0x316EE80", Slot = "6")]
	internal override float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x316EEC0", Offset = "0x316DEC0", VA = "0x316EEC0", Slot = "4")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x316F130", Offset = "0x316E130", VA = "0x316F130", Slot = "5")]
	internal override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x316F1F0", Offset = "0x316E1F0", VA = "0x316F1F0", Slot = "7")]
	internal override bool Startup()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x316F4B0", Offset = "0x316E4B0", VA = "0x316F4B0", Slot = "8")]
	internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3168A70", Offset = "0x3167A70", VA = "0x3168A70")]
	internal static void Setup(Sequence s)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x316F200", Offset = "0x316E200", VA = "0x316F200")]
	internal static bool DoStartup(Sequence s)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x316F4C0", Offset = "0x316E4C0", VA = "0x316F4C0")]
	internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x316FA80", Offset = "0x316EA80", VA = "0x316FA80")]
	private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x316F940", Offset = "0x316E940", VA = "0x316F940")]
	private static void StableSortSequencedObjs(List<ABSSequentiable> list)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x316F8F0", Offset = "0x316E8F0", VA = "0x316F8F0")]
	private static bool IsAnyCallbackSet(Sequence s)
	{
		return default(bool);
	}
}
