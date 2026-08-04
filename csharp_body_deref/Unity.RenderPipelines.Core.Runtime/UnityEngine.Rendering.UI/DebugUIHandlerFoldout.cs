// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerFoldout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C137A0", Offset = "0x4C137A0", VA = "0x4C137A0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x4C13B60", Offset = "0x4C13B60", VA = "0x4C13B60", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x4C13C30", Offset = "0x4C13C30", VA = "0x4C13C30", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x4C13C60", Offset = "0x4C13C60", VA = "0x4C13C60", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x4C13C90", Offset = "0x4C13C90", VA = "0x4C13C90", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x4C13CC0", Offset = "0x4C13CC0", VA = "0x4C13CC0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x4C13B30", Offset = "0x4C13B30", VA = "0x4C13B30")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x4C13D00", Offset = "0x4C13D00", VA = "0x4C13D00", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x4C13DB0", Offset = "0x4C13DB0", VA = "0x4C13DB0")]
	public DebugUIHandlerFoldout()
	{
	}
}
