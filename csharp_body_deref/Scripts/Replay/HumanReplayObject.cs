using Il2CppDummyDll;

namespace Replay;

[Token(Token = "0x20000D5")]
internal class HumanReplayObject : BaseReplayObject
{
	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x28")]
	public string Name;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x30")]
	public string GuildName;

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3E15470", Offset = "0x3E15470", VA = "0x3E15470")]
	public HumanReplayObject()
	{
	}
}
