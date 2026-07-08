using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x200000E")]
public static class IJobParallelForExtensions
{
	[Token(Token = "0x200000F")]
	internal struct ParallelForJobStruct<T> where T : struct, IJobParallelFor
	{
		[Token(Token = "0x2000010")]
		public delegate void ExecuteJobFunction(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x6000013")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x6000014")]
		public static void Execute(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x6000011")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJobParallelFor
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000012")]
	public static JobHandle Schedule<T>(this T jobData, int arrayLength, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobParallelFor
	{
		return default(JobHandle);
	}
}
