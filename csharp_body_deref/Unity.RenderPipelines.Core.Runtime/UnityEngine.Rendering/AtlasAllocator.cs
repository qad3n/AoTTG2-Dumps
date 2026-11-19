// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AtlasAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A6")]
internal class AtlasAllocator
{
	[Token(Token = "0x20001A7")]
	private class AtlasNode
	{
		[Token(Token = "0x4000826")]
		[FieldOffset(Offset = "0x10")]
		public AtlasNode m_RightChild;

		[Token(Token = "0x4000827")]
		[FieldOffset(Offset = "0x18")]
		public AtlasNode m_BottomChild;

		[Token(Token = "0x4000828")]
		[FieldOffset(Offset = "0x20")]
		public Vector4 m_Rect;

		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x6531B00", Offset = "0x6530B00", VA = "0x6531B00")]
		public AtlasNode Allocate(ref ObjectPool<AtlasNode> pool, int width, int height, bool powerOfTwoPadding)
		{
			return null;
		}

		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x6531DC0", Offset = "0x6530DC0", VA = "0x6531DC0")]
		public void Release(ref ObjectPool<AtlasNode> pool)
		{
		}

		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x6531A70", Offset = "0x6530A70", VA = "0x6531A70")]
		public AtlasNode()
		{
		}
	}

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x10")]
	private AtlasNode m_Root;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x18")]
	private int m_Width;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Height;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x20")]
	private bool powerOfTwoPadding;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x28")]
	private ObjectPool<AtlasNode> m_NodePool;

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x65317E0", Offset = "0x65307E0", VA = "0x65317E0")]
	public AtlasAllocator(int width, int height, bool potPadding)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x6531A80", Offset = "0x6530A80", VA = "0x6531A80")]
	public bool Allocate(ref Vector4 result, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x6531D80", Offset = "0x6530D80", VA = "0x6531D80")]
	public void Reset()
	{
	}
}
