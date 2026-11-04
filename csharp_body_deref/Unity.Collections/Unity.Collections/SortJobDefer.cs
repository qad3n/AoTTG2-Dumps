// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.SortJobDefer
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

[Token(Token = "0x20000C6")]
[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
{
	typeof(int),
	typeof(NativeSortExtension.DefaultComparer<int>)
})]
public struct SortJobDefer<T, U> where T : struct where U : IComparer<T>
{
	[Token(Token = "0x20000C7")]
	[BurstCompile]
	public struct SegmentSort : IJobParallelForDefer
	{
		[Token(Token = "0x40003FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[ReadOnly]
		internal NativeList<T> DataRO;

		[Token(Token = "0x4000400")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeList<T>* Data;

		[Token(Token = "0x4000401")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal U Comp;

		[Token(Token = "0x4000402")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int SegmentWidth;

		[Token(Token = "0x6000949")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20000C8")]
	[BurstCompile]
	public struct SegmentSortMerge : IJob
	{
		[Token(Token = "0x4000403")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal NativeList<T> Data;

		[Token(Token = "0x4000404")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal U Comp;

		[Token(Token = "0x4000405")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int SegmentWidth;

		[Token(Token = "0x600094A")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public NativeList<T> Data;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public U Comp;

	[Token(Token = "0x6000948")]
	public JobHandle Schedule([Optional] JobHandle inputDeps)
	{
		return default(JobHandle);
	}
}
