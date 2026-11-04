// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.DepthAccess
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000267")]
[Flags]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public enum DepthAccess
{
	[Token(Token = "0x4000AE6")]
	Read = 1,
	[Token(Token = "0x4000AE7")]
	Write = 2,
	[Token(Token = "0x4000AE8")]
	ReadWrite = Read | Write
}
