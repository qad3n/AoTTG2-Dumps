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
		[Address(RVA = "0x4ED94F0", Offset = "0x4ED94F0", VA = "0x4ED94F0")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002317")]
	[Address(RVA = "0x4EDE610", Offset = "0x4EDE610", VA = "0x4EDE610")]
	private static extern void InitializeArray(Array array, IntPtr fldHandle);

	[Token(Token = "0x6002318")]
	[Address(RVA = "0x4EDE620", Offset = "0x4EDE620", VA = "0x4EDE620")]
	public static void InitializeArray(Array array, RuntimeFieldHandle fldHandle)
	{
	}

	[Token(Token = "0x600231A")]
	[Address(RVA = "0x4EDE670", Offset = "0x4EDE670", VA = "0x4EDE670")]
	public static int GetHashCode(object o)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231B")]
	[Address(RVA = "0x4EDE680", Offset = "0x4EDE680", VA = "0x4EDE680")]
	public static extern object GetObjectValue(object obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231C")]
	[Address(RVA = "0x4EDE690", Offset = "0x4EDE690", VA = "0x4EDE690")]
	private static extern void RunClassConstructor(IntPtr type);

	[Token(Token = "0x600231D")]
	[Address(RVA = "0x4EDE6A0", Offset = "0x4EDE6A0", VA = "0x4EDE6A0")]
	public static void RunClassConstructor(RuntimeTypeHandle type)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600231E")]
	[Address(RVA = "0x4EDE710", Offset = "0x4EDE710", VA = "0x4EDE710")]
	private static extern bool SufficientExecutionStack();

	[Token(Token = "0x600231F")]
	[Address(RVA = "0x4EDE720", Offset = "0x4EDE720", VA = "0x4EDE720")]
	public static bool TryEnsureSufficientExecutionStack()
	{
		return default(bool);
	}

	[Token(Token = "0x6002320")]
	[Address(RVA = "0x4EDE730", Offset = "0x4EDE730", VA = "0x4EDE730")]
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
