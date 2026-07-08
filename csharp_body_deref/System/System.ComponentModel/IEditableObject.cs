using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002E5")]
public interface IEditableObject
{
	[Token(Token = "0x60012CA")]
	void BeginEdit();

	[Token(Token = "0x60012CB")]
	void EndEdit();

	[Token(Token = "0x60012CC")]
	void CancelEdit();
}
