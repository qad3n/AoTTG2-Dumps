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

[Token(Token = "0x20004CE")]
internal interface IHumanController
{
	[Token(Token = "0x60032C0")]
	bool MovingLeft();

	[Token(Token = "0x60032C1")]
	bool MovingRight();

	[Token(Token = "0x60032C2")]
	bool UsingGas();

	[Token(Token = "0x60032C3")]
	bool HookingLeft();

	[Token(Token = "0x60032C4")]
	bool HookingRight();

	[Token(Token = "0x60032C5")]
	bool HookingBoth();

	[Token(Token = "0x60032C6")]
	[Address(RVA = "0x419C8E0", Offset = "0x419C8E0", VA = "0x419C8E0", Slot = "6")]
	Vector3 GetAimPoint()
	{
		return default(Vector3);
	}
}
