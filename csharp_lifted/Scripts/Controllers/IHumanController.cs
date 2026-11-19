// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.IHumanController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/IHumanController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000684")]
internal interface IHumanController
{
	[Token(Token = "0x6003F0B")]
	bool MovingLeft();

	[Token(Token = "0x6003F0C")]
	bool MovingRight();

	[Token(Token = "0x6003F0D")]
	bool UsingGas();

	[Token(Token = "0x6003F0E")]
	bool HookingLeft();

	[Token(Token = "0x6003F0F")]
	bool HookingRight();

	[Token(Token = "0x6003F10")]
	bool HookingBoth();

	[Token(Token = "0x6003F11")]
	[Address(RVA = "0x5AAF890", Offset = "0x5AAE890", VA = "0x5AAF890", Slot = "6")]
	Vector3 GetAimPoint()
	{
		// Lifted from source/cpp/Controllers/IHumanController.c (Controllers.IHumanController$$GetAimPoint): clean
		return (Vector3)(Vector3.zeroVector);
	}
}
