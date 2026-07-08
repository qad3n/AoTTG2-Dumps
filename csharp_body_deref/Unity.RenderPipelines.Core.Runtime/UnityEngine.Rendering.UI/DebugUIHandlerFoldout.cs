using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200021F")]
public class DebugUIHandlerFoldout : DebugUIHandlerWidget
{
	[Token(Token = "0x400087C")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400087D")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x400087E")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Foldout m_Field;

	[Token(Token = "0x400087F")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x4000880")]
	private const float k_FoldoutXOffset = 215f;

	[Token(Token = "0x4000881")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x48EE730", Offset = "0x48EE730", VA = "0x48EE730", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x48EEAF0", Offset = "0x48EEAF0", VA = "0x48EEAF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x48EEBC0", Offset = "0x48EEBC0", VA = "0x48EEBC0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x48EEBF0", Offset = "0x48EEBF0", VA = "0x48EEBF0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x48EEC20", Offset = "0x48EEC20", VA = "0x48EEC20", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x48EEC50", Offset = "0x48EEC50", VA = "0x48EEC50", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x48EEAC0", Offset = "0x48EEAC0", VA = "0x48EEAC0")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x48EEC90", Offset = "0x48EEC90", VA = "0x48EEC90", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x48EED40", Offset = "0x48EED40", VA = "0x48EED40")]
	public DebugUIHandlerFoldout()
	{
	}
}
