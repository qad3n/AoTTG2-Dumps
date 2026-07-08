using System;
using System.Threading;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000068")]
internal sealed class RealtimePlayerLoopTimer : PlayerLoopTimer
{
	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x30")]
	private ValueStopwatch stopwatch;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x38")]
	private long intervalTicks;

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x46B3FB0", Offset = "0x46B3FB0", VA = "0x46B3FB0")]
	public RealtimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x46B47A0", Offset = "0x46B47A0", VA = "0x46B47A0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x46B4800", Offset = "0x46B4800", VA = "0x46B4800", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
