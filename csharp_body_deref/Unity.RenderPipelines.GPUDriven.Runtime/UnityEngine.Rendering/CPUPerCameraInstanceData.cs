// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUPerCameraInstanceData
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x65D7B20", Offset = "0x65D6B20", VA = "0x65D7B20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600024E")]
		[Address(RVA = "0x65D7080", Offset = "0x65D6080", VA = "0x65D7080")]
		public PerCameraInstanceDataArrays(int initCapacity)
		{
		}

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x65D6E00", Offset = "0x65D5E00", VA = "0x65D6E00", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x65D73B0", Offset = "0x65D63B0", VA = "0x65D73B0")]
		internal void Remove(int index, int lastIndex)
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x65D7890", Offset = "0x65D6890", VA = "0x65D7890")]
		internal void Grow(int previousCapacity, int newCapacity)
		{
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x65D7AE0", Offset = "0x65D6AE0", VA = "0x65D7AE0")]
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
		[Address(RVA = "0x65D6AB0", Offset = "0x65D5AB0", VA = "0x65D6AB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x65D6AC0", Offset = "0x65D5AC0", VA = "0x65D6AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int instancesCapacity
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x65D6AD0", Offset = "0x65D5AD0", VA = "0x65D6AD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x65D6AE0", Offset = "0x65D5AE0", VA = "0x65D6AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int cameraCount
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x65D6AF0", Offset = "0x65D5AF0", VA = "0x65D6AF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x65D6B30", Offset = "0x65D5B30", VA = "0x65D6B30")]
	public void Initialize(int initCapacity)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x65D6BE0", Offset = "0x65D5BE0", VA = "0x65D6BE0")]
	public void DeallocateCameras(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x65D6E50", Offset = "0x65D5E50", VA = "0x65D6E50")]
	public void AllocateCameras(NativeArray<EntityId> cameraIDs)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x65D7170", Offset = "0x65D6170", VA = "0x65D7170")]
	public void Remove(int index)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x65D7410", Offset = "0x65D6410", VA = "0x65D7410")]
	public void IncreaseInstanceCount()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x65D7420", Offset = "0x65D6420", VA = "0x65D7420", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x65D7670", Offset = "0x65D6670", VA = "0x65D7670")]
	internal void Grow(int newCapacity)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x65D78E0", Offset = "0x65D68E0", VA = "0x65D78E0")]
	public void SetDefault(int index)
	{
	}
}
