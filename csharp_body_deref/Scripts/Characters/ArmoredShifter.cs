using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004F6")]
internal class ArmoredShifter : BaseShifter
{
	[Token(Token = "0x400176B")]
	[FieldOffset(Offset = "0x290")]
	protected ArmoredComponentCache ArmoredCache;

	[Token(Token = "0x400176C")]
	[FieldOffset(Offset = "0x298")]
	protected ArmoredAnimations ArmoredAnimations;

	[Token(Token = "0x170009A7")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x6003453")]
		[Address(RVA = "0x3EF29B0", Offset = "0x3EF29B0", VA = "0x3EF29B0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009A8")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6003454")]
		[Address(RVA = "0x3EF2A10", Offset = "0x3EF2A10", VA = "0x3EF2A10", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003455")]
	[Address(RVA = "0x3EF2A20", Offset = "0x3EF2A20", VA = "0x3EF2A20", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003456")]
	[Address(RVA = "0x3EF2AA0", Offset = "0x3EF2AA0", VA = "0x3EF2AA0", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003457")]
	[Address(RVA = "0x3EF2B10", Offset = "0x3EF2B10", VA = "0x3EF2B10", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003458")]
	[Address(RVA = "0x3EF2B20", Offset = "0x3EF2B20", VA = "0x3EF2B20", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003459")]
	[Address(RVA = "0x3EF2B70", Offset = "0x3EF2B70", VA = "0x3EF2B70", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600345A")]
	[Address(RVA = "0x3EF2BB0", Offset = "0x3EF2BB0", VA = "0x3EF2BB0", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x600345B")]
	[Address(RVA = "0x3EF2C10", Offset = "0x3EF2C10", VA = "0x3EF2C10", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x600345C")]
	[Address(RVA = "0x3EF2D40", Offset = "0x3EF2D40", VA = "0x3EF2D40", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600345D")]
	[Address(RVA = "0x3EF2FA0", Offset = "0x3EF2FA0", VA = "0x3EF2FA0", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x600345E")]
	[Address(RVA = "0x3EF2FF0", Offset = "0x3EF2FF0", VA = "0x3EF2FF0")]
	public ArmoredShifter()
	{
	}
}
