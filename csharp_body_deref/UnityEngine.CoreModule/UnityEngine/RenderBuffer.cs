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
