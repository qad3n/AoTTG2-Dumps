// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ErenShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ErenShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006FC")]
internal class ErenShifter : BaseShifter
{
	[Token(Token = "0x40020F7")]
	[FieldOffset(Offset = "0x2D8")]
	protected ErenComponentCache ErenCache;

	[Token(Token = "0x40020F8")]
	[FieldOffset(Offset = "0x2E0")]
	protected ErenAnimations ErenAnimations;

	[Token(Token = "0x40020F9")]
	[FieldOffset(Offset = "0x2E8")]
	protected int _stepSoundPhase;

	[Token(Token = "0x17000BAB")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6004385")]
		[Address(RVA = "0x5B19000", Offset = "0x5B18000", VA = "0x5B19000", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BAC")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6004386")]
		[Address(RVA = "0x5B19140", Offset = "0x5B18140", VA = "0x5B19140", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004387")]
	[Address(RVA = "0x5B19150", Offset = "0x5B18150", VA = "0x5B19150", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004388")]
	[Address(RVA = "0x5B191D0", Offset = "0x5B181D0", VA = "0x5B191D0", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6004389")]
	[Address(RVA = "0x5B19240", Offset = "0x5B18240", VA = "0x5B19240", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x600438A")]
	[Address(RVA = "0x5B19290", Offset = "0x5B18290", VA = "0x5B19290", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600438B")]
	[Address(RVA = "0x5B192D0", Offset = "0x5B182D0", VA = "0x5B192D0", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x600438C")]
	[Address(RVA = "0x5B19440", Offset = "0x5B18440", VA = "0x5B19440", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x600438D")]
	[Address(RVA = "0x5B19500", Offset = "0x5B18500", VA = "0x5B19500", Slot = "140")]
	protected override bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600438E")]
	[Address(RVA = "0x5B19530", Offset = "0x5B18530", VA = "0x5B19530", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x600438F")]
	[Address(RVA = "0x5B197D0", Offset = "0x5B187D0", VA = "0x5B197D0", Slot = "202")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x6004390")]
	[Address(RVA = "0x5B19B20", Offset = "0x5B18B20", VA = "0x5B19B20")]
	public ErenShifter()
	{
	}
}
