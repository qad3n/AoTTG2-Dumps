// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderDataFlags
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005B8")]
[Flags]
internal enum RenderDataFlags
{
	[Token(Token = "0x40014AB")]
	IsGroupTransform = 1,
	[Token(Token = "0x40014AC")]
	IsIgnoringDynamicColorHint = 2,
	[Token(Token = "0x40014AD")]
	HasExtraData = 4,
	[Token(Token = "0x40014AE")]
	HasExtraMeshes = 8,
	[Token(Token = "0x40014AF")]
	IsSubTreeQuad = 0x10,
	[Token(Token = "0x40014B0")]
	IsNestedRenderTreeRoot = 0x20,
	[Token(Token = "0x40014B1")]
	IsClippingRectDirty = 0x40
}
