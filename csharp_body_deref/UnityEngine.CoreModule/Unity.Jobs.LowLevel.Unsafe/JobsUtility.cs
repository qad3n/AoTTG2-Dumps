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
		[Address(RVA = "0x4A84580", Offset = "0x4A84580", VA = "0x4A84580")]
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
	[Address(RVA = "0x4A84380", Offset = "0x4A84380", VA = "0x4A84380")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true, IsThreadSafe = true)]
	public static extern bool GetWorkStealingRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex);

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4A843D0", Offset = "0x4A843D0", VA = "0x4A843D0")]
	[UnityEngine.Bindings.FreeFunction("ScheduleManagedJobParallelFor", ThrowsException = true, IsThreadSafe = true)]
	public static JobHandle ScheduleParallelFor(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4A84480", Offset = "0x4A84480", VA = "0x4A84480")]
	[UnityEngine.Bindings.FreeFunction(ThrowsException = true, IsThreadSafe = true)]
	private static extern IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2);

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4A844E0", Offset = "0x4A844E0", VA = "0x4A844E0")]
	public static IntPtr CreateJobReflectionData(Type type, object managedJobFunction0, [Optional] object managedJobFunction1, [Optional] object managedJobFunction2)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4A84530", Offset = "0x4A84530", VA = "0x4A84530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePanicFunction()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4A84430", Offset = "0x4A84430", VA = "0x4A84430")]
	private static extern void ScheduleParallelFor_Injected(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount, out JobHandle ret);
}
