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

[Token(Token = "0x200053B")]
internal class ArmoredShifter : BaseShifter
{
	[Token(Token = "0x400187C")]
	[FieldOffset(Offset = "0x290")]
	protected ArmoredComponentCache ArmoredCache;

	[Token(Token = "0x400187D")]
	[FieldOffset(Offset = "0x298")]
	protected ArmoredAnimations ArmoredAnimations;

	[Token(Token = "0x17000A11")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6003661")]
		[Address(RVA = "0x41FF270", Offset = "0x41FF270", VA = "0x41FF270", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A12")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6003662")]
		[Address(RVA = "0x41FF2D0", Offset = "0x41FF2D0", VA = "0x41FF2D0", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003663")]
	[Address(RVA = "0x41FF2E0", Offset = "0x41FF2E0", VA = "0x41FF2E0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003664")]
	[Address(RVA = "0x41FF360", Offset = "0x41FF360", VA = "0x41FF360", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003665")]
	[Address(RVA = "0x41FF3D0", Offset = "0x41FF3D0", VA = "0x41FF3D0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003666")]
	[Address(RVA = "0x41FF3E0", Offset = "0x41FF3E0", VA = "0x41FF3E0", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003667")]
	[Address(RVA = "0x41FF430", Offset = "0x41FF430", VA = "0x41FF430", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003668")]
	[Address(RVA = "0x41FF470", Offset = "0x41FF470", VA = "0x41FF470", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003669")]
	[Address(RVA = "0x41FF4D0", Offset = "0x41FF4D0", VA = "0x41FF4D0", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x600366A")]
	[Address(RVA = "0x41FF600", Offset = "0x41FF600", VA = "0x41FF600", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600366B")]
	[Address(RVA = "0x41FF860", Offset = "0x41FF860", VA = "0x41FF860", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x600366C")]
	[Address(RVA = "0x41FF8B0", Offset = "0x41FF8B0", VA = "0x41FF8B0")]
	public ArmoredShifter()
	{
	}
}
