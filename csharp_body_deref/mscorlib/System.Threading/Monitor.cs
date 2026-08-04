// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Monitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001FB")]
public static class Monitor
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x3D2E140", Offset = "0x3D2E140", VA = "0x3D2E140")]
	public static extern void Enter(object obj);

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x3D2A1A0", Offset = "0x3D2A1A0", VA = "0x3D2A1A0")]
	public static void Enter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x3D34610", Offset = "0x3D34610", VA = "0x3D34610")]
	private static void ThrowLockTakenException()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001257")]
	[Address(RVA = "0x3D2E150", Offset = "0x3D2E150", VA = "0x3D2E150")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void Exit(object obj);

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x3D346E0", Offset = "0x3D346E0", VA = "0x3D346E0")]
	public static void TryEnter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x3D347E0", Offset = "0x3D347E0", VA = "0x3D347E0")]
	public static bool Wait(object obj, int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x3D2B210", Offset = "0x3D2B210", VA = "0x3D2B210")]
	public static bool Wait(object obj, int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x3D2F970", Offset = "0x3D2F970", VA = "0x3D2F970")]
	public static void Pulse(object obj)
	{
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x3D2A540", Offset = "0x3D2A540", VA = "0x3D2A540")]
	public static void PulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600125D")]
	[Address(RVA = "0x3D349B0", Offset = "0x3D349B0", VA = "0x3D349B0")]
	private static extern bool Monitor_test_synchronised(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600125E")]
	[Address(RVA = "0x3D349C0", Offset = "0x3D349C0", VA = "0x3D349C0")]
	private static extern void Monitor_pulse(object obj);

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x3D348F0", Offset = "0x3D348F0", VA = "0x3D348F0")]
	private static void ObjPulse(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001260")]
	[Address(RVA = "0x3D349D0", Offset = "0x3D349D0", VA = "0x3D349D0")]
	private static extern void Monitor_pulse_all(object obj);

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x3D34950", Offset = "0x3D34950", VA = "0x3D34950")]
	private static void ObjPulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001262")]
	[Address(RVA = "0x3D349E0", Offset = "0x3D349E0", VA = "0x3D349E0")]
	private static extern bool Monitor_wait(object obj, int ms);

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x3D34840", Offset = "0x3D34840", VA = "0x3D34840")]
	private static bool ObjWait(bool exitContext, int millisecondsTimeout, object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x3D349F0", Offset = "0x3D349F0", VA = "0x3D349F0")]
	private static extern void try_enter_with_atomic_var(object obj, int millisecondsTimeout, ref bool lockTaken);

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x3D34750", Offset = "0x3D34750", VA = "0x3D34750")]
	private static void ReliableEnterTimeout(object obj, int timeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x3D34680", Offset = "0x3D34680", VA = "0x3D34680")]
	private static void ReliableEnter(object obj, ref bool lockTaken)
	{
	}
}
