// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerFoldout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002DE")]
public class DebugUIHandlerFoldout : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D4E")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D4F")]
	[FieldOffset(Offset = "0x68")]
	public UIFoldout valueToggle;

	[Token(Token = "0x4000D50")]
	[FieldOffset(Offset = "0x70")]
	private DebugUI.Foldout m_Field;

	[Token(Token = "0x4000D51")]
	[FieldOffset(Offset = "0x78")]
	private DebugUIHandlerContainer m_Container;

	[Token(Token = "0x4000D52")]
	private const float k_FoldoutXOffset = 215f;

	[Token(Token = "0x4000D53")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x2BAD160", Offset = "0x2BAB760", VA = "0x182BAD160", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x2BAD050", Offset = "0x2BAB650", VA = "0x182BAD050", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x2BA83A0", Offset = "0x2BA69A0", VA = "0x182BA83A0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x2BAD000", Offset = "0x2BAB600", VA = "0x182BAD000", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x2BACFB0", Offset = "0x2BAB5B0", VA = "0x182BACFB0", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x2BACF40", Offset = "0x2BAB540", VA = "0x182BACF40", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x2BAD5D0", Offset = "0x2BABBD0", VA = "0x182BAD5D0")]
	private void UpdateValue()
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x2BACE70", Offset = "0x2BAB470", VA = "0x182BACE70", Slot = "12")]
	public override DebugUIHandlerWidget Next()
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerFoldout()
	{
	}
}
