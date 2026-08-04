// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Profiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Allocator/MemoryManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Profiler.h")]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/MemoryUtilities.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/ScriptingBackend/ScriptingApi.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/MemoryProfiler.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Profiler.bindings.h")]
public sealed class Profiler
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4E0E1D0", Offset = "0x4E0E1D0", VA = "0x4E0E1D0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4E0E370", Offset = "0x4E0E370", VA = "0x4E0E370")]
	private static void ValidateArguments(string name)
	{
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4E0E2C0", Offset = "0x4E0E2C0", VA = "0x4E0E2C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::BeginSample", IsFreeFunction = true, IsThreadSafe = true)]
	private static void BeginSampleImpl(string name, Object targetObject)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4E0E420", Offset = "0x4E0E420", VA = "0x4E0E420")]
	[Conditional("ENABLE_PROFILER")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::EndSample", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void EndSample();

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4E0E450", Offset = "0x4E0E450", VA = "0x4E0E450")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
	public static long GetRuntimeMemorySizeLong([UnityEngine.Bindings.NotNull("ArgumentNullException")] Object o)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4E0E3E0", Offset = "0x4E0E3E0", VA = "0x4E0E3E0")]
	private static extern void BeginSampleImpl_Injected(string name, IntPtr targetObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4E0E520", Offset = "0x4E0E520", VA = "0x4E0E520")]
	private static extern long GetRuntimeMemorySizeLong_Injected(IntPtr o);
}
