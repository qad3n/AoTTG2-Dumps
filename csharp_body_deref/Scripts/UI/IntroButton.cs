// ==================== AoTTG2 cross-reference ====================
// Type: UI.IntroButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/IntroButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000690")]
internal class IntroButton : Button
{
	[Token(Token = "0x400202E")]
	[FieldOffset(Offset = "0x108")]
	private float _fadeTime;

	[Token(Token = "0x400202F")]
	[FieldOffset(Offset = "0x110")]
	private Image _hoverImage;

	[Token(Token = "0x60041A7")]
	[Address(RVA = "0x4301B70", Offset = "0x4301B70", VA = "0x4301B70", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60041A8")]
	[Address(RVA = "0x4302070", Offset = "0x4302070", VA = "0x4302070", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x60041A9")]
	[Address(RVA = "0x4302180", Offset = "0x4302180", VA = "0x4302180")]
	public IntroButton()
	{
	}
}
