// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200026A")]
[Flags]
internal enum RenderGraphState
{
	[Token(Token = "0x4000AF6")]
	Idle = 0,
	[Token(Token = "0x4000AF7")]
	RecordingGraph = 1,
	[Token(Token = "0x4000AF8")]
	RecordingPass = 2,
	[Token(Token = "0x4000AF9")]
	Executing = 4,
	[Token(Token = "0x4000AFA")]
	Active = RecordingGraph | RecordingPass | Executing
}
