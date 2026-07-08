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
	[Address(RVA = "0x46B4080", Offset = "0x46B4080", VA = "0x46B4080")]
	public DeltaTimePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x46B43E0", Offset = "0x46B43E0", VA = "0x46B43E0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x46B4440", Offset = "0x46B4440", VA = "0x46B4440", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
