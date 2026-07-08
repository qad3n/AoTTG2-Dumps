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
	[Address(RVA = "0x5051AC0", Offset = "0x5051AC0", VA = "0x5051AC0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int CompareExchange(ref int location1, int value, int comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001321")]
	[Address(RVA = "0x5055BF0", Offset = "0x5055BF0", VA = "0x5055BF0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal static extern int CompareExchange(ref int location1, int value, int comparand, ref bool succeeded);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001322")]
	[Address(RVA = "0x5055C00", Offset = "0x5055C00", VA = "0x5055C00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void CompareExchange(ref object location1, ref object value, ref object comparand, ref object result);

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x5055C10", Offset = "0x5055C10", VA = "0x5055C10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object CompareExchange(ref object location1, object value, object comparand)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x5055C50", Offset = "0x5055C50", VA = "0x5055C50")]
	public static extern float CompareExchange(ref float location1, float value, float comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001325")]
	[Address(RVA = "0x5055C60", Offset = "0x5055C60", VA = "0x5055C60")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Decrement(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001326")]
	[Address(RVA = "0x5055C70", Offset = "0x5055C70", VA = "0x5055C70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Increment(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001327")]
	[Address(RVA = "0x5055C80", Offset = "0x5055C80", VA = "0x5055C80")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Increment(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001328")]
	[Address(RVA = "0x50537F0", Offset = "0x50537F0", VA = "0x50537F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Exchange(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001329")]
	[Address(RVA = "0x5055C90", Offset = "0x5055C90", VA = "0x5055C90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void Exchange(ref object location1, ref object value, ref object result);

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x5055CA0", Offset = "0x5055CA0", VA = "0x5055CA0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object Exchange(ref object location1, object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132B")]
	[Address(RVA = "0x5055CD0", Offset = "0x5055CD0", VA = "0x5055CD0")]
	public static extern float Exchange(ref float location1, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132C")]
	[Address(RVA = "0x5055CE0", Offset = "0x5055CE0", VA = "0x5055CE0")]
	public static extern long CompareExchange(ref long location1, long value, long comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x5055CF0", Offset = "0x5055CF0", VA = "0x5055CF0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr CompareExchange(ref IntPtr location1, IntPtr value, IntPtr comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600132E")]
	[Address(RVA = "0x5055D00", Offset = "0x5055D00", VA = "0x5055D00")]
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
	[Address(RVA = "0x5055D10", Offset = "0x5055D10", VA = "0x5055D10")]
	public static extern long Exchange(ref long location1, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x5055D20", Offset = "0x5055D20", VA = "0x5055D20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr Exchange(ref IntPtr location1, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x5055D30", Offset = "0x5055D30", VA = "0x5055D30")]
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
	[Address(RVA = "0x5055D40", Offset = "0x5055D40", VA = "0x5055D40")]
	public static extern long Read(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x5055D50", Offset = "0x5055D50", VA = "0x5055D50")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Add(ref int location1, int value);

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x5055D60", Offset = "0x5055D60", VA = "0x5055D60")]
	public static void MemoryBarrier()
	{
	}
}
