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

[Token(Token = "0x200022C")]
public static class Monitor
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x1BB0500", Offset = "0x1BAEB00", VA = "0x181BB0500")]
	public static extern void Enter(object obj);

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x1BB0480", Offset = "0x1BAEA80", VA = "0x181BB0480")]
	public static void Enter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x1BB09B0", Offset = "0x1BAEFB0", VA = "0x181BB09B0")]
	private static void ThrowLockTakenException()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x1BB0510", Offset = "0x1BAEB10", VA = "0x181BB0510")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void Exit(object obj);

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x1BB0A20", Offset = "0x1BAF020", VA = "0x181BB0A20")]
	public static void TryEnter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x1BB0AA0", Offset = "0x1BAF0A0", VA = "0x181BB0AA0")]
	public static bool Wait(object obj, int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x1BB0AA0", Offset = "0x1BAF0A0", VA = "0x181BB0AA0")]
	public static bool Wait(object obj, int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x1BB07D0", Offset = "0x1BAEDD0", VA = "0x181BB07D0")]
	public static void Pulse(object obj)
	{
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x1BB0710", Offset = "0x1BAED10", VA = "0x181BB0710")]
	public static void PulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x1BB0540", Offset = "0x1BAEB40", VA = "0x181BB0540")]
	private static extern bool Monitor_test_synchronised(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x1BB0530", Offset = "0x1BAEB30", VA = "0x181BB0530")]
	private static extern void Monitor_pulse(object obj);

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x1BB05D0", Offset = "0x1BAEBD0", VA = "0x181BB05D0")]
	private static void ObjPulse(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x1BB0520", Offset = "0x1BAEB20", VA = "0x181BB0520")]
	private static extern void Monitor_pulse_all(object obj);

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x1BB0560", Offset = "0x1BAEB60", VA = "0x181BB0560")]
	private static void ObjPulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x1BB0550", Offset = "0x1BAEB50", VA = "0x181BB0550")]
	private static extern bool Monitor_wait(object obj, int ms);

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x1BB0640", Offset = "0x1BAEC40", VA = "0x181BB0640")]
	private static bool ObjWait(bool exitContext, int millisecondsTimeout, object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x1BB0BC0", Offset = "0x1BAF1C0", VA = "0x181BB0BC0")]
	private static extern void try_enter_with_atomic_var(object obj, int millisecondsTimeout, ref bool lockTaken);

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x1BB0890", Offset = "0x1BAEE90", VA = "0x181BB0890")]
	private static void ReliableEnterTimeout(object obj, int timeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x1BB0940", Offset = "0x1BAEF40", VA = "0x181BB0940")]
	private static void ReliableEnter(object obj, ref bool lockTaken)
	{
	}
}
