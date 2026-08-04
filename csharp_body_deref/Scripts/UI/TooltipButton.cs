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

[Token(Token = "0x2000604")]
internal class TooltipButton : Button
{
	[Token(Token = "0x4001CDF")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x6003CE0")]
	[Address(RVA = "0x4299DB0", Offset = "0x4299DB0", VA = "0x4299DB0")]
	private new void Awake()
	{
	}

	[Token(Token = "0x6003CE1")]
	[Address(RVA = "0x4299E00", Offset = "0x4299E00", VA = "0x4299E00", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style)
	{
	}

	[Token(Token = "0x6003CE2")]
	[Address(RVA = "0x4299F80", Offset = "0x4299F80", VA = "0x4299F80", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6003CE3")]
	[Address(RVA = "0x429A110", Offset = "0x429A110", VA = "0x429A110")]
	public TooltipButton()
	{
	}
}
