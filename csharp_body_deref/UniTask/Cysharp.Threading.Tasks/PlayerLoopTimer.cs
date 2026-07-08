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
	[Address(RVA = "0x46B3D60", Offset = "0x46B3D60", VA = "0x46B3D60")]
	protected PlayerLoopTimer(bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x46B3DD0", Offset = "0x46B3DD0", VA = "0x46B3DD0")]
	public static PlayerLoopTimer Create(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x46AE610", Offset = "0x46AE610", VA = "0x46AE610")]
	public static PlayerLoopTimer StartNew(TimeSpan interval, bool periodic, DelayType delayType, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x46B4150", Offset = "0x46B4150", VA = "0x46B4150")]
	public void Restart()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x46B4210", Offset = "0x46B4210", VA = "0x46B4210")]
	public void Restart(TimeSpan interval)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x46B4300", Offset = "0x46B4300", VA = "0x46B4300")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000159")]
	protected abstract void ResetCore(TimeSpan? newInterval);

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x46B4310", Offset = "0x46B4310", VA = "0x46B4310", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x46B4320", Offset = "0x46B4320", VA = "0x46B4320", Slot = "5")]
	private bool Cysharp_002EThreading_002ETasks_002EIPlayerLoopItem_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600015C")]
	protected abstract bool MoveNextCore();
}
