using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000516")]
internal class DummyTitan : DummyCharacter
{
	[Token(Token = "0x400193D")]
	[FieldOffset(Offset = "0x30")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x400193E")]
	[FieldOffset(Offset = "0x38")]
	public BasicTitanComponentCache Cache;

	[Token(Token = "0x400193F")]
	[FieldOffset(Offset = "0x40")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x60035CF")]
	[Address(RVA = "0x3F13F00", Offset = "0x3F13F00", VA = "0x3F13F00", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60035D0")]
	[Address(RVA = "0x3F14060", Offset = "0x3F14060", VA = "0x3F14060", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60035D1")]
	[Address(RVA = "0x3F14090", Offset = "0x3F14090", VA = "0x3F14090", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60035D2")]
	[Address(RVA = "0x3F141B0", Offset = "0x3F141B0", VA = "0x3F141B0")]
	public DummyTitan()
	{
	}
}
