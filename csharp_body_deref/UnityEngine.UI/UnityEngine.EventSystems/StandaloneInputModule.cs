using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000BF")]
[AddComponentMenu("Event/Standalone Input Module")]
public class StandaloneInputModule : PointerInputModule
{
	[Token(Token = "0x20000C0")]
	[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", false)]
	public enum InputMode
	{
		[Token(Token = "0x4000337")]
		Mouse,
		[Token(Token = "0x4000338")]
		Buttons
	}

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x68")]
	private float m_PrevActionTime;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x6C")]
	private Vector2 m_LastMoveVector;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x74")]
	private int m_ConsecutiveMoveCount;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x78")]
	private Vector2 m_LastMousePosition;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x80")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x88")]
	private GameObject m_CurrentFocusedGameObject;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x90")]
	private PointerEventData m_InputPointerEvent;

	[Token(Token = "0x400032E")]
	private const float doubleClickTime = 0.3f;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private string m_HorizontalAxis;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private string m_VerticalAxis;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private string m_SubmitButton;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private string m_CancelButton;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private float m_InputActionsPerSecond;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0xBC")]
	[SerializeField]
	private float m_RepeatDelay;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	[FormerlySerializedAs("m_AllowActivationOnMobileDevice")]
	[HideInInspector]
	private bool m_ForceModuleActive;

	[Token(Token = "0x170001E3")]
	[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", false)]
	public InputMode inputMode
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x4DD6E30", Offset = "0x4DD6E30", VA = "0x4DD6E30")]
		get
		{
			return default(InputMode);
		}
	}

	[Token(Token = "0x170001E4")]
	[Obsolete("allowActivationOnMobileDevice has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnMobileDevice
	{
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x4DD6E40", Offset = "0x4DD6E40", VA = "0x4DD6E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x4DD6E50", Offset = "0x4DD6E50", VA = "0x4DD6E50")]
		set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	[Obsolete("forceModuleActive has been deprecated. There is no need to force the module awake as StandaloneInputModule works for all platforms")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x4DD6E60", Offset = "0x4DD6E60", VA = "0x4DD6E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x4DD6E70", Offset = "0x4DD6E70", VA = "0x4DD6E70")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public float inputActionsPerSecond
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x4DD6E80", Offset = "0x4DD6E80", VA = "0x4DD6E80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4DD6E90", Offset = "0x4DD6E90", VA = "0x4DD6E90")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public float repeatDelay
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x4DD6EA0", Offset = "0x4DD6EA0", VA = "0x4DD6EA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x4DD6EB0", Offset = "0x4DD6EB0", VA = "0x4DD6EB0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E8")]
	public string horizontalAxis
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x4DD6EC0", Offset = "0x4DD6EC0", VA = "0x4DD6EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x4DD6ED0", Offset = "0x4DD6ED0", VA = "0x4DD6ED0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public string verticalAxis
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x4DD6EF0", Offset = "0x4DD6EF0", VA = "0x4DD6EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x4DD6F00", Offset = "0x4DD6F00", VA = "0x4DD6F00")]
		set
		{
		}
	}

	[Token(Token = "0x170001EA")]
	public string submitButton
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x4DD6F20", Offset = "0x4DD6F20", VA = "0x4DD6F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x4DD6F30", Offset = "0x4DD6F30", VA = "0x4DD6F30")]
		set
		{
		}
	}

	[Token(Token = "0x170001EB")]
	public string cancelButton
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0x4DD6F50", Offset = "0x4DD6F50", VA = "0x4DD6F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x4DD6F60", Offset = "0x4DD6F60", VA = "0x4DD6F60")]
		set
		{
		}
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x4DD6D50", Offset = "0x4DD6D50", VA = "0x4DD6D50")]
	protected StandaloneInputModule()
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4DD6F80", Offset = "0x4DD6F80", VA = "0x4DD6F80")]
	private bool ShouldIgnoreEventsOnNoFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x4DD6F90", Offset = "0x4DD6F90", VA = "0x4DD6F90", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x4DD7080", Offset = "0x4DD7080", VA = "0x4DD7080")]
	private void ReleaseMouse(PointerEventData pointerEvent, GameObject currentOverGo)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x4DD7570", Offset = "0x4DD7570", VA = "0x4DD7570", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x4DD7830", Offset = "0x4DD7830", VA = "0x4DD7830", Slot = "23")]
	public override void ActivateModule()
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x4DD7940", Offset = "0x4DD7940", VA = "0x4DD7940", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x4DD7950", Offset = "0x4DD7950", VA = "0x4DD7950", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4DD7B40", Offset = "0x4DD7B40", VA = "0x4DD7B40")]
	private bool ProcessTouchEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4DD82A0", Offset = "0x4DD82A0", VA = "0x4DD82A0")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4DD8010", Offset = "0x4DD8010", VA = "0x4DD8010")]
	protected bool SendSubmitEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4DD8C40", Offset = "0x4DD8C40", VA = "0x4DD8C40")]
	private Vector2 GetRawMoveVector()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4DD7D70", Offset = "0x4DD7D70", VA = "0x4DD7D70")]
	protected bool SendMoveEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4DD7D60", Offset = "0x4DD7D60", VA = "0x4DD7D60")]
	protected void ProcessMouseEvent()
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4DD90E0", Offset = "0x4DD90E0", VA = "0x4DD90E0", Slot = "31")]
	[Obsolete("This method is no longer checked, overriding it with return true does nothing!")]
	protected virtual bool ForceAutoSelect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4DD8DF0", Offset = "0x4DD8DF0", VA = "0x4DD8DF0")]
	protected void ProcessMouseEvent(int id)
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x4DD79F0", Offset = "0x4DD79F0", VA = "0x4DD79F0")]
	protected bool SendUpdateEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x4DD90F0", Offset = "0x4DD90F0", VA = "0x4DD90F0")]
	protected void ProcessMousePress(MouseButtonEventData data)
	{
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x4DD9600", Offset = "0x4DD9600", VA = "0x4DD9600")]
	protected GameObject GetCurrentFocusedGameObject()
	{
		return null;
	}
}
