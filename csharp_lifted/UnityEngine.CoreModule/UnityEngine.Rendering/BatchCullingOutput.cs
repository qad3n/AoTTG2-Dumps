// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchCullingOutput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003BD")]
public struct BatchCullingOutput
{
	[Token(Token = "0x4000C05")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<BatchCullingOutputDrawCommands> drawCommands;

	[Token(Token = "0x4000C06")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<IntPtr> customCullingResult;
}
