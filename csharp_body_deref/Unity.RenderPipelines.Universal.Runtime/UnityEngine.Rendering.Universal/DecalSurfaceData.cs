// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalSurfaceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200016D")]
internal enum DecalSurfaceData
{
	[Token(Token = "0x4000858")]
	[Tooltip("Decals will affect only base color and emission.")]
	Albedo,
	[Token(Token = "0x4000859")]
	[Tooltip("Decals will affect only base color, normal and emission.")]
	AlbedoNormal,
	[Token(Token = "0x400085A")]
	[Tooltip("Decals will affect base color, normal, metallic, ambient occlusion, smoothness and emission.")]
	AlbedoNormalMAOS
}
