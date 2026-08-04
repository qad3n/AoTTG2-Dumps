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

[Token(Token = "0x20004A9")]
public static class RuntimeHelpers
{
	[Token(Token = "0x17000485")]
	public static extern int OffsetToStringData
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002319")]
		[Address(RVA = "0x3BBF010", Offset = "0x3BBF010", VA = "0x3BBF010")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002317")]
	[Address(RVA = "0x3BC4130", Offset = "0x3BC4130", VA = "0x3BC4130")]
	private static extern void InitializeArray(Array array, IntPtr fldHandle);

	[Token(Token = "0x6002318")]
	[Address(RVA = "0x3BC4140", Offset = "0x3BC4140", VA = "0x3BC4140")]
	public static void InitializeArray(Array array, RuntimeFieldHandle fldHandle)
	{
	}

	[Token(Token = "0x600231A")]
	[Address(RVA = "0x3BC4190", Offset = "0x3BC4190", VA = "0x3BC4190")]
	public static int GetHashCode(object o)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231B")]
	[Address(RVA = "0x3BC41A0", Offset = "0x3BC41A0", VA = "0x3BC41A0")]
	public static extern object GetObjectValue(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231C")]
	[Address(RVA = "0x3BC41B0", Offset = "0x3BC41B0", VA = "0x3BC41B0")]
	private static extern void RunClassConstructor(IntPtr type);

	[Token(Token = "0x600231D")]
	[Address(RVA = "0x3BC41C0", Offset = "0x3BC41C0", VA = "0x3BC41C0")]
	public static void RunClassConstructor(RuntimeTypeHandle type)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231E")]
	[Address(RVA = "0x3BC4230", Offset = "0x3BC4230", VA = "0x3BC4230")]
	private static extern bool SufficientExecutionStack();

	[Token(Token = "0x600231F")]
	[Address(RVA = "0x3BC4240", Offset = "0x3BC4240", VA = "0x3BC4240")]
	public static bool TryEnsureSufficientExecutionStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6002320")]
	[Address(RVA = "0x3BC4250", Offset = "0x3BC4250", VA = "0x3BC4250")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static void PrepareConstrainedRegions()
	{
	}

	[Token(Token = "0x6002321")]
	public static bool IsReferenceOrContainsReferences<T>()
	{
		return default(bool);
	}
}
