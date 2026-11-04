// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobParallelForDeferExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x2000012")]
public static class IJobParallelForDeferExtensions
{
	[Token(Token = "0x2000013")]
	internal struct JobParallelForDeferProducer<T> where T : struct, IJobParallelForDefer
	{
		[Token(Token = "0x2000014")]
		public delegate void ExecuteJobFunction(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x4000007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x600003E")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x600003F")]
		public static void Execute(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x6000038")]
	public static void EarlyJobInit<T>() where T : struct, IJobParallelForDefer
	{
	}

	[Token(Token = "0x6000039")]
	public static JobHandle Schedule<T, U>(this T jobData, NativeList<U> list, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForDefer where U : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600003A")]
	public static JobHandle ScheduleByRef<T, U>(this ref T jobData, NativeList<U> list, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForDefer where U : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600003B")]
	public unsafe static JobHandle Schedule<T>(this T jobData, int* forEachCount, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForDefer
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600003C")]
	public unsafe static JobHandle ScheduleByRef<T>(this ref T jobData, int* forEachCount, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForDefer
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600003D")]
	private unsafe static JobHandle ScheduleInternal<T>(ref T jobData, int innerloopBatchCount, void* forEachListPtr, void* atomicSafetyHandlePtr, JobHandle dependsOn) where T : struct, IJobParallelForDefer
	{
		return default(JobHandle);
	}
}
