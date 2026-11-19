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
using Unity.Burst;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Jobs.LowLevel.Unsafe;

[Token(Token = "0x200001C")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Jobs/ScriptBindings/JobsBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Jobs/JobSystem.h")]
public static class JobsUtility
{
	[Token(Token = "0x200001D")]
	public struct JobScheduleParameters
	{
		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public JobHandle Dependency;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int ScheduleMode;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public IntPtr ReflectionData;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public IntPtr JobDataPtr;

		[Token(Token = "0x6000052")]
		[Address(RVA = "0x68B36E0", Offset = "0x68B26E0", VA = "0x68B36E0")]
		public unsafe JobScheduleParameters(void* i_jobData, IntPtr i_reflectionData, JobHandle i_dependency, ScheduleMode i_scheduleMode)
		{
		}
	}

	[Token(Token = "0x200001E")]
	internal delegate void PanicFunction_();

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static PanicFunction_ PanicFunction;

	[Token(Token = "0x17000002")]
	public static extern bool IsExecutingJob
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x68B3570", Offset = "0x68B2570", VA = "0x68B3570")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetIsExecutingScriptingJob", IsFreeFunction = true, IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000003")]
	public static extern bool JobCompilerEnabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x68B35A0", Offset = "0x68B25A0", VA = "0x68B35A0")]
		[UnityEngine.Bindings.FreeFunction]
		set;
	}

	[Token(Token = "0x17000004")]
	public static int JobWorkerCount
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x68B3600", Offset = "0x68B2600", VA = "0x68B3600")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	public static extern int ThreadIndex
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x68B3630", Offset = "0x68B2630", VA = "0x68B3630")]
		[BurstAuthorizedExternalMethod]
		[UnityEngine.Bindings.FreeFunction("GetJobWorkerIndex", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x17000006")]
	public static extern int ThreadIndexCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x68B3660", Offset = "0x68B2660", VA = "0x68B3660")]
		[UnityEngine.Bindings.FreeFunction("GetJobWorkerIndexCount", IsThreadSafe = true)]
		[BurstAuthorizedExternalMethod]
		get;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x68B3160", Offset = "0x68B2160", VA = "0x68B3160")]
	public static void GetJobRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x68B31A0", Offset = "0x68B21A0", VA = "0x68B31A0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true)]
	public static extern bool GetWorkStealingRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex);

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x68B31F0", Offset = "0x68B21F0", VA = "0x68B31F0")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJob", ThrowsException = true, IsThreadSafe = true)]
	public static JobHandle Schedule(ref JobScheduleParameters parameters)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x68B3280", Offset = "0x68B2280", VA = "0x68B3280")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJobParallelFor", ThrowsException = true, IsThreadSafe = true)]
	public static JobHandle ScheduleParallelFor(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x68B3330", Offset = "0x68B2330", VA = "0x68B3330")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJobParallelForDeferArraySize", ThrowsException = true, IsThreadSafe = true)]
	public unsafe static JobHandle ScheduleParallelForDeferArraySize(ref JobScheduleParameters parameters, int innerloopBatchCount, void* listData, void* listDataAtomicSafetyHandle)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x68B33E0", Offset = "0x68B23E0", VA = "0x68B33E0")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJobParallelForTransform", ThrowsException = true)]
	public static JobHandle ScheduleParallelForTransform(ref JobScheduleParameters parameters, IntPtr transfromAccesssArray)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x68B3470", Offset = "0x68B2470", VA = "0x68B3470")]
	[UnityEngine.Bindings.FreeFunction(ThrowsException = true, IsThreadSafe = true)]
	private static extern IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2);

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x68B34D0", Offset = "0x68B24D0", VA = "0x68B34D0")]
	public static IntPtr CreateJobReflectionData(Type type, object managedJobFunction0, [Optional] object managedJobFunction1, [Optional] object managedJobFunction2)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x68B3520", Offset = "0x68B2520", VA = "0x68B3520")]
	public static IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x68B35D0", Offset = "0x68B25D0", VA = "0x68B35D0")]
	[UnityEngine.Bindings.FreeFunction("JobSystem::GetJobQueueWorkerThreadCount")]
	private static extern int GetJobQueueWorkerThreadCount();

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x68B3690", Offset = "0x68B2690", VA = "0x68B3690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePanicFunction()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x68B3240", Offset = "0x68B2240", VA = "0x68B3240")]
	private static extern void Schedule_Injected(ref JobScheduleParameters parameters, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x68B32E0", Offset = "0x68B22E0", VA = "0x68B32E0")]
	private static extern void ScheduleParallelFor_Injected(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x68B3390", Offset = "0x68B2390", VA = "0x68B3390")]
	private unsafe static extern void ScheduleParallelForDeferArraySize_Injected(ref JobScheduleParameters parameters, int innerloopBatchCount, void* listData, void* listDataAtomicSafetyHandle, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x68B3430", Offset = "0x68B2430", VA = "0x68B3430")]
	private static extern void ScheduleParallelForTransform_Injected(ref JobScheduleParameters parameters, IntPtr transfromAccesssArray, out JobHandle ret);
}
