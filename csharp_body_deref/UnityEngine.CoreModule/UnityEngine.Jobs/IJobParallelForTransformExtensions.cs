// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Jobs.IJobParallelForTransformExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using Unity.Jobs.LowLevel.Unsafe;

namespace UnityEngine.Jobs;

[Token(Token = "0x20001F3")]
public static class IJobParallelForTransformExtensions
{
	[Token(Token = "0x20001F4")]
	internal struct TransformParallelForLoopStruct<T> where T : struct, IJobParallelForTransform
	{
		[Token(Token = "0x20001F5")]
		private struct TransformJobData
		{
			[Token(Token = "0x40006C3")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public IntPtr TransformAccessArray;

			[Token(Token = "0x40006C4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int IsReadOnly;
		}

		[Token(Token = "0x20001F6")]
		public delegate void ExecuteJobFunction(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x40006C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x600107D")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x600107E")]
		public static void Execute(ref T jobData, IntPtr jobData2, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x600107B")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJobParallelForTransform
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600107C")]
	public static JobHandle Schedule<T>(this T jobData, TransformAccessArray transforms, [Optional] JobHandle dependsOn) where T : struct, IJobParallelForTransform
	{
		return default(JobHandle);
	}
}
