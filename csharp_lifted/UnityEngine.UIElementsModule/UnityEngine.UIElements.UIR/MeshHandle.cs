// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D4")]
internal class MeshHandle : LinkedPoolItem<MeshHandle>
{
	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0x18")]
	internal Alloc allocVerts;

	[Token(Token = "0x400155B")]
	[FieldOffset(Offset = "0x30")]
	internal Alloc allocIndices;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x48")]
	internal uint triangleCount;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0x50")]
	internal Page allocPage;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0x58")]
	internal uint allocTime;

	[Token(Token = "0x400155F")]
	[FieldOffset(Offset = "0x5C")]
	internal uint updateAllocID;

	[Token(Token = "0x6002B64")]
	[Address(RVA = "0x6BB1340", Offset = "0x6BB0340", VA = "0x6BB1340")]
	public MeshHandle()
	{
	}
}
