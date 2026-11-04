// ==================== AoTTG2 cross-reference ====================
// Type: System.GC
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000190")]
public static class GC
{
	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object EPHEMERON_TOMBSTONE;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x1B6B260", Offset = "0x1B69860", VA = "0x181B6B260")]
	private static extern int GetCollectionCount(int generation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x19DD220", Offset = "0x19DB820", VA = "0x1819DD220")]
	private static extern void RecordPressure(long bytesAllocated);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x1B6B5A0", Offset = "0x1B69BA0", VA = "0x181B6B5A0")]
	internal static extern void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x1B6B590", Offset = "0x1B69B90", VA = "0x181B6B590")]
	private static extern object get_ephemeron_tombstone();

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x1B6B270", Offset = "0x1B69870", VA = "0x181B6B270")]
	internal static void GetMemoryInfo(out uint highMemLoadThreshold, out ulong totalPhysicalMem, out uint lastRecordedMemLoad, out UIntPtr lastRecordedHeapSize, out UIntPtr lastRecordedFragmentation)
	{
	}

	[Token(Token = "0x6000E81")]
	[Address(RVA = "0x1B6B060", Offset = "0x1B69660", VA = "0x181B6B060")]
	public static void AddMemoryPressure(long bytesAllocated)
	{
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x1B6B340", Offset = "0x1B69940", VA = "0x181B6B340")]
	public static void RemoveMemoryPressure(long bytesAllocated)
	{
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x1B6B1A0", Offset = "0x1B697A0", VA = "0x181B6B1A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int CollectionCount(int generation)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void KeepAlive(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x1B6B530", Offset = "0x1B69B30", VA = "0x181B6B530")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void _SuppressFinalize(object o);

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x1B6B480", Offset = "0x1B69A80", VA = "0x181B6B480")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SuppressFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x1B6B520", Offset = "0x1B69B20", VA = "0x181B6B520")]
	private static extern void _ReRegisterForFinalize(object o);

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x1B6B2A0", Offset = "0x1B698A0", VA = "0x181B6B2A0")]
	public static void ReRegisterForFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x1B6B290", Offset = "0x1B69890", VA = "0x181B6B290")]
	public static extern long GetTotalMemory(bool forceFullCollection);
}
