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
		[Address(RVA = "0x4DC4CA0", Offset = "0x4DC4CA0", VA = "0x4DC4CA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004EA")]
		[Address(RVA = "0x4DC4CB0", Offset = "0x4DC4CB0", VA = "0x4DC4CB0")]
		set
		{
		}
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x4DC4CC0", Offset = "0x4DC4CC0", VA = "0x4DC4CC0")]
	protected ToggleGroup()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4DC4D40", Offset = "0x4DC4D40", VA = "0x4DC4D40", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4DC4D60", Offset = "0x4DC4D60", VA = "0x4DC4D60", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4DC4D80", Offset = "0x4DC4D80", VA = "0x4DC4D80")]
	private void ValidateToggleIsInGroup(Toggle toggle)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x4DC47A0", Offset = "0x4DC47A0", VA = "0x4DC47A0")]
	public void NotifyToggleOn(Toggle toggle, bool sendCallback = true)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x4DC4650", Offset = "0x4DC4650", VA = "0x4DC4650")]
	public void UnregisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4DC46D0", Offset = "0x4DC46D0", VA = "0x4DC46D0")]
	public void RegisterToggle(Toggle toggle)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4DC3CD0", Offset = "0x4DC3CD0", VA = "0x4DC3CD0")]
	public void EnsureValidState()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4DC4980", Offset = "0x4DC4980", VA = "0x4DC4980")]
	public bool AnyTogglesOn()
	{
		return default(bool);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4DC4EC0", Offset = "0x4DC4EC0", VA = "0x4DC4EC0")]
	public IEnumerable<Toggle> ActiveToggles()
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x4DC4FD0", Offset = "0x4DC4FD0", VA = "0x4DC4FD0")]
	public Toggle GetFirstActiveToggle()
	{
		return null;
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4DC5040", Offset = "0x4DC5040", VA = "0x4DC5040")]
	public void SetAllTogglesOff(bool sendCallback = true)
	{
	}
}
