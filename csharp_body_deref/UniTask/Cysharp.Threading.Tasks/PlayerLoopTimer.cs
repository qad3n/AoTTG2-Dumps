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

[Token(Token = "0x2000065")]
public abstract class PlayerLoopTimer : IDisposable, IPlayerLoopItem
{
	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x18")]
	private readonly Action<object> timerCallback;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x20")]
	private readonly object state;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x28")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x2C")]
	private readonly bool periodic;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x2D")]
	private bool isRunning;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x2E")]
	private bool tryStop;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x2F")]
	private bool isDisposed;

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x49D8E60", Offset = "0x49D8E60", VA = "0x49D8E60")]
	protected PlayerLoopTimer(bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x49D8ED0", Offset = "0x49D8ED0", VA = "0x49D8ED0")]
	public static PlayerLoopTimer Create(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x49D3710", Offset = "0x49D3710", VA = "0x49D3710")]
	public static PlayerLoopTimer StartNew(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x49D9250", Offset = "0x49D9250", VA = "0x49D9250")]
	public void Restart()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x49D9310", Offset = "0x49D9310", VA = "0x49D9310")]
	public void Restart(TimeSpan interval)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x49D9400", Offset = "0x49D9400", VA = "0x49D9400")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000159")]
	protected abstract void ResetCore(TimeSpan? newInterval);

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x49D9410", Offset = "0x49D9410", VA = "0x49D9410", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x49D9420", Offset = "0x49D9420", VA = "0x49D9420", Slot = "5")]
	private bool Cysharp_002EThreading_002ETasks_002EIPlayerLoopItem_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	protected abstract bool MoveNextCore();
}
