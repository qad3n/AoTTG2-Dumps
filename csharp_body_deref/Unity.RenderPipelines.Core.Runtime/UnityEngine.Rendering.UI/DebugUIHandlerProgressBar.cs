// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerProgressBar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002EC")]
public class DebugUIHandlerProgressBar : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D82")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D83")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D84")]
	[FieldOffset(Offset = "0x70")]
	public RectTransform progressBarRect;

	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x78")]
	private DebugUI.ProgressBarValue m_Value;

	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x65AB0B0", Offset = "0x65AA0B0", VA = "0x65AB0B0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x65AB0C0", Offset = "0x65AA0C0", VA = "0x65AB0C0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x65AB260", Offset = "0x65AA260", VA = "0x65AB260", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x65AB290", Offset = "0x65AA290", VA = "0x65AB290", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x65AB2C0", Offset = "0x65AA2C0", VA = "0x65AB2C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x65AB160", Offset = "0x65AA160", VA = "0x65AB160")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x65AB330", Offset = "0x65AA330", VA = "0x65AB330")]
	public DebugUIHandlerProgressBar()
	{
	}
}
