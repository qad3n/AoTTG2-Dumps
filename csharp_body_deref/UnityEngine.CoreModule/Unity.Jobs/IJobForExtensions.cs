// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobForExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x2000011")]
public static class IJobForExtensions
{
	[Token(Token = "0x2000012")]
	internal struct ForJobStruct<T> where T : struct, IJobFor
	{
		[Token(Token = "0x2000013")]
		public delegate void ExecuteJobFunction(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x400000B")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x600001B")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x600001C")]
		public static void Execute(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x6000017")]
	public static void EarlyJobInit<T>() where T : struct, IJobFor
	{
	}

	[Token(Token = "0x6000018")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJobFor
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000019")]
	public static JobHandle ScheduleParallel<T>(this T jobData, int arrayLength, int innerloopBatchCount, JobHandle dependency) where T : struct, IJobFor
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600001A")]
	public static JobHandle ScheduleParallelByRef<T>(this ref T jobData, int arrayLength, int innerloopBatchCount, JobHandle dependency) where T : struct, IJobFor
	{
		return default(JobHandle);
	}
}
