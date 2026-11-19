// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.PlayerLoopTimer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000063")]
public abstract class PlayerLoopTimer : IDisposable, IPlayerLoopItem
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x18")]
	private readonly Action<object> timerCallback;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x20")]
	private readonly object state;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x28")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x2C")]
	private readonly bool periodic;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x2D")]
	private bool isRunning;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x2E")]
	private bool tryStop;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x2F")]
	private bool isDisposed;

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x62C88D0", Offset = "0x62C78D0", VA = "0x62C88D0")]
	protected PlayerLoopTimer(bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x62C8940", Offset = "0x62C7940", VA = "0x62C8940")]
	public static PlayerLoopTimer Create(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x62C3350", Offset = "0x62C2350", VA = "0x62C3350")]
	public static PlayerLoopTimer StartNew(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x62C8CC0", Offset = "0x62C7CC0", VA = "0x62C8CC0")]
	public void Restart()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x62C8D80", Offset = "0x62C7D80", VA = "0x62C8D80")]
	public void Restart(TimeSpan interval)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x62C8E70", Offset = "0x62C7E70", VA = "0x62C8E70")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000157")]
	protected abstract void ResetCore(TimeSpan? newInterval);

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x62C8E80", Offset = "0x62C7E80", VA = "0x62C8E80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x62C8E90", Offset = "0x62C7E90", VA = "0x62C8E90", Slot = "5")]
	private bool Cysharp_002EThreading_002ETasks_002EIPlayerLoopItem_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600015A")]
	protected abstract bool MoveNextCore();
}
