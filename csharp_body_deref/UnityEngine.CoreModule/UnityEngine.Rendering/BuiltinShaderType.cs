using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002BC")]
public enum BuiltinShaderType
{
	[Token(Token = "0x40007C7")]
	DeferredShading,
	[Token(Token = "0x40007C8")]
	DeferredReflections,
	[Token(Token = "0x40007C9")]
	[Obsolete("LegacyDeferredLighting has been removed.", false)]
	LegacyDeferredLighting,
	[Token(Token = "0x40007CA")]
	ScreenSpaceShadows,
	[Token(Token = "0x40007CB")]
	DepthNormals,
	[Token(Token = "0x40007CC")]
	MotionVectors,
	[Token(Token = "0x40007CD")]
	LightHalo,
	[Token(Token = "0x40007CE")]
	LensFlare
}
