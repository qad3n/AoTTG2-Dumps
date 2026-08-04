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

[Token(Token = "0x2000222")]
public class DebugUIHandlerIndirectFloatField : DebugUIHandlerWidget
{
	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x60")]
	public Text nameLabel;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x68")]
	public Text valueLabel;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x70")]
	public Func<float> getter;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x78")]
	public Action<float> setter;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x80")]
	public Func<float> incStepGetter;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x88")]
	public Func<float> incStepMultGetter;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x90")]
	public Func<float> decimalsGetter;

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x4C11CE0", Offset = "0x4C11CE0", VA = "0x4C11CE0")]
	public void Init()
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x4C14300", Offset = "0x4C14300", VA = "0x4C14300", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x4C14360", Offset = "0x4C14360", VA = "0x4C14360", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x4C143C0", Offset = "0x4C143C0", VA = "0x4C143C0", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x4C14490", Offset = "0x4C14490", VA = "0x4C14490", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x4C143D0", Offset = "0x4C143D0", VA = "0x4C143D0")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x4C141F0", Offset = "0x4C141F0", VA = "0x4C141F0")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x4C144A0", Offset = "0x4C144A0", VA = "0x4C144A0")]
	public DebugUIHandlerIndirectFloatField()
	{
	}
}
