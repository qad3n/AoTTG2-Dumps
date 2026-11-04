// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererGroupCreateInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000383")]
public struct BatchRendererGroupCreateInfo
{
	[Token(Token = "0x4000A96")]
	[FieldOffset(Offset = "0x0")]
	public BatchRendererGroup.OnPerformCulling cullingCallback;

	[Token(Token = "0x4000A97")]
	[FieldOffset(Offset = "0x8")]
	public BatchRendererGroup.OnFinishedCulling finishedCullingCallback;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr userContext;
}
