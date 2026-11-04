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
	[Address(RVA = "0x16F6DE0", Offset = "0x16F53E0", VA = "0x1816F6DE0", Slot = "4")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x2BAFA40", Offset = "0x2BAE040", VA = "0x182BAFA40", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x2BA8BF0", Offset = "0x2BA71F0", VA = "0x182BA8BF0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x2BAFC00", Offset = "0x2BAE200", VA = "0x182BAFC00")]
	private void Update()
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x2BAFAE0", Offset = "0x2BAE0E0", VA = "0x182BAFAE0")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerProgressBar()
	{
	}
}
