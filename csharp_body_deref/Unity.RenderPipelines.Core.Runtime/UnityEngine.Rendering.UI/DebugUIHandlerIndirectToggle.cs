// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerIndirectToggle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x2000223")]
public class DebugUIHandlerIndirectToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x78")]
	public Func<int, bool> getter;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x80")]
	public Action<int, bool> setter;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x88")]
	internal int index;

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x4C0E520", Offset = "0x4C0E520", VA = "0x4C0E520")]
	public void Init()
	{
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x4C144B0", Offset = "0x4C144B0", VA = "0x4C144B0")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x4C144E0", Offset = "0x4C144E0", VA = "0x4C144E0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x4C14540", Offset = "0x4C14540", VA = "0x4C14540", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x4C145A0", Offset = "0x4C145A0", VA = "0x4C145A0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x4C0E930", Offset = "0x4C0E930", VA = "0x4C0E930")]
	internal void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x4C14600", Offset = "0x4C14600", VA = "0x4C14600")]
	public DebugUIHandlerIndirectToggle()
	{
	}
}
