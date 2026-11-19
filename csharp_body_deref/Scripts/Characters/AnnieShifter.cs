// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnnieShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AnnieShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using Utility;

namespace Characters;

[Token(Token = "0x20006F2")]
internal class AnnieShifter : BaseShifter
{
	[Token(Token = "0x40020C5")]
	[FieldOffset(Offset = "0x2D8")]
	protected AnnieComponentCache AnnieCache;

	[Token(Token = "0x40020C6")]
	[FieldOffset(Offset = "0x2E0")]
	protected AnnieAnimations AnnieAnimations;

	[Token(Token = "0x17000B88")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6004326")]
		[Address(RVA = "0x5B14190", Offset = "0x5B13190", VA = "0x5B14190", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B89")]
	protected override bool BasicAttacksStunOnly
	{
		[Token(Token = "0x600432E")]
		[Address(RVA = "0x5B147F0", Offset = "0x5B137F0", VA = "0x5B147F0", Slot = "142")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004327")]
	[Address(RVA = "0x5B143A0", Offset = "0x5B133A0", VA = "0x5B143A0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004328")]
	[Address(RVA = "0x5B14420", Offset = "0x5B13420", VA = "0x5B14420", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6004329")]
	[Address(RVA = "0x5B14490", Offset = "0x5B13490", VA = "0x5B14490", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x600432A")]
	[Address(RVA = "0x5B14670", Offset = "0x5B13670", VA = "0x5B14670", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x600432B")]
	[Address(RVA = "0x5B146C0", Offset = "0x5B136C0", VA = "0x5B146C0", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600432C")]
	[Address(RVA = "0x5B14700", Offset = "0x5B13700", VA = "0x5B14700", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x600432D")]
	[Address(RVA = "0x5B147A0", Offset = "0x5B137A0", VA = "0x5B147A0", Slot = "140")]
	protected override bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600432F")]
	[Address(RVA = "0x5B14800", Offset = "0x5B13800", VA = "0x5B14800", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6004330")]
	[Address(RVA = "0x5B15510", Offset = "0x5B14510", VA = "0x5B15510", Slot = "196")]
	protected override void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6004331")]
	[Address(RVA = "0x5B155E0", Offset = "0x5B145E0", VA = "0x5B155E0", Slot = "168")]
	public override void Blind()
	{
	}

	[Token(Token = "0x6004332")]
	[Address(RVA = "0x5B15690", Offset = "0x5B14690", VA = "0x5B15690")]
	public AnnieShifter()
	{
	}
}
