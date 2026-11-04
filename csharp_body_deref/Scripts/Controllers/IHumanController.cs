// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.IHumanController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/IHumanController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000625")]
internal interface IHumanController
{
	[Token(Token = "0x6003C7B")]
	bool MovingLeft();

	[Token(Token = "0x6003C7C")]
	bool MovingRight();

	[Token(Token = "0x6003C7D")]
	bool UsingGas();

	[Token(Token = "0x6003C7E")]
	bool HookingLeft();

	[Token(Token = "0x6003C7F")]
	bool HookingRight();

	[Token(Token = "0x6003C80")]
	bool HookingBoth();

	[Token(Token = "0x6003C81")]
	[Address(RVA = "0x528050", Offset = "0x526650", VA = "0x180528050", Slot = "6")]
	Vector3 GetAimPoint()
	{
		return default(Vector3);
	}
}
