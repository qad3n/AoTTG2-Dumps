// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002DC")]
public abstract class DebugUIHandlerField<T> : DebugUIHandlerWidget where T : DebugUI.Widget
{
	[Token(Token = "0x4000D46")]
	[FieldOffset(Offset = "0x0")]
	public Text nextButtonText;

	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x0")]
	public Text previousButtonText;

	[Token(Token = "0x4000D48")]
	[FieldOffset(Offset = "0x0")]
	public Text nameLabel;

	[Token(Token = "0x4000D49")]
	[FieldOffset(Offset = "0x0")]
	public Text valueLabel;

	[Token(Token = "0x4000D4A")]
	[FieldOffset(Offset = "0x0")]
	protected internal T m_Field;

	[Token(Token = "0x6001434")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001435")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001436")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001437")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001438")]
	public abstract void UpdateValueLabel();

	[Token(Token = "0x6001439")]
	protected void SetLabelText(string text)
	{
	}

	[Token(Token = "0x600143A")]
	protected DebugUIHandlerField()
	{
	}
}
