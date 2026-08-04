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

[Token(Token = "0x2000538")]
internal class AnnieShifter : BaseShifter
{
	[Token(Token = "0x400187A")]
	[FieldOffset(Offset = "0x290")]
	protected AnnieComponentCache AnnieCache;

	[Token(Token = "0x400187B")]
	[FieldOffset(Offset = "0x298")]
	protected AnnieAnimations AnnieAnimations;

	[Token(Token = "0x17000A0A")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600364E")]
		[Address(RVA = "0x41FD710", Offset = "0x41FD710", VA = "0x41FD710", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600364F")]
	[Address(RVA = "0x41FD920", Offset = "0x41FD920", VA = "0x41FD920", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003650")]
	[Address(RVA = "0x41FDA50", Offset = "0x41FDA50", VA = "0x41FDA50", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003651")]
	[Address(RVA = "0x41FDCD0", Offset = "0x41FDCD0", VA = "0x41FDCD0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003652")]
	[Address(RVA = "0x41FDFB0", Offset = "0x41FDFB0", VA = "0x41FDFB0", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003653")]
	[Address(RVA = "0x41FE000", Offset = "0x41FE000", VA = "0x41FE000", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003654")]
	[Address(RVA = "0x41FE040", Offset = "0x41FE040", VA = "0x41FE040", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003655")]
	[Address(RVA = "0x41FE0E0", Offset = "0x41FE0E0", VA = "0x41FE0E0", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6003656")]
	[Address(RVA = "0x41FEE20", Offset = "0x41FEE20", VA = "0x41FEE20", Slot = "168")]
	protected override void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6003657")]
	[Address(RVA = "0x41FEEF0", Offset = "0x41FEEF0", VA = "0x41FEEF0", Slot = "144")]
	public override void Blind()
	{
	}

	[Token(Token = "0x6003658")]
	[Address(RVA = "0x41FEFA0", Offset = "0x41FEFA0", VA = "0x41FEFA0")]
	public AnnieShifter()
	{
	}
}
