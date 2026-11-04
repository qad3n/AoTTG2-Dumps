// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Profiler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001ED")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Profiler.h")]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Utilities/MemoryUtilities.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Profiler.bindings.h")]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Allocator/MemoryManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/ScriptingBackend/ScriptingApi.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/MemoryProfiler.h")]
public sealed class Profiler
{
	[Token(Token = "0x170002B3")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001062")]
		[Address(RVA = "0x2F50F40", Offset = "0x2F4F540", VA = "0x182F50F40")]
		[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
		[UnityEngine.Bindings.NativeMethod(Name = "profiler_is_enabled", IsFreeFunction = true, IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x2F50EA0", Offset = "0x2F4F4A0", VA = "0x182F50EA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
	public static long GetRuntimeMemorySizeLong([UnityEngine.Bindings.NotNull] Object o)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001064")]
	[Address(RVA = "0x2F50E60", Offset = "0x2F4F460", VA = "0x182F50E60")]
	private static extern long GetRuntimeMemorySizeLong_Injected(IntPtr o);
}
