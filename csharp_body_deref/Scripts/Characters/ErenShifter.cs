using System.Collections.Generic;
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20004FC")]
internal class ErenShifter : BaseShifter
{
	[Token(Token = "0x4001792")]
	[FieldOffset(Offset = "0x290")]
	protected ErenComponentCache ErenCache;

	[Token(Token = "0x4001793")]
	[FieldOffset(Offset = "0x298")]
	protected ErenAnimations ErenAnimations;

	[Token(Token = "0x4001794")]
	[FieldOffset(Offset = "0x2A0")]
	protected int _stepSoundPhase;

	[Token(Token = "0x170009BD")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600348D")]
		[Address(RVA = "0x3EF7380", Offset = "0x3EF7380", VA = "0x3EF7380", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BE")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x600348E")]
		[Address(RVA = "0x3EF74C0", Offset = "0x3EF74C0", VA = "0x3EF74C0", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600348F")]
	[Address(RVA = "0x3EF74D0", Offset = "0x3EF74D0", VA = "0x3EF74D0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003490")]
	[Address(RVA = "0x3EF7550", Offset = "0x3EF7550", VA = "0x3EF7550", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003491")]
	[Address(RVA = "0x3EF75C0", Offset = "0x3EF75C0", VA = "0x3EF75C0", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x6003492")]
	[Address(RVA = "0x3EF7610", Offset = "0x3EF7610", VA = "0x3EF7610", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x6003493")]
	[Address(RVA = "0x3EF7650", Offset = "0x3EF7650", VA = "0x3EF7650", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003494")]
	[Address(RVA = "0x3EF7850", Offset = "0x3EF7850", VA = "0x3EF7850", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003495")]
	[Address(RVA = "0x3EF7910", Offset = "0x3EF7910", VA = "0x3EF7910", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x6003496")]
	[Address(RVA = "0x3EF7B90", Offset = "0x3EF7B90", VA = "0x3EF7B90", Slot = "174")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x6003497")]
	[Address(RVA = "0x3EF7EA0", Offset = "0x3EF7EA0", VA = "0x3EF7EA0")]
	public ErenShifter()
	{
	}
}
