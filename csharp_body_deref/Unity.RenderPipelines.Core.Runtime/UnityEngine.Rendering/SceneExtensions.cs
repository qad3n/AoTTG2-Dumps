using System.Reflection;
using Il2CppDummyDll;
using UnityEngine.SceneManagement;

namespace UnityEngine.Rendering;

[Token(Token = "0x200014B")]
internal static class SceneExtensions
{
	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x0")]
	private static PropertyInfo s_SceneGUID;

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x48ACEB0", Offset = "0x48ACEB0", VA = "0x48ACEB0")]
	public static string GetGUID(this Scene scene)
	{
		return null;
	}
}
