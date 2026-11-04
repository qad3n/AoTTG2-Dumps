// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUSharedInstanceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200007A")]
internal struct CPUSharedInstanceData : IDisposable
{
	[Token(Token = "0x200007B")]
	internal readonly struct ReadOnly
	{
		[Token(Token = "0x400023D")]
		[FieldOffset(Offset = "0x0")]
		public readonly NativeArray<int>.ReadOnly instanceIndices;

		[Token(Token = "0x400023E")]
		[FieldOffset(Offset = "0x10")]
		public readonly NativeArray<SharedInstanceHandle>.ReadOnly instances;

		[Token(Token = "0x400023F")]
		[FieldOffset(Offset = "0x20")]
		public readonly NativeArray<EntityId>.ReadOnly rendererGroupIDs;

		[Token(Token = "0x4000240")]
		[FieldOffset(Offset = "0x30")]
		public readonly NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays;

		[Token(Token = "0x4000241")]
		[FieldOffset(Offset = "0x40")]
		public readonly NativeArray<EntityId>.ReadOnly meshIDs;

		[Token(Token = "0x4000242")]
		[FieldOffset(Offset = "0x50")]
		public readonly NativeArray<AABB>.ReadOnly localAABBs;

		[Token(Token = "0x4000243")]
		[FieldOffset(Offset = "0x60")]
		public readonly NativeArray<CPUSharedInstanceFlags>.ReadOnly flags;

		[Token(Token = "0x4000244")]
		[FieldOffset(Offset = "0x70")]
		public readonly NativeArray<uint>.ReadOnly lodGroupAndMasks;

		[Token(Token = "0x4000245")]
		[FieldOffset(Offset = "0x80")]
		public readonly NativeArray<UnityEngine.Rendering.GPUDrivenMeshLodInfo>.ReadOnly meshLodInfos;

		[Token(Token = "0x4000246")]
		[FieldOffset(Offset = "0x90")]
		public readonly NativeArray<int>.ReadOnly gameObjectLayers;

		[Token(Token = "0x4000247")]
		[FieldOffset(Offset = "0xA0")]
		public readonly NativeArray<int>.ReadOnly refCounts;

		[Token(Token = "0x17000046")]
		public int handlesLength
		{
			[Token(Token = "0x600027A")]
			[Address(RVA = "0x2BE9850", Offset = "0x2BE7E50", VA = "0x182BE9850")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000047")]
		public int instancesLength
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x2BE98D0", Offset = "0x2BE7ED0", VA = "0x182BE98D0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x2BE8F00", Offset = "0x2BE7500", VA = "0x182BE8F00")]
		public ReadOnly(in CPUSharedInstanceData instanceData)
		{
		}

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x2BE8E80", Offset = "0x2BE7480", VA = "0x182BE8E80")]
		public int SharedInstanceToIndex(SharedInstanceHandle instance)
		{
			return default(int);
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x2BE8800", Offset = "0x2BE6E00", VA = "0x182BE8800")]
		public SharedInstanceHandle IndexToSharedInstance(int index)
		{
			return default(SharedInstanceHandle);
		}

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x2BE8CD0", Offset = "0x2BE72D0", VA = "0x182BE8CD0")]
		public bool IsValidSharedInstance(SharedInstanceHandle instance)
		{
			return default(bool);
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x2BE8A40", Offset = "0x2BE7040", VA = "0x182BE8A40")]
		public bool IsValidIndex(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6000281")]
		[Address(RVA = "0x2BE88E0", Offset = "0x2BE6EE0", VA = "0x182BE88E0")]
		public int InstanceToIndex(in CPUInstanceData.ReadOnly instanceData, InstanceHandle instance)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400022F")]
	private const int k_InvalidIndex = -1;

	[Token(Token = "0x4000230")]
	private const uint k_InvalidLODGroupAndMask = 4294967295u;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<int> m_StructData;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<int> m_InstanceIndices;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x18")]
	public NativeArray<SharedInstanceHandle> instances;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x28")]
	public NativeArray<EntityId> rendererGroupIDs;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x38")]
	public NativeArray<SmallEntityIdArray> materialIDArrays;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x48")]
	public NativeArray<EntityId> meshIDs;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<AABB> localAABBs;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x68")]
	public NativeArray<CPUSharedInstanceFlags> flags;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x78")]
	public NativeArray<uint> lodGroupAndMasks;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x88")]
	public NativeArray<UnityEngine.Rendering.GPUDrivenMeshLodInfo> meshLodInfos;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x98")]
	public NativeArray<int> gameObjectLayers;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0xA8")]
	public NativeArray<int> refCounts;

	[Token(Token = "0x17000043")]
	public int instancesLength
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x2BD6E40", Offset = "0x2BD5440", VA = "0x182BD6E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x29BDFA0", Offset = "0x29BC5A0", VA = "0x1829BDFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x2BD6E30", Offset = "0x2BD5430", VA = "0x182BD6E30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x2BD6E50", Offset = "0x2BD5450", VA = "0x182BD6E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public int handlesLength
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x2BD96A0", Offset = "0x2BD7CA0", VA = "0x182BD96A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x2BD86D0", Offset = "0x2BD6CD0", VA = "0x182BD86D0")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x2BD7E20", Offset = "0x2BD6420", VA = "0x182BD7E20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x2BD8460", Offset = "0x2BD6A60", VA = "0x182BD8460")]
	private void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x2BD7BE0", Offset = "0x2BD61E0", VA = "0x182BD7BE0")]
	private void AddUnsafe(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x2BD9620", Offset = "0x2BD7C20", VA = "0x182BD9620")]
	public int SharedInstanceToIndex(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x2BD6060", Offset = "0x2BD4660", VA = "0x182BD6060")]
	public SharedInstanceHandle IndexToSharedInstance(int index)
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x2BD8AB0", Offset = "0x2BD70B0", VA = "0x182BD8AB0")]
	public int InstanceToIndex(in CPUInstanceData instanceData, InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x2BD8D50", Offset = "0x2BD7350", VA = "0x182BD8D50")]
	public bool IsValidInstance(SharedInstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x2BD8B60", Offset = "0x2BD7160", VA = "0x182BD8B60")]
	public bool IsFreeInstanceHandle(SharedInstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x2BD8CA0", Offset = "0x2BD72A0", VA = "0x182BD8CA0")]
	public bool IsValidIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x2BD5C10", Offset = "0x2BD4210", VA = "0x182BD5C10")]
	public int GetFreeInstancesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x2BD8200", Offset = "0x2BD6800", VA = "0x182BD8200")]
	public void EnsureFreeInstances(int instancesCount)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x2BD7BB0", Offset = "0x2BD61B0", VA = "0x182BD7BB0")]
	public void AddNoGrow(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x2BD7D80", Offset = "0x2BD6380", VA = "0x182BD7D80")]
	public void Add(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x2BD8EE0", Offset = "0x2BD74E0", VA = "0x182BD8EE0")]
	public void Remove(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x2BD8430", Offset = "0x2BD6A30", VA = "0x182BD8430")]
	public int Get_RendererGroupID(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x2BD83D0", Offset = "0x2BD69D0", VA = "0x182BD83D0")]
	public int Get_MeshID(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x2BD82C0", Offset = "0x2BD68C0", VA = "0x182BD82C0")]
	public unsafe ref AABB Get_LocalAABB(SharedInstanceHandle instance)
	{
		return ref *(AABB*)null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x2BD8230", Offset = "0x2BD6830", VA = "0x182BD8230")]
	public CPUSharedInstanceFlags Get_Flags(SharedInstanceHandle instance)
	{
		return default(CPUSharedInstanceFlags);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x2BD8290", Offset = "0x2BD6890", VA = "0x182BD8290")]
	public uint Get_LODGroupAndMask(SharedInstanceHandle instance)
	{
		return default(uint);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x2BD8260", Offset = "0x2BD6860", VA = "0x182BD8260")]
	public int Get_GameObjectLayer(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x2BD8400", Offset = "0x2BD6A00", VA = "0x182BD8400")]
	public int Get_RefCount(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x2BD8350", Offset = "0x2BD6950", VA = "0x182BD8350")]
	public unsafe ref SmallEntityIdArray Get_MaterialIDs(SharedInstanceHandle instance)
	{
		return ref *(SmallEntityIdArray*)null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x2BD9440", Offset = "0x2BD7A40", VA = "0x182BD9440")]
	public void Set_RendererGroupID(SharedInstanceHandle instance, int rendererGroupID)
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x2BD93D0", Offset = "0x2BD79D0", VA = "0x182BD93D0")]
	public void Set_MeshID(SharedInstanceHandle instance, int meshID)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x2BD92B0", Offset = "0x2BD78B0", VA = "0x182BD92B0")]
	public void Set_LocalAABB(SharedInstanceHandle instance, in AABB localAABB)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x2BD9220", Offset = "0x2BD7820", VA = "0x182BD9220")]
	public void Set_Flags(SharedInstanceHandle instance, CPUSharedInstanceFlags instanceFlags)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x2BD9280", Offset = "0x2BD7880", VA = "0x182BD9280")]
	public void Set_LODGroupAndMask(SharedInstanceHandle instance, uint lodGroupAndMask)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x2BD9250", Offset = "0x2BD7850", VA = "0x182BD9250")]
	public void Set_GameObjectLayer(SharedInstanceHandle instance, int gameObjectLayer)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x2BD9410", Offset = "0x2BD7A10", VA = "0x182BD9410")]
	public void Set_RefCount(SharedInstanceHandle instance, int refCount)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x2BD92F0", Offset = "0x2BD78F0", VA = "0x182BD92F0")]
	public void Set_MaterialIDs(SharedInstanceHandle instance, in SmallEntityIdArray materialIDs)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x2BD9480", Offset = "0x2BD7A80", VA = "0x182BD9480")]
	public void Set(SharedInstanceHandle instance, EntityId rendererGroupID, in SmallEntityIdArray materialIDs, int meshID, in AABB localAABB, TransformUpdateFlags transformUpdateFlags, InstanceFlags instanceFlags, uint lodGroupAndMask, UnityEngine.Rendering.GPUDrivenMeshLodInfo meshLodInfo, int gameObjectLayer, int refCount)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x2BD9160", Offset = "0x2BD7760", VA = "0x182BD9160")]
	public void SetDefault(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x2BD7DE0", Offset = "0x2BD63E0", VA = "0x182BD7DE0")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
