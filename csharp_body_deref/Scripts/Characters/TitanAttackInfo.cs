// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanAttackInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanAttackInfo.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006D1")]
internal class TitanAttackInfo
{
	[Token(Token = "0x400223A")]
	[FieldOffset(Offset = "0x10")]
	public bool HumanOnly;

	[Token(Token = "0x400223B")]
	[FieldOffset(Offset = "0x11")]
	public bool MapObject;

	[Token(Token = "0x400223C")]
	[FieldOffset(Offset = "0x12")]
	public bool FarOnly;

	[Token(Token = "0x400223D")]
	[FieldOffset(Offset = "0x13")]
	public bool LeftArm;

	[Token(Token = "0x400223E")]
	[FieldOffset(Offset = "0x14")]
	public bool RightArm;

	[Token(Token = "0x400223F")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 MinRange;

	[Token(Token = "0x4002240")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 MaxRange;

	[Token(Token = "0x4002241")]
	[FieldOffset(Offset = "0x30")]
	public bool HasKeyframes;

	[Token(Token = "0x4002242")]
	[FieldOffset(Offset = "0x38")]
	public List<TitanAttackKeyframe> Keyframes;

	[Token(Token = "0x600431B")]
	[Address(RVA = "0x21CC330", Offset = "0x21CA930", VA = "0x1821CC330")]
	public TitanAttackInfo(JSONNode attackInfo, JSONNode keyframes)
	{
	}

	[Token(Token = "0x600431C")]
	[Address(RVA = "0x21CC0C0", Offset = "0x21CA6C0", VA = "0x1821CC0C0")]
	public bool CheckSimpleAttack(Vector3 relativePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600431D")]
	[Address(RVA = "0x21CC110", Offset = "0x21CA710", VA = "0x1821CC110")]
	public bool CheckSmartAttack(Transform titan, Vector3 worldPosition, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
