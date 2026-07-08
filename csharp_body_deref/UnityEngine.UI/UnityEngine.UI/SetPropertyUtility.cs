using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200006C")]
internal static class SetPropertyUtility
{
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4DBDD40", Offset = "0x4DBDD40", VA = "0x4DBDD40")]
	public static bool SetColor(ref Color currentValue, Color newValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600045F")]
	public static bool SetStruct<T>(ref T currentValue, T newValue) where T : struct
	{
		return default(bool);
	}

	[Token(Token = "0x6000460")]
	public static bool SetClass<T>(ref T currentValue, T newValue) where T : class
	{
		return default(bool);
	}
}
