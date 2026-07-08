using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001FB")]
public static class Monitor
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x5048620", Offset = "0x5048620", VA = "0x5048620")]
	public static extern void Enter(object obj);

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x5044680", Offset = "0x5044680", VA = "0x5044680")]
	public static void Enter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x504EAF0", Offset = "0x504EAF0", VA = "0x504EAF0")]
	private static void ThrowLockTakenException()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001257")]
	[Address(RVA = "0x5048630", Offset = "0x5048630", VA = "0x5048630")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void Exit(object obj);

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x504EBC0", Offset = "0x504EBC0", VA = "0x504EBC0")]
	public static void TryEnter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x504ECC0", Offset = "0x504ECC0", VA = "0x504ECC0")]
	public static bool Wait(object obj, int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x50456F0", Offset = "0x50456F0", VA = "0x50456F0")]
	public static bool Wait(object obj, int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x5049E50", Offset = "0x5049E50", VA = "0x5049E50")]
	public static void Pulse(object obj)
	{
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x5044A20", Offset = "0x5044A20", VA = "0x5044A20")]
	public static void PulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600125D")]
	[Address(RVA = "0x504EE90", Offset = "0x504EE90", VA = "0x504EE90")]
	private static extern bool Monitor_test_synchronised(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600125E")]
	[Address(RVA = "0x504EEA0", Offset = "0x504EEA0", VA = "0x504EEA0")]
	private static extern void Monitor_pulse(object obj);

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x504EDD0", Offset = "0x504EDD0", VA = "0x504EDD0")]
	private static void ObjPulse(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001260")]
	[Address(RVA = "0x504EEB0", Offset = "0x504EEB0", VA = "0x504EEB0")]
	private static extern void Monitor_pulse_all(object obj);

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x504EE30", Offset = "0x504EE30", VA = "0x504EE30")]
	private static void ObjPulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001262")]
	[Address(RVA = "0x504EEC0", Offset = "0x504EEC0", VA = "0x504EEC0")]
	private static extern bool Monitor_wait(object obj, int ms);

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x504ED20", Offset = "0x504ED20", VA = "0x504ED20")]
	private static bool ObjWait(bool exitContext, int millisecondsTimeout, object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x504EED0", Offset = "0x504EED0", VA = "0x504EED0")]
	private static extern void try_enter_with_atomic_var(object obj, int millisecondsTimeout, ref bool lockTaken);

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x504EC30", Offset = "0x504EC30", VA = "0x504EC30")]
	private static void ReliableEnterTimeout(object obj, int timeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x504EB60", Offset = "0x504EB60", VA = "0x504EB60")]
	private static void ReliableEnter(object obj, ref bool lockTaken)
	{
	}
}
