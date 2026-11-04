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
	[Address(RVA = "0x2911C60", Offset = "0x2910260", VA = "0x182911C60")]
	public RealtimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x2911B50", Offset = "0x2910150", VA = "0x182911B50", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2911BB0", Offset = "0x29101B0", VA = "0x182911BB0", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
