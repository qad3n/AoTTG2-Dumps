// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.RealtimePlayerLoopTimer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x49D90B0", Offset = "0x49D90B0", VA = "0x49D90B0")]
	public RealtimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x49D98A0", Offset = "0x49D98A0", VA = "0x49D98A0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x49D9900", Offset = "0x49D9900", VA = "0x49D9900", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
