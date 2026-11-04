// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderVariantLogLevel
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200009E")]
[Obsolete("This is obsolete, UnityEngine.Rendering.ShaderVariantLogLevel instead. #from(2022.2) #breakingFrom(2023.1)", true)]
public enum ShaderVariantLogLevel
{
	[Token(Token = "0x4000313")]
	Disabled,
	[Token(Token = "0x4000314")]
	[InspectorName("Only URP Shaders")]
	OnlyUniversalRPShaders,
	[Token(Token = "0x4000315")]
	[InspectorName("All Shaders")]
	AllShaders
}
