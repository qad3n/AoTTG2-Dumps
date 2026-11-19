// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SilhouettePlaneCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CD")]
internal struct SilhouettePlaneCache : IDisposable
{
	[Token(Token = "0x20000CE")]
	private struct Slot
	{
		[Token(Token = "0x40003BC")]
		[FieldOffset(Offset = "0x0")]
		public bool isActive;

		[Token(Token = "0x40003BD")]
		[FieldOffset(Offset = "0x4")]
		public int viewInstanceID;

		[Token(Token = "0x40003BE")]
		[FieldOffset(Offset = "0x8")]
		public int planeCount;

		[Token(Token = "0x40003BF")]
		[FieldOffset(Offset = "0xC")]
		public int lastUsedFrameIndex;

		[Token(Token = "0x6000359")]
		[Address(RVA = "0x65EADF0", Offset = "0x65E9DF0", VA = "0x65EADF0")]
		public Slot(int viewInstanceID, int planeCount, int frameIndex)
		{
		}
	}

	[Token(Token = "0x40003B7")]
	private const int kMaxSilhouettePlanes = 6;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x0")]
	private NativeParallelHashMap<int, int> m_SubviewIDToIndexMap;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<int> m_SlotFreeList;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x18")]
	private NativeList<Slot> m_Slots;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x20")]
	private NativeList<Plane> m_PlaneStorage;

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x65EA830", Offset = "0x65E9830", VA = "0x65EA830")]
	public void Init()
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x65EA960", Offset = "0x65E9960", VA = "0x65EA960", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x65EAA00", Offset = "0x65E9A00", VA = "0x65EAA00")]
	public void Update(int viewInstanceID, NativeArray<Plane> planes, int frameIndex)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x65EAE00", Offset = "0x65E9E00", VA = "0x65EAE00")]
	public void FreeUnusedSlots(int frameIndex, int maximumAge)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x65EAFA0", Offset = "0x65E9FA0", VA = "0x65EAFA0")]
	public NativeArray<Plane> GetSubArray(int viewInstanceID)
	{
		return default(NativeArray<Plane>);
	}
}
