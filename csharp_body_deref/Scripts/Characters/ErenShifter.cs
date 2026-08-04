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

[Token(Token = "0x2000541")]
internal class ErenShifter : BaseShifter
{
	[Token(Token = "0x40018A3")]
	[FieldOffset(Offset = "0x290")]
	protected ErenComponentCache ErenCache;

	[Token(Token = "0x40018A4")]
	[FieldOffset(Offset = "0x298")]
	protected ErenAnimations ErenAnimations;

	[Token(Token = "0x40018A5")]
	[FieldOffset(Offset = "0x2A0")]
	protected int _stepSoundPhase;

	[Token(Token = "0x17000A27")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x600369B")]
		[Address(RVA = "0x4203C40", Offset = "0x4203C40", VA = "0x4203C40", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A28")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x600369C")]
		[Address(RVA = "0x4203D80", Offset = "0x4203D80", VA = "0x4203D80", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600369D")]
	[Address(RVA = "0x4203D90", Offset = "0x4203D90", VA = "0x4203D90", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x600369E")]
	[Address(RVA = "0x4203E10", Offset = "0x4203E10", VA = "0x4203E10", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x600369F")]
	[Address(RVA = "0x4203E80", Offset = "0x4203E80", VA = "0x4203E80", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60036A0")]
	[Address(RVA = "0x4203ED0", Offset = "0x4203ED0", VA = "0x4203ED0", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60036A1")]
	[Address(RVA = "0x4203F10", Offset = "0x4203F10", VA = "0x4203F10", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x60036A2")]
	[Address(RVA = "0x4204110", Offset = "0x4204110", VA = "0x4204110", Slot = "121")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x60036A3")]
	[Address(RVA = "0x42041D0", Offset = "0x42041D0", VA = "0x42041D0", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60036A4")]
	[Address(RVA = "0x4204450", Offset = "0x4204450", VA = "0x4204450", Slot = "174")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60036A5")]
	[Address(RVA = "0x4204760", Offset = "0x4204760", VA = "0x4204760")]
	public ErenShifter()
	{
	}
}
