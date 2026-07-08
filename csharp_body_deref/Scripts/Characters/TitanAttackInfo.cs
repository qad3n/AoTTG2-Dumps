using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200051B")]
internal class TitanAttackInfo
{
	[Token(Token = "0x4001977")]
	[FieldOffset(Offset = "0x10")]
	public bool HumanOnly;

	[Token(Token = "0x4001978")]
	[FieldOffset(Offset = "0x11")]
	public bool MapObject;

	[Token(Token = "0x4001979")]
	[FieldOffset(Offset = "0x12")]
	public bool FarOnly;

	[Token(Token = "0x400197A")]
	[FieldOffset(Offset = "0x13")]
	public bool LeftArm;

	[Token(Token = "0x400197B")]
	[FieldOffset(Offset = "0x14")]
	public bool RightArm;

	[Token(Token = "0x400197C")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 MinRange;

	[Token(Token = "0x400197D")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 MaxRange;

	[Token(Token = "0x400197E")]
	[FieldOffset(Offset = "0x30")]
	public bool HasKeyframes;

	[Token(Token = "0x400197F")]
	[FieldOffset(Offset = "0x38")]
	public List<TitanAttackKeyframe> Keyframes;

	[Token(Token = "0x60035EB")]
	[Address(RVA = "0x3F15CD0", Offset = "0x3F15CD0", VA = "0x3F15CD0")]
	public TitanAttackInfo(JSONNode attackInfo, JSONNode keyframes)
	{
	}

	[Token(Token = "0x60035EC")]
	[Address(RVA = "0x3F167F0", Offset = "0x3F167F0", VA = "0x3F167F0")]
	public bool CheckSimpleAttack(Vector3 relativePosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60035ED")]
	[Address(RVA = "0x3F16840", Offset = "0x3F16840", VA = "0x3F16840")]
	public bool CheckSmartAttack(Transform titan, Vector3 worldPosition, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
