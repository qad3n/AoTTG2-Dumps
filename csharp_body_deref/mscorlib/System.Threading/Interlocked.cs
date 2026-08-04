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

[Token(Token = "0x2000215")]
public static class Interlocked
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001320")]
	[Address(RVA = "0x3D375E0", Offset = "0x3D375E0", VA = "0x3D375E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int CompareExchange(ref int location1, int value, int comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001321")]
	[Address(RVA = "0x3D3B710", Offset = "0x3D3B710", VA = "0x3D3B710")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal static extern int CompareExchange(ref int location1, int value, int comparand, ref bool succeeded);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001322")]
	[Address(RVA = "0x3D3B720", Offset = "0x3D3B720", VA = "0x3D3B720")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void CompareExchange(ref object location1, ref object value, ref object comparand, ref object result);

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x3D3B730", Offset = "0x3D3B730", VA = "0x3D3B730")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object CompareExchange(ref object location1, object value, object comparand)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x3D3B770", Offset = "0x3D3B770", VA = "0x3D3B770")]
	public static extern float CompareExchange(ref float location1, float value, float comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001325")]
	[Address(RVA = "0x3D3B780", Offset = "0x3D3B780", VA = "0x3D3B780")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Decrement(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001326")]
	[Address(RVA = "0x3D3B790", Offset = "0x3D3B790", VA = "0x3D3B790")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Increment(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001327")]
	[Address(RVA = "0x3D3B7A0", Offset = "0x3D3B7A0", VA = "0x3D3B7A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Increment(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001328")]
	[Address(RVA = "0x3D39310", Offset = "0x3D39310", VA = "0x3D39310")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Exchange(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001329")]
	[Address(RVA = "0x3D3B7B0", Offset = "0x3D3B7B0", VA = "0x3D3B7B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void Exchange(ref object location1, ref object value, ref object result);

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x3D3B7C0", Offset = "0x3D3B7C0", VA = "0x3D3B7C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object Exchange(ref object location1, object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132B")]
	[Address(RVA = "0x3D3B7F0", Offset = "0x3D3B7F0", VA = "0x3D3B7F0")]
	public static extern float Exchange(ref float location1, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132C")]
	[Address(RVA = "0x3D3B800", Offset = "0x3D3B800", VA = "0x3D3B800")]
	public static extern long CompareExchange(ref long location1, long value, long comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x3D3B810", Offset = "0x3D3B810", VA = "0x3D3B810")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr CompareExchange(ref IntPtr location1, IntPtr value, IntPtr comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132E")]
	[Address(RVA = "0x3D3B820", Offset = "0x3D3B820", VA = "0x3D3B820")]
	public static extern double CompareExchange(ref double location1, double value, double comparand);

	[Token(Token = "0x600132F")]
	[System.Runtime.CompilerServices.Intrinsic]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[ComVisible(false)]
	public static T CompareExchange<T>(ref T location1, T value, T comparand) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001330")]
	[Address(RVA = "0x3D3B830", Offset = "0x3D3B830", VA = "0x3D3B830")]
	public static extern long Exchange(ref long location1, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x3D3B840", Offset = "0x3D3B840", VA = "0x3D3B840")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr Exchange(ref IntPtr location1, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x3D3B850", Offset = "0x3D3B850", VA = "0x3D3B850")]
	public static extern double Exchange(ref double location1, double value);

	[Token(Token = "0x6001333")]
	[ComVisible(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Exchange<T>(ref T location1, T value) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x3D3B860", Offset = "0x3D3B860", VA = "0x3D3B860")]
	public static extern long Read(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x3D3B870", Offset = "0x3D3B870", VA = "0x3D3B870")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Add(ref int location1, int value);

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x3D3B880", Offset = "0x3D3B880", VA = "0x3D3B880")]
	public static void MemoryBarrier()
	{
	}
}
