// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerRenderingLayerField
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x65AB350", Offset = "0x65AA350", VA = "0x65AB350", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x65AB710", Offset = "0x65AA710", VA = "0x65AB710")]
	private bool GetValue(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x65AB790", Offset = "0x65AA790", VA = "0x65AB790")]
	private void SetValue(int index, bool value)
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x65AB870", Offset = "0x65AA870", VA = "0x65AB870", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x65AB950", Offset = "0x65AA950", VA = "0x65AB950", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x65AB980", Offset = "0x65AA980", VA = "0x65AB980", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x65AB9A0", Offset = "0x65AA9A0", VA = "0x65AB9A0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x65AB9C0", Offset = "0x65AA9C0", VA = "0x65AB9C0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x65AB9F0", Offset = "0x65AA9F0", VA = "0x65AB9F0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x65ABAB0", Offset = "0x65AAAB0", VA = "0x65ABAB0")]
	public DebugUIHandlerRenderingLayerField()
	{
	}
}
