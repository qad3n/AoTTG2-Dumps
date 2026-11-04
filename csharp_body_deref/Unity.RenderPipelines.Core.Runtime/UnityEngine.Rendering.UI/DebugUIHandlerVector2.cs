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
	[Address(RVA = "0x2BB2B70", Offset = "0x2BB1170", VA = "0x182BB2B70", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x2BB2AB0", Offset = "0x2BB10B0", VA = "0x182BB2AB0")]
	private void SetValue(float v, bool x = false, bool y = false)
	{
	}

	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x2BB2DF0", Offset = "0x2BB13F0", VA = "0x182BB2DF0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x2BB29A0", Offset = "0x2BB0FA0", VA = "0x182BB29A0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x2BA83E0", Offset = "0x2BA69E0", VA = "0x182BA83E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x2BA8370", Offset = "0x2BA6970", VA = "0x182BA8370", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x2BA8340", Offset = "0x2BA6940", VA = "0x182BA8340", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x2BB28C0", Offset = "0x2BB0EC0", VA = "0x182BB28C0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerVector2()
	{
	}
}
