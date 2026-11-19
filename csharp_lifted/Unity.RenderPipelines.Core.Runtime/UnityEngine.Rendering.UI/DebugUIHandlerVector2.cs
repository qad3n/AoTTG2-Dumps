// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVector2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F6")]
public class DebugUIHandlerVector2 : DebugUIHandlerWidget
{
	[Token(Token = "0x4000DA6")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000DA7")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000DA8")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x4000DA9")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x4000DAA")]
	[FieldOffset(Offset = "0x80")]
	private DebugUI.Vector2Field m_Field;

	[Token(Token = "0x4000DAB")]
	[FieldOffset(Offset = "0x88")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x65ADE00", Offset = "0x65ACE00", VA = "0x65ADE00", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x65AE1D0", Offset = "0x65AD1D0", VA = "0x65AE1D0")]
	private void SetValue(float v, bool x = false, bool y = false)
	{
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x65AE090", Offset = "0x65AD090", VA = "0x65AE090")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x65AE270", Offset = "0x65AD270", VA = "0x65AE270", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x65AE350", Offset = "0x65AD350", VA = "0x65AE350", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x65AE380", Offset = "0x65AD380", VA = "0x65AE380", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x65AE3A0", Offset = "0x65AD3A0", VA = "0x65AE3A0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x65AE3C0", Offset = "0x65AD3C0", VA = "0x65AE3C0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x65AE3F0", Offset = "0x65AD3F0", VA = "0x65AE3F0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x65AE4B0", Offset = "0x65AD4B0", VA = "0x65AE4B0")]
	public DebugUIHandlerVector2()
	{
	}
}
