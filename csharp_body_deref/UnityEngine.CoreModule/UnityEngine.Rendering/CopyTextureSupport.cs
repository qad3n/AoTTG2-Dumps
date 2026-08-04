// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CopyTextureSupport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002C2")]
[Flags]
public enum CopyTextureSupport
{
	[Token(Token = "0x40007DD")]
	None = 0,
	[Token(Token = "0x40007DE")]
	Basic = 1,
	[Token(Token = "0x40007DF")]
	Copy3D = 2,
	[Token(Token = "0x40007E0")]
	DifferentTypes = 4,
	[Token(Token = "0x40007E1")]
	TextureToRT = 8,
	[Token(Token = "0x40007E2")]
	RTToTexture = 0x10
}
