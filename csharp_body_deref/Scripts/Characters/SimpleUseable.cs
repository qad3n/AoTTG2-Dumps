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

[Token(Token = "0x20004E2")]
internal abstract class SimpleUseable : BaseUseable
{
	[Token(Token = "0x60033BA")]
	[Address(RVA = "0x41A9290", Offset = "0x41A9290", VA = "0x41A9290")]
	public SimpleUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033BB")]
	[Address(RVA = "0x41A92E0", Offset = "0x41A92E0", VA = "0x41A92E0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x60033BC")]
	[Address(RVA = "0x41A9320", Offset = "0x41A9320", VA = "0x41A9320", Slot = "12")]
	public override void SetInput(bool key)
	{
	}
}
