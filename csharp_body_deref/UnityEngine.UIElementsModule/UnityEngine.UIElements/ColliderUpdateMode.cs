// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColliderUpdateMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000274")]
internal enum ColliderUpdateMode
{
	[Token(Token = "0x400091A")]
	[InspectorName("Match 3-D bounding box")]
	MatchBoundingBox,
	[Token(Token = "0x400091B")]
	[InspectorName("Keep existing colliders (if any)")]
	Keep,
	[Token(Token = "0x400091C")]
	[InspectorName("Match 2-D document rect")]
	MatchDocumentRect
}
