// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchOverlayDefinition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchOverlayDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200005F")]
public sealed class GisketchOverlayDefinition
{
	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x20")]
	public bool modal;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x21")]
	public bool dismissOnBackdrop;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x22")]
	public bool guardUnsavedChanges;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x24")]
	public GisketchOverlayLifecycle lifecycle;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x28")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x30")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x18D09E0", Offset = "0x18CEFE0", VA = "0x1818D09E0")]
	public bool UsesCachedResetLifecycle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x18D09F0", Offset = "0x18CEFF0", VA = "0x1818D09F0")]
	public GisketchOverlayDefinition()
	{
	}
}
