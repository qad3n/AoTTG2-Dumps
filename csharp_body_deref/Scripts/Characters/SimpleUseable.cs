// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SimpleUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SimpleUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x200063B")]
internal abstract class SimpleUseable : BaseUseable
{
	[Token(Token = "0x6003D9C")]
	[Address(RVA = "0x21177E0", Offset = "0x2115DE0", VA = "0x1821177E0")]
	public SimpleUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003D9D")]
	[Address(RVA = "0x2117730", Offset = "0x2115D30", VA = "0x182117730", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x6003D9E")]
	[Address(RVA = "0x211CFE0", Offset = "0x211B5E0", VA = "0x18211CFE0", Slot = "12")]
	public override void SetInput(bool key)
	{
	}
}
