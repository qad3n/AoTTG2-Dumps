using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000CE")]
public enum RenderingPath
{
	[Token(Token = "0x400020E")]
	UsePlayerSettings = -1,
	[Token(Token = "0x400020F")]
	VertexLit,
	[Token(Token = "0x4000210")]
	Forward,
	[Token(Token = "0x4000211")]
	[Obsolete("DeferredLighting has been removed. Use DeferredShading, Forward or HDRP/URP instead.", false)]
	DeferredLighting,
	[Token(Token = "0x4000212")]
	DeferredShading
}
