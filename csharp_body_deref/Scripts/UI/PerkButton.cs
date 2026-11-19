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

[Token(Token = "0x20007D0")]
internal class PerkButton : Button
{
	[Token(Token = "0x4002738")]
	[FieldOffset(Offset = "0x108")]
	private string _tooltipMessage;

	[Token(Token = "0x4002739")]
	[FieldOffset(Offset = "0x110")]
	private float _offset;

	[Token(Token = "0x6004B66")]
	[Address(RVA = "0x5BE2240", Offset = "0x5BE1240", VA = "0x5BE2240")]
	private new void Awake()
	{
	}

	[Token(Token = "0x6004B67")]
	[Address(RVA = "0x5BE22D0", Offset = "0x5BE12D0", VA = "0x5BE22D0", Slot = "43")]
	public virtual void Setup(string tooltipMessage, ElementStyle style, float offset)
	{
	}

	[Token(Token = "0x6004B68")]
	[Address(RVA = "0x5BE2460", Offset = "0x5BE1460", VA = "0x5BE2460", Slot = "26")]
	protected override void DoStateTransition(SelectionState state, bool instant)
	{
	}

	[Token(Token = "0x6004B69")]
	[Address(RVA = "0x5BE25E0", Offset = "0x5BE15E0", VA = "0x5BE25E0")]
	public PerkButton()
	{
	}
}
