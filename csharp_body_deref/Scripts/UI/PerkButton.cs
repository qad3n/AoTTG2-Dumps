// ==================== AoTTG2 cross-reference ====================
// Type: UI.PerkButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PerkButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000728")]
internal class PerkButton : Button
{
	[Token(Token = "0x40023BC")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x40023BD")]
	[FieldOffset(Offset = "0x110")]
	private float _offset;

	[Token(Token = "0x600463D")]
	[Address(RVA = "0x2216C30", Offset = "0x2215230", VA = "0x182216C30")]
	private new void Awake()
	{
	}

	[Token(Token = "0x600463E")]
	[Address(RVA = "0x2216E80", Offset = "0x2215480", VA = "0x182216E80", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style, float offset)
	{
	}

	[Token(Token = "0x600463F")]
	[Address(RVA = "0x2216CC0", Offset = "0x22152C0", VA = "0x182216CC0", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6004640")]
	[Address(RVA = "0x18F43B0", Offset = "0x18F29B0", VA = "0x1818F43B0")]
	public PerkButton()
	{
	}
}
