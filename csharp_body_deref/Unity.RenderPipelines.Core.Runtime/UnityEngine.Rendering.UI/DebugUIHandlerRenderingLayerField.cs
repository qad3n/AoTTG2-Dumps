// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerRenderingLayerField
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002ED")]
public class DebugUIHandlerRenderingLayerField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D89")]
	[FieldOffset(Offset = "0x70")]
	public List<DebugUIHandlerIndirectToggle> toggles;

	[Token(Token = "0x4000D8A")]
	[FieldOffset(Offset = "0x78")]
	private DebugUI.RenderingLayerField m_Field;

	[Token(Token = "0x4000D8B")]
	[FieldOffset(Offset = "0x80")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x2BAFFF0", Offset = "0x2BAE5F0", VA = "0x182BAFFF0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x2BAFC80", Offset = "0x2BAE280", VA = "0x182BAFC80")]
	private bool GetValue(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x2BAFF00", Offset = "0x2BAE500", VA = "0x182BAFF00")]
	private void SetValue(int index, bool value)
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x2BAFDF0", Offset = "0x2BAE3F0", VA = "0x182BAFDF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x2BA83E0", Offset = "0x2BA69E0", VA = "0x182BA83E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x2BA8370", Offset = "0x2BA6970", VA = "0x182BA8370", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x2BA8340", Offset = "0x2BA6940", VA = "0x182BA8340", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x2BAFD10", Offset = "0x2BAE310", VA = "0x182BAFD10", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerRenderingLayerField()
	{
	}
}
