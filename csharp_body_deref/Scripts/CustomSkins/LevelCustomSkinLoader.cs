// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.LevelCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/LevelCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/LevelCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x200024C")]
internal abstract class LevelCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x3F92120", Offset = "0x3F92120", VA = "0x3F92120", Slot = "7")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId, int randomIndex)
	{
		return null;
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x3F92160", Offset = "0x3F92160", VA = "0x3F92160", Slot = "8")]
	protected virtual void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x3F8FBD0", Offset = "0x3F8FBD0", VA = "0x3F8FBD0")]
	protected LevelCustomSkinLoader()
	{
	}
}
