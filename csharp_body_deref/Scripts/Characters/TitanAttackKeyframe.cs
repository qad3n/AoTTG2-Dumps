using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200051C")]
internal class TitanAttackKeyframe
{
	[Token(Token = "0x4001980")]
	[FieldOffset(Offset = "0x10")]
	public int Frame;

	[Token(Token = "0x4001981")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _localPosition;

	[Token(Token = "0x4001982")]
	[FieldOffset(Offset = "0x20")]
	private float _radius;

	[Token(Token = "0x60035EE")]
	[Address(RVA = "0x3F16630", Offset = "0x3F16630", VA = "0x3F16630")]
	public TitanAttackKeyframe(JSONNode data)
	{
	}

	[Token(Token = "0x60035EF")]
	[Address(RVA = "0x3F16AA0", Offset = "0x3F16AA0", VA = "0x3F16AA0")]
	public bool CheckCollision(Transform titan, Vector3 position, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
