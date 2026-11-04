// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceDataBufferUploader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006A")]
internal struct GPUInstanceDataBufferUploader : IDisposable
{
	[Token(Token = "0x200006B")]
	private static class UploadKernelIDs
	{
		[Token(Token = "0x40001D8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _InputValidComponentCounts;

		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _InputInstanceCounts;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _InputInstanceByteSize;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _InputComponentOffsets;

		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _InputInstanceData;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _InputInstanceIndices;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _InputValidComponentIndices;

		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _InputComponentAddresses;

		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _InputComponentByteCounts;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _InputComponentInstanceIndexRanges;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _OutputBuffer;
	}

	[Token(Token = "0x200006C")]
	public struct GPUResources : IDisposable
	{
		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x0")]
		public ComputeBuffer instanceData;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer instanceIndices;

		[Token(Token = "0x40001E5")]
		[FieldOffset(Offset = "0x10")]
		public ComputeBuffer inputComponentOffsets;

		[Token(Token = "0x40001E6")]
		[FieldOffset(Offset = "0x18")]
		public ComputeBuffer validComponentIndices;

		[Token(Token = "0x40001E7")]
		[FieldOffset(Offset = "0x20")]
		public ComputeShader cs;

		[Token(Token = "0x40001E8")]
		[FieldOffset(Offset = "0x28")]
		public int kernelId;

		[Token(Token = "0x40001E9")]
		[FieldOffset(Offset = "0x2C")]
		private int m_InstanceDataByteSize;

		[Token(Token = "0x40001EA")]
		[FieldOffset(Offset = "0x30")]
		private int m_InstanceCount;

		[Token(Token = "0x40001EB")]
		[FieldOffset(Offset = "0x34")]
		private int m_ComponentCounts;

		[Token(Token = "0x40001EC")]
		[FieldOffset(Offset = "0x38")]
		private int m_ValidComponentIndicesCount;

		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x2BDD250", Offset = "0x2BDB850", VA = "0x182BDD250")]
		public void LoadShaders(GPUResidentDrawerResources resources)
		{
		}

		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x2BDCF60", Offset = "0x2BDB560", VA = "0x182BDCF60")]
		public void CreateResources(int newInstanceCount, int sizePerInstance, int newComponentCounts, int validComponentIndicesCount)
		{
		}

		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x2BDD130", Offset = "0x2BDB730", VA = "0x182BDD130", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200006D")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal struct WriteInstanceDataParameterJob : IJobParallelFor
	{
		[Token(Token = "0x40001ED")]
		public const int k_BatchSize = 512;

		[Token(Token = "0x40001EE")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public bool gatherData;

		[Token(Token = "0x40001EF")]
		[FieldOffset(Offset = "0x4")]
		[ReadOnly]
		public int parameterIndex;

		[Token(Token = "0x40001F0")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public int uintPerParameter;

		[Token(Token = "0x40001F1")]
		[FieldOffset(Offset = "0xC")]
		[ReadOnly]
		public int uintPerInstance;

		[Token(Token = "0x40001F2")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public NativeArray<int> componentDataIndex;

		[Token(Token = "0x40001F3")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		public NativeArray<int> gatherIndices;

		[Token(Token = "0x40001F4")]
		[FieldOffset(Offset = "0x30")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[ReadOnly]
		public NativeArray<uint> instanceData;

		[Token(Token = "0x40001F5")]
		[FieldOffset(Offset = "0x40")]
		[NativeDisableContainerSafetyRestriction]
		[NoAlias]
		[WriteOnly]
		public NativeArray<uint> tmpDataBuffer;

		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x2BEB5F0", Offset = "0x2BE9BF0", VA = "0x182BEB5F0", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x0")]
	private int m_UintPerInstance;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x4")]
	private int m_Capacity;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x8")]
	private int m_InstanceCount;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<bool> m_ComponentIsInstanced;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x20")]
	private NativeArray<int> m_ComponentDataIndex;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x30")]
	private NativeArray<int> m_DescriptionsUintSize;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x40")]
	private NativeArray<uint> m_TmpDataBuffer;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x50")]
	private NativeList<int> m_WritenComponentIndices;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x58")]
	private NativeArray<int> m_DummyArray;

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x2BDC3D0", Offset = "0x2BDA9D0", VA = "0x182BDC3D0")]
	public GPUInstanceDataBufferUploader(in NativeArray<GPUInstanceComponentDesc> descriptions, int capacity, InstanceType instanceType)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x2BDBC30", Offset = "0x2BDA230", VA = "0x182BDBC30")]
	public IntPtr GetUploadBufferPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
	public int GetUIntPerInstance()
	{
		return default(int);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x2BDBC20", Offset = "0x2BDA220", VA = "0x182BDBC20")]
	public int GetParamUIntOffset(int parameterIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60001D5")]
	public int PrepareParamWrite<T>(int parameterIndex) where T : struct
	{
		return default(int);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
	public void AllocateUploadHandles(int handlesLength)
	{
	}

	[Token(Token = "0x60001D7")]
	public JobHandle WriteInstanceDataJob<T>(int parameterIndex, NativeArray<T> instanceData) where T : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60001D8")]
	public JobHandle WriteInstanceDataJob<T>(int parameterIndex, NativeArray<T> instanceData, NativeArray<int> gatherIndices) where T : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x2BDBC80", Offset = "0x2BDA280", VA = "0x182BDBC80")]
	public void SubmitToGpu(GPUInstanceDataBuffer instanceDataBuffer, NativeArray<GPUInstanceIndex> gpuInstanceIndices, ref GPUResources gpuResources, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x2BDC210", Offset = "0x2BDA810", VA = "0x182BDC210")]
	public void SubmitToGpu(GPUInstanceDataBuffer instanceDataBuffer, NativeArray<InstanceHandle> instances, ref GPUResources gpuResources, bool submitOnlyWrittenParams)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x2BDBB10", Offset = "0x2BDA110", VA = "0x182BDBB10", Slot = "4")]
	public void Dispose()
	{
	}
}
