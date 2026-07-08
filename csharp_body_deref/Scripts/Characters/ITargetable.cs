using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004F0")]
internal interface ITargetable
{
	[Token(Token = "0x6003430")]
	string GetTeam();

	[Token(Token = "0x6003431")]
	Vector3 GetPosition();

	[Token(Token = "0x6003432")]
	[Address(RVA = "0x3EF0740", Offset = "0x3EF0740", VA = "0x3EF0740", Slot = "2")]
	bool ValidTarget()
	{
		return default(bool);
	}
}
