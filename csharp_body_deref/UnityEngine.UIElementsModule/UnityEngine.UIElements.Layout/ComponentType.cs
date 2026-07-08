using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200050D")]
internal struct ComponentType
{
	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x0")]
	public int Size;

	[Token(Token = "0x6001F37")]
	public static ComponentType Create<T>() where T : struct
	{
		return default(ComponentType);
	}
}
