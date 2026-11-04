// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200057A")]
internal class MeshHandle : LinkedPoolItem<MeshHandle>
{
	[Token(Token = "0x40012B1")]
	[FieldOffset(Offset = "0x18")]
	internal Alloc allocVerts;

	[Token(Token = "0x40012B2")]
	[FieldOffset(Offset = "0x30")]
	internal Alloc allocIndices;

	[Token(Token = "0x40012B3")]
	[FieldOffset(Offset = "0x48")]
	internal uint triangleCount;

	[Token(Token = "0x40012B4")]
	[FieldOffset(Offset = "0x50")]
	internal Page allocPage;

	[Token(Token = "0x40012B5")]
	[FieldOffset(Offset = "0x58")]
	internal uint allocTime;

	[Token(Token = "0x40012B6")]
	[FieldOffset(Offset = "0x5C")]
	internal uint updateAllocID;

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x3182C90", Offset = "0x3181290", VA = "0x183182C90")]
	public MeshHandle()
	{
	}
}
