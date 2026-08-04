// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.ChainBuilderStats
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004B4")]
internal struct ChainBuilderStats
{
	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x0")]
	public uint elementsAdded;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x4")]
	public uint elementsRemoved;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x8")]
	public uint recursiveClipUpdates;

	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0xC")]
	public uint recursiveClipUpdatesExpanded;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x10")]
	public uint nonRecursiveClipUpdates;

	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x14")]
	public uint recursiveTransformUpdates;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x18")]
	public uint recursiveTransformUpdatesExpanded;

	[Token(Token = "0x4000ECB")]
	[FieldOffset(Offset = "0x1C")]
	public uint recursiveOpacityUpdates;

	[Token(Token = "0x4000ECC")]
	[FieldOffset(Offset = "0x20")]
	public uint recursiveOpacityUpdatesExpanded;

	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x24")]
	public uint opacityIdUpdates;

	[Token(Token = "0x4000ECE")]
	[FieldOffset(Offset = "0x28")]
	public uint colorUpdates;

	[Token(Token = "0x4000ECF")]
	[FieldOffset(Offset = "0x2C")]
	public uint colorUpdatesExpanded;

	[Token(Token = "0x4000ED0")]
	[FieldOffset(Offset = "0x30")]
	public uint recursiveVisualUpdates;

	[Token(Token = "0x4000ED1")]
	[FieldOffset(Offset = "0x34")]
	public uint recursiveVisualUpdatesExpanded;

	[Token(Token = "0x4000ED2")]
	[FieldOffset(Offset = "0x38")]
	public uint nonRecursiveVisualUpdates;

	[Token(Token = "0x4000ED3")]
	[FieldOffset(Offset = "0x3C")]
	public uint dirtyProcessed;

	[Token(Token = "0x4000ED4")]
	[FieldOffset(Offset = "0x40")]
	public uint nudgeTransformed;

	[Token(Token = "0x4000ED5")]
	[FieldOffset(Offset = "0x44")]
	public uint boneTransformed;

	[Token(Token = "0x4000ED6")]
	[FieldOffset(Offset = "0x48")]
	public uint skipTransformed;

	[Token(Token = "0x4000ED7")]
	[FieldOffset(Offset = "0x4C")]
	public uint visualUpdateTransformed;

	[Token(Token = "0x4000ED8")]
	[FieldOffset(Offset = "0x50")]
	public uint updatedMeshAllocations;

	[Token(Token = "0x4000ED9")]
	[FieldOffset(Offset = "0x54")]
	public uint newMeshAllocations;

	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x58")]
	public uint groupTransformElementsChanged;

	[Token(Token = "0x4000EDB")]
	[FieldOffset(Offset = "0x5C")]
	public uint immedateRenderersActive;
}
