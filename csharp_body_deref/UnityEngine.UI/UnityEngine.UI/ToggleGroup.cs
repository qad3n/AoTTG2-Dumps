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
		[Address(RVA = "0x6CFC4E0", Offset = "0x6CFB4E0", VA = "0x6CFC4E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x6CFC4F0", Offset = "0x6CFB4F0", VA = "0x6CFC4F0")]
		set
		{
		}
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x6CFC500", Offset = "0x6CFB500", VA = "0x6CFC500")]
	protected ToggleGroup()
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x6CFC580", Offset = "0x6CFB580", VA = "0x6CFC580", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x6CFC5A0", Offset = "0x6CFB5A0", VA = "0x6CFC5A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x6CFC5C0", Offset = "0x6CFB5C0", VA = "0x6CFC5C0")]
	private void ValidateToggleIsInGroup(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x6CFC000", Offset = "0x6CFB000", VA = "0x6CFC000")]
	public void NotifyToggleOn(Toggle toggle, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x6CFBEB0", Offset = "0x6CFAEB0", VA = "0x6CFBEB0")]
	public void UnregisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x6CFBF30", Offset = "0x6CFAF30", VA = "0x6CFBF30")]
	public void RegisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x6CFB5E0", Offset = "0x6CFA5E0", VA = "0x6CFB5E0")]
	public void EnsureValidState()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x6CFC1C0", Offset = "0x6CFB1C0", VA = "0x6CFC1C0")]
	public bool AnyTogglesOn()
	{
		return default(bool);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x6CFC700", Offset = "0x6CFB700", VA = "0x6CFC700")]
	public IEnumerable<Toggle> ActiveToggles()
	{
		return null;
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x6CFC810", Offset = "0x6CFB810", VA = "0x6CFC810")]
	public Toggle GetFirstActiveToggle()
	{
		return null;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x6CFC880", Offset = "0x6CFB880", VA = "0x6CFC880")]
	public void SetAllTogglesOff(bool sendCallback = true)
	{
	}
}
