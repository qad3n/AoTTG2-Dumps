// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.RuntimeHelpers
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004D9")]
public static class RuntimeHelpers
{
	[Token(Token = "0x17000488")]
	public static extern int OffsetToStringData
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600239A")]
		[Address(RVA = "0x1A54700", Offset = "0x1A52D00", VA = "0x181A54700")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002398")]
	[Address(RVA = "0x1A54660", Offset = "0x1A52C60", VA = "0x181A54660")]
	private static extern void InitializeArray(Array array, IntPtr fldHandle);

	[Token(Token = "0x6002399")]
	[Address(RVA = "0x1A54600", Offset = "0x1A52C00", VA = "0x181A54600")]
	public static void InitializeArray(Array array, RuntimeFieldHandle fldHandle)
	{
	}

	[Token(Token = "0x600239B")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80")]
	public static int GetHashCode(object o)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600239C")]
	[Address(RVA = "0x1A545F0", Offset = "0x1A52BF0", VA = "0x181A545F0")]
	public static extern object GetObjectValue(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600239D")]
	[Address(RVA = "0x1A54670", Offset = "0x1A52C70", VA = "0x181A54670")]
	private static extern void RunClassConstructor(IntPtr type);

	[Token(Token = "0x600239E")]
	[Address(RVA = "0x1A54680", Offset = "0x1A52C80", VA = "0x181A54680")]
	public static void RunClassConstructor(RuntimeTypeHandle type)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600239F")]
	[Address(RVA = "0x1A2A820", Offset = "0x1A28E20", VA = "0x181A2A820")]
	private static extern bool SufficientExecutionStack();

	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x1A54590", Offset = "0x1A52B90", VA = "0x181A54590")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EnsureSufficientExecutionStack()
	{
	}

	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x1A2A820", Offset = "0x1A28E20", VA = "0x181A2A820")]
	public static bool TryEnsureSufficientExecutionStack()
	{
		return default(bool);
	}

	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void PrepareConstrainedRegions()
	{
	}

	[Token(Token = "0x60023A3")]
	public static bool IsReferenceOrContainsReferences<T>()
	{
		return default(bool);
	}
}
