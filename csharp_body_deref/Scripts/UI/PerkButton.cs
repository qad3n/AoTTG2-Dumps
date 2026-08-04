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

[Token(Token = "0x20005B4")]
internal class PerkButton : Button
{
	[Token(Token = "0x4001BF8")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x4001BF9")]
	[FieldOffset(Offset = "0x110")]
	private float _offset;

	[Token(Token = "0x6003AFC")]
	[Address(RVA = "0x426D350", Offset = "0x426D350", VA = "0x426D350")]
	private new void Awake()
	{
	}

	[Token(Token = "0x6003AFD")]
	[Address(RVA = "0x426D3E0", Offset = "0x426D3E0", VA = "0x426D3E0", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style, float offset)
	{
	}

	[Token(Token = "0x6003AFE")]
	[Address(RVA = "0x426D5D0", Offset = "0x426D5D0", VA = "0x426D5D0", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6003AFF")]
	[Address(RVA = "0x426D750", Offset = "0x426D750", VA = "0x426D750")]
	public PerkButton()
	{
	}
}
