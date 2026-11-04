// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceDataBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000066")]
internal class GPUInstanceDataBuffer : IDisposable
{
	[Token(Token = "0x2000067")]
	internal readonly struct ReadOnly
	{
		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x0")]
		private readonly NativeArray<int> instancesNumPrefixSum;

		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x2BE93E0", Offset = "0x2BE79E0", VA = "0x182BE93E0")]
		public ReadOnly(GPUInstanceDataBuffer buffer)
		{
		}

		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x2BE8790", Offset = "0x2BE6D90", VA = "0x182BE8790")]
		public GPUInstanceIndex CPUInstanceToGPUInstance(InstanceHandle instance)
		{
			return default(GPUInstanceIndex);
		}

		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x2BE86C0", Offset = "0x2BE6CC0", VA = "0x182BE86C0")]
		public void CPUInstanceArrayToGPUInstanceArray(NativeArray<InstanceHandle> instances, NativeArray<GPUInstanceIndex> gpuInstanceIndices)
		{
		}
	}

	[Token(Token = "0x2000068")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	private struct ConvertCPUInstancesToGPUInstancesJob : IJobParallelFor
	{
		[Token(Token = "0x40001CA")]
		public const int k_BatchSize = 512;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<int> instancesNumPrefixSum;

		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public NativeArray<InstanceHandle> instances;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x20")]
		[WriteOnly]
		public NativeArray<GPUInstanceIndex> gpuInstanceIndices;

		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x2BD9760", Offset = "0x2BD7D60", VA = "0x182BD9760", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x0")]
	private static int s_NextLayoutVersion;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x10")]
	public InstanceNumInfo instanceNumInfo;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x18")]
	public NativeArray<int> instancesNumPrefixSum;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x28")]
	public NativeArray<int> instancesSpan;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x38")]
	public int byteSize;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x3C")]
	public int perInstanceComponentCount;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x40")]
	public int version;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x44")]
	public int layoutVersion;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x48")]
	public GraphicsBuffer gpuBuffer;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x50")]
	public GraphicsBuffer validComponentsIndicesGpuBuffer;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x58")]
	public GraphicsBuffer componentAddressesGpuBuffer;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x60")]
	public GraphicsBuffer componentInstanceIndexRangesGpuBuffer;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x68")]
	public GraphicsBuffer componentByteCountsGpuBuffer;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x70")]
	public NativeArray<GPUInstanceComponentDesc> descriptions;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x80")]
	public NativeArray<MetadataValue> defaultMetadata;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x90")]
	public NativeArray<int> gpuBufferComponentAddress;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0xA0")]
	public NativeParallelHashMap<int, int> nameToMetadataMap;

	[Token(Token = "0x1700002F")]
	public bool valid
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x2BDCD80", Offset = "0x2BDB380", VA = "0x182BDCD80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x2BDCD40", Offset = "0x2BDB340", VA = "0x182BDCD40")]
	public static int NextVersion()
	{
		return default(int);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x2BDC740", Offset = "0x2BDAD40", VA = "0x182BDC740")]
	private static GPUInstanceIndex CPUInstanceToGPUInstance(in NativeArray<int> instancesNumPrefixSum, InstanceHandle instance)
	{
		return default(GPUInstanceIndex);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x2BDCCD0", Offset = "0x2BDB2D0", VA = "0x182BDCCD0")]
	public int GetPropertyIndex(int propertyID, bool assertOnFail = true)
	{
		return default(int);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x2BDCBA0", Offset = "0x2BDB1A0", VA = "0x182BDCBA0")]
	public int GetGpuAddress(string strName, bool assertOnFail = true)
	{
		return default(int);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x2BDCC40", Offset = "0x2BDB240", VA = "0x182BDCC40")]
	public int GetGpuAddress(int propertyID, bool assertOnFail = true)
	{
		return default(int);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x2BDC8F0", Offset = "0x2BDAEF0", VA = "0x182BDC8F0")]
	public GPUInstanceIndex CPUInstanceToGPUInstance(InstanceHandle instance)
	{
		return default(GPUInstanceIndex);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x2BDCA90", Offset = "0x2BDB090", VA = "0x182BDCA90")]
	public InstanceHandle GPUInstanceToCPUInstance(GPUInstanceIndex gpuInstanceIndex)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2BDC670", Offset = "0x2BDAC70", VA = "0x182BDC670")]
	public void CPUInstanceArrayToGPUInstanceArray(NativeArray<InstanceHandle> instances, NativeArray<GPUInstanceIndex> gpuInstanceIndices)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2BDC900", Offset = "0x2BDAF00", VA = "0x182BDC900", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2BDC640", Offset = "0x2BDAC40", VA = "0x182BDC640")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GPUInstanceDataBuffer()
	{
	}
}
