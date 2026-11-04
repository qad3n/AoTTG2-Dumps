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
	[Address(RVA = "0x2BB1740", Offset = "0x2BAFD40", VA = "0x182BB1740", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x2BB1710", Offset = "0x2BAFD10", VA = "0x182BB1710")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x2BADE20", Offset = "0x2BAC420", VA = "0x182BADE20", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x2BADDB0", Offset = "0x2BAC3B0", VA = "0x182BADDB0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x2BB1690", Offset = "0x2BAFC90", VA = "0x182BB1690", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x2BB1870", Offset = "0x2BAFE70", VA = "0x182BB1870", Slot = "13")]
	protected internal virtual void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerToggle()
	{
	}
}
