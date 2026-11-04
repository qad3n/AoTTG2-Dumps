// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobFilterExtensions
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

[Token(Token = "0x2000009")]
public static class IJobFilterExtensions
{
	[Token(Token = "0x200000A")]
	internal struct JobFilterProducer<T> where T : struct, IJobFilter
	{
		[Token(Token = "0x200000B")]
		public struct JobWrapper
		{
			[Token(Token = "0x4000003")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[NativeDisableParallelForRestriction]
			public NativeList<int> outputIndices;

			[Token(Token = "0x4000004")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int appendCount;

			[Token(Token = "0x4000005")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public T JobData;
		}

		[Token(Token = "0x200000C")]
		public delegate void ExecuteJobFunction(ref JobWrapper jobWrapper, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x4000002")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x600001A")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x600001B")]
		public static void Execute(ref JobWrapper jobWrapper, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}

		[Token(Token = "0x600001C")]
		public static void ExecuteAppend(ref JobWrapper jobWrapper, IntPtr bufferRangePatchData)
		{
		}

		[Token(Token = "0x600001D")]
		public static void ExecuteFilter(ref JobWrapper jobWrapper, IntPtr bufferRangePatchData)
		{
		}
	}

	[Token(Token = "0x6000010")]
	public static void EarlyJobInit<T>() where T : struct, IJobFilter
	{
	}

	[Token(Token = "0x6000011")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJobFilter
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000012")]
	public static JobHandle ScheduleAppend<T>(this T jobData, NativeList<int> indices, int arrayLength, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000013")]
	public static JobHandle ScheduleFilter<T>(this T jobData, NativeList<int> indices, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000014")]
	public static void RunAppend<T>(this T jobData, NativeList<int> indices, int arrayLength) where T : struct, IJobFilter
	{
	}

	[Token(Token = "0x6000015")]
	public static void RunFilter<T>(this T jobData, NativeList<int> indices) where T : struct, IJobFilter
	{
	}

	[Token(Token = "0x6000016")]
	public static JobHandle ScheduleAppendByRef<T>(this ref T jobData, NativeList<int> indices, int arrayLength, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000017")]
	public static JobHandle ScheduleFilterByRef<T>(this ref T jobData, NativeList<int> indices, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000018")]
	public static void RunAppendByRef<T>(this ref T jobData, NativeList<int> indices, int arrayLength) where T : struct, IJobFilter
	{
	}

	[Token(Token = "0x6000019")]
	public static void RunFilterByRef<T>(this ref T jobData, NativeList<int> indices) where T : struct, IJobFilter
	{
	}
}
