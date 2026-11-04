// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ErenShifter
// Update status: CHANGED in this game update
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

[Token(Token = "0x200069C")]
internal class ErenShifter : BaseShifter
{
	[Token(Token = "0x4001F44")]
	[FieldOffset(Offset = "0x2C0")]
	protected ErenComponentCache ErenCache;

	[Token(Token = "0x4001F45")]
	[FieldOffset(Offset = "0x2C8")]
	protected ErenAnimations ErenAnimations;

	[Token(Token = "0x4001F46")]
	[FieldOffset(Offset = "0x2D0")]
	protected int _stepSoundPhase;

	[Token(Token = "0x17000B61")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60040E5")]
		[Address(RVA = "0x216C570", Offset = "0x216AB70", VA = "0x18216C570", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B62")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x60040E6")]
		[Address(RVA = "0x216C560", Offset = "0x216AB60", VA = "0x18216C560", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60040E7")]
	[Address(RVA = "0x216BDF0", Offset = "0x216A3F0", VA = "0x18216BDF0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60040E8")]
	[Address(RVA = "0x216BC30", Offset = "0x216A230", VA = "0x18216BC30", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60040E9")]
	[Address(RVA = "0x216BFC0", Offset = "0x216A5C0", VA = "0x18216BFC0", Slot = "205")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60040EA")]
	[Address(RVA = "0x216C250", Offset = "0x216A850", VA = "0x18216C250", Slot = "204")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60040EB")]
	[Address(RVA = "0x216C010", Offset = "0x216A610", VA = "0x18216C010", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x60040EC")]
	[Address(RVA = "0x216C180", Offset = "0x216A780", VA = "0x18216C180", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x60040ED")]
	[Address(RVA = "0x216C2A0", Offset = "0x216A8A0", VA = "0x18216C2A0", Slot = "140")]
	protected override bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60040EE")]
	[Address(RVA = "0x216C2D0", Offset = "0x216A8D0", VA = "0x18216C2D0", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60040EF")]
	[Address(RVA = "0x216BAC0", Offset = "0x216A0C0", VA = "0x18216BAC0", Slot = "201")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60040F0")]
	[Address(RVA = "0x21662A0", Offset = "0x21648A0", VA = "0x1821662A0")]
	public ErenShifter()
	{
	}
}
