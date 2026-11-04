// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs.LowLevel.Unsafe;

namespace Unity.Jobs;

[Token(Token = "0x200000D")]
public static class IJobExtensions
{
	[Token(Token = "0x200000E")]
	internal struct JobStruct<T> where T : struct, IJob
	{
		[Token(Token = "0x200000F")]
		internal delegate void ExecuteJobFunction(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x6000011")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x6000012")]
		public static void Execute(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x600000E")]
	public static void EarlyJobInit<T>() where T : struct, IJob
	{
	}

	[Token(Token = "0x600000F")]
	private static IntPtr GetReflectionData<T>() where T : struct, IJob
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000010")]
	public static JobHandle Schedule<T>(this T jobData, [Optional] JobHandle dependsOn) where T : struct, IJob
	{
		return default(JobHandle);
	}
}
