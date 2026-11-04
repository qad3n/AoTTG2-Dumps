// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupCullingData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B7")]
internal struct LODGroupCullingData
{
	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x0")]
	public float3 worldSpaceReferencePoint;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0xC")]
	public int lodCount;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x10")]
	public unsafe fixed float sqrDistances[8];

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x30")]
	public unsafe fixed float transitionDistances[8];

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x50")]
	public float worldSpaceSize;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x54")]
	public unsafe fixed bool percentageFlags[8];

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x5C")]
	public byte forceLODMask;
}
