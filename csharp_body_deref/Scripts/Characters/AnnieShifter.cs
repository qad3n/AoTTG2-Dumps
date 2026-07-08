using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using Utility;

namespace Characters;

[Token(Token = "0x20004F3")]
internal class AnnieShifter : BaseShifter
{
	[Token(Token = "0x4001769")]
	[FieldOffset(Offset = "0x290")]
	protected AnnieComponentCache AnnieCache;

	[Token(Token = "0x400176A")]
	[FieldOffset(Offset = "0x298")]
	protected AnnieAnimations AnnieAnimations;

	[Token(Token = "0x170009A0")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6003440")]
		[Address(RVA = "0x3EF0E50", Offset = "0x3EF0E50", VA = "0x3EF0E50", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003441")]
	[Address(RVA = "0x3EF1060", Offset = "0x3EF1060", VA = "0x3EF1060", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003442")]
	[Address(RVA = "0x3EF1190", Offset = "0x3EF1190", VA = "0x3EF1190", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003443")]
	[Address(RVA = "0x3EF1410", Offset = "0x3EF1410", VA = "0x3EF1410", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003444")]
	[Address(RVA = "0x3EF16F0", Offset = "0x3EF16F0", VA = "0x3EF16F0", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003445")]
	[Address(RVA = "0x3EF1740", Offset = "0x3EF1740", VA = "0x3EF1740", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003446")]
	[Address(RVA = "0x3EF1780", Offset = "0x3EF1780", VA = "0x3EF1780", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003447")]
	[Address(RVA = "0x3EF1820", Offset = "0x3EF1820", VA = "0x3EF1820", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6003448")]
	[Address(RVA = "0x3EF2560", Offset = "0x3EF2560", VA = "0x3EF2560", Slot = "168")]
	protected override void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6003449")]
	[Address(RVA = "0x3EF2630", Offset = "0x3EF2630", VA = "0x3EF2630", Slot = "144")]
	public override void Blind()
	{
	}

	[Token(Token = "0x600344A")]
	[Address(RVA = "0x3EF26E0", Offset = "0x3EF26E0", VA = "0x3EF26E0")]
	public AnnieShifter()
	{
	}
}
