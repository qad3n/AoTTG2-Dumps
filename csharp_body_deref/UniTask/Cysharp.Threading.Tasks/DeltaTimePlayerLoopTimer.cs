// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.DeltaTimePlayerLoopTimer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000066")]
internal sealed class DeltaTimePlayerLoopTimer : PlayerLoopTimer
{
	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	private int initialFrame;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x34")]
	private float elapsed;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x38")]
	private float interval;

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x49D9180", Offset = "0x49D9180", VA = "0x49D9180")]
	public DeltaTimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x49D94E0", Offset = "0x49D94E0", VA = "0x49D94E0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x49D9540", Offset = "0x49D9540", VA = "0x49D9540", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
