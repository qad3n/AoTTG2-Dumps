// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryType
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000595")]
internal enum EntryType : ushort
{
	[Token(Token = "0x40013A9")]
	DrawSolidMesh,
	[Token(Token = "0x40013AA")]
	DrawTexturedMesh,
	[Token(Token = "0x40013AB")]
	DrawDynamicTexturedMesh,
	[Token(Token = "0x40013AC")]
	DrawTextMesh,
	[Token(Token = "0x40013AD")]
	DrawGradients,
	[Token(Token = "0x40013AE")]
	DrawImmediate,
	[Token(Token = "0x40013AF")]
	DrawImmediateCull,
	[Token(Token = "0x40013B0")]
	DrawChildren,
	[Token(Token = "0x40013B1")]
	BeginStencilMask,
	[Token(Token = "0x40013B2")]
	EndStencilMask,
	[Token(Token = "0x40013B3")]
	PopStencilMask,
	[Token(Token = "0x40013B4")]
	PushClippingRect,
	[Token(Token = "0x40013B5")]
	PopClippingRect,
	[Token(Token = "0x40013B6")]
	PushScissors,
	[Token(Token = "0x40013B7")]
	PopScissors,
	[Token(Token = "0x40013B8")]
	PushGroupMatrix,
	[Token(Token = "0x40013B9")]
	PopGroupMatrix,
	[Token(Token = "0x40013BA")]
	PushDefaultMaterial,
	[Token(Token = "0x40013BB")]
	PopDefaultMaterial,
	[Token(Token = "0x40013BC")]
	CutRenderChain,
	[Token(Token = "0x40013BD")]
	DedicatedPlaceholder
}
