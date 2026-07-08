using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200049D")]
internal enum EntryType
{
	[Token(Token = "0x4000E15")]
	DrawSolidMesh,
	[Token(Token = "0x4000E16")]
	DrawTexturedMesh,
	[Token(Token = "0x4000E17")]
	DrawTexturedMeshSkipAtlas,
	[Token(Token = "0x4000E18")]
	DrawSdfTextMesh,
	[Token(Token = "0x4000E19")]
	DrawGradients,
	[Token(Token = "0x4000E1A")]
	DrawImmediate,
	[Token(Token = "0x4000E1B")]
	DrawImmediateCull,
	[Token(Token = "0x4000E1C")]
	DrawChildren,
	[Token(Token = "0x4000E1D")]
	BeginStencilMask,
	[Token(Token = "0x4000E1E")]
	EndStencilMask,
	[Token(Token = "0x4000E1F")]
	PopStencilMask,
	[Token(Token = "0x4000E20")]
	PushClippingRect,
	[Token(Token = "0x4000E21")]
	PopClippingRect,
	[Token(Token = "0x4000E22")]
	PushScissors,
	[Token(Token = "0x4000E23")]
	PopScissors,
	[Token(Token = "0x4000E24")]
	PushGroupMatrix,
	[Token(Token = "0x4000E25")]
	PopGroupMatrix,
	[Token(Token = "0x4000E26")]
	PushRenderTexture,
	[Token(Token = "0x4000E27")]
	BlitAndPopRenderTexture,
	[Token(Token = "0x4000E28")]
	PushDefaultMaterial,
	[Token(Token = "0x4000E29")]
	PopDefaultMaterial,
	[Token(Token = "0x4000E2A")]
	DedicatedPlaceholder
}
