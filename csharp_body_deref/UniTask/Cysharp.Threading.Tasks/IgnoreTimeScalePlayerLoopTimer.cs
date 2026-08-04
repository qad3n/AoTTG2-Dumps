// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IgnoreTimeScalePlayerLoopTimer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000067")]
internal sealed class IgnoreTimeScalePlayerLoopTimer : PlayerLoopTimer
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x30")]
	private int initialFrame;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x34")]
	private float elapsed;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x38")]
	private float interval;

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x49D8FE0", Offset = "0x49D8FE0", VA = "0x49D8FE0")]
	public IgnoreTimeScalePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x49D96C0", Offset = "0x49D96C0", VA = "0x49D96C0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x49D9720", Offset = "0x49D9720", VA = "0x49D9720", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
