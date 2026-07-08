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
	[Address(RVA = "0x46B3EE0", Offset = "0x46B3EE0", VA = "0x46B3EE0")]
	public IgnoreTimeScalePlayerLoopTimer(TimeSpan interval, bool periodic, PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken, Action<object> timerCallback, object state)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x46B45C0", Offset = "0x46B45C0", VA = "0x46B45C0", Slot = "7")]
	protected override bool MoveNextCore()
	{
		return default(bool);
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x46B4620", Offset = "0x46B4620", VA = "0x46B4620", Slot = "6")]
	protected override void ResetCore(TimeSpan? interval)
	{
	}
}
