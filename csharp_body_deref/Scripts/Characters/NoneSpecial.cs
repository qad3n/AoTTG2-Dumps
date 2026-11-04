// ==================== AoTTG2 cross-reference ====================
// Type: Characters.NoneSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/NoneSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/NoneSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200067F")]
internal class NoneSpecial : SimpleUseable
{
	[Token(Token = "0x6004027")]
	[Address(RVA = "0x2171670", Offset = "0x216FC70", VA = "0x182171670")]
	public NoneSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004028")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004029")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600402A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
