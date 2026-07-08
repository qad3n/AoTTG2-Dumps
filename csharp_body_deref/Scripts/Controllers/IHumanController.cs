using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000489")]
internal interface IHumanController
{
	[Token(Token = "0x60030B3")]
	bool MovingLeft();

	[Token(Token = "0x60030B4")]
	bool MovingRight();

	[Token(Token = "0x60030B5")]
	bool UsingGas();

	[Token(Token = "0x60030B6")]
	bool HookingLeft();

	[Token(Token = "0x60030B7")]
	bool HookingRight();

	[Token(Token = "0x60030B8")]
	bool HookingBoth();

	[Token(Token = "0x60030B9")]
	[Address(RVA = "0x3E90340", Offset = "0x3E90340", VA = "0x3E90340", Slot = "6")]
	Vector3 GetAimPoint()
	{
		return default(Vector3);
	}
}
