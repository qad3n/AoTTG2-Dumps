using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000219")]
internal class DefaultGroupManager : IGroupManager
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	private List<IGroupBoxOption> m_GroupOptions;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	private IGroupBoxOption m_SelectedOption;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x20")]
	private IGroupBox m_GroupBox;

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x4D1F980", Offset = "0x4D1F980", VA = "0x4D1F980", Slot = "4")]
	public void Init(IGroupBox groupBox)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x4D1F990", Offset = "0x4D1F990", VA = "0x4D1F990", Slot = "5")]
	public void OnOptionSelectionChanged(IGroupBoxOption selectedOption)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x4D1FBA0", Offset = "0x4D1FBA0", VA = "0x4D1FBA0", Slot = "6")]
	public void RegisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x4D1FD00", Offset = "0x4D1FD00", VA = "0x4D1FD00", Slot = "7")]
	public void UnregisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x4D1F0E0", Offset = "0x4D1F0E0", VA = "0x4D1F0E0")]
	public DefaultGroupManager()
	{
	}
}
