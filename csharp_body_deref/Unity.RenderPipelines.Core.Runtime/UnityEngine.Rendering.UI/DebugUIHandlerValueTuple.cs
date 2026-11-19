// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerValueTuple
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002F5")]
public class DebugUIHandlerValueTuple : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D9F")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000DA0")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000DA1")]
	[FieldOffset(Offset = "0x70")]
	protected internal DebugUI.ValueTuple m_Field;

	[Token(Token = "0x4000DA2")]
	[FieldOffset(Offset = "0x78")]
	protected internal Text[] valueElements;

	[Token(Token = "0x4000DA3")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x4000DA4")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x4000DA5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x65AD680", Offset = "0x65AC680", VA = "0x65AD680", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x65AD690", Offset = "0x65AC690", VA = "0x65AD690", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x65AD6C0", Offset = "0x65AC6C0", VA = "0x65AD6C0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x65AD6F0", Offset = "0x65AC6F0", VA = "0x65AD6F0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x65ADA90", Offset = "0x65ACA90", VA = "0x65ADA90", Slot = "13")]
	internal virtual void UpdateValueLabels()
	{
	}

	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x65ADCF0", Offset = "0x65ACCF0", VA = "0x65ADCF0")]
	private void Update()
	{
	}

	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x65ADDA0", Offset = "0x65ACDA0", VA = "0x65ADDA0")]
	public DebugUIHandlerValueTuple()
	{
	}
}
