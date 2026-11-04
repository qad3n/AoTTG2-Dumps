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

[Token(Token = "0x2000019")]
public static class CancellationTokenSourceExtensions
{
	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> CancelCancellationTokenSourceStateDelegate;

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x290A6A0", Offset = "0x2908CA0", VA = "0x18290A6A0")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x290A590", Offset = "0x2908B90", VA = "0x18290A590")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, int millisecondsDelay, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x290A4E0", Offset = "0x2908AE0", VA = "0x18290A4E0")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, TimeSpan delayTimeSpan, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x290A7F0", Offset = "0x2908DF0", VA = "0x18290A7F0")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, Component component)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x290A720", Offset = "0x2908D20", VA = "0x18290A720")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, GameObject gameObject)
	{
	}
}
