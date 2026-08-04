// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.StandaloneInputModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50FE780", Offset = "0x50FE780", VA = "0x50FE780")]
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
		[Address(RVA = "0x50FE790", Offset = "0x50FE790", VA = "0x50FE790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x50FE7A0", Offset = "0x50FE7A0", VA = "0x50FE7A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	[Obsolete("forceModuleActive has been deprecated. There is no need to force the module awake as StandaloneInputModule works for all platforms")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x50FE7B0", Offset = "0x50FE7B0", VA = "0x50FE7B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x50FE7C0", Offset = "0x50FE7C0", VA = "0x50FE7C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public float inputActionsPerSecond
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x50FE7D0", Offset = "0x50FE7D0", VA = "0x50FE7D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x50FE7E0", Offset = "0x50FE7E0", VA = "0x50FE7E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	public float repeatDelay
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x50FE7F0", Offset = "0x50FE7F0", VA = "0x50FE7F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x50FE800", Offset = "0x50FE800", VA = "0x50FE800")]
		set
		{
		}
	}

	[Token(Token = "0x170001E8")]
	public string horizontalAxis
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x50FE810", Offset = "0x50FE810", VA = "0x50FE810")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x50FE820", Offset = "0x50FE820", VA = "0x50FE820")]
		set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public string verticalAxis
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x50FE840", Offset = "0x50FE840", VA = "0x50FE840")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x50FE850", Offset = "0x50FE850", VA = "0x50FE850")]
		set
		{
		}
	}

	[Token(Token = "0x170001EA")]
	public string submitButton
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x50FE870", Offset = "0x50FE870", VA = "0x50FE870")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x50FE880", Offset = "0x50FE880", VA = "0x50FE880")]
		set
		{
		}
	}

	[Token(Token = "0x170001EB")]
	public string cancelButton
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0x50FE8A0", Offset = "0x50FE8A0", VA = "0x50FE8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x50FE8B0", Offset = "0x50FE8B0", VA = "0x50FE8B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x50FE6A0", Offset = "0x50FE6A0", VA = "0x50FE6A0")]
	protected StandaloneInputModule()
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x50FE8D0", Offset = "0x50FE8D0", VA = "0x50FE8D0")]
	private bool ShouldIgnoreEventsOnNoFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x50FE8E0", Offset = "0x50FE8E0", VA = "0x50FE8E0", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x50FE9D0", Offset = "0x50FE9D0", VA = "0x50FE9D0")]
	private void ReleaseMouse(PointerEventData pointerEvent, GameObject currentOverGo)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x50FEEC0", Offset = "0x50FEEC0", VA = "0x50FEEC0", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x50FF180", Offset = "0x50FF180", VA = "0x50FF180", Slot = "23")]
	public override void ActivateModule()
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x50FF290", Offset = "0x50FF290", VA = "0x50FF290", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x50FF2A0", Offset = "0x50FF2A0", VA = "0x50FF2A0", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x50FF490", Offset = "0x50FF490", VA = "0x50FF490")]
	private bool ProcessTouchEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x50FFBF0", Offset = "0x50FFBF0", VA = "0x50FFBF0")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x50FF960", Offset = "0x50FF960", VA = "0x50FF960")]
	protected bool SendSubmitEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x5100590", Offset = "0x5100590", VA = "0x5100590")]
	private Vector2 GetRawMoveVector()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x50FF6C0", Offset = "0x50FF6C0", VA = "0x50FF6C0")]
	protected bool SendMoveEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x50FF6B0", Offset = "0x50FF6B0", VA = "0x50FF6B0")]
	protected void ProcessMouseEvent()
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x5100A30", Offset = "0x5100A30", VA = "0x5100A30", Slot = "31")]
	[Obsolete("This method is no longer checked, overriding it with return true does nothing!")]
	protected virtual bool ForceAutoSelect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x5100740", Offset = "0x5100740", VA = "0x5100740")]
	protected void ProcessMouseEvent(int id)
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x50FF340", Offset = "0x50FF340", VA = "0x50FF340")]
	protected bool SendUpdateEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x5100A40", Offset = "0x5100A40", VA = "0x5100A40")]
	protected void ProcessMousePress(MouseButtonEventData data)
	{
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x5100F50", Offset = "0x5100F50", VA = "0x5100F50")]
	protected GameObject GetCurrentFocusedGameObject()
	{
		return null;
	}
}
