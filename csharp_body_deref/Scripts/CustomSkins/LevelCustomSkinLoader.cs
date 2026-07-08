using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000216")]
internal abstract class LevelCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4144F70", Offset = "0x4144F70", VA = "0x4144F70", Slot = "7")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId, int randomIndex)
	{
		return null;
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4144FB0", Offset = "0x4144FB0", VA = "0x4144FB0", Slot = "8")]
	protected virtual void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x4140740", Offset = "0x4140740", VA = "0x4140740")]
	protected LevelCustomSkinLoader()
	{
	}
}
