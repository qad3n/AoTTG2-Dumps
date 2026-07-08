using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000090")]
internal class InGameModeSettings : BaseSettingsContainer
{
	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3C954F0", Offset = "0x3C954F0", VA = "0x3C954F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3C95960", Offset = "0x3C95960", VA = "0x3C95960", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3C95BA0", Offset = "0x3C95BA0", VA = "0x3C95BA0")]
	public InGameModeSettings()
	{
	}
}
