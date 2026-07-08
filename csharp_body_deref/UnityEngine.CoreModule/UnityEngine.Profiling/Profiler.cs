using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B2")]
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
	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x4AE68A0", Offset = "0x4AE68A0", VA = "0x4AE68A0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x4AE6A40", Offset = "0x4AE6A40", VA = "0x4AE6A40")]
	private static void ValidateArguments(string name)
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4AE6990", Offset = "0x4AE6990", VA = "0x4AE6990")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::BeginSample", IsFreeFunction = true, IsThreadSafe = true)]
	private static void BeginSampleImpl(string name, Object targetObject)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4AE6AF0", Offset = "0x4AE6AF0", VA = "0x4AE6AF0")]
	[Conditional("ENABLE_PROFILER")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::EndSample", IsFreeFunction = true, IsThreadSafe = true)]
	public static extern void EndSample();

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4AE6B20", Offset = "0x4AE6B20", VA = "0x4AE6B20")]
	[UnityEngine.Bindings.NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
	public static long GetRuntimeMemorySizeLong([UnityEngine.Bindings.NotNull("ArgumentNullException")] Object o)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4AE6AB0", Offset = "0x4AE6AB0", VA = "0x4AE6AB0")]
	private static extern void BeginSampleImpl_Injected(string name, IntPtr targetObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4AE6BF0", Offset = "0x4AE6BF0", VA = "0x4AE6BF0")]
	private static extern long GetRuntimeMemorySizeLong_Injected(IntPtr o);
}
