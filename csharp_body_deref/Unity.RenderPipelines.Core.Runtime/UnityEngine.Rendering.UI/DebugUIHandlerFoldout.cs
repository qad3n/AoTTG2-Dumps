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

[Token(Token = "0x20002DE")]
public class DebugUIHandlerFoldout : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D4E")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D4F")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D50")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Foldout m_Field;

	[Token(Token = "0x4000D51")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x4000D52")]
	private const float k_FoldoutXOffset = 215f;

	[Token(Token = "0x4000D53")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x65A8710", Offset = "0x65A7710", VA = "0x65A8710", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x65A8AD0", Offset = "0x65A7AD0", VA = "0x65A8AD0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x65A8BA0", Offset = "0x65A7BA0", VA = "0x65A8BA0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x65A8BD0", Offset = "0x65A7BD0", VA = "0x65A8BD0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x65A8C20", Offset = "0x65A7C20", VA = "0x65A8C20", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x65A8C70", Offset = "0x65A7C70", VA = "0x65A8C70", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x65A8AA0", Offset = "0x65A7AA0", VA = "0x65A8AA0")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x65A8CD0", Offset = "0x65A7CD0", VA = "0x65A8CD0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x65A8D90", Offset = "0x65A7D90", VA = "0x65A8D90")]
	public DebugUIHandlerFoldout()
	{
	}
}
