// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobParallelForBatchExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x200000E")]
public static class IJobParallelForBatchExtensions
{
	[Token(Token = "0x200000F")]
	internal struct JobParallelForBatchProducer<T> where T : struct, IJobParallelForBatch
	{
		[Token(Token = "0x2000010")]
		internal delegate void ExecuteJobFunction(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x4000006")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x6000030")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x6000031")]
		public static void Execute(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x6000024")]
	public static void EarlyJobInit<T>() where T : struct, IJobParallelForBatch
	{
	}

	[Token(Token = "0x6000025")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJobParallelForBatch
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000026")]
	public static JobHandle Schedule<T>(this T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000027")]
	public static JobHandle ScheduleByRef<T>(this ref T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000028")]
	public static JobHandle ScheduleParallel<T>(this T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000029")]
	public static JobHandle ScheduleParallelByRef<T>(this ref T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600002A")]
	public static JobHandle ScheduleBatch<T>(this T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600002B")]
	public static JobHandle ScheduleBatchByRef<T>(this ref T jobData, int arrayLength, int indicesPerJobCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForBatch
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600002C")]
	public static void Run<T>(this T jobData, int arrayLength, int indicesPerJobCount) where T : struct, IJobParallelForBatch
	{
	}

	[Token(Token = "0x600002D")]
	public static void RunByRef<T>(this ref T jobData, int arrayLength, int indicesPerJobCount) where T : struct, IJobParallelForBatch
	{
	}

	[Token(Token = "0x600002E")]
	public static void RunBatch<T>(this T jobData, int arrayLength) where T : struct, IJobParallelForBatch
	{
	}

	[Token(Token = "0x600002F")]
	public static void RunBatchByRef<T>(this ref T jobData, int arrayLength) where T : struct, IJobParallelForBatch
	{
	}
}
