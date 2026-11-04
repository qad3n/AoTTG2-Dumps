// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerColor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002D6")]
public class DebugUIHandlerColor : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D36")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D37")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D38")]
	[FieldOffset(Offset = "0x70")]
	public Image colorImage;

	[Token(Token = "0x4000D39")]
	[FieldOffset(Offset = "0x78")]
	public DebugUIHandlerIndirectFloatField fieldR;

	[Token(Token = "0x4000D3A")]
	[FieldOffset(Offset = "0x80")]
	public DebugUIHandlerIndirectFloatField fieldG;

	[Token(Token = "0x4000D3B")]
	[FieldOffset(Offset = "0x88")]
	public DebugUIHandlerIndirectFloatField fieldB;

	[Token(Token = "0x4000D3C")]
	[FieldOffset(Offset = "0x90")]
	public DebugUIHandlerIndirectFloatField fieldA;

	[Token(Token = "0x4000D3D")]
	[FieldOffset(Offset = "0x98")]
	private DebugUI.ColorField m_Field;

	[Token(Token = "0x4000D3E")]
	[FieldOffset(Offset = "0xA0")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x2BAB0C0", Offset = "0x2BA96C0", VA = "0x182BAB0C0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x2BAAFC0", Offset = "0x2BA95C0", VA = "0x182BAAFC0")]
	private void SetValue(float x, bool r = false, bool g = false, bool b = false, bool a = false)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x2BAB5B0", Offset = "0x2BA9BB0", VA = "0x182BAB5B0")]
	private void SetupSettings(DebugUIHandlerIndirectFloatField field)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x2BAAEB0", Offset = "0x2BA94B0", VA = "0x182BAAEB0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x2BA83E0", Offset = "0x2BA69E0", VA = "0x182BA83E0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x2BA8370", Offset = "0x2BA6970", VA = "0x182BA8370", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x2BA8340", Offset = "0x2BA6940", VA = "0x182BA8340", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x2BABBA0", Offset = "0x2BAA1A0", VA = "0x182BABBA0")]
	internal void UpdateColor()
	{
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x2BAADD0", Offset = "0x2BA93D0", VA = "0x182BAADD0", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerColor()
	{
	}
}
