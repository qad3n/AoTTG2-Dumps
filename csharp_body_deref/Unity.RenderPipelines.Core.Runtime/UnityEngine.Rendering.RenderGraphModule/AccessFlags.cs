// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.AccessFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000268")]
[Flags]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public enum AccessFlags
{
	[Token(Token = "0x4000AEA")]
	None = 0,
	[Token(Token = "0x4000AEB")]
	Read = 1,
	[Token(Token = "0x4000AEC")]
	Write = 2,
	[Token(Token = "0x4000AED")]
	Discard = 4,
	[Token(Token = "0x4000AEE")]
	WriteAll = Write | Discard,
	[Token(Token = "0x4000AEF")]
	ReadWrite = Read | Write
}
