// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OpenGLESVersion
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000346")]
public enum OpenGLESVersion
{
	[Token(Token = "0x400095F")]
	None,
	[Token(Token = "0x4000960")]
	[Obsolete("OpenGL ES 2.0 is no longer supported in Unity 2023.1")]
	OpenGLES20,
	[Token(Token = "0x4000961")]
	OpenGLES30,
	[Token(Token = "0x4000962")]
	OpenGLES31,
	[Token(Token = "0x4000963")]
	OpenGLES31AEP,
	[Token(Token = "0x4000964")]
	OpenGLES32
}
