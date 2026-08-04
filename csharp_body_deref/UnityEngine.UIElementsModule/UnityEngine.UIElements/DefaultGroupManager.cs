// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultGroupManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50472B0", Offset = "0x50472B0", VA = "0x50472B0", Slot = "4")]
	public void Init(IGroupBox groupBox)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x50472C0", Offset = "0x50472C0", VA = "0x50472C0", Slot = "5")]
	public void OnOptionSelectionChanged(IGroupBoxOption selectedOption)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x50474D0", Offset = "0x50474D0", VA = "0x50474D0", Slot = "6")]
	public void RegisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x5047630", Offset = "0x5047630", VA = "0x5047630", Slot = "7")]
	public void UnregisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x5046A10", Offset = "0x5046A10", VA = "0x5046A10")]
	public DefaultGroupManager()
	{
	}
}
