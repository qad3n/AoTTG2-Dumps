// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.LowLevel.BurstCompilerService
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Bindings;

namespace Unity.Burst.LowLevel;

[Token(Token = "0x200007D")]
[UnityEngine.Bindings.StaticAccessor("BurstCompilerService::Get()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/BurstDelegateCache.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/Burst.h")]
internal static class BurstCompilerService
{
	[Token(Token = "0x200007E")]
	public enum BurstLogType
	{
		[Token(Token = "0x400011B")]
		Info,
		[Token(Token = "0x400011C")]
		Warning,
		[Token(Token = "0x400011D")]
		Error
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2EBCF10", Offset = "0x2EBB510", VA = "0x182EBCF10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static string GetDisassembly(MethodInfo m, string compilerOptions)
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2EBCCA0", Offset = "0x2EBB2A0", VA = "0x182EBCCA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static int CompileAsyncDelegateMethod(object delegateMethod, string compilerOptions)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000196")]
	[Address(RVA = "0x2EBCE40", Offset = "0x2EBB440", VA = "0x182EBCE40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public unsafe static extern void* GetAsyncCompiledAsyncDelegateMethod(int userID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2EBD100", Offset = "0x2EBB700", VA = "0x182EBD100")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void* GetOrCreateSharedMemory(ref Hash128 key, uint size_of, uint alignment);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2EBD3C0", Offset = "0x2EBB9C0", VA = "0x182EBD3C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetCurrentExecutionMode(uint environment);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x2EBCE80", Offset = "0x2EBB480", VA = "0x182EBCE80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint GetCurrentExecutionMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2EBD320", Offset = "0x2EBB920", VA = "0x182EBD320")]
	[UnityEngine.Bindings.FreeFunction("DefaultBurstLogCallback", true)]
	public unsafe static extern void Log(void* userData, BurstLogType logType, byte* message, byte* filename, int lineNumber);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x2EBD370", Offset = "0x2EBB970", VA = "0x182EBD370")]
	[UnityEngine.Bindings.FreeFunction("DefaultBurstRuntimeLogCallback", true)]
	public unsafe static extern void RuntimeLog(void* userData, BurstLogType logType, byte* message, byte* filename, int lineNumber);

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x2EBD190", Offset = "0x2EBB790", VA = "0x182EBD190")]
	public static bool LoadBurstLibrary(string fullPathToLibBurstGenerated)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x2EBCEB0", Offset = "0x2EBB4B0", VA = "0x182EBCEB0")]
	private static extern void GetDisassembly_Injected(MethodInfo m, ref ManagedSpanWrapper compilerOptions, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019E")]
	[Address(RVA = "0x2EBCC50", Offset = "0x2EBB250", VA = "0x182EBCC50")]
	private static extern int CompileAsyncDelegateMethod_Injected(object delegateMethod, ref ManagedSpanWrapper compilerOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x2EBD150", Offset = "0x2EBB750", VA = "0x182EBD150")]
	private static extern bool LoadBurstLibrary_Injected(ref ManagedSpanWrapper fullPathToLibBurstGenerated);
}
