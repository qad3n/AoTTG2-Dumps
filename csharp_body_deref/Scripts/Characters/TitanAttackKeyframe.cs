// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanAttackKeyframe
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanAttackKeyframe.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackKeyframe.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000734")]
internal class TitanAttackKeyframe
{
	[Token(Token = "0x4002436")]
	[FieldOffset(Offset = "0x10")]
	public int Frame;

	[Token(Token = "0x4002437")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _localPosition;

	[Token(Token = "0x4002438")]
	[FieldOffset(Offset = "0x20")]
	private float _radius;

	[Token(Token = "0x60045DF")]
	[Address(RVA = "0x5B62410", Offset = "0x5B61410", VA = "0x5B62410")]
	public TitanAttackKeyframe(JSONNode data)
	{
	}

	[Token(Token = "0x60045E0")]
	[Address(RVA = "0x5B62840", Offset = "0x5B61840", VA = "0x5B62840")]
	public bool CheckCollision(Transform titan, Vector3 position, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
