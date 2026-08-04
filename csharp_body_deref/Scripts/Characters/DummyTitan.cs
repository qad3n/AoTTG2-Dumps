// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyTitan
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200055B")]
internal class DummyTitan : DummyCharacter
{
	[Token(Token = "0x4001A50")]
	[FieldOffset(Offset = "0x30")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4001A51")]
	[FieldOffset(Offset = "0x38")]
	public BasicTitanComponentCache Cache;

	[Token(Token = "0x4001A52")]
	[FieldOffset(Offset = "0x40")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x60037DD")]
	[Address(RVA = "0x4220900", Offset = "0x4220900", VA = "0x4220900", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60037DE")]
	[Address(RVA = "0x4220A60", Offset = "0x4220A60", VA = "0x4220A60", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60037DF")]
	[Address(RVA = "0x4220A90", Offset = "0x4220A90", VA = "0x4220A90", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60037E0")]
	[Address(RVA = "0x4220BB0", Offset = "0x4220BB0", VA = "0x4220BB0")]
	public DummyTitan()
	{
	}
}
