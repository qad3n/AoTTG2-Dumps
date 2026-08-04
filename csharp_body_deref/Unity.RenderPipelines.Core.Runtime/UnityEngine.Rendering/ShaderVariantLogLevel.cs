// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderVariantLogLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000169")]
public enum ShaderVariantLogLevel
{
	[Token(Token = "0x4000651")]
	[Tooltip("No shader variants are logged")]
	Disabled,
	[Token(Token = "0x4000652")]
	[Tooltip("Only shaders that are compatible with SRPs (e.g., URP, HDRP) are logged")]
	OnlySRPShaders,
	[Token(Token = "0x4000653")]
	[Tooltip("All shader variants are logged")]
	AllShaders
}
