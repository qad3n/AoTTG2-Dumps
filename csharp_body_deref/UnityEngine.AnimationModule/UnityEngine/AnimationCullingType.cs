// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationCullingType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000006")]
public enum AnimationCullingType
{
	[Token(Token = "0x4000008")]
	AlwaysAnimate,
	[Token(Token = "0x4000009")]
	BasedOnRenderers,
	[Token(Token = "0x400000A")]
	[Obsolete("Enum member AnimatorCullingMode.BasedOnClipBounds has been deprecated. Use AnimationCullingType.AlwaysAnimate or AnimationCullingType.BasedOnRenderers instead")]
	BasedOnClipBounds,
	[Token(Token = "0x400000B")]
	[Obsolete("Enum member AnimatorCullingMode.BasedOnUserBounds has been deprecated. Use AnimationCullingType.AlwaysAnimate or AnimationCullingType.BasedOnRenderers instead")]
	BasedOnUserBounds
}
