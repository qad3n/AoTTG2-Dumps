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

[Token(Token = "0x2000696")]
internal class ArmoredShifter : BaseShifter
{
	[Token(Token = "0x4001F19")]
	[FieldOffset(Offset = "0x2C0")]
	protected ArmoredComponentCache ArmoredCache;

	[Token(Token = "0x4001F1A")]
	[FieldOffset(Offset = "0x2C8")]
	protected ArmoredAnimations ArmoredAnimations;

	[Token(Token = "0x17000B46")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60040A3")]
		[Address(RVA = "0x2166D40", Offset = "0x2165340", VA = "0x182166D40", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B47")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x60040A4")]
		[Address(RVA = "0x2166D30", Offset = "0x2165330", VA = "0x182166D30", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60040A5")]
	[Address(RVA = "0x2166800", Offset = "0x2164E00", VA = "0x182166800", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60040A6")]
	[Address(RVA = "0x2166780", Offset = "0x2164D80", VA = "0x182166780", Slot = "176")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60040A7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x60040A8")]
	[Address(RVA = "0x21669D0", Offset = "0x2164FD0", VA = "0x1821669D0", Slot = "205")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60040A9")]
	[Address(RVA = "0x2166AE0", Offset = "0x21650E0", VA = "0x182166AE0", Slot = "204")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60040AA")]
	[Address(RVA = "0x2166A80", Offset = "0x2165080", VA = "0x182166A80", Slot = "138")]
	protected override Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x60040AB")]
	[Address(RVA = "0x2166C00", Offset = "0x2165200", VA = "0x182166C00", Slot = "187")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60040AC")]
	[Address(RVA = "0x2166B30", Offset = "0x2165130", VA = "0x182166B30", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60040AD")]
	[Address(RVA = "0x2166A20", Offset = "0x2165020", VA = "0x182166A20", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x60040AE")]
	[Address(RVA = "0x21662A0", Offset = "0x21648A0", VA = "0x1821662A0")]
	public ArmoredShifter()
	{
	}
}
