// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ContinuationQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200022C")]
internal sealed class ContinuationQueue
{
	[Token(Token = "0x4000658")]
	private const int MaxArrayLength = 2146435071;

	[Token(Token = "0x4000659")]
	private const int InitialSize = 16;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x10")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x14")]
	private SpinLock gate;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x18")]
	private bool dequing;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x1C")]
	private int actionListCount;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x20")]
	private Action[] actionList;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x28")]
	private int waitingListCount;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x30")]
	private Action[] waitingList;

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x6306830", Offset = "0x6305830", VA = "0x6306830")]
	public ContinuationQueue(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x63068E0", Offset = "0x63058E0", VA = "0x63068E0")]
	public void Enqueue(Action continuation)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x6306B70", Offset = "0x6305B70", VA = "0x6306B70")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x6306C00", Offset = "0x6305C00", VA = "0x6306C00")]
	public void Run()
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x6306F70", Offset = "0x6305F70", VA = "0x6306F70")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x6306F80", Offset = "0x6305F80", VA = "0x6306F80")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x6306F90", Offset = "0x6305F90", VA = "0x6306F90")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x6306FA0", Offset = "0x6305FA0", VA = "0x6306FA0")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x6306FB0", Offset = "0x6305FB0", VA = "0x6306FB0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x6306FC0", Offset = "0x6305FC0", VA = "0x6306FC0")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x6306FD0", Offset = "0x6305FD0", VA = "0x6306FD0")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x6306FE0", Offset = "0x6305FE0", VA = "0x6306FE0")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x6306FF0", Offset = "0x6305FF0", VA = "0x6306FF0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x6307000", Offset = "0x6306000", VA = "0x6307000")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x6307010", Offset = "0x6306010", VA = "0x6307010")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x6307020", Offset = "0x6306020", VA = "0x6307020")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x6307030", Offset = "0x6306030", VA = "0x6307030")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x6307040", Offset = "0x6306040", VA = "0x6307040")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x6307050", Offset = "0x6306050", VA = "0x6307050")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x6307060", Offset = "0x6306060", VA = "0x6307060")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x6306C10", Offset = "0x6305C10", VA = "0x6306C10")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
