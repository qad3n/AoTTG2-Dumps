// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.LevelCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/LevelCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/LevelCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000366")]
internal abstract class LevelCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x600158A")]
	[Address(RVA = "0x1E8B390", Offset = "0x1E89990", VA = "0x181E8B390", Slot = "8")]
	protected virtual BaseCustomSkinPart GetCustomSkinPart(int partId, int randomIndex)
	{
		return null;
	}

	[Token(Token = "0x600158B")]
	[Address(RVA = "0x1E8B350", Offset = "0x1E89950", VA = "0x181E8B350", Slot = "9")]
	protected virtual void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x600158C")]
	[Address(RVA = "0x1E8B3D0", Offset = "0x1E899D0", VA = "0x181E8B3D0")]
	protected LevelCustomSkinLoader()
	{
	}
}
