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

[Token(Token = "0x2000561")]
internal class TitanAttackKeyframe
{
	[Token(Token = "0x4001A93")]
	[FieldOffset(Offset = "0x10")]
	public int Frame;

	[Token(Token = "0x4001A94")]
	[FieldOffset(Offset = "0x14")]
	private Vector3 _localPosition;

	[Token(Token = "0x4001A95")]
	[FieldOffset(Offset = "0x20")]
	private float _radius;

	[Token(Token = "0x60037FC")]
	[Address(RVA = "0x4223030", Offset = "0x4223030", VA = "0x4223030")]
	public TitanAttackKeyframe(JSONNode data)
	{
	}

	[Token(Token = "0x60037FD")]
	[Address(RVA = "0x42234A0", Offset = "0x42234A0", VA = "0x42234A0")]
	public bool CheckCollision(Transform titan, Vector3 position, Vector3 velocity, float attackSpeed, float size)
	{
		return default(bool);
	}
}
