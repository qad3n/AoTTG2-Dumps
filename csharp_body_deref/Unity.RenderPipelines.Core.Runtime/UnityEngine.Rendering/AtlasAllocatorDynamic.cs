using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200018F")]
internal class AtlasAllocatorDynamic
{
	[Token(Token = "0x2000190")]
	private class AtlasNodePool
	{
		[Token(Token = "0x40006E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal AtlasNode[] m_Nodes;

		[Token(Token = "0x40006E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private short m_Next;

		[Token(Token = "0x40006E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
		private short m_FreelistHead;

		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x48C5B00", Offset = "0x48C5B00", VA = "0x48C5B00")]
		public AtlasNodePool(short capacity)
		{
		}

		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x48C6930", Offset = "0x48C6930", VA = "0x48C6930")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000B7C")]
		[Address(RVA = "0x48C63F0", Offset = "0x48C63F0", VA = "0x48C63F0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000B7D")]
		[Address(RVA = "0x48C5B60", Offset = "0x48C5B60", VA = "0x48C5B60")]
		public short AtlasNodeCreate(short parent)
		{
			return default(short);
		}

		[Token(Token = "0x6000B7E")]
		[Address(RVA = "0x48C69A0", Offset = "0x48C69A0", VA = "0x48C69A0")]
		public void AtlasNodeFree(short index)
		{
		}
	}

	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000191")]
	private struct AtlasNode
	{
		[Token(Token = "0x2000192")]
		private enum AtlasNodeFlags : uint
		{
			[Token(Token = "0x40006F0")]
			IsOccupied = 1u
		}

		[Token(Token = "0x40006E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public short m_Self;

		[Token(Token = "0x40006E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		public short m_Parent;

		[Token(Token = "0x40006EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public short m_LeftChild;

		[Token(Token = "0x40006EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6")]
		public short m_RightChild;

		[Token(Token = "0x40006EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public short m_FreelistNext;

		[Token(Token = "0x40006ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
		public ushort m_Flags;

		[Token(Token = "0x40006EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Vector4 m_Rect;

		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0x48C6950", Offset = "0x48C6950", VA = "0x48C6950")]
		public AtlasNode(short self, short parent)
		{
		}

		[Token(Token = "0x6000B80")]
		[Address(RVA = "0x48C6920", Offset = "0x48C6920", VA = "0x48C6920")]
		public bool IsOccupied()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x48C69E0", Offset = "0x48C69E0", VA = "0x48C69E0")]
		public void SetIsOccupied()
		{
		}

		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x48C69F0", Offset = "0x48C69F0", VA = "0x48C69F0")]
		public void ClearIsOccupied()
		{
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x48C6A00", Offset = "0x48C6A00", VA = "0x48C6A00")]
		public bool IsLeafNode()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x48C5DD0", Offset = "0x48C5DD0", VA = "0x48C5DD0")]
		public short Allocate(AtlasNodePool pool, int width, int height)
		{
			return default(short);
		}

		[Token(Token = "0x6000B85")]
		[Address(RVA = "0x48C6A10", Offset = "0x48C6A10", VA = "0x48C6A10")]
		public void ReleaseChildren(AtlasNodePool pool)
		{
		}

		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x48C6260", Offset = "0x48C6260", VA = "0x48C6260")]
		public void ReleaseAndMerge(AtlasNodePool pool)
		{
		}

		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x48C6B00", Offset = "0x48C6B00", VA = "0x48C6B00")]
		public bool IsMergeNeeded(AtlasNodePool pool)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40006E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_Width;

	[Token(Token = "0x40006E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int m_Height;

	[Token(Token = "0x40006E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AtlasNodePool m_Pool;

	[Token(Token = "0x40006E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private short m_Root;

	[Token(Token = "0x40006E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<int, short> m_NodeFromID;

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x48C5980", Offset = "0x48C5980", VA = "0x48C5980")]
	public AtlasAllocatorDynamic(int width, int height, int capacityAllocations)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x48C5CC0", Offset = "0x48C5CC0", VA = "0x48C5CC0")]
	public bool Allocate(out Vector4 result, int key, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x48C61A0", Offset = "0x48C61A0", VA = "0x48C61A0")]
	public void Release(int key)
	{
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x48C6340", Offset = "0x48C6340", VA = "0x48C6340")]
	public void Release()
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x48C6400", Offset = "0x48C6400", VA = "0x48C6400")]
	public string DebugStringFromRoot(int depthMax = -1)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x48C6460", Offset = "0x48C6460", VA = "0x48C6460")]
	private void DebugStringFromNode(ref string res, short n, int depthCurrent = 0, int depthMax = -1)
	{
	}
}
