using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004A0")]
internal class CharacterSpawner : MonoBehaviour
{
	[Token(Token = "0x60031B8")]
	[Address(RVA = "0x3E9DE50", Offset = "0x3E9DE50", VA = "0x3E9DE50")]
	public static BaseCharacter Spawn(string name, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x60031B9")]
	[Address(RVA = "0x3E9DF50", Offset = "0x3E9DF50", VA = "0x3E9DF50")]
	public CharacterSpawner()
	{
	}
}
