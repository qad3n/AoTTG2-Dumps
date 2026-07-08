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
	[Address(RVA = "0x48ECC70", Offset = "0x48ECC70", VA = "0x48ECC70")]
	public void Init()
	{
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x48EF290", Offset = "0x48EF290", VA = "0x48EF290", Slot = "6")]
	public override bool OnSelection(bool fromNext, DebugUIHandlerWidget previous)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x48EF2F0", Offset = "0x48EF2F0", VA = "0x48EF2F0", Slot = "7")]
	public override void OnDeselection()
	{
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x48EF350", Offset = "0x48EF350", VA = "0x48EF350", Slot = "9")]
	public override void OnIncrement(bool fast)
	{
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x48EF420", Offset = "0x48EF420", VA = "0x48EF420", Slot = "10")]
	public override void OnDecrement(bool fast)
	{
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x48EF360", Offset = "0x48EF360", VA = "0x48EF360")]
	private void ChangeValue(bool fast, float multiplier)
	{
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x48EF180", Offset = "0x48EF180", VA = "0x48EF180")]
	private void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x48EF430", Offset = "0x48EF430", VA = "0x48EF430")]
	public DebugUIHandlerIndirectFloatField()
	{
	}
}
