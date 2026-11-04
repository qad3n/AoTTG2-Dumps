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
	[Address(RVA = "0x2940550", Offset = "0x293EB50", VA = "0x182940550")]
	public ContinuationQueue(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x293FFB0", Offset = "0x293E5B0", VA = "0x18293FFB0")]
	public void Enqueue(Action continuation)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x293FF00", Offset = "0x293E500", VA = "0x18293FF00")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	public void Run()
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x293FFA0", Offset = "0x293E5A0", VA = "0x18293FFA0")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x2940230", Offset = "0x293E830", VA = "0x182940230")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
