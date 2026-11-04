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

[Token(Token = "0x2000231")]
internal sealed class PlayerLoopRunner
{
	[Token(Token = "0x400066E")]
	private const int InitialSize = 16;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x10")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x18")]
	private readonly object runningAndQueueLock;

	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x20")]
	private readonly object arrayLock;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x28")]
	private readonly Action<Exception> unhandledExceptionCallback;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x30")]
	private int tail;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x34")]
	private bool running;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x38")]
	private IPlayerLoopItem[] loopItems;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x40")]
	private MinimumQueue<IPlayerLoopItem> waitQueue;

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x29433F0", Offset = "0x29419F0", VA = "0x1829433F0")]
	public PlayerLoopRunner(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x29428F0", Offset = "0x2940EF0", VA = "0x1829428F0")]
	public void AddAction(IPlayerLoopItem item)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x2942C10", Offset = "0x2941210", VA = "0x182942C10")]
	public int Clear()
	{
		return default(int);
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	public void Run()
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void Initialization()
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastInitialization()
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void EarlyUpdate()
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastEarlyUpdate()
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastFixedUpdate()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void PreUpdate()
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastPreUpdate()
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastUpdate()
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void PreLateUpdate()
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastPreLateUpdate()
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void PostLateUpdate()
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastPostLateUpdate()
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void TimeUpdate()
	{
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x2942D40", Offset = "0x2941340", VA = "0x182942D40")]
	private void LastTimeUpdate()
	{
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x2942D50", Offset = "0x2941350", VA = "0x182942D50")]
	[DebuggerHidden]
	private void RunCore()
	{
	}
}
