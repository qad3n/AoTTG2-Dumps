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

[Token(Token = "0x2000064")]
internal sealed class DeltaTimePlayerLoopTimer : PlayerLoopTimer
{
	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x30")]
	private int initialFrame;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x34")]
	private float elapsed;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x38")]
	private float interval;

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x290D010", Offset = "0x290B610", VA = "0x18290D010")]
	public DeltaTimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x290CEC0", Offset = "0x290B4C0", VA = "0x18290CEC0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x290CF30", Offset = "0x290B530", VA = "0x18290CF30", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
