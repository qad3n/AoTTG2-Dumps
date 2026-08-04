// ==================== AoTTG2 cross-reference ====================
// Type: System.GC
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CF75F0", Offset = "0x3CF75F0", VA = "0x3CF75F0")]
	private static extern int GetCollectionCount(int generation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x3CF7600", Offset = "0x3CF7600", VA = "0x3CF7600")]
	private static extern void RecordPressure(long bytesAllocated);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x3CF7610", Offset = "0x3CF7610", VA = "0x3CF7610")]
	internal static extern void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x3CF7620", Offset = "0x3CF7620", VA = "0x3CF7620")]
	private static extern object get_ephemeron_tombstone();

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x3CF7630", Offset = "0x3CF7630", VA = "0x3CF7630")]
	internal static void GetMemoryInfo(out uint highMemLoadThreshold, out ulong totalPhysicalMem, out uint lastRecordedMemLoad, out UIntPtr lastRecordedHeapSize, out UIntPtr lastRecordedFragmentation)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x3CF7660", Offset = "0x3CF7660", VA = "0x3CF7660")]
	public static void RemoveMemoryPressure(long bytesAllocated)
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x3CF7740", Offset = "0x3CF7740", VA = "0x3CF7740")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int CollectionCount(int generation)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x3CF77F0", Offset = "0x3CF77F0", VA = "0x3CF77F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void KeepAlive(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x3CF7800", Offset = "0x3CF7800", VA = "0x3CF7800")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void _SuppressFinalize(object o);

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x3CF7810", Offset = "0x3CF7810", VA = "0x3CF7810")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SuppressFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x3CF78B0", Offset = "0x3CF78B0", VA = "0x3CF78B0")]
	private static extern void _ReRegisterForFinalize(object o);

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x3CF78C0", Offset = "0x3CF78C0", VA = "0x3CF78C0")]
	public static void ReRegisterForFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x3CF7960", Offset = "0x3CF7960", VA = "0x3CF7960")]
	public static extern long GetTotalMemory(bool forceFullCollection);
}
