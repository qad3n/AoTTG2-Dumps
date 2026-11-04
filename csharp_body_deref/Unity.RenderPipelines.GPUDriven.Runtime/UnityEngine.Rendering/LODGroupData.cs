// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B4")]
internal struct LODGroupData
{
	[Token(Token = "0x400036B")]
	public const int k_MaxLODLevelsCount = 8;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x0")]
	public bool valid;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x4")]
	public int lodCount;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x8")]
	public int rendererCount;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0xC")]
	public unsafe fixed float screenRelativeTransitionHeights[8];

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x2C")]
	public unsafe fixed float fadeTransitionWidth[8];
}
