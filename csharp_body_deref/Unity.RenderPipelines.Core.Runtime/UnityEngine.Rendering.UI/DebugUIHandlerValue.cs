using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000234")]
public class DebugUIHandlerValue : DebugUIHandlerWidget
{
	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Value m_Field;

	[Token(Token = "0x40008C6")]
	[FieldOffset(Offset = "0x78")]
	protected internal float m_Timer;

	[Token(Token = "0x40008C7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x48F2DA0", Offset = "0x48F2DA0", VA = "0x48F2DA0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x48F2DB0", Offset = "0x48F2DB0", VA = "0x48F2DB0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x48F2E40", Offset = "0x48F2E40", VA = "0x48F2E40", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x48F2EA0", Offset = "0x48F2EA0", VA = "0x48F2EA0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x48F2F00", Offset = "0x48F2F00", VA = "0x48F2F00")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x48F3080", Offset = "0x48F3080", VA = "0x48F3080")]
	public DebugUIHandlerValue()
	{
	}
}
