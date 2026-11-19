// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Profiler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001EE")]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Profiler.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/ScriptingBackend/ScriptingApi.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Utilities/MemoryUtilities.h")]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Allocator/MemoryManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/MemoryProfiler.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Profiler.h")]
public sealed class Profiler
{
	[Token(Token = "0x170002BA")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001078")]
		[Address(RVA = "0x692FB50", Offset = "0x692EB50", VA = "0x692FB50")]
		[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
		[UnityEngine.Bindings.NativeMethod(Name = "profiler_is_enabled", IsFreeFunction = true, IsThreadSafe = true)]
		get;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001079")]
	[Address(RVA = "0x692FB80", Offset = "0x692EB80", VA = "0x692FB80")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107A")]
	[Address(RVA = "0x692FD90", Offset = "0x692ED90", VA = "0x692FD90")]
	private static void ValidateArguments(string name)
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x692FC00", Offset = "0x692EC00", VA = "0x692FC00")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::BeginSample", IsFreeFunction = true, IsThreadSafe = true)]
	private static void BeginSampleImpl(string name, Object targetObject)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600107C")]
	[Address(RVA = "0x692FE40", Offset = "0x692EE40", VA = "0x692FE40")]
	[Conditional("ENABLE_PROFILER")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::EndSample", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void EndSample();

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x692FE70", Offset = "0x692EE70", VA = "0x692FE70")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
	public static long GetRuntimeMemorySizeLong([UnityEngine.Bindings.NotNull] Object o)
	{
		return default(long);
	}

	[Token(Token = "0x600107E")]
	[Conditional("ENABLE_PROFILER")]
	public static void EmitFrameMetaData<T>(Guid id, int tag, List<T> data) where T : struct
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600107F")]
	[Address(RVA = "0x692FF30", Offset = "0x692EF30", VA = "0x692FF30")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::Internal_EmitGlobalMetaData_Array", IsFreeFunction = true, IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
	private unsafe static extern void Internal_EmitGlobalMetaData_Array(void* id, int idLen, int tag, Array data, int count, int elementSize, bool frameData);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001080")]
	[Address(RVA = "0x692FE00", Offset = "0x692EE00", VA = "0x692FE00")]
	private static extern void BeginSampleImpl_Injected(ref ManagedSpanWrapper name, IntPtr targetObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001081")]
	[Address(RVA = "0x692FF00", Offset = "0x692EF00", VA = "0x692FF00")]
	private static extern long GetRuntimeMemorySizeLong_Injected(IntPtr o);
}
