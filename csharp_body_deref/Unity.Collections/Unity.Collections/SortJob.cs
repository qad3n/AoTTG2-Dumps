// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.SortJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x20000C3")]
[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(NativeSortExtension.DefaultComparer<int>)
})]
public struct SortJob<T, U> where T : struct where U : IComparer<T>
{
	[Token(Token = "0x20000C4")]
	[BurstCompile]
	public struct SegmentSort : IJobParallelFor
	{
		[Token(Token = "0x40003F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe T* Data;

		[Token(Token = "0x40003F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal U Comp;

		[Token(Token = "0x40003F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int Length;

		[Token(Token = "0x40003F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int SegmentWidth;

		[Token(Token = "0x6000946")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20000C5")]
	[BurstCompile]
	public struct SegmentSortMerge : IJob
	{
		[Token(Token = "0x40003F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe T* Data;

		[Token(Token = "0x40003FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal U Comp;

		[Token(Token = "0x40003FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int Length;

		[Token(Token = "0x40003FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int SegmentWidth;

		[Token(Token = "0x6000947")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x40003F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public unsafe T* Data;

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public U Comp;

	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public int Length;

	[Token(Token = "0x6000945")]
	public JobHandle Schedule([Optional] JobHandle inputDeps)
	{
		return default(JobHandle);
	}
}
