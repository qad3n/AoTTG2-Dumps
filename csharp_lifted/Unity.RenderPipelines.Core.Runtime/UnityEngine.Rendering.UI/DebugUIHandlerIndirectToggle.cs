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

[Token(Token = "0x20002E2")]
public class DebugUIHandlerIndirectToggle : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D60")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D61")]
	[FieldOffset(Offset = "0x68")]
	public Toggle valueToggle;

	[Token(Token = "0x4000D62")]
	[FieldOffset(Offset = "0x70")]
	public Image checkmarkImage;

	[Token(Token = "0x4000D63")]
	[FieldOffset(Offset = "0x78")]
	public Func<int, bool> getter;

	[Token(Token = "0x4000D64")]
	[FieldOffset(Offset = "0x80")]
	public Action<int, bool> setter;

	[Token(Token = "0x4000D65")]
	[FieldOffset(Offset = "0x88")]
	internal int index;

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x65A3250", Offset = "0x65A2250", VA = "0x65A3250")]
	public void Init()
	{
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x65A94C0", Offset = "0x65A84C0", VA = "0x65A94C0")]
	private void OnToggleValueChanged(bool value)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x65A94F0", Offset = "0x65A84F0", VA = "0x65A94F0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x65A9550", Offset = "0x65A8550", VA = "0x65A9550", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x65A95B0", Offset = "0x65A85B0", VA = "0x65A95B0", Slot = "8")]
	public override void OnAction()
	{
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x65A3680", Offset = "0x65A2680", VA = "0x65A3680")]
	internal void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x65A9610", Offset = "0x65A8610", VA = "0x65A9610")]
	public DebugUIHandlerIndirectToggle()
	{
	}
}
