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
	[Address(RVA = "0x48F1170", Offset = "0x48F1170", VA = "0x48F1170", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x48F1180", Offset = "0x48F1180", VA = "0x48F1180", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x48F1310", Offset = "0x48F1310", VA = "0x48F1310", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x48F1340", Offset = "0x48F1340", VA = "0x48F1340", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x48F1370", Offset = "0x48F1370", VA = "0x48F1370")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x48F1210", Offset = "0x48F1210", VA = "0x48F1210")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x48F13E0", Offset = "0x48F13E0", VA = "0x48F13E0")]
	public DebugUIHandlerProgressBar()
	{
	}
}
