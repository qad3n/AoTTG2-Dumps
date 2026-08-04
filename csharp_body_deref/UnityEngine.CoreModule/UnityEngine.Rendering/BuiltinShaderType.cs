// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BuiltinShaderType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002BF")]
public enum BuiltinShaderType
{
	[Token(Token = "0x40007C7")]
	DeferredShading,
	[Token(Token = "0x40007C8")]
	DeferredReflections,
	[Token(Token = "0x40007C9")]
	[Obsolete("LegacyDeferredLighting has been removed.", false)]
	LegacyDeferredLighting,
	[Token(Token = "0x40007CA")]
	ScreenSpaceShadows,
	[Token(Token = "0x40007CB")]
	DepthNormals,
	[Token(Token = "0x40007CC")]
	MotionVectors,
	[Token(Token = "0x40007CD")]
	LightHalo,
	[Token(Token = "0x40007CE")]
	LensFlare
}
