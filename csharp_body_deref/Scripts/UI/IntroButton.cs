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

[Token(Token = "0x20007EB")]
internal class IntroButton : Button
{
	[Token(Token = "0x4002806")]
	[FieldOffset(Offset = "0x108")]
	private float _fadeTime;

	[Token(Token = "0x4002807")]
	[FieldOffset(Offset = "0x110")]
	private Image _hoverImage;

	[Token(Token = "0x6004C9C")]
	[Address(RVA = "0x228A280", Offset = "0x2288880", VA = "0x18228A280", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004C9D")]
	[Address(RVA = "0x228A710", Offset = "0x2288D10", VA = "0x18228A710", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6004C9E")]
	[Address(RVA = "0x228A820", Offset = "0x2288E20", VA = "0x18228A820")]
	public IntroButton()
	{
	}
}
