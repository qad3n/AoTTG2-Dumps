using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200045C")]
[Flags]
internal enum VisualElementFlags
{
	[Token(Token = "0x4000D0F")]
	WorldTransformDirty = 1,
	[Token(Token = "0x4000D10")]
	WorldTransformInverseDirty = 2,
	[Token(Token = "0x4000D11")]
	WorldClipDirty = 4,
	[Token(Token = "0x4000D12")]
	BoundingBoxDirty = 8,
	[Token(Token = "0x4000D13")]
	WorldBoundingBoxDirty = 0x10,
	[Token(Token = "0x4000D14")]
	EventCallbackParentCategoriesDirty = 0x20,
	[Token(Token = "0x4000D15")]
	LayoutManual = 0x40,
	[Token(Token = "0x4000D16")]
	CompositeRoot = 0x80,
	[Token(Token = "0x4000D17")]
	RequireMeasureFunction = 0x100,
	[Token(Token = "0x4000D18")]
	EnableViewDataPersistence = 0x200,
	[Token(Token = "0x4000D19")]
	DisableClipping = 0x400,
	[Token(Token = "0x4000D1A")]
	NeedsAttachToPanelEvent = 0x800,
	[Token(Token = "0x4000D1B")]
	HierarchyDisplayed = 0x1000,
	[Token(Token = "0x4000D1C")]
	StyleInitialized = 0x2000,
	[Token(Token = "0x4000D1D")]
	DisableRendering = 0x4000,
	[Token(Token = "0x4000D1E")]
	Init = 0x3F
}
