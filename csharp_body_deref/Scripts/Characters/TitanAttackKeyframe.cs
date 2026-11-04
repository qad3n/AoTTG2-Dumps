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

[Token(Token = "0x20006D2")]
internal class TitanAttackKeyframe
{
	[Token(Token = "0x4002243")]
	[FieldOffset(Offset = "0x10")]
	public int Frame;

	[Token(Token = "0x4002244")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _localPosition;

	[Token(Token = "0x4002245")]
	[FieldOffset(Offset = "0x20")]
	private float _radius;

	[Token(Token = "0x600431E")]
	[Address(RVA = "0x21CCE90", Offset = "0x21CB490", VA = "0x1821CCE90")]
	public TitanAttackKeyframe(JSONNode data)
	{
	}

	[Token(Token = "0x600431F")]
	[Address(RVA = "0x21CCDE0", Offset = "0x21CB3E0", VA = "0x1821CCDE0")]
	public bool CheckCollision(Transform titan, Vector3 position, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
