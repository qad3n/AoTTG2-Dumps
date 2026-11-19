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

[Token(Token = "0x2000168")]
public static class GC
{
	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object EPHEMERON_TOMBSTONE;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x54FB900", Offset = "0x54FA900", VA = "0x54FB900")]
	private static extern int GetCollectionCount(int generation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x54FB910", Offset = "0x54FA910", VA = "0x54FB910")]
	private static extern void RecordPressure(long bytesAllocated);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x54FB920", Offset = "0x54FA920", VA = "0x54FB920")]
	internal static extern void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x54FB930", Offset = "0x54FA930", VA = "0x54FB930")]
	private static extern object get_ephemeron_tombstone();

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x54FB940", Offset = "0x54FA940", VA = "0x54FB940")]
	internal static void GetMemoryInfo(out uint highMemLoadThreshold, out ulong totalPhysicalMem, out uint lastRecordedMemLoad, out UIntPtr lastRecordedHeapSize, out UIntPtr lastRecordedFragmentation)
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x54FB970", Offset = "0x54FA970", VA = "0x54FB970")]
	public static void RemoveMemoryPressure(long bytesAllocated)
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x54FBA50", Offset = "0x54FAA50", VA = "0x54FBA50")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int CollectionCount(int generation)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x54FBB00", Offset = "0x54FAB00", VA = "0x54FBB00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void KeepAlive(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x54FBB10", Offset = "0x54FAB10", VA = "0x54FBB10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern void _SuppressFinalize(object o);

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x54FBB20", Offset = "0x54FAB20", VA = "0x54FBB20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void SuppressFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x54FBBC0", Offset = "0x54FABC0", VA = "0x54FBBC0")]
	private static extern void _ReRegisterForFinalize(object o);

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x54FBBD0", Offset = "0x54FABD0", VA = "0x54FBBD0")]
	public static void ReRegisterForFinalize(object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x54FBC70", Offset = "0x54FAC70", VA = "0x54FBC70")]
	public static extern long GetTotalMemory(bool forceFullCollection);
}
