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

[Token(Token = "0x2000066")]
internal sealed class RealtimePlayerLoopTimer : PlayerLoopTimer
{
	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x30")]
	private ValueStopwatch stopwatch;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x38")]
	private long intervalTicks;

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x62C8B20", Offset = "0x62C7B20", VA = "0x62C8B20")]
	public RealtimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x62C9310", Offset = "0x62C8310", VA = "0x62C9310", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x62C9360", Offset = "0x62C8360", VA = "0x62C9360", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
