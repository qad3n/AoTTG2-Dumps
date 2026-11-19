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
	[Address(RVA = "0x62C9C40", Offset = "0x62C8C40", VA = "0x62C9C40")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x62C9CB0", Offset = "0x62C8CB0", VA = "0x62C9CB0")]
	public TimeoutController(DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x62C9D50", Offset = "0x62C8D50", VA = "0x62C9D50")]
	public TimeoutController(CancellationTokenSource linkCancellationTokenSource, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x62C9E40", Offset = "0x62C8E40", VA = "0x62C9E40")]
	public CancellationToken Timeout(int millisecondsTimeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x62C9EA0", Offset = "0x62C8EA0", VA = "0x62C9EA0")]
	public CancellationToken Timeout(TimeSpan timeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x62CA0E0", Offset = "0x62C90E0", VA = "0x62CA0E0")]
	public bool IsTimeout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x62CA100", Offset = "0x62C9100", VA = "0x62CA100")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x62CA110", Offset = "0x62C9110", VA = "0x62CA110", Slot = "4")]
	public void Dispose()
	{
	}
}
