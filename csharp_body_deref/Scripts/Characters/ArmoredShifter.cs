// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ArmoredShifter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ArmoredShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006F5")]
internal class ArmoredShifter : BaseShifter
{
	[Token(Token = "0x40020C7")]
	[FieldOffset(Offset = "0x2D8")]
	protected ArmoredComponentCache ArmoredCache;

	[Token(Token = "0x40020C8")]
	[FieldOffset(Offset = "0x2E0")]
	protected ArmoredAnimations ArmoredAnimations;

	[Token(Token = "0x17000B90")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600433B")]
		[Address(RVA = "0x5B15960", Offset = "0x5B14960", VA = "0x5B15960", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B91")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x600433C")]
		[Address(RVA = "0x5B159C0", Offset = "0x5B149C0", VA = "0x5B159C0", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600433D")]
	[Address(RVA = "0x5B159D0", Offset = "0x5B149D0", VA = "0x5B159D0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600433E")]
	[Address(RVA = "0x5B15A50", Offset = "0x5B14A50", VA = "0x5B15A50", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x600433F")]
	[Address(RVA = "0x5B15AC0", Offset = "0x5B14AC0", VA = "0x5B15AC0", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6004340")]
	[Address(RVA = "0x5B15AD0", Offset = "0x5B14AD0", VA = "0x5B15AD0", Slot = "206")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6004341")]
	[Address(RVA = "0x5B15B20", Offset = "0x5B14B20", VA = "0x5B15B20", Slot = "205")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6004342")]
	[Address(RVA = "0x5B15B60", Offset = "0x5B14B60", VA = "0x5B15B60", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6004343")]
	[Address(RVA = "0x5B15BC0", Offset = "0x5B14BC0", VA = "0x5B15BC0", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6004344")]
	[Address(RVA = "0x5B15CF0", Offset = "0x5B14CF0", VA = "0x5B15CF0", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004345")]
	[Address(RVA = "0x5B15DD0", Offset = "0x5B14DD0", VA = "0x5B15DD0", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6004346")]
	[Address(RVA = "0x5B15E20", Offset = "0x5B14E20", VA = "0x5B15E20")]
	public ArmoredShifter()
	{
	}
}
