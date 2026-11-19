// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Interlocked
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021E")]
public static class Interlocked
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001367")]
	[Address(RVA = "0x553A400", Offset = "0x5539400", VA = "0x553A400")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int CompareExchange(ref int location1, int value, int comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001368")]
	[Address(RVA = "0x553E0B0", Offset = "0x553D0B0", VA = "0x553E0B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal static extern int CompareExchange(ref int location1, int value, int comparand, ref bool succeeded);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001369")]
	[Address(RVA = "0x553E0C0", Offset = "0x553D0C0", VA = "0x553E0C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void CompareExchange(ref object location1, ref object value, ref object comparand, ref object result);

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x553E0D0", Offset = "0x553D0D0", VA = "0x553E0D0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object CompareExchange(ref object location1, object value, object comparand)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600136B")]
	[Address(RVA = "0x553E110", Offset = "0x553D110", VA = "0x553E110")]
	public static extern float CompareExchange(ref float location1, float value, float comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600136C")]
	[Address(RVA = "0x553E120", Offset = "0x553D120", VA = "0x553E120")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Decrement(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600136D")]
	[Address(RVA = "0x553E130", Offset = "0x553D130", VA = "0x553E130")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Increment(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600136E")]
	[Address(RVA = "0x553E140", Offset = "0x553D140", VA = "0x553E140")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Increment(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600136F")]
	[Address(RVA = "0x553BDD0", Offset = "0x553ADD0", VA = "0x553BDD0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Exchange(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001370")]
	[Address(RVA = "0x553E150", Offset = "0x553D150", VA = "0x553E150")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void Exchange(ref object location1, ref object value, ref object result);

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x553E160", Offset = "0x553D160", VA = "0x553E160")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object Exchange(ref object location1, object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001372")]
	[Address(RVA = "0x553E190", Offset = "0x553D190", VA = "0x553E190")]
	public static extern float Exchange(ref float location1, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001373")]
	[Address(RVA = "0x553E1A0", Offset = "0x553D1A0", VA = "0x553E1A0")]
	public static extern long CompareExchange(ref long location1, long value, long comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001374")]
	[Address(RVA = "0x553E1B0", Offset = "0x553D1B0", VA = "0x553E1B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr CompareExchange(ref IntPtr location1, IntPtr value, IntPtr comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001375")]
	[Address(RVA = "0x553E1C0", Offset = "0x553D1C0", VA = "0x553E1C0")]
	public static extern double CompareExchange(ref double location1, double value, double comparand);

	[Token(Token = "0x6001376")]
	[System.Runtime.CompilerServices.Intrinsic]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[ComVisible(false)]
	public static T CompareExchange<T>(ref T location1, T value, T comparand) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001377")]
	[Address(RVA = "0x553E1D0", Offset = "0x553D1D0", VA = "0x553E1D0")]
	public static extern long Exchange(ref long location1, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001378")]
	[Address(RVA = "0x553E1E0", Offset = "0x553D1E0", VA = "0x553E1E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr Exchange(ref IntPtr location1, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001379")]
	[Address(RVA = "0x553E1F0", Offset = "0x553D1F0", VA = "0x553E1F0")]
	public static extern double Exchange(ref double location1, double value);

	[Token(Token = "0x600137A")]
	[ComVisible(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Exchange<T>(ref T location1, T value) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600137B")]
	[Address(RVA = "0x553E200", Offset = "0x553D200", VA = "0x553E200")]
	public static extern long Read(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600137C")]
	[Address(RVA = "0x553E210", Offset = "0x553D210", VA = "0x553E210")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Add(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600137D")]
	[Address(RVA = "0x553E220", Offset = "0x553D220", VA = "0x553E220")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Add(ref long location1, long value);

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x553E230", Offset = "0x553D230", VA = "0x553E230")]
	public static void MemoryBarrier()
	{
	}
}
