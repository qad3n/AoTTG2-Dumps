// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AtlasAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200018A")]
internal class AtlasAllocator
{
	[Token(Token = "0x200018B")]
	private class AtlasNode
	{
		[Token(Token = "0x40006C6")]
		[FieldOffset(Offset = "0x10")]
		public AtlasNode m_RightChild;

		[Token(Token = "0x40006C7")]
		[FieldOffset(Offset = "0x18")]
		public AtlasNode m_BottomChild;

		[Token(Token = "0x40006C8")]
		[FieldOffset(Offset = "0x20")]
		public Vector4 m_Rect;

		[Token(Token = "0x6000B4D")]
		[Address(RVA = "0x4BE7190", Offset = "0x4BE7190", VA = "0x4BE7190")]
		public AtlasNode Allocate(ref ObjectPool<AtlasNode> pool, int width, int height, bool powerOfTwoPadding)
		{
			return null;
		}

		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x4BE7430", Offset = "0x4BE7430", VA = "0x4BE7430")]
		public void Release(ref ObjectPool<AtlasNode> pool)
		{
		}

		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x4BE7110", Offset = "0x4BE7110", VA = "0x4BE7110")]
		public AtlasNode()
		{
		}
	}

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x10")]
	private AtlasNode m_Root;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x18")]
	private int m_Width;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Height;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x20")]
	private bool powerOfTwoPadding;

	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x28")]
	private ObjectPool<AtlasNode> m_NodePool;

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4BE6E70", Offset = "0x4BE6E70", VA = "0x4BE6E70")]
	public AtlasAllocator(int width, int height, bool potPadding)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4BE7120", Offset = "0x4BE7120", VA = "0x4BE7120")]
	public bool Allocate(ref Vector4 result, int width, int height)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4BE73E0", Offset = "0x4BE73E0", VA = "0x4BE73E0")]
	public void Reset()
	{
	}
}
