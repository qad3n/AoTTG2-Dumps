using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200022E")]
internal sealed class PlayerLoopRunner
{
	[Token(Token = "0x400065B")]
	private const int InitialSize = 16;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x10")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x400065D")]
	[FieldOffset(Offset = "0x18")]
	private readonly object runningAndQueueLock;

	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x20")]
	private readonly object arrayLock;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Action<Exception> unhandledExceptionCallback;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x30")]
	private int tail;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x34")]
	private bool running;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x38")]
	private IPlayerLoopItem[] loopItems;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0x40")]
	private MinimumQueue<IPlayerLoopItem> waitQueue;

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x46F6950", Offset = "0x46F6950", VA = "0x46F6950")]
	public PlayerLoopRunner(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x46F6B40", Offset = "0x46F6B40", VA = "0x46F6B40")]
	public void AddAction(IPlayerLoopItem item)
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x46F6E90", Offset = "0x46F6E90", VA = "0x46F6E90")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x46F6FE0", Offset = "0x46F6FE0", VA = "0x46F6FE0")]
	public void Run()
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x46F7CD0", Offset = "0x46F7CD0", VA = "0x46F7CD0")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x46F7CE0", Offset = "0x46F7CE0", VA = "0x46F7CE0")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x46F7CF0", Offset = "0x46F7CF0", VA = "0x46F7CF0")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x46F7D00", Offset = "0x46F7D00", VA = "0x46F7D00")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x46F7D10", Offset = "0x46F7D10", VA = "0x46F7D10")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x46F7D20", Offset = "0x46F7D20", VA = "0x46F7D20")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x46F7D30", Offset = "0x46F7D30", VA = "0x46F7D30")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x46F7D40", Offset = "0x46F7D40", VA = "0x46F7D40")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x46F7D50", Offset = "0x46F7D50", VA = "0x46F7D50")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x46F7D60", Offset = "0x46F7D60", VA = "0x46F7D60")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x46F7D70", Offset = "0x46F7D70", VA = "0x46F7D70")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x46F7D80", Offset = "0x46F7D80", VA = "0x46F7D80")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x46F7D90", Offset = "0x46F7D90", VA = "0x46F7D90")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x46F7DA0", Offset = "0x46F7DA0", VA = "0x46F7DA0")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x46F7DB0", Offset = "0x46F7DB0", VA = "0x46F7DB0")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x46F7DC0", Offset = "0x46F7DC0", VA = "0x46F7DC0")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x46F6FF0", Offset = "0x46F6FF0", VA = "0x46F6FF0")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
