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

[Token(Token = "0x2000733")]
internal class TitanAttackInfo
{
	[Token(Token = "0x400242D")]
	[FieldOffset(Offset = "0x10")]
	public bool HumanOnly;

	[Token(Token = "0x400242E")]
	[FieldOffset(Offset = "0x11")]
	public bool MapObject;

	[Token(Token = "0x400242F")]
	[FieldOffset(Offset = "0x12")]
	public bool FarOnly;

	[Token(Token = "0x4002430")]
	[FieldOffset(Offset = "0x13")]
	public bool LeftArm;

	[Token(Token = "0x4002431")]
	[FieldOffset(Offset = "0x14")]
	public bool RightArm;

	[Token(Token = "0x4002432")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 MinRange;

	[Token(Token = "0x4002433")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 MaxRange;

	[Token(Token = "0x4002434")]
	[FieldOffset(Offset = "0x30")]
	public bool HasKeyframes;

	[Token(Token = "0x4002435")]
	[FieldOffset(Offset = "0x38")]
	public List<TitanAttackKeyframe> Keyframes;

	[Token(Token = "0x60045DC")]
	[Address(RVA = "0x5B61AB0", Offset = "0x5B60AB0", VA = "0x5B61AB0")]
	public TitanAttackInfo(JSONNode attackInfo, JSONNode keyframes)
	{
	}

	[Token(Token = "0x60045DD")]
	[Address(RVA = "0x5B625D0", Offset = "0x5B615D0", VA = "0x5B625D0")]
	public bool CheckSimpleAttack(Vector3 relativePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60045DE")]
	[Address(RVA = "0x5B62620", Offset = "0x5B61620", VA = "0x5B62620")]
	public bool CheckSmartAttack(Transform titan, Vector3 worldPosition, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
