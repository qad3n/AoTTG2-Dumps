// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4FABB50", Offset = "0x4FABB50", VA = "0x4FABB50")]
	public MeshHandle()
	{
	}
}
