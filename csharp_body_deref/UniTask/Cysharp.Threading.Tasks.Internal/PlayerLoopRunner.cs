// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4A1BA50", Offset = "0x4A1BA50", VA = "0x4A1BA50")]
	public PlayerLoopRunner(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4A1BC40", Offset = "0x4A1BC40", VA = "0x4A1BC40")]
	public void AddAction(IPlayerLoopItem item)
	{
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4A1BF90", Offset = "0x4A1BF90", VA = "0x4A1BF90")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4A1C0E0", Offset = "0x4A1C0E0", VA = "0x4A1C0E0")]
	public void Run()
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4A1CDD0", Offset = "0x4A1CDD0", VA = "0x4A1CDD0")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4A1CDE0", Offset = "0x4A1CDE0", VA = "0x4A1CDE0")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4A1CDF0", Offset = "0x4A1CDF0", VA = "0x4A1CDF0")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x4A1CE00", Offset = "0x4A1CE00", VA = "0x4A1CE00")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x4A1CE10", Offset = "0x4A1CE10", VA = "0x4A1CE10")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x4A1CE20", Offset = "0x4A1CE20", VA = "0x4A1CE20")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x4A1CE30", Offset = "0x4A1CE30", VA = "0x4A1CE30")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x4A1CE40", Offset = "0x4A1CE40", VA = "0x4A1CE40")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x4A1CE50", Offset = "0x4A1CE50", VA = "0x4A1CE50")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x4A1CE60", Offset = "0x4A1CE60", VA = "0x4A1CE60")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x4A1CE70", Offset = "0x4A1CE70", VA = "0x4A1CE70")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4A1CE80", Offset = "0x4A1CE80", VA = "0x4A1CE80")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4A1CE90", Offset = "0x4A1CE90", VA = "0x4A1CE90")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4A1CEA0", Offset = "0x4A1CEA0", VA = "0x4A1CEA0")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4A1CEB0", Offset = "0x4A1CEB0", VA = "0x4A1CEB0")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4A1CEC0", Offset = "0x4A1CEC0", VA = "0x4A1CEC0")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4A1C0F0", Offset = "0x4A1C0F0", VA = "0x4A1C0F0")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
