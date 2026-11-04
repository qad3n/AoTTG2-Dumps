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
	[Address(RVA = "0x2BADB50", Offset = "0x2BAC150", VA = "0x182BADB50")]
	public void Init()
	{
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x2BACCA0", Offset = "0x2BAB2A0", VA = "0x182BACCA0", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x2BACC20", Offset = "0x2BAB220", VA = "0x182BACC20", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x2BADB70", Offset = "0x2BAC170", VA = "0x182BADB70", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x2BADB60", Offset = "0x2BAC160", VA = "0x182BADB60", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x2BADA80", Offset = "0x2BAC080", VA = "0x182BADA80")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x2BADB80", Offset = "0x2BAC180", VA = "0x182BADB80")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerIndirectFloatField()
	{
	}
}
