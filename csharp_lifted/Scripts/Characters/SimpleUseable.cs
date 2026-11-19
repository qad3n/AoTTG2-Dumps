// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SimpleUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SimpleUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Characters/SimpleUseable.c (Characters.SimpleUseable$$.ctor): clean
		base(owner, 0.0, -1);
		return;
	}

	[Token(Token = "0x600402F")]
	[Address(RVA = "0x5AE19D0", Offset = "0x5AE09D0", VA = "0x5AE19D0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
		// Lifted from source/cpp/Characters/SimpleUseable.c (Characters.SimpleUseable$$ReadInput): clean
		bool bVar1;

		if (keybind == null) {
			throw new NullReferenceException();
		}
		bVar1 = keybind.GetKeyDown(false);
		this.SetInput(bVar1);
		return;
	}

	[Token(Token = "0x6004030")]
	[Address(RVA = "0x5AE1A10", Offset = "0x5AE0A10", VA = "0x5AE1A10", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/SimpleUseable.c (Characters.SimpleUseable$$SetInput): 2 lines keep C-only constructs
		bool bVar1;
		undefined7 in_register_00000031;

		if ((int)CONCAT71(in_register_00000031, key) != 0) {
			bVar1 = this.CanUse();
			if (bVar1) {
				this.Activate();
				this.OnUse();
				return;
			}
		}
		return;
	}
}
