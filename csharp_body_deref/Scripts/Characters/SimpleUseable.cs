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

[Token(Token = "0x200069A")]
internal abstract class SimpleUseable : BaseUseable
{
	[Token(Token = "0x600402E")]
	[Address(RVA = "0x5AE19C0", Offset = "0x5AE09C0", VA = "0x5AE19C0")]
	public SimpleUseable(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600402F")]
	[Address(RVA = "0x5AE19D0", Offset = "0x5AE09D0", VA = "0x5AE19D0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
	}

	[Token(Token = "0x6004030")]
	[Address(RVA = "0x5AE1A10", Offset = "0x5AE0A10", VA = "0x5AE1A10", Slot = "12")]
	public override void SetInput(bool key)
	{
	}
}
