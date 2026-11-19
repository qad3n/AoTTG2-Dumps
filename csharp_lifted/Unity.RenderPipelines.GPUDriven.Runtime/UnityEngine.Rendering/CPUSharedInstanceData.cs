// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUSharedInstanceData
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x65DA2F0", Offset = "0x65D92F0", VA = "0x65DA2F0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000047")]
		public int instancesLength
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x65DA320", Offset = "0x65D9320", VA = "0x65DA320")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x65D9EC0", Offset = "0x65D8EC0", VA = "0x65D9EC0")]
		public ReadOnly(in CPUSharedInstanceData instanceData)
		{
		}

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x65DA350", Offset = "0x65D9350", VA = "0x65DA350")]
		public int SharedInstanceToIndex(SharedInstanceHandle instance)
		{
			return default(int);
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x65DA3D0", Offset = "0x65D93D0", VA = "0x65DA3D0")]
		public SharedInstanceHandle IndexToSharedInstance(int index)
		{
			return default(SharedInstanceHandle);
		}

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x65DA430", Offset = "0x65D9430", VA = "0x65DA430")]
		public bool IsValidSharedInstance(SharedInstanceHandle instance)
		{
			return default(bool);
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x65DA630", Offset = "0x65D9630", VA = "0x65DA630")]
		public bool IsValidIndex(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6000281")]
		[Address(RVA = "0x65DA700", Offset = "0x65D9700", VA = "0x65DA700")]
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
		[Address(RVA = "0x65D7B60", Offset = "0x65D6B60", VA = "0x65D7B60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x65D7B70", Offset = "0x65D6B70", VA = "0x65D7B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000255")]
		[Address(RVA = "0x65D7B80", Offset = "0x65D6B80", VA = "0x65D7B80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000256")]
		[Address(RVA = "0x65D7B90", Offset = "0x65D6B90", VA = "0x65D7B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public int handlesLength
	{
		[Token(Token = "0x6000257")]
		[Address(RVA = "0x65D7BA0", Offset = "0x65D6BA0", VA = "0x65D7BA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x65D7BF0", Offset = "0x65D6BF0", VA = "0x65D7BF0")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x65D7FC0", Offset = "0x65D6FC0", VA = "0x65D7FC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x65D83D0", Offset = "0x65D73D0", VA = "0x65D83D0")]
	private void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x65D8620", Offset = "0x65D7620", VA = "0x65D8620")]
	private void AddUnsafe(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x65D8800", Offset = "0x65D7800", VA = "0x65D8800")]
	public int SharedInstanceToIndex(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x65D8880", Offset = "0x65D7880", VA = "0x65D8880")]
	public SharedInstanceHandle IndexToSharedInstance(int index)
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x65D8890", Offset = "0x65D7890", VA = "0x65D8890")]
	public int InstanceToIndex(in CPUInstanceData instanceData, InstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x65D8980", Offset = "0x65D7980", VA = "0x65D8980")]
	public bool IsValidInstance(SharedInstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x65D8B30", Offset = "0x65D7B30", VA = "0x65D8B30")]
	public bool IsFreeInstanceHandle(SharedInstanceHandle instance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x65D8CA0", Offset = "0x65D7CA0", VA = "0x65D8CA0")]
	public bool IsValidIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x65D8D40", Offset = "0x65D7D40", VA = "0x65D8D40")]
	public int GetFreeInstancesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x65D8D50", Offset = "0x65D7D50", VA = "0x65D8D50")]
	public void EnsureFreeInstances(int instancesCount)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x65D8D70", Offset = "0x65D7D70", VA = "0x65D8D70")]
	public void AddNoGrow(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x65D8E90", Offset = "0x65D7E90", VA = "0x65D8E90")]
	public void Add(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x65D8F50", Offset = "0x65D7F50", VA = "0x65D8F50")]
	public void Remove(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x65D9230", Offset = "0x65D8230", VA = "0x65D9230")]
	public int Get_RendererGroupID(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x65D92C0", Offset = "0x65D82C0", VA = "0x65D92C0")]
	public int Get_MeshID(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x65D9350", Offset = "0x65D8350", VA = "0x65D9350")]
	public unsafe ref AABB Get_LocalAABB(SharedInstanceHandle instance)
	{
		return ref *(AABB*)null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x65D9420", Offset = "0x65D8420", VA = "0x65D9420")]
	public CPUSharedInstanceFlags Get_Flags(SharedInstanceHandle instance)
	{
		return default(CPUSharedInstanceFlags);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x65D94B0", Offset = "0x65D84B0", VA = "0x65D94B0")]
	public uint Get_LODGroupAndMask(SharedInstanceHandle instance)
	{
		return default(uint);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x65D9540", Offset = "0x65D8540", VA = "0x65D9540")]
	public int Get_GameObjectLayer(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x65D95D0", Offset = "0x65D85D0", VA = "0x65D95D0")]
	public int Get_RefCount(SharedInstanceHandle instance)
	{
		return default(int);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x65D9660", Offset = "0x65D8660", VA = "0x65D9660")]
	public unsafe ref SmallEntityIdArray Get_MaterialIDs(SharedInstanceHandle instance)
	{
		return ref *(SmallEntityIdArray*)null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x65D9730", Offset = "0x65D8730", VA = "0x65D9730")]
	public void Set_RendererGroupID(SharedInstanceHandle instance, int rendererGroupID)
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x65D97D0", Offset = "0x65D87D0", VA = "0x65D97D0")]
	public void Set_MeshID(SharedInstanceHandle instance, int meshID)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x65D9870", Offset = "0x65D8870", VA = "0x65D9870")]
	public void Set_LocalAABB(SharedInstanceHandle instance, in AABB localAABB)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x65D9910", Offset = "0x65D8910", VA = "0x65D9910")]
	public void Set_Flags(SharedInstanceHandle instance, CPUSharedInstanceFlags instanceFlags)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x65D99A0", Offset = "0x65D89A0", VA = "0x65D99A0")]
	public void Set_LODGroupAndMask(SharedInstanceHandle instance, uint lodGroupAndMask)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x65D9A30", Offset = "0x65D8A30", VA = "0x65D9A30")]
	public void Set_GameObjectLayer(SharedInstanceHandle instance, int gameObjectLayer)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x65D9AD0", Offset = "0x65D8AD0", VA = "0x65D9AD0")]
	public void Set_RefCount(SharedInstanceHandle instance, int refCount)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x65D9B70", Offset = "0x65D8B70", VA = "0x65D9B70")]
	public void Set_MaterialIDs(SharedInstanceHandle instance, in SmallEntityIdArray materialIDs)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x65D9C90", Offset = "0x65D8C90", VA = "0x65D9C90")]
	public void Set(SharedInstanceHandle instance, EntityId rendererGroupID, in SmallEntityIdArray materialIDs, int meshID, in AABB localAABB, TransformUpdateFlags transformUpdateFlags, InstanceFlags instanceFlags, uint lodGroupAndMask, UnityEngine.Rendering.GPUDrivenMeshLodInfo meshLodInfo, int gameObjectLayer, int refCount)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x65D8E00", Offset = "0x65D7E00", VA = "0x65D8E00")]
	public void SetDefault(SharedInstanceHandle instance)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x65D9E70", Offset = "0x65D8E70", VA = "0x65D9E70")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
