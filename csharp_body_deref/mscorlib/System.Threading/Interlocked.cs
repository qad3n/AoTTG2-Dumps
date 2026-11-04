// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Interlocked
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000246")]
public static class Interlocked
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001390")]
	[Address(RVA = "0x1BAF6E0", Offset = "0x1BADCE0", VA = "0x181BAF6E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int CompareExchange(ref int location1, int value, int comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001391")]
	[Address(RVA = "0x1BAF6C0", Offset = "0x1BADCC0", VA = "0x181BAF6C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal static extern int CompareExchange(ref int location1, int value, int comparand, ref bool succeeded);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001392")]
	[Address(RVA = "0x1BAF6B0", Offset = "0x1BADCB0", VA = "0x181BAF6B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void CompareExchange(ref object location1, ref object value, ref object comparand, ref object result);

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x1BAF6F0", Offset = "0x1BADCF0", VA = "0x181BAF6F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object CompareExchange(ref object location1, object value, object comparand)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001394")]
	[Address(RVA = "0x1BAF730", Offset = "0x1BADD30", VA = "0x181BAF730")]
	public static extern float CompareExchange(ref float location1, float value, float comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001395")]
	[Address(RVA = "0x1BAF750", Offset = "0x1BADD50", VA = "0x181BAF750")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Decrement(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001396")]
	[Address(RVA = "0x1BAF7F0", Offset = "0x1BADDF0", VA = "0x181BAF7F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Increment(ref int location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001397")]
	[Address(RVA = "0x1BAF7E0", Offset = "0x1BADDE0", VA = "0x181BAF7E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Increment(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001398")]
	[Address(RVA = "0x1BAF780", Offset = "0x1BADD80", VA = "0x181BAF780")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Exchange(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001399")]
	[Address(RVA = "0x1BAF760", Offset = "0x1BADD60", VA = "0x181BAF760")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void Exchange(ref object location1, ref object value, ref object result);

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x1BAF790", Offset = "0x1BADD90", VA = "0x181BAF790")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static object Exchange(ref object location1, object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600139B")]
	[Address(RVA = "0x1BAF7C0", Offset = "0x1BADDC0", VA = "0x181BAF7C0")]
	public static extern float Exchange(ref float location1, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600139C")]
	[Address(RVA = "0x1BAF6D0", Offset = "0x1BADCD0", VA = "0x181BAF6D0")]
	public static extern long CompareExchange(ref long location1, long value, long comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600139D")]
	[Address(RVA = "0x1BAF6D0", Offset = "0x1BADCD0", VA = "0x181BAF6D0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr CompareExchange(ref IntPtr location1, IntPtr value, IntPtr comparand);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600139E")]
	[Address(RVA = "0x1BAF740", Offset = "0x1BADD40", VA = "0x181BAF740")]
	public static extern double CompareExchange(ref double location1, double value, double comparand);

	[Token(Token = "0x600139F")]
	[ComVisible(false)]
	[System.Runtime.CompilerServices.Intrinsic]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static T CompareExchange<T>(ref T location1, T value, T comparand) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x1BAF770", Offset = "0x1BADD70", VA = "0x181BAF770")]
	public static extern long Exchange(ref long location1, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x1BAF770", Offset = "0x1BADD70", VA = "0x181BAF770")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern IntPtr Exchange(ref IntPtr location1, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x1BAF7D0", Offset = "0x1BADDD0", VA = "0x181BAF7D0")]
	public static extern double Exchange(ref double location1, double value);

	[Token(Token = "0x60013A3")]
	[ComVisible(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Exchange<T>(ref T location1, T value) where T : class
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x1BAF810", Offset = "0x1BADE10", VA = "0x181BAF810")]
	public static extern long Read(ref long location);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x1BAF690", Offset = "0x1BADC90", VA = "0x181BAF690")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int Add(ref int location1, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x1BAF6A0", Offset = "0x1BADCA0", VA = "0x181BAF6A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern long Add(ref long location1, long value);

	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x1BAF800", Offset = "0x1BADE00", VA = "0x181BAF800")]
	public static void MemoryBarrier()
	{
	}
}
