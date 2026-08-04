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

[Token(Token = "0x2000078")]
[AddComponentMenu("UI/Toggle Group", 31)]
[DisallowMultipleComponent]
public class ToggleGroup : UIBehaviour
{
	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_AllowSwitchOff;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x28")]
	protected List<Toggle> m_Toggles;

	[Token(Token = "0x17000150")]
	public bool allowSwitchOff
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x50EC5F0", Offset = "0x50EC5F0", VA = "0x50EC5F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x50EC600", Offset = "0x50EC600", VA = "0x50EC600")]
		set
		{
		}
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x50EC610", Offset = "0x50EC610", VA = "0x50EC610")]
	protected ToggleGroup()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x50EC690", Offset = "0x50EC690", VA = "0x50EC690", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x50EC6B0", Offset = "0x50EC6B0", VA = "0x50EC6B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x50EC6D0", Offset = "0x50EC6D0", VA = "0x50EC6D0")]
	private void ValidateToggleIsInGroup(Toggle toggle)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x50EC0F0", Offset = "0x50EC0F0", VA = "0x50EC0F0")]
	public void NotifyToggleOn(Toggle toggle, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x50EBFA0", Offset = "0x50EBFA0", VA = "0x50EBFA0")]
	public void UnregisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x50EC020", Offset = "0x50EC020", VA = "0x50EC020")]
	public void RegisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x50EB620", Offset = "0x50EB620", VA = "0x50EB620")]
	public void EnsureValidState()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x50EC2D0", Offset = "0x50EC2D0", VA = "0x50EC2D0")]
	public bool AnyTogglesOn()
	{
		return default(bool);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x50EC810", Offset = "0x50EC810", VA = "0x50EC810")]
	public IEnumerable<Toggle> ActiveToggles()
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x50EC920", Offset = "0x50EC920", VA = "0x50EC920")]
	public Toggle GetFirstActiveToggle()
	{
		return null;
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x50EC990", Offset = "0x50EC990", VA = "0x50EC990")]
	public void SetAllTogglesOff(bool sendCallback = true)
	{
	}
}
