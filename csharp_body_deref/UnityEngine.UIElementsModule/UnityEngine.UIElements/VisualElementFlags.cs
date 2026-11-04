// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFlags
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000532")]
[Flags]
internal enum VisualElementFlags
{
	[Token(Token = "0x400119D")]
	WorldTransformDirty = 1,
	[Token(Token = "0x400119E")]
	WorldTransformInverseDirty = 2,
	[Token(Token = "0x400119F")]
	WorldClipDirty = 4,
	[Token(Token = "0x40011A0")]
	BoundingBoxDirty = 8,
	[Token(Token = "0x40011A1")]
	WorldBoundingBoxDirty = 0x10,
	[Token(Token = "0x40011A2")]
	EventInterestParentCategoriesDirty = 0x20,
	[Token(Token = "0x40011A3")]
	LayoutManual = 0x40,
	[Token(Token = "0x40011A4")]
	CompositeRoot = 0x80,
	[Token(Token = "0x40011A5")]
	RequireMeasureFunction = 0x100,
	[Token(Token = "0x40011A6")]
	EnableViewDataPersistence = 0x200,
	[Token(Token = "0x40011A7")]
	DisableClipping = 0x400,
	[Token(Token = "0x40011A8")]
	NeedsAttachToPanelEvent = 0x800,
	[Token(Token = "0x40011A9")]
	HierarchyDisplayed = 0x1000,
	[Token(Token = "0x40011AA")]
	StyleInitialized = 0x2000,
	[Token(Token = "0x40011AB")]
	DisableRendering = 0x4000,
	[Token(Token = "0x40011AC")]
	Needs3DBounds = 0x8000,
	[Token(Token = "0x40011AD")]
	LocalBounds3DDirty = 0x10000,
	[Token(Token = "0x40011AE")]
	LocalBoundsWithoutNested3DDirty = 0x20000,
	[Token(Token = "0x40011AF")]
	DetachedDataSource = 0x40000,
	[Token(Token = "0x40011B0")]
	PointerCapture = 0x80000,
	[Token(Token = "0x40011B1")]
	IsWorldSpaceRootUIDocument = 0x100000,
	[Token(Token = "0x40011B2")]
	ReceivesHierarchyGeometryChangedEvents = 0x200000,
	[Token(Token = "0x40011B3")]
	BoundingBoxDirtiedSinceLastLayoutPass = 0x400000,
	[Token(Token = "0x40011B4")]
	WorldTransformSingular = 0x800000,
	[Token(Token = "0x40011B5")]
	Init = WorldTransformDirty | WorldTransformInverseDirty | WorldClipDirty | BoundingBoxDirty | WorldBoundingBoxDirty | EventInterestParentCategoriesDirty | LocalBounds3DDirty | LocalBoundsWithoutNested3DDirty | DetachedDataSource
}
