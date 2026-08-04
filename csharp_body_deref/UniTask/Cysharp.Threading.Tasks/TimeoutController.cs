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

[Token(Token = "0x2000071")]
public sealed class TimeoutController : IDisposable
{
	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> CancelCancellationTokenSourceStateDelegate;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x10")]
	private CancellationTokenSource timeoutSource;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource linkedSource;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x20")]
	private PlayerLoopTimer timer;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x28")]
	private bool isDisposed;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x2C")]
	private readonly DelayType delayType;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x30")]
	private readonly PlayerLoopTiming delayTiming;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x38")]
	private readonly CancellationTokenSource originalLinkCancellationTokenSource;

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x49DA1F0", Offset = "0x49DA1F0", VA = "0x49DA1F0")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x49DA260", Offset = "0x49DA260", VA = "0x49DA260")]
	public TimeoutController(DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x49DA300", Offset = "0x49DA300", VA = "0x49DA300")]
	public TimeoutController(CancellationTokenSource linkCancellationTokenSource, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x49DA3F0", Offset = "0x49DA3F0", VA = "0x49DA3F0")]
	public CancellationToken Timeout(int millisecondsTimeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x49DA450", Offset = "0x49DA450", VA = "0x49DA450")]
	public CancellationToken Timeout(TimeSpan timeout)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x49DA690", Offset = "0x49DA690", VA = "0x49DA690")]
	public bool IsTimeout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x49DA6B0", Offset = "0x49DA6B0", VA = "0x49DA6B0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x49DA6C0", Offset = "0x49DA6C0", VA = "0x49DA6C0", Slot = "4")]
	public void Dispose()
	{
	}
}
