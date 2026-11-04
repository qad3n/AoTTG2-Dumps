// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InspectorSettingMetadata
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InspectorSettingMetadata.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000CA")]
internal class InspectorSettingMetadata
{
	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x10")]
	public string Tooltip;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x18")]
	public List<string> Dropbox;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x20")]
	public string Header;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x28")]
	public string GroupId;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x30")]
	public string GroupHeader;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x38")]
	public bool HasClamp;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x3C")]
	public float Min;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x40")]
	public float Max;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x44")]
	public bool HasSlider;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x48")]
	public float SliderInterval;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x4C")]
	public bool MapObject;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x4D")]
	public bool MapObjectList;

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x1F1DBC0", Offset = "0x1F1C1C0", VA = "0x181F1DBC0")]
	public InspectorSettingMetadata()
	{
	}
}
