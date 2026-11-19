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

[Token(Token = "0x2000204")]
public static class Monitor
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x5531300", Offset = "0x5530300", VA = "0x5531300")]
	public static extern void Enter(object obj);

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x552D580", Offset = "0x552C580", VA = "0x552D580")]
	public static void Enter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x5537350", Offset = "0x5536350", VA = "0x5537350")]
	private static void ThrowLockTakenException()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x5531310", Offset = "0x5530310", VA = "0x5531310")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void Exit(object obj);

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x5537420", Offset = "0x5536420", VA = "0x5537420")]
	public static void TryEnter(object obj, ref bool lockTaken)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x5537570", Offset = "0x5536570", VA = "0x5537570")]
	public static bool Wait(object obj, int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x552E460", Offset = "0x552D460", VA = "0x552E460")]
	public static bool Wait(object obj, int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x5532930", Offset = "0x5531930", VA = "0x5532930")]
	public static void Pulse(object obj)
	{
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x552D970", Offset = "0x552C970", VA = "0x552D970")]
	public static void PulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x5537740", Offset = "0x5536740", VA = "0x5537740")]
	private static extern bool Monitor_test_synchronised(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x5537750", Offset = "0x5536750", VA = "0x5537750")]
	private static extern void Monitor_pulse(object obj);

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x5537680", Offset = "0x5536680", VA = "0x5537680")]
	private static void ObjPulse(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x5537760", Offset = "0x5536760", VA = "0x5537760")]
	private static extern void Monitor_pulse_all(object obj);

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x55376E0", Offset = "0x55366E0", VA = "0x55376E0")]
	private static void ObjPulseAll(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x5537770", Offset = "0x5536770", VA = "0x5537770")]
	private static extern bool Monitor_wait(object obj, int ms);

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x55375D0", Offset = "0x55365D0", VA = "0x55375D0")]
	private static bool ObjWait(bool exitContext, int millisecondsTimeout, object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x5537780", Offset = "0x5536780", VA = "0x5537780")]
	private static extern void try_enter_with_atomic_var(object obj, int millisecondsTimeout, ref bool lockTaken);

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x55374E0", Offset = "0x55364E0", VA = "0x55374E0")]
	private static void ReliableEnterTimeout(object obj, int timeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x55373C0", Offset = "0x55363C0", VA = "0x55373C0")]
	private static void ReliableEnter(object obj, ref bool lockTaken)
	{
	}
}
