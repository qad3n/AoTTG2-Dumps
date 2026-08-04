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

[Token(Token = "0x2000237")]
public class DebugUIHandlerVector3 : DebugUIHandlerWidget
{
	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x70")]
	public DebugUIHandlerIndirectFloatField fieldX;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldY;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldZ;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x88")]
	private DebugUI.Vector3Field m_Field;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x90")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x4C191A0", Offset = "0x4C191A0", VA = "0x4C191A0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x4C19660", Offset = "0x4C19660", VA = "0x4C19660")]
	private void SetValue(float v, bool x = false, bool y = false, bool z = false)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x4C19520", Offset = "0x4C19520", VA = "0x4C19520")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x4C19720", Offset = "0x4C19720", VA = "0x4C19720", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4C19800", Offset = "0x4C19800", VA = "0x4C19800", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x4C19830", Offset = "0x4C19830", VA = "0x4C19830", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4C19850", Offset = "0x4C19850", VA = "0x4C19850", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x4C19870", Offset = "0x4C19870", VA = "0x4C19870", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4C198A0", Offset = "0x4C198A0", VA = "0x4C198A0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4C19960", Offset = "0x4C19960", VA = "0x4C19960")]
	public DebugUIHandlerVector3()
	{
	}
}
