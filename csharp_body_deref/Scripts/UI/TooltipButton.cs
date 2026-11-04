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

[Token(Token = "0x200075A")]
internal class TooltipButton : Button
{
	[Token(Token = "0x4002474")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x6004799")]
	[Address(RVA = "0x22396C0", Offset = "0x2237CC0", VA = "0x1822396C0")]
	private new void Awake()
	{
	}

	[Token(Token = "0x600479A")]
	[Address(RVA = "0x22398E0", Offset = "0x2237EE0", VA = "0x1822398E0", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style)
	{
	}

	[Token(Token = "0x600479B")]
	[Address(RVA = "0x2239720", Offset = "0x2237D20", VA = "0x182239720", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x600479C")]
	[Address(RVA = "0x18F43B0", Offset = "0x18F29B0", VA = "0x1818F43B0")]
	public TooltipButton()
	{
	}
}
