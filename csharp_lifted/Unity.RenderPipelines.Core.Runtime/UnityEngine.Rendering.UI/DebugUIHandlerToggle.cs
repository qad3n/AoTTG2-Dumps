// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerToggle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002EF")]
public class DebugUIHandlerToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D8D")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D8E")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x4000D8F")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x4000D90")]
	[FieldOffset(Offset = "0x78")]
	protected internal DebugUI.BoolField m_Field;

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x65AC380", Offset = "0x65AB380", VA = "0x65AC380", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x65AC4A0", Offset = "0x65AB4A0", VA = "0x65AC4A0")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x65AC4D0", Offset = "0x65AB4D0", VA = "0x65AC4D0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x65AC530", Offset = "0x65AB530", VA = "0x65AC530", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x65AC590", Offset = "0x65AB590", VA = "0x65AC590", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x65AC610", Offset = "0x65AB610", VA = "0x65AC610", Slot = "13")]
	protected internal virtual void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x65AC6B0", Offset = "0x65AB6B0", VA = "0x65AC6B0")]
	public DebugUIHandlerToggle()
	{
	}
}
