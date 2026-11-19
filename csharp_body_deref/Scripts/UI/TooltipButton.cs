// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TooltipButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/TooltipButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000802")]
internal class TooltipButton : Button
{
	[Token(Token = "0x40027E5")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x6004CBB")]
	[Address(RVA = "0x5BF94D0", Offset = "0x5BF84D0", VA = "0x5BF94D0")]
	private new void Awake()
	{
	}

	[Token(Token = "0x6004CBC")]
	[Address(RVA = "0x5BF9520", Offset = "0x5BF8520", VA = "0x5BF9520", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style)
	{
	}

	[Token(Token = "0x6004CBD")]
	[Address(RVA = "0x5BF9640", Offset = "0x5BF8640", VA = "0x5BF9640", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6004CBE")]
	[Address(RVA = "0x5BF97D0", Offset = "0x5BF87D0", VA = "0x5BF97D0")]
	public TooltipButton()
	{
	}
}
