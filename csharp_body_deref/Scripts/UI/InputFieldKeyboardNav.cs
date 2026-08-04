// ==================== AoTTG2 cross-reference ====================
// Type: UI.InputFieldKeyboardNav
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InputFieldKeyboardNav.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200067D")]
internal class InputFieldKeyboardNav : MonoBehaviour
{
	[Token(Token = "0x4001FED")]
	[FieldOffset(Offset = "0x20")]
	private InputField _field;

	[Token(Token = "0x4001FEE")]
	[FieldOffset(Offset = "0x28")]
	private Selectable _next;

	[Token(Token = "0x4001FEF")]
	[FieldOffset(Offset = "0x30")]
	private Selectable _previous;

	[Token(Token = "0x6004121")]
	[Address(RVA = "0x42F6C10", Offset = "0x42F6C10", VA = "0x42F6C10")]
	public void Setup(InputField field, Selectable next, Selectable previous)
	{
	}

	[Token(Token = "0x6004122")]
	[Address(RVA = "0x42F8930", Offset = "0x42F8930", VA = "0x42F8930")]
	private void Update()
	{
	}

	[Token(Token = "0x6004123")]
	[Address(RVA = "0x42F8B40", Offset = "0x42F8B40", VA = "0x42F8B40")]
	private void DeleteWord(bool forward)
	{
	}

	[Token(Token = "0x6004124")]
	[Address(RVA = "0x42F8D10", Offset = "0x42F8D10", VA = "0x42F8D10")]
	private static int FindWordBoundary(string text, int index, bool forward)
	{
		return default(int);
	}

	[Token(Token = "0x6004125")]
	[Address(RVA = "0x42F8ED0", Offset = "0x42F8ED0", VA = "0x42F8ED0")]
	public InputFieldKeyboardNav()
	{
	}
}
