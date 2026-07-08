using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000087")]
internal class InGameAddonSettings : BaseSettingsContainer
{
	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3C94010", Offset = "0x3C94010", VA = "0x3C94010", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3C94480", Offset = "0x3C94480", VA = "0x3C94480", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3C946C0", Offset = "0x3C946C0", VA = "0x3C946C0")]
	public InGameAddonSettings()
	{
	}
}
