using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035A")]
internal interface IStyleDataGroup<T>
{
	[Token(Token = "0x600158E")]
	T Copy();

	[Token(Token = "0x600158F")]
	void CopyFrom(ref T other);
}
