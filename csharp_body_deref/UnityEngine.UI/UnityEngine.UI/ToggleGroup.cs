// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ToggleGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x2000076")]
[AddComponentMenu("UI (Canvas)/Toggle Group", 31)]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("ToggleGroup")]
public class ToggleGroup : UIBehaviour
{
	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_AllowSwitchOff;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x28")]
	protected List<Toggle> m_Toggles;

	[Token(Token = "0x17000151")]
	public bool allowSwitchOff
	{
		[Token(Token = "0x60004F5")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x32EDDF0", Offset = "0x32EC3F0", VA = "0x1832EDDF0")]
	protected ToggleGroup()
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x32EDA10", Offset = "0x32EC010", VA = "0x1832EDA10", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x32EDA10", Offset = "0x32EC010", VA = "0x1832EDA10", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x32EDCA0", Offset = "0x32EC2A0", VA = "0x1832EDCA0")]
	private void ValidateToggleIsInGroup(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x32ED7B0", Offset = "0x32EBDB0", VA = "0x1832ED7B0")]
	public void NotifyToggleOn(Toggle toggle, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x32EDC20", Offset = "0x32EC220", VA = "0x1832EDC20")]
	public void UnregisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x32EDA30", Offset = "0x32EC030", VA = "0x1832EDA30")]
	public void RegisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x32ED350", Offset = "0x32EB950", VA = "0x1832ED350")]
	public void EnsureValidState()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x32ED200", Offset = "0x32EB800", VA = "0x1832ED200")]
	public bool AnyTogglesOn()
	{
		return default(bool);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x32ED0E0", Offset = "0x32EB6E0", VA = "0x1832ED0E0")]
	public IEnumerable<Toggle> ActiveToggles()
	{
		return null;
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x32ED740", Offset = "0x32EBD40", VA = "0x1832ED740")]
	public Toggle GetFirstActiveToggle()
	{
		return null;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x32EDB10", Offset = "0x32EC110", VA = "0x1832EDB10")]
	public void SetAllTogglesOff(bool sendCallback = true)
	{
	}
}
