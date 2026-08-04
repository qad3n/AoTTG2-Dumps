// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CancellationTokenSourceExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x49D3560", Offset = "0x49D3560", VA = "0x49D3560")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x49D35D0", Offset = "0x49D35D0", VA = "0x49D35D0")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, int millisecondsDelay, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x49D3660", Offset = "0x49D3660", VA = "0x49D3660")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, TimeSpan delayTimeSpan, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x49D3750", Offset = "0x49D3750", VA = "0x49D3750")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, Component component)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x49D37C0", Offset = "0x49D37C0", VA = "0x49D37C0")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, GameObject gameObject)
	{
	}
}
