using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000235")]
public class DebugUIHandlerValueTuple : DebugUIHandlerWidget
{
	[Token(Token = "0x40008C8")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C9")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x70")]
	protected internal DebugUI.ValueTuple m_Field;

	[Token(Token = "0x40008CB")]
	[FieldOffset(Offset = "0x78")]
	protected internal Text[] valueElements;

	[Token(Token = "0x40008CC")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x48F30E0", Offset = "0x48F30E0", VA = "0x48F30E0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x48F30F0", Offset = "0x48F30F0", VA = "0x48F30F0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x48F3120", Offset = "0x48F3120", VA = "0x48F3120", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x48F3150", Offset = "0x48F3150", VA = "0x48F3150", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x48F34F0", Offset = "0x48F34F0", VA = "0x48F34F0", Slot = "13")]
	internal virtual void UpdateValueLabels()
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x48F3760", Offset = "0x48F3760", VA = "0x48F3760")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x48F3810", Offset = "0x48F3810", VA = "0x48F3810")]
	public DebugUIHandlerValueTuple()
	{
	}
}
