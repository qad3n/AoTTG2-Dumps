// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ITargetable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ITargetable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/ITargetable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006EF")]
internal interface ITargetable
{
	[Token(Token = "0x6004316")]
	string GetTeam();

	[Token(Token = "0x6004317")]
	Vector3 GetPosition();

	[Token(Token = "0x6004318")]
	[Address(RVA = "0x5B13A80", Offset = "0x5B12A80", VA = "0x5B13A80", Slot = "2")]
	bool ValidTarget()
	{
		// Lifted from source/cpp/Characters/ITargetable.c (Characters.ITargetable$$ValidTarget): clean
		return true;
	}
}
