// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.LowLevel.Unsafe.JobsUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Jobs.LowLevel.Unsafe;

[Token(Token = "0x2000015")]
[UnityEngine.Bindings.NativeHeader("Runtime/Jobs/JobSystem.h")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Jobs/ScriptBindings/JobsBindings.h")]
public static class JobsUtility
{
	[Token(Token = "0x2000016")]
	public struct JobScheduleParameters
	{
		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public JobHandle Dependency;

		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int ScheduleMode;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public IntPtr ReflectionData;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public IntPtr JobDataPtr;

		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4DABDA0", Offset = "0x4DABDA0", VA = "0x4DABDA0")]
		public unsafe JobScheduleParameters(void* i_jobData, IntPtr i_reflectionData, JobHandle i_dependency, ScheduleMode i_scheduleMode)
		{
		}
	}

	[Token(Token = "0x2000017")]
	internal delegate void PanicFunction_();

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static PanicFunction_ PanicFunction;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4DABBA0", Offset = "0x4DABBA0", VA = "0x4DABBA0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true)]
	public static extern bool GetWorkStealingRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex);

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4DABBF0", Offset = "0x4DABBF0", VA = "0x4DABBF0")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJobParallelFor", ThrowsException = true, IsThreadSafe = true)]
	public static JobHandle ScheduleParallelFor(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4DABCA0", Offset = "0x4DABCA0", VA = "0x4DABCA0")]
	[UnityEngine.Bindings.FreeFunction(ThrowsException = true, IsThreadSafe = true)]
	private static extern IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2);

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4DABD00", Offset = "0x4DABD00", VA = "0x4DABD00")]
	public static IntPtr CreateJobReflectionData(Type type, object managedJobFunction0, [Optional] object managedJobFunction1, [Optional] object managedJobFunction2)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4DABD50", Offset = "0x4DABD50", VA = "0x4DABD50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePanicFunction()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4DABC50", Offset = "0x4DABC50", VA = "0x4DABC50")]
	private static extern void ScheduleParallelFor_Injected(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount, out JobHandle ret);
}
