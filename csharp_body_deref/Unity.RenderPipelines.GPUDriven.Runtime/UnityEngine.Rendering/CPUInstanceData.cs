// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUInstanceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000076")]
internal struct CPUInstanceData : IDisposable
{
	[Token(Token = "0x2000077")]
	internal readonly struct ReadOnly
	{
		[Token(Token = "0x400021F")]
		[FieldOffset(Offset = "0x0")]
		public readonly NativeArray<int>.ReadOnly instanceIndices;

		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x10")]
		public readonly NativeArray<InstanceHandle>.ReadOnly instances;

		[Token(Token = "0x4000221")]
		[FieldOffset(Offset = "0x20")]
		public readonly NativeArray<SharedInstanceHandle>.ReadOnly sharedInstances;

		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x30")]
		public readonly ParallelBitArray localToWorldIsFlippedBits;

		[Token(Token = "0x4000223")]
		[FieldOffset(Offset = "0x50")]
		public readonly NativeArray<AABB>.ReadOnly worldAABBs;

		[Token(Token = "0x4000224")]
		[FieldOffset(Offset = "0x60")]
		public readonly NativeArray<int>.ReadOnly tetrahedronCacheIndices;

		[Token(Token = "0x4000225")]
		[FieldOffset(Offset = "0x70")]
		public readonly ParallelBitArray movedInCurrentFrameBits;

		[Token(Token = "0x4000226")]
		[FieldOffset(Offset = "0x90")]
		public readonly ParallelBitArray movedInPreviousFrameBits;

		[Token(Token = "0x4000227")]
		[FieldOffset(Offset = "0xB0")]
		public readonly ParallelBitArray visibleInPreviousFrameBits;

		[Token(Token = "0x4000228")]
		[FieldOffset(Offset = "0xD0")]
		public readonly EditorInstanceDataArrays.ReadOnly editorData;

		[Token(Token = "0x4000229")]
		[FieldOffset(Offset = "0xD8")]
		public readonly NativeArray<UnityEngine.Rendering.GPUDrivenRendererMeshLodData>.ReadOnly meshLodData;

		[Token(Token = "0x1700003D")]
		public int handlesLength
		{
			[Token(Token = "0x6000239")]
			[Address(RVA = "0x2BE9810", Offset = "0x2BE7E10", VA = "0x182BE9810")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700003E")]
		public int instancesLength
		{
			[Token(Token = "0x600023A")]
			[Address(RVA = "0x2BE9890", Offset = "0x2BE7E90", VA = "0x182BE9890")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x2BE9400", Offset = "0x2BE7A00", VA = "0x182BE9400")]
		public ReadOnly(in CPUInstanceData instanceData)
		{
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x2BE8860", Offset = "0x2BE6E60", VA = "0x182BE8860")]
		public int InstanceToIndex(InstanceHandle instance)
		{
			return default(int);
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x2BE87A0", Offset = "0x2BE6DA0", VA = "0x182BE87A0")]
		public InstanceHandle IndexToInstance(int index)
		{
			return default(InstanceHandle);
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x2BE8B20", Offset = "0x2BE7120", VA = "0x182BE8B20")]
		public bool IsValidInstance(InstanceHandle instance)
		{
			return default(bool);
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x2BE8960", Offset = "0x2BE6F60", VA = "0x182BE8960")]
		public bool IsValidIndex(int index)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000212")]
	private const int k_InvalidIndex = -1;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<int> m_StructData;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<int> m_InstanceIndices;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x18")]
	public NativeArray<InstanceHandle> instances;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x28")]
	public NativeArray<SharedInstanceHandle> sharedInstances;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x38")]
	public ParallelBitArray localToWorldIsFlippedBits;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<AABB> worldAABBs;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x68")]
	public NativeArray<int> tetrahedronCacheIndices;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x78")]
	public ParallelBitArray movedInCurrentFrameBits;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x98")]
	public ParallelBitArray movedInPreviousFrameBits;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0xB8")]
	public ParallelBitArray visibleInPreviousFrameBits;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0xD8")]
	public EditorInstanceDataArrays editorData;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0xE0")]
	public NativeArray<UnityEngine.Rendering.GPUDrivenRendererMeshLodData> meshLodData;

	[Token(Token = "0x1700003A")]
	public int instancesLength
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x2BD6E40", Offset = "0x2BD5440", VA = "0x182BD6E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x29BDFA0", Offset = "0x29BC5A0", VA = "0x1829BDFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x2BD6E30", Offset = "0x2BD5430", VA = "0x182BD6E30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x2BD6E50", Offset = "0x2BD5450", VA = "0x182BD6E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int handlesLength
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x2BD6DE0", Offset = "0x2BD53E0", VA = "0x182BD6DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x2BD6070", Offset = "0x2BD4670", VA = "0x182BD6070")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x2BD5AD0", Offset = "0x2BD40D0", VA = "0x182BD5AD0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x2BD5E50", Offset = "0x2BD4450", VA = "0x182BD5E50")]
	private void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x2BD5890", Offset = "0x2BD3E90", VA = "0x182BD5890")]
	private void AddUnsafe(InstanceHandle instance)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x2BD6460", Offset = "0x2BD4A60", VA = "0x182BD6460")]
	public int InstanceToIndex(InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2BD6060", Offset = "0x2BD4660", VA = "0x182BD6060")]
	public InstanceHandle IndexToInstance(int index)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x2BD66D0", Offset = "0x2BD4CD0", VA = "0x182BD66D0")]
	public bool IsValidInstance(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x2BD64E0", Offset = "0x2BD4AE0", VA = "0x182BD64E0")]
	public bool IsFreeInstanceHandle(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x2BD6620", Offset = "0x2BD4C20", VA = "0x182BD6620")]
	public bool IsValidIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2BD5C10", Offset = "0x2BD4210", VA = "0x182BD5C10")]
	public int GetFreeInstancesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x2BD5BE0", Offset = "0x2BD41E0", VA = "0x182BD5BE0")]
	public void EnsureFreeInstances(int instancesCount)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x2BD5860", Offset = "0x2BD3E60", VA = "0x182BD5860")]
	public void AddNoGrow(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x2BD5A30", Offset = "0x2BD4030", VA = "0x182BD5A30")]
	public void Add(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2BD6860", Offset = "0x2BD4E60", VA = "0x182BD6860")]
	public void Remove(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x2BD6D10", Offset = "0x2BD5310", VA = "0x182BD6D10")]
	public void Set(InstanceHandle instance, SharedInstanceHandle sharedInstance, bool localToWorldIsFlipped, in AABB worldAABB, int tetrahedronCacheIndex, bool movedInCurrentFrame, bool movedInPreviousFrame, bool visibleInPreviousFrame, in UnityEngine.Rendering.GPUDrivenRendererMeshLodData meshLod)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x2BD6A30", Offset = "0x2BD5030", VA = "0x182BD6A30")]
	public void SetDefault(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x2BD5CE0", Offset = "0x2BD42E0", VA = "0x182BD5CE0")]
	public SharedInstanceHandle Get_SharedInstance(InstanceHandle instance)
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x2BD5C20", Offset = "0x2BD4220", VA = "0x182BD5C20")]
	public bool Get_LocalToWorldIsFlipped(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x2BD5D70", Offset = "0x2BD4370", VA = "0x182BD5D70")]
	public AABB Get_WorldAABB(InstanceHandle instance)
	{
		return default(AABB);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x2BD5D10", Offset = "0x2BD4310", VA = "0x182BD5D10")]
	public int Get_TetrahedronCacheIndex(InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x2BD5DC0", Offset = "0x2BD43C0", VA = "0x182BD5DC0")]
	public unsafe ref AABB Get_WorldBounds(InstanceHandle instance)
	{
		return ref *(AABB*)null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x2BD5C80", Offset = "0x2BD4280", VA = "0x182BD5C80")]
	public bool Get_MovedInCurrentFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x2BD5CB0", Offset = "0x2BD42B0", VA = "0x182BD5CB0")]
	public bool Get_MovedInPreviousFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x2BD5D40", Offset = "0x2BD4340", VA = "0x182BD5D40")]
	public bool Get_VisibleInPreviousFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x2BD5C50", Offset = "0x2BD4250", VA = "0x182BD5C50")]
	public UnityEngine.Rendering.GPUDrivenRendererMeshLodData Get_MeshLodData(InstanceHandle instance)
	{
		return default(UnityEngine.Rendering.GPUDrivenRendererMeshLodData);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x2BD6C30", Offset = "0x2BD5230", VA = "0x182BD6C30")]
	public void Set_SharedInstance(InstanceHandle instance, SharedInstanceHandle sharedInstance)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x2BD6B30", Offset = "0x2BD5130", VA = "0x182BD6B30")]
	public void Set_LocalToWorldIsFlipped(InstanceHandle instance, bool isFlipped)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x2BD6CD0", Offset = "0x2BD52D0", VA = "0x182BD6CD0")]
	public void Set_WorldAABB(InstanceHandle instance, in AABB worldBounds)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x2BD6C60", Offset = "0x2BD5260", VA = "0x182BD6C60")]
	public void Set_TetrahedronCacheIndex(InstanceHandle instance, int tetrahedronCacheIndex)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x2BD6BB0", Offset = "0x2BD51B0", VA = "0x182BD6BB0")]
	public void Set_MovedInCurrentFrame(InstanceHandle instance, bool movedInCurrentFrame)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x2BD6BF0", Offset = "0x2BD51F0", VA = "0x182BD6BF0")]
	public void Set_MovedInPreviousFrame(InstanceHandle instance, bool movedInPreviousFrame)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x2BD6C90", Offset = "0x2BD5290", VA = "0x182BD6C90")]
	public void Set_VisibleInPreviousFrame(InstanceHandle instance, bool visibleInPreviousFrame)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x2BD6B70", Offset = "0x2BD5170", VA = "0x182BD6B70")]
	public void Set_MeshLodData(InstanceHandle instance, UnityEngine.Rendering.GPUDrivenRendererMeshLodData meshLod)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2BD5A90", Offset = "0x2BD4090", VA = "0x182BD5A90")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
