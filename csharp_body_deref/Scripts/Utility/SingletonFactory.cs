using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006F5")]
internal class SingletonFactory : MonoBehaviour
{
	[Token(Token = "0x6004498")]
	public static T CreateSingleton<T>(T instance) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6004499")]
	[Address(RVA = "0x407C060", Offset = "0x407C060", VA = "0x407C060")]
	public SingletonFactory()
	{
	}
}
