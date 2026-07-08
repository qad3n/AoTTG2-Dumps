using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004DF")]
internal class MeshHandle : LinkedPoolItem<MeshHandle>
{
	[Token(Token = "0x4000FEB")]
	[FieldOffset(Offset = "0x18")]
	internal Alloc allocVerts;

	[Token(Token = "0x4000FEC")]
	[FieldOffset(Offset = "0x30")]
	internal Alloc allocIndices;

	[Token(Token = "0x4000FED")]
	[FieldOffset(Offset = "0x48")]
	internal uint triangleCount;

	[Token(Token = "0x4000FEE")]
	[FieldOffset(Offset = "0x50")]
	internal Page allocPage;

	[Token(Token = "0x4000FEF")]
	[FieldOffset(Offset = "0x58")]
	internal uint allocTime;

	[Token(Token = "0x4000FF0")]
	[FieldOffset(Offset = "0x5C")]
	internal uint updateAllocID;

	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x4C84220", Offset = "0x4C84220", VA = "0x4C84220")]
	public MeshHandle()
	{
	}
}
