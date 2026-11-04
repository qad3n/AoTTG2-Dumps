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

[Token(Token = "0x20007D8")]
internal class InputFieldKeyboardNav : MonoBehaviour
{
	[Token(Token = "0x40027C5")]
	[FieldOffset(Offset = "0x20")]
	private InputField _field;

	[Token(Token = "0x40027C6")]
	[FieldOffset(Offset = "0x28")]
	private Selectable _next;

	[Token(Token = "0x40027C7")]
	[FieldOffset(Offset = "0x30")]
	private Selectable _previous;

	[Token(Token = "0x6004C16")]
	[Address(RVA = "0x223AC80", Offset = "0x2239280", VA = "0x18223AC80")]
	public void Setup(InputField field, Selectable next, Selectable previous)
	{
	}

	[Token(Token = "0x6004C17")]
	[Address(RVA = "0x2279F10", Offset = "0x2278510", VA = "0x182279F10")]
	private void Update()
	{
	}

	[Token(Token = "0x6004C18")]
	[Address(RVA = "0x2279AF0", Offset = "0x22780F0", VA = "0x182279AF0")]
	private void DeleteWord(bool forward)
	{
	}

	[Token(Token = "0x6004C19")]
	[Address(RVA = "0x2279DB0", Offset = "0x22783B0", VA = "0x182279DB0")]
	private static int FindWordBoundary(string text, int index, bool forward)
	{
		return default(int);
	}

	[Token(Token = "0x6004C1A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public InputFieldKeyboardNav()
	{
	}
}
