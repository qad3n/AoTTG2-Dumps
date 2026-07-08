using System;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200001B")]
public static class CancellationTokenSourceExtensions
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> CancelCancellationTokenSourceStateDelegate;

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x46AE460", Offset = "0x46AE460", VA = "0x46AE460")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x46AE4D0", Offset = "0x46AE4D0", VA = "0x46AE4D0")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, int millisecondsDelay, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x46AE560", Offset = "0x46AE560", VA = "0x46AE560")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, TimeSpan delayTimeSpan, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x46AE650", Offset = "0x46AE650", VA = "0x46AE650")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, Component component)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x46AE6C0", Offset = "0x46AE6C0", VA = "0x46AE6C0")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, GameObject gameObject)
	{
	}
}
