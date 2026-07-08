using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000066")]
public static class ComponentSingleton<TType> where TType : Component
{
	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x0")]
	private static TType s_Instance;

	[Token(Token = "0x1700004F")]
	public static TType instance
	{
		[Token(Token = "0x600055B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600055C")]
	public static void Release()
	{
	}
}
