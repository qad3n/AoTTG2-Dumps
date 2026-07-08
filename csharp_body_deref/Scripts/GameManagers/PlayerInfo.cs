using Il2CppDummyDll;
using Settings;

namespace GameManagers;

[Token(Token = "0x20001F0")]
internal class PlayerInfo : BaseSettingsContainer
{
	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x20")]
	public ProfileSettings Profile;

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x413AC00", Offset = "0x413AC00", VA = "0x413AC00")]
	public PlayerInfo()
	{
	}
}
