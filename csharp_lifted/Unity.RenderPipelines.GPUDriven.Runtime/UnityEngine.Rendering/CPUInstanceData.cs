// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUInstanceData
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x65D6690", Offset = "0x65D5690", VA = "0x65D6690")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700003E")]
		public int instancesLength
		{
			[Token(Token = "0x600023A")]
			[Address(RVA = "0x65D66C0", Offset = "0x65D56C0", VA = "0x65D66C0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600023B")]
		[Address(RVA = "0x65D62E0", Offset = "0x65D52E0", VA = "0x65D62E0")]
		public ReadOnly(in CPUInstanceData instanceData)
		{
		}

		[Token(Token = "0x600023C")]
		[Address(RVA = "0x65D6700", Offset = "0x65D5700", VA = "0x65D6700")]
		public int InstanceToIndex(InstanceHandle instance)
		{
			return default(int);
		}

		[Token(Token = "0x600023D")]
		[Address(RVA = "0x65D6780", Offset = "0x65D5780", VA = "0x65D6780")]
		public InstanceHandle IndexToInstance(int index)
		{
			return default(InstanceHandle);
		}

		[Token(Token = "0x600023E")]
		[Address(RVA = "0x65D67E0", Offset = "0x65D57E0", VA = "0x65D67E0")]
		public bool IsValidInstance(InstanceHandle instance)
		{
			return default(bool);
		}

		[Token(Token = "0x600023F")]
		[Address(RVA = "0x65D69E0", Offset = "0x65D59E0", VA = "0x65D69E0")]
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
		[Address(RVA = "0x65D4410", Offset = "0x65D3410", VA = "0x65D4410")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x65D4420", Offset = "0x65D3420", VA = "0x65D4420")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x65D4430", Offset = "0x65D3430", VA = "0x65D4430")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x65D4440", Offset = "0x65D3440", VA = "0x65D4440")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int handlesLength
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x65D4450", Offset = "0x65D3450", VA = "0x65D4450")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x65D44A0", Offset = "0x65D34A0", VA = "0x65D44A0")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x65D48B0", Offset = "0x65D38B0", VA = "0x65D48B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x65D49E0", Offset = "0x65D39E0", VA = "0x65D49E0")]
	private void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x65D4C00", Offset = "0x65D3C00", VA = "0x65D4C00")]
	private void AddUnsafe(InstanceHandle instance)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x65D4DE0", Offset = "0x65D3DE0", VA = "0x65D4DE0")]
	public int InstanceToIndex(InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x65D4E60", Offset = "0x65D3E60", VA = "0x65D4E60")]
	public InstanceHandle IndexToInstance(int index)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x65D4E70", Offset = "0x65D3E70", VA = "0x65D4E70")]
	public bool IsValidInstance(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x65D5020", Offset = "0x65D4020", VA = "0x65D5020")]
	public bool IsFreeInstanceHandle(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x65D5190", Offset = "0x65D4190", VA = "0x65D5190")]
	public bool IsValidIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x65D5230", Offset = "0x65D4230", VA = "0x65D5230")]
	public int GetFreeInstancesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x65D5240", Offset = "0x65D4240", VA = "0x65D5240")]
	public void EnsureFreeInstances(int instancesCount)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x65D5260", Offset = "0x65D4260", VA = "0x65D5260")]
	public void AddNoGrow(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x65D53A0", Offset = "0x65D43A0", VA = "0x65D53A0")]
	public void Add(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x65D5470", Offset = "0x65D4470", VA = "0x65D5470")]
	public void Remove(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x65D56E0", Offset = "0x65D46E0", VA = "0x65D56E0")]
	public void Set(InstanceHandle instance, SharedInstanceHandle sharedInstance, bool localToWorldIsFlipped, in AABB worldAABB, int tetrahedronCacheIndex, bool movedInCurrentFrame, bool movedInPreviousFrame, bool visibleInPreviousFrame, in UnityEngine.Rendering.GPUDrivenRendererMeshLodData meshLod)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x65D5300", Offset = "0x65D4300", VA = "0x65D5300")]
	public void SetDefault(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x65D5820", Offset = "0x65D4820", VA = "0x65D5820")]
	public SharedInstanceHandle Get_SharedInstance(InstanceHandle instance)
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x65D58B0", Offset = "0x65D48B0", VA = "0x65D58B0")]
	public bool Get_LocalToWorldIsFlipped(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x65D5940", Offset = "0x65D4940", VA = "0x65D5940")]
	public AABB Get_WorldAABB(InstanceHandle instance)
	{
		return default(AABB);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x65D59F0", Offset = "0x65D49F0", VA = "0x65D59F0")]
	public int Get_TetrahedronCacheIndex(InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x65D5A80", Offset = "0x65D4A80", VA = "0x65D5A80")]
	public unsafe ref AABB Get_WorldBounds(InstanceHandle instance)
	{
		return ref *(AABB*)null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x65D5B50", Offset = "0x65D4B50", VA = "0x65D5B50")]
	public bool Get_MovedInCurrentFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x65D5BE0", Offset = "0x65D4BE0", VA = "0x65D5BE0")]
	public bool Get_MovedInPreviousFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x65D5C70", Offset = "0x65D4C70", VA = "0x65D5C70")]
	public bool Get_VisibleInPreviousFrame(InstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x65D5D00", Offset = "0x65D4D00", VA = "0x65D5D00")]
	public UnityEngine.Rendering.GPUDrivenRendererMeshLodData Get_MeshLodData(InstanceHandle instance)
	{
		return default(UnityEngine.Rendering.GPUDrivenRendererMeshLodData);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x65D5D90", Offset = "0x65D4D90", VA = "0x65D5D90")]
	public void Set_SharedInstance(InstanceHandle instance, SharedInstanceHandle sharedInstance)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x65D5E20", Offset = "0x65D4E20", VA = "0x65D5E20")]
	public void Set_LocalToWorldIsFlipped(InstanceHandle instance, bool isFlipped)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x65D5EC0", Offset = "0x65D4EC0", VA = "0x65D5EC0")]
	public void Set_WorldAABB(InstanceHandle instance, in AABB worldBounds)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x65D5F60", Offset = "0x65D4F60", VA = "0x65D5F60")]
	public void Set_TetrahedronCacheIndex(InstanceHandle instance, int tetrahedronCacheIndex)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x65D5FF0", Offset = "0x65D4FF0", VA = "0x65D5FF0")]
	public void Set_MovedInCurrentFrame(InstanceHandle instance, bool movedInCurrentFrame)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x65D6090", Offset = "0x65D5090", VA = "0x65D6090")]
	public void Set_MovedInPreviousFrame(InstanceHandle instance, bool movedInPreviousFrame)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x65D6130", Offset = "0x65D5130", VA = "0x65D6130")]
	public void Set_VisibleInPreviousFrame(InstanceHandle instance, bool visibleInPreviousFrame)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x65D61D0", Offset = "0x65D51D0", VA = "0x65D61D0")]
	public void Set_MeshLodData(InstanceHandle instance, UnityEngine.Rendering.GPUDrivenRendererMeshLodData meshLod)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x65D6270", Offset = "0x65D5270", VA = "0x65D6270")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
