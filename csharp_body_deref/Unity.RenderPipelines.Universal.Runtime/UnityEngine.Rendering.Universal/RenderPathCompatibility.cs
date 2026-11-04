// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderPathCompatibility
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F2")]
[Flags]
public enum RenderPathCompatibility
{
	[Token(Token = "0x4000BC3")]
	Forward = 1,
	[Token(Token = "0x4000BC4")]
	Deferred = 2,
	[Token(Token = "0x4000BC5")]
	ForwardPlus = 4,
	[Token(Token = "0x4000BC6")]
	DeferredPlus = 8,
	[Token(Token = "0x4000BC7")]
	All = Forward | Deferred | ForwardPlus | DeferredPlus
}
