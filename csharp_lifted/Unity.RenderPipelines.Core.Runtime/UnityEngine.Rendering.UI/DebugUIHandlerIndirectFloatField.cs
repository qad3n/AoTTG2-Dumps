// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerIndirectFloatField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002E1")]
public class DebugUIHandlerIndirectFloatField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000D59")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000D5B")]
	[FieldOffset(Offset = "0x70")]
	public Func<float> getter;

	[Token(Token = "0x4000D5C")]
	[FieldOffset(Offset = "0x78")]
	public Action<float> setter;

	[Token(Token = "0x4000D5D")]
	[FieldOffset(Offset = "0x80")]
	public Func<float> incStepGetter;

	[Token(Token = "0x4000D5E")]
	[FieldOffset(Offset = "0x88")]
	public Func<float> incStepMultGetter;

	[Token(Token = "0x4000D5F")]
	[FieldOffset(Offset = "0x90")]
	public Func<float> decimalsGetter;

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x65A6D50", Offset = "0x65A5D50", VA = "0x65A6D50")]
	public void Init()
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x65A9300", Offset = "0x65A8300", VA = "0x65A9300", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x65A9360", Offset = "0x65A8360", VA = "0x65A9360", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x65A93C0", Offset = "0x65A83C0", VA = "0x65A93C0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x65A9490", Offset = "0x65A8490", VA = "0x65A9490", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x65A93D0", Offset = "0x65A83D0", VA = "0x65A93D0")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x65A9200", Offset = "0x65A8200", VA = "0x65A9200")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x65A94A0", Offset = "0x65A84A0", VA = "0x65A94A0")]
	public DebugUIHandlerIndirectFloatField()
	{
	}
}
