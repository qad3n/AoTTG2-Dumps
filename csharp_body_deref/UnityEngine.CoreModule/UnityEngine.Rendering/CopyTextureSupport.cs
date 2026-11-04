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

[Token(Token = "0x200033D")]
[Flags]
public enum CopyTextureSupport
{
	[Token(Token = "0x4000928")]
	None = 0,
	[Token(Token = "0x4000929")]
	Basic = 1,
	[Token(Token = "0x400092A")]
	Copy3D = 2,
	[Token(Token = "0x400092B")]
	DifferentTypes = 4,
	[Token(Token = "0x400092C")]
	TextureToRT = 8,
	[Token(Token = "0x400092D")]
	RTToTexture = 0x10
}
