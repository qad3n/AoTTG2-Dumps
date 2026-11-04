// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalTechniqueOption
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200016F")]
internal enum DecalTechniqueOption
{
	[Token(Token = "0x4000861")]
	[Tooltip("Automatically selects technique based on build platform.")]
	Automatic,
	[Token(Token = "0x4000862")]
	[Tooltip("Renders decals into DBuffer and then applied during opaque rendering. Requires DepthNormal prepass which makes not viable solution for the tile based renderers common on mobile.")]
	[InspectorName("DBuffer")]
	DBuffer,
	[Token(Token = "0x4000863")]
	[Tooltip("Renders decals after opaque objects with normal reconstructed from depth. The decals are simply rendered as mesh on top of opaque ones, as result does not support blending per single surface data (etc. normal blending only).")]
	ScreenSpace
}
