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
	[Address(RVA = "0x62C3190", Offset = "0x62C2190", VA = "0x62C3190")]
	private static void CancelCancellationTokenSourceState(object state)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x62C3200", Offset = "0x62C2200", VA = "0x62C3200")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, int millisecondsDelay, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x62C32A0", Offset = "0x62C22A0", VA = "0x62C32A0")]
	public static IDisposable CancelAfterSlim(this CancellationTokenSource cts, TimeSpan delayTimeSpan, DelayType delayType = DelayType.DeltaTime, PlayerLoopTiming delayTiming = PlayerLoopTiming.Update)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x62C3390", Offset = "0x62C2390", VA = "0x62C3390")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, Component component)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x62C3400", Offset = "0x62C2400", VA = "0x62C3400")]
	public static void RegisterRaiseCancelOnDestroy(this CancellationTokenSource cts, GameObject gameObject)
	{
	}
}
