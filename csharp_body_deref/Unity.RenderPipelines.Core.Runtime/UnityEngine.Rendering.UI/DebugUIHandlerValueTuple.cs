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
	[Address(RVA = "0x16F6DE0", Offset = "0x16F53E0", VA = "0x1816F6DE0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x2BA8BF0", Offset = "0x2BA71F0", VA = "0x182BA8BF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x2BB1E70", Offset = "0x2BB0470", VA = "0x182BB1E70", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x2BB22B0", Offset = "0x2BB08B0", VA = "0x182BB22B0", Slot = "13")]
	internal virtual void UpdateValueLabels()
	{
	}

	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x2BB2540", Offset = "0x2BB0B40", VA = "0x182BB2540")]
	private void Update()
	{
	}

	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerValueTuple()
	{
	}
}
