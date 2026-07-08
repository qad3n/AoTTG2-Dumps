using System;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000229")]
internal sealed class ContinuationQueue
{
	[Token(Token = "0x4000645")]
	private const int MaxArrayLength = 2146435071;

	[Token(Token = "0x4000646")]
	private const int InitialSize = 16;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x10")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x14")]
	private SpinLock gate;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x18")]
	private bool dequing;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x1C")]
	private int actionListCount;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x20")]
	private Action[] actionList;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x28")]
	private int waitingListCount;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x30")]
	private Action[] waitingList;

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x46F3D60", Offset = "0x46F3D60", VA = "0x46F3D60")]
	public ContinuationQueue(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x46F3E10", Offset = "0x46F3E10", VA = "0x46F3E10")]
	public void Enqueue(Action continuation)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x46F4100", Offset = "0x46F4100", VA = "0x46F4100")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x46F4190", Offset = "0x46F4190", VA = "0x46F4190")]
	public void Run()
	{
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x46F4530", Offset = "0x46F4530", VA = "0x46F4530")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x46F4540", Offset = "0x46F4540", VA = "0x46F4540")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x46F4550", Offset = "0x46F4550", VA = "0x46F4550")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x46F4560", Offset = "0x46F4560", VA = "0x46F4560")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x46F4570", Offset = "0x46F4570", VA = "0x46F4570")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x46F4580", Offset = "0x46F4580", VA = "0x46F4580")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x46F4590", Offset = "0x46F4590", VA = "0x46F4590")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x46F45A0", Offset = "0x46F45A0", VA = "0x46F45A0")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x46F45B0", Offset = "0x46F45B0", VA = "0x46F45B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x46F45C0", Offset = "0x46F45C0", VA = "0x46F45C0")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x46F45D0", Offset = "0x46F45D0", VA = "0x46F45D0")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x46F45E0", Offset = "0x46F45E0", VA = "0x46F45E0")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x46F45F0", Offset = "0x46F45F0", VA = "0x46F45F0")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x46F4600", Offset = "0x46F4600", VA = "0x46F4600")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x46F4610", Offset = "0x46F4610", VA = "0x46F4610")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x46F4620", Offset = "0x46F4620", VA = "0x46F4620")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x46F41A0", Offset = "0x46F41A0", VA = "0x46F41A0")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
