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

[Token(Token = "0x200022D")]
public class DebugUIHandlerProgressBar : DebugUIHandlerWidget
{
	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x70")]
	public RectTransform progressBarRect;

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x78")]
	private DebugUI.ProgressBarValue m_Value;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x6000EFB")]
	[Address(RVA = "0x4C161E0", Offset = "0x4C161E0", VA = "0x4C161E0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x4C161F0", Offset = "0x4C161F0", VA = "0x4C161F0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x4C16380", Offset = "0x4C16380", VA = "0x4C16380", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x4C163B0", Offset = "0x4C163B0", VA = "0x4C163B0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x4C163E0", Offset = "0x4C163E0", VA = "0x4C163E0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x4C16280", Offset = "0x4C16280", VA = "0x4C16280")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x4C16450", Offset = "0x4C16450", VA = "0x4C16450")]
	public DebugUIHandlerProgressBar()
	{
	}
}
