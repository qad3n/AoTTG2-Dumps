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

[Token(Token = "0x200028F")]
internal class DefaultGroupManager : IGroupManager
{
	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x10")]
	private List<IGroupBoxOption> m_GroupOptions;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x18")]
	private IGroupBoxOption m_SelectedOption;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x20")]
	private IGroupBox m_GroupBox;

	[Token(Token = "0x6001165")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "4")]
	public void Init(IGroupBox groupBox)
	{
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x32737E0", Offset = "0x3271DE0", VA = "0x1832737E0", Slot = "5")]
	public void OnOptionSelectionChanged(IGroupBoxOption selectedOption)
	{
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x32739A0", Offset = "0x3271FA0", VA = "0x1832739A0", Slot = "6")]
	public void RegisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x3273AA0", Offset = "0x32720A0", VA = "0x183273AA0", Slot = "7")]
	public void UnregisterOption(IGroupBoxOption option)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x3273B20", Offset = "0x3272120", VA = "0x183273B20")]
	public DefaultGroupManager()
	{
	}
}
