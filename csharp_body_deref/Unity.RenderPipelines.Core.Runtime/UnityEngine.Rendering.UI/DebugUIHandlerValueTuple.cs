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

[Token(Token = "0x2000234")]
public class DebugUIHandlerValueTuple : DebugUIHandlerWidget
{
	[Token(Token = "0x40008C7")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x40008C8")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x40008C9")]
	[FieldOffset(Offset = "0x70")]
	protected internal DebugUI.ValueTuple m_Field;

	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x78")]
	protected internal Text[] valueElements;

	[Token(Token = "0x40008CB")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x80")]
	private float m_Timer;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_ZeroColor;

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x4C17E60", Offset = "0x4C17E60", VA = "0x4C17E60", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x4C17E70", Offset = "0x4C17E70", VA = "0x4C17E70", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x4C17EA0", Offset = "0x4C17EA0", VA = "0x4C17EA0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x4C17ED0", Offset = "0x4C17ED0", VA = "0x4C17ED0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x4C18270", Offset = "0x4C18270", VA = "0x4C18270", Slot = "13")]
	internal virtual void UpdateValueLabels()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x4C184E0", Offset = "0x4C184E0", VA = "0x4C184E0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x4C18590", Offset = "0x4C18590", VA = "0x4C18590")]
	public DebugUIHandlerValueTuple()
	{
	}
}
