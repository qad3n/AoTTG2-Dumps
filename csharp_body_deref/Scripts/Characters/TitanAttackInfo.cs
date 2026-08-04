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

[Token(Token = "0x2000560")]
internal class TitanAttackInfo
{
	[Token(Token = "0x4001A8A")]
	[FieldOffset(Offset = "0x10")]
	public bool HumanOnly;

	[Token(Token = "0x4001A8B")]
	[FieldOffset(Offset = "0x11")]
	public bool MapObject;

	[Token(Token = "0x4001A8C")]
	[FieldOffset(Offset = "0x12")]
	public bool FarOnly;

	[Token(Token = "0x4001A8D")]
	[FieldOffset(Offset = "0x13")]
	public bool LeftArm;

	[Token(Token = "0x4001A8E")]
	[FieldOffset(Offset = "0x14")]
	public bool RightArm;

	[Token(Token = "0x4001A8F")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 MinRange;

	[Token(Token = "0x4001A90")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 MaxRange;

	[Token(Token = "0x4001A91")]
	[FieldOffset(Offset = "0x30")]
	public bool HasKeyframes;

	[Token(Token = "0x4001A92")]
	[FieldOffset(Offset = "0x38")]
	public List<TitanAttackKeyframe> Keyframes;

	[Token(Token = "0x60037F9")]
	[Address(RVA = "0x42226D0", Offset = "0x42226D0", VA = "0x42226D0")]
	public TitanAttackInfo(JSONNode attackInfo, JSONNode keyframes)
	{
	}

	[Token(Token = "0x60037FA")]
	[Address(RVA = "0x42231F0", Offset = "0x42231F0", VA = "0x42231F0")]
	public bool CheckSimpleAttack(Vector3 relativePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60037FB")]
	[Address(RVA = "0x4223240", Offset = "0x4223240", VA = "0x4223240")]
	public bool CheckSmartAttack(Transform titan, Vector3 worldPosition, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
