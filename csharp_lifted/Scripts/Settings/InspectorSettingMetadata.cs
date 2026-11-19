// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InspectorSettingMetadata
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InspectorSettingMetadata.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000105")]
internal class InspectorSettingMetadata
{
	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x10")]
	public string Tooltip;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x18")]
	public List<string> Dropbox;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x20")]
	public string Header;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x28")]
	public string GroupId;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x30")]
	public string GroupHeader;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x38")]
	public bool HasClamp;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x3C")]
	public float Min;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x40")]
	public float Max;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x44")]
	public bool HasSlider;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x48")]
	public float SliderInterval;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x4C")]
	public bool MapObject;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x4D")]
	public bool MapObjectList;

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x5A55000", Offset = "0x5A54000", VA = "0x5A55000")]
	public InspectorSettingMetadata()
	{
		// Lifted from source/cpp/Settings/InspectorSettingMetadata.c (Settings.InspectorSettingMetadata$$.ctor): clean
		List<string> __this_00;

		this.Tooltip = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new List<string>();
		this.Dropbox = __this_00;
		this.Header = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.GroupId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.GroupHeader = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}
}
