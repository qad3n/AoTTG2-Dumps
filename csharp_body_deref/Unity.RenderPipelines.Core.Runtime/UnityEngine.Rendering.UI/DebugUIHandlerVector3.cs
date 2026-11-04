// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerVector3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F7")]
public class DebugUIHandlerVector3 : DebugUIHandlerWidget
{
	[Token(Token = "0x4000DAC")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldZ;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x88")]
	private DebugUI.Vector3Field m_Field;

	[Token(Token = "0x4000DB2")]
	[FieldOffset(Offset = "0x90")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x2BB3430", Offset = "0x2BB1A30", VA = "0x182BB3430", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x2BB3350", Offset = "0x2BB1950", VA = "0x182BB3350")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false)
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x2BB37A0", Offset = "0x2BB1DA0", VA = "0x182BB37A0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x2BB3240", Offset = "0x2BB1840", VA = "0x182BB3240", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x2BA83E0", Offset = "0x2BA69E0", VA = "0x182BA83E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x2BA8370", Offset = "0x2BA6970", VA = "0x182BA8370", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x2BA8340", Offset = "0x2BA6940", VA = "0x182BA8340", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x2BB3160", Offset = "0x2BB1760", VA = "0x182BB3160", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerVector3()
	{
	}
}
