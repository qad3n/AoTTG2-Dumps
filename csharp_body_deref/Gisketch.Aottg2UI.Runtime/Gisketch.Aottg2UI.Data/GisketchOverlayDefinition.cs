// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchOverlayDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchOverlayDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000065")]
public sealed class GisketchOverlayDefinition
{
	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x20")]
	public bool modal;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x21")]
	public bool dismissOnBackdrop;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x22")]
	public bool guardUnsavedChanges;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x24")]
	public GisketchOverlayLifecycle lifecycle;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x28")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x30")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x5254E50", Offset = "0x5253E50", VA = "0x5254E50")]
	public bool UsesCachedResetLifecycle()
	{
		return default(bool);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x5256120", Offset = "0x5255120", VA = "0x5256120")]
	public GisketchOverlayDefinition()
	{
	}
}
