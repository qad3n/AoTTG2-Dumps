// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUPerCameraInstanceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000078")]
internal struct CPUPerCameraInstanceData : IDisposable
{
	[Token(Token = "0x2000079")]
	internal struct PerCameraInstanceDataArrays : IDisposable
	{
		[Token(Token = "0x400022D")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeList<byte> meshLods;

		[Token(Token = "0x400022E")]
		[FieldOffset(Offset = "0x18")]
		internal UnsafeList<byte> crossFades;

		[Token(Token = "0x17000042")]
		public bool IsCreated
		{
			[Token(Token = "0x600024D")]
			[Address(RVA = "0x2BE8050", Offset = "0x2BE6650", VA = "0x182BE8050")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024E")]
		[Address(RVA = "0x2BE7F50", Offset = "0x2BE6550", VA = "0x182BE7F50")]
		public PerCameraInstanceDataArrays(int initCapacity)
		{
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x2BE7DE0", Offset = "0x2BE63E0", VA = "0x182BE7DE0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x2BE7E90", Offset = "0x2BE6490", VA = "0x182BE7E90")]
		internal void Remove(int index, int lastIndex)
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x2BE7E30", Offset = "0x2BE6430", VA = "0x182BE7E30")]
		internal void Grow(int previousCapacity, int newCapacity)
		{
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x2BE7F00", Offset = "0x2BE6500", VA = "0x182BE7F00")]
		internal void SetDefault(int index)
		{
		}
	}

	[Token(Token = "0x400022A")]
	public const byte k_InvalidByteData = 255;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x0")]
	public NativeParallelHashMap<int, PerCameraInstanceDataArrays> perCameraData;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<int> m_StructData;

	[Token(Token = "0x1700003F")]
	public int instancesLength
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x1826CE0", Offset = "0x18252E0", VA = "0x181826CE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x2BD7BA0", Offset = "0x2BD61A0", VA = "0x182BD7BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x2BD7B80", Offset = "0x2BD6180", VA = "0x182BD7B80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x2BD7B90", Offset = "0x2BD6190", VA = "0x182BD7B90")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int cameraCount
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x2BD7B40", Offset = "0x2BD6140", VA = "0x182BD7B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x2BD7660", Offset = "0x2BD5C60", VA = "0x182BD7660")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x2BD7030", Offset = "0x2BD5630", VA = "0x182BD7030")]
	public void DeallocateCameras(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2BD6E60", Offset = "0x2BD5460", VA = "0x182BD6E60")]
	public void AllocateCameras(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x2BD7720", Offset = "0x2BD5D20", VA = "0x182BD7720")]
	public void Remove(int index)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x2BD7650", Offset = "0x2BD5C50", VA = "0x182BD7650")]
	public void IncreaseInstanceCount()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x2BD71F0", Offset = "0x2BD57F0", VA = "0x182BD71F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x2BD7430", Offset = "0x2BD5A30", VA = "0x182BD7430")]
	internal void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x2BD7950", Offset = "0x2BD5F50", VA = "0x182BD7950")]
	public void SetDefault(int index)
	{
	}
}
