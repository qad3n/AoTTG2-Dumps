// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.RuntimeHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004B2")]
public static class RuntimeHelpers
{
	[Token(Token = "0x17000487")]
	public static extern int OffsetToStringData
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002368")]
		[Address(RVA = "0x53C66B0", Offset = "0x53C56B0", VA = "0x53C66B0")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002366")]
	[Address(RVA = "0x53CBB30", Offset = "0x53CAB30", VA = "0x53CBB30")]
	private static extern void InitializeArray(Array array, IntPtr fldHandle);

	[Token(Token = "0x6002367")]
	[Address(RVA = "0x53CBB40", Offset = "0x53CAB40", VA = "0x53CBB40")]
	public static void InitializeArray(Array array, RuntimeFieldHandle fldHandle)
	{
	}

	[Token(Token = "0x6002369")]
	[Address(RVA = "0x53CBB90", Offset = "0x53CAB90", VA = "0x53CBB90")]
	public static int GetHashCode(object o)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600236A")]
	[Address(RVA = "0x53CBBA0", Offset = "0x53CABA0", VA = "0x53CBBA0")]
	public static extern object GetObjectValue(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600236B")]
	[Address(RVA = "0x53CBBB0", Offset = "0x53CABB0", VA = "0x53CBBB0")]
	private static extern void RunClassConstructor(IntPtr type);

	[Token(Token = "0x600236C")]
	[Address(RVA = "0x53CBBC0", Offset = "0x53CABC0", VA = "0x53CBBC0")]
	public static void RunClassConstructor(RuntimeTypeHandle type)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600236D")]
	[Address(RVA = "0x53CBC30", Offset = "0x53CAC30", VA = "0x53CBC30")]
	private static extern bool SufficientExecutionStack();

	[Token(Token = "0x600236E")]
	[Address(RVA = "0x53CBC40", Offset = "0x53CAC40", VA = "0x53CBC40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static void EnsureSufficientExecutionStack()
	{
	}

	[Token(Token = "0x600236F")]
	[Address(RVA = "0x53CBC90", Offset = "0x53CAC90", VA = "0x53CBC90")]
	public static bool TryEnsureSufficientExecutionStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x53CBCA0", Offset = "0x53CACA0", VA = "0x53CBCA0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void PrepareConstrainedRegions()
	{
	}

	[Token(Token = "0x6002371")]
	public static bool IsReferenceOrContainsReferences<T>()
	{
		return default(bool);
	}
}
