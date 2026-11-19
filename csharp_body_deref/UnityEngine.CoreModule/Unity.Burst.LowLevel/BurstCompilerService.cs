// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.LowLevel.BurstCompilerService
// Update status: unchanged since the previous dump
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
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/Burst.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Burst/BurstDelegateCache.h")]
[UnityEngine.Bindings.StaticAccessor("BurstCompilerService::Get()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
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

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x68B8560", Offset = "0x68B7560", VA = "0x68B8560")]
	[UnityEngine.Bindings.ThreadSafe]
	public static string GetDisassembly(MethodInfo m, string compilerOptions)
	{
		return null;
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x68B8780", Offset = "0x68B7780", VA = "0x68B8780")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static int CompileAsyncDelegateMethod(object delegateMethod, string compilerOptions)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x68B8930", Offset = "0x68B7930", VA = "0x68B8930")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public unsafe static extern void* GetAsyncCompiledAsyncDelegateMethod(int userID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x68B7BF0", Offset = "0x68B6BF0", VA = "0x68B7BF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void* GetOrCreateSharedMemory(ref Hash128 key, uint size_of, uint alignment);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019A")]
	[Address(RVA = "0x68B8960", Offset = "0x68B7960", VA = "0x68B8960")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetCurrentExecutionMode(uint environment);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x68B8990", Offset = "0x68B7990", VA = "0x68B8990")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern uint GetCurrentExecutionMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019C")]
	[Address(RVA = "0x68B89C0", Offset = "0x68B79C0", VA = "0x68B89C0")]
	[UnityEngine.Bindings.FreeFunction("DefaultBurstLogCallback", true)]
	public unsafe static extern void Log(void* userData, BurstLogType logType, byte* message, byte* filename, int lineNumber);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019D")]
	[Address(RVA = "0x68B8A10", Offset = "0x68B7A10", VA = "0x68B8A10")]
	[UnityEngine.Bindings.FreeFunction("DefaultBurstRuntimeLogCallback", true)]
	public unsafe static extern void RuntimeLog(void* userData, BurstLogType logType, byte* message, byte* filename, int lineNumber);

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x68B8A60", Offset = "0x68B7A60", VA = "0x68B8A60")]
	public static bool LoadBurstLibrary(string fullPathToLibBurstGenerated)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600019F")]
	[Address(RVA = "0x68B8740", Offset = "0x68B7740", VA = "0x68B8740")]
	private static extern void GetDisassembly_Injected(MethodInfo m, ref ManagedSpanWrapper compilerOptions, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x68B88F0", Offset = "0x68B78F0", VA = "0x68B88F0")]
	private static extern int CompileAsyncDelegateMethod_Injected(object delegateMethod, ref ManagedSpanWrapper compilerOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x68B8BD0", Offset = "0x68B7BD0", VA = "0x68B8BD0")]
	private static extern bool LoadBurstLibrary_Injected(ref ManagedSpanWrapper fullPathToLibBurstGenerated);
}
