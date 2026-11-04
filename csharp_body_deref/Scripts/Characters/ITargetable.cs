// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ITargetable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ITargetable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/ITargetable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000690")]
internal interface ITargetable
{
	[Token(Token = "0x600407E")]
	string GetTeam();

	[Token(Token = "0x600407F")]
	Vector3 GetPosition();

	[Token(Token = "0x6004080")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "2")]
	bool ValidTarget()
	{
		return default(bool);
	}
}
