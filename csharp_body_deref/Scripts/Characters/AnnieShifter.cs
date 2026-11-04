// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnnieShifter
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000693")]
internal class AnnieShifter : BaseShifter
{
	[Token(Token = "0x4001F17")]
	[FieldOffset(Offset = "0x2C0")]
	protected AnnieComponentCache AnnieCache;

	[Token(Token = "0x4001F18")]
	[FieldOffset(Offset = "0x2C8")]
	protected AnnieAnimations AnnieAnimations;

	[Token(Token = "0x17000B3E")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600408E")]
		[Address(RVA = "0x21662C0", Offset = "0x21648C0", VA = "0x1821662C0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B3F")]
	protected override bool BasicAttacksStunOnly
	{
		[Token(Token = "0x6004096")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "142")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600408F")]
	[Address(RVA = "0x2164FC0", Offset = "0x21635C0", VA = "0x182164FC0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004090")]
	[Address(RVA = "0x2164F40", Offset = "0x2163540", VA = "0x182164F40", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6004091")]
	[Address(RVA = "0x21652B0", Offset = "0x21638B0", VA = "0x1821652B0", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6004092")]
	[Address(RVA = "0x2165190", Offset = "0x2163790", VA = "0x182165190", Slot = "205")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6004093")]
	[Address(RVA = "0x2165550", Offset = "0x2163B50", VA = "0x182165550", Slot = "204")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6004094")]
	[Address(RVA = "0x21654B0", Offset = "0x2163AB0", VA = "0x1821654B0", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6004095")]
	[Address(RVA = "0x21655A0", Offset = "0x2163BA0", VA = "0x1821655A0", Slot = "140")]
	protected override bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004097")]
	[Address(RVA = "0x2165600", Offset = "0x2163C00", VA = "0x182165600", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6004098")]
	[Address(RVA = "0x21651E0", Offset = "0x21637E0", VA = "0x1821651E0", Slot = "195")]
	protected override void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6004099")]
	[Address(RVA = "0x2164E80", Offset = "0x2163480", VA = "0x182164E80", Slot = "168")]
	public override void Blind()
	{
	}

	[Token(Token = "0x600409A")]
	[Address(RVA = "0x21662A0", Offset = "0x21648A0", VA = "0x1821662A0")]
	public AnnieShifter()
	{
	}
}
