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

[Token(Token = "0x2000535")]
internal interface ITargetable
{
	[Token(Token = "0x600363E")]
	string GetTeam();

	[Token(Token = "0x600363F")]
	Vector3 GetPosition();

	[Token(Token = "0x6003640")]
	[Address(RVA = "0x41FD000", Offset = "0x41FD000", VA = "0x41FD000", Slot = "2")]
	bool ValidTarget()
	{
		return default(bool);
	}
}
