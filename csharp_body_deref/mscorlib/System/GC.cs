using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000166")]
public static class GC
{
	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object EPHEMERON_TOMBSTONE;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x5011AD0", Offset = "0x5011AD0", VA = "0x5011AD0")]
	private static extern int GetCollectionCount(int generation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x5011AE0", Offset = "0x5011AE0", VA = "0x5011AE0")]
	private static extern void RecordPressure(long bytesAllocated);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x5011AF0", Offset = "0x5011AF0", VA = "0x5011AF0")]
	internal static extern void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x5011B00", Offset = "0x5011B00", VA = "0x5011B00")]
	private static extern object get_ephemeron_tombstone();

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x5011B10", Offset = "0x5011B10", VA = "0x5011B10")]
	internal static void GetMemoryInfo(out uint highMemLoadThreshold, out ulong totalPhysicalMem, out uint lastRecordedMemLoad, out UIntPtr lastRecordedHeapSize, out UIntPtr lastRecordedFragmentation)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x5011B40", Offset = "0x5011B40", VA = "0x5011B40")]
	public static void RemoveMemoryPressure(long bytesAllocated)
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x5011C20", Offset = "0x5011C20", VA = "0x5011C20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int CollectionCount(int generation)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x5011CD0", Offset = "0x5011CD0", VA = "0x5011CD0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void KeepAlive(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x5011CE0", Offset = "0x5011CE0", VA = "0x5011CE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void _SuppressFinalize(object o);

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x5011CF0", Offset = "0x5011CF0", VA = "0x5011CF0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SuppressFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x5011D90", Offset = "0x5011D90", VA = "0x5011D90")]
	private static extern void _ReRegisterForFinalize(object o);

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x5011DA0", Offset = "0x5011DA0", VA = "0x5011DA0")]
	public static void ReRegisterForFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x5011E40", Offset = "0x5011E40", VA = "0x5011E40")]
	public static extern long GetTotalMemory(bool forceFullCollection);
}
