using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000634")]
internal class InputFieldKeyboardNav : MonoBehaviour
{
	[Token(Token = "0x4001EA6")]
	[FieldOffset(Offset = "0x20")]
	private InputField _field;

	[Token(Token = "0x4001EA7")]
	[FieldOffset(Offset = "0x28")]
	private Selectable _next;

	[Token(Token = "0x4001EA8")]
	[FieldOffset(Offset = "0x30")]
	private Selectable _previous;

	[Token(Token = "0x6003EDC")]
	[Address(RVA = "0x3FE4590", Offset = "0x3FE4590", VA = "0x3FE4590")]
	public void Setup(InputField field, Selectable next, Selectable previous)
	{
	}

	[Token(Token = "0x6003EDD")]
	[Address(RVA = "0x3FE62B0", Offset = "0x3FE62B0", VA = "0x3FE62B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003EDE")]
	[Address(RVA = "0x3FE64C0", Offset = "0x3FE64C0", VA = "0x3FE64C0")]
	private void DeleteWord(bool forward)
	{
	}

	[Token(Token = "0x6003EDF")]
	[Address(RVA = "0x3FE6690", Offset = "0x3FE6690", VA = "0x3FE6690")]
	private static int FindWordBoundary(string text, int index, bool forward)
	{
		return default(int);
	}

	[Token(Token = "0x6003EE0")]
	[Address(RVA = "0x3FE6850", Offset = "0x3FE6850", VA = "0x3FE6850")]
	public InputFieldKeyboardNav()
	{
	}
}
