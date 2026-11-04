// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TimeoutController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200006F")]
public sealed class TimeoutController : IDisposable
{
	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> CancelCancellationTokenSourceStateDelegate;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x10")]
	private CancellationTokenSource timeoutSource;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource linkedSource;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x20")]
	private PlayerLoopTimer timer;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x28")]
	private bool isDisposed;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x2C")]
	private readonly DelayType delayType;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x30")]
	private readonly PlayerLoopTiming delayTiming;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x38")]
	private readonly CancellationTokenSource originalLinkCancellationTokenSource;

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x2912980", Offset = "0x2910F80", VA = "0x182912980")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x2913020", Offset = "0x2911620", VA = "0x182913020")]
	public TimeoutController(DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2912F30", Offset = "0x2911530", VA = "0x182912F30")]
	public TimeoutController(CancellationTokenSource linkCancellationTokenSource, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2912E30", Offset = "0x2911430", VA = "0x182912E30")]
	public CancellationToken Timeout(int millisecondsTimeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2912B00", Offset = "0x2911100", VA = "0x182912B00")]
	public CancellationToken Timeout(TimeSpan timeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2912AD0", Offset = "0x29110D0", VA = "0x182912AD0")]
	public bool IsTimeout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2912AF0", Offset = "0x29110F0", VA = "0x182912AF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2912A00", Offset = "0x2911000", VA = "0x182912A00", Slot = "4")]
	public void Dispose()
	{
	}
}
