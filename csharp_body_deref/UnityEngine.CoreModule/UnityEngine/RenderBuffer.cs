// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000AA")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public struct RenderBuffer
{
	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x0")]
	internal int m_RenderTextureInstanceID;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x8")]
	internal IntPtr m_BufferPtr;
}
