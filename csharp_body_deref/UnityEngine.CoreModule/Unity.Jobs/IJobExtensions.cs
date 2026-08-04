// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.IJobExtensions
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200000A")]
public static class IJobExtensions
{
	[Token(Token = "0x200000B")]
	internal struct JobStruct<T> where T : struct, IJob
	{
		[Token(Token = "0x200000C")]
		internal delegate void ExecuteJobFunction(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex);

		[Token(Token = "0x400000A")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData;

		[Token(Token = "0x600000B")]
		[BurstDiscard]
		internal static void Initialize()
		{
		}

		[Token(Token = "0x600000C")]
		public static void Execute(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex)
		{
		}
	}

	[Token(Token = "0x600000A")]
	public static void EarlyJobInit<T>() where T : struct, IJob
	{
	}
}
