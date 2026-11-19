// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.StandaloneInputModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C1")]
[AddComponentMenu("Event/Standalone Input Module")]
[UnityEngine.UGUIHelpURL("StandaloneInputModule")]
public class StandaloneInputModule : PointerInputModule
{
	[Token(Token = "0x20000C2")]
	[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", false)]
	public enum InputMode
	{
		[Token(Token = "0x400035C")]
		Mouse,
		[Token(Token = "0x400035D")]
		Buttons
	}

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x68")]
	private float m_PrevActionTime;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x6C")]
	private Vector2 m_LastMoveVector;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x74")]
	private int m_ConsecutiveMoveCount;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x78")]
	private Vector2 m_LastMousePosition;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x80")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x88")]
	private GameObject m_CurrentFocusedGameObject;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x90")]
	private readonly Dictionary<int, PointerEventData> m_InputPointerEvents;

	[Token(Token = "0x4000353")]
	private const float doubleClickTime = 0.3f;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private string m_HorizontalAxis;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private string m_VerticalAxis;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private string m_SubmitButton;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private string m_CancelButton;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private float m_InputActionsPerSecond;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0xBC")]
	[SerializeField]
	private float m_RepeatDelay;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	[FormerlySerializedAs("m_AllowActivationOnMobileDevice")]
	[HideInInspector]
	private bool m_ForceModuleActive;

	[Token(Token = "0x170001F3")]
	[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", false)]
	public InputMode inputMode
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x6D10D60", Offset = "0x6D0FD60", VA = "0x6D10D60")]
		get
		{
			return default(InputMode);
		}
	}

	[Token(Token = "0x170001F4")]
	[Obsolete("allowActivationOnMobileDevice has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnMobileDevice
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x6D10D70", Offset = "0x6D0FD70", VA = "0x6D10D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x6D10D80", Offset = "0x6D0FD80", VA = "0x6D10D80")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	[Obsolete("forceModuleActive has been deprecated. There is no need to force the module awake as StandaloneInputModule works for all platforms")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x6D10D90", Offset = "0x6D0FD90", VA = "0x6D10D90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x6D10DA0", Offset = "0x6D0FDA0", VA = "0x6D10DA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	public float inputActionsPerSecond
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x6D10DB0", Offset = "0x6D0FDB0", VA = "0x6D10DB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x6D10DC0", Offset = "0x6D0FDC0", VA = "0x6D10DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	public float repeatDelay
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x6D10DD0", Offset = "0x6D0FDD0", VA = "0x6D10DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x6D10DE0", Offset = "0x6D0FDE0", VA = "0x6D10DE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string horizontalAxis
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x6D10DF0", Offset = "0x6D0FDF0", VA = "0x6D10DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x6D10E00", Offset = "0x6D0FE00", VA = "0x6D10E00")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string verticalAxis
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x6D10E20", Offset = "0x6D0FE20", VA = "0x6D10E20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x6D10E30", Offset = "0x6D0FE30", VA = "0x6D10E30")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public string submitButton
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x6D10E50", Offset = "0x6D0FE50", VA = "0x6D10E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x6D10E60", Offset = "0x6D0FE60", VA = "0x6D10E60")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public string cancelButton
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x6D10E80", Offset = "0x6D0FE80", VA = "0x6D10E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x6D10E90", Offset = "0x6D0FE90", VA = "0x6D10E90")]
		set
		{
		}
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x6D10C30", Offset = "0x6D0FC30", VA = "0x6D10C30")]
	protected StandaloneInputModule()
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x6D10EB0", Offset = "0x6D0FEB0", VA = "0x6D10EB0")]
	private bool ShouldIgnoreEventsOnNoFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x6D10EC0", Offset = "0x6D0FEC0", VA = "0x6D10EC0", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x6D10F20", Offset = "0x6D0FF20", VA = "0x6D10F20")]
	private void ReleasePointerDrags()
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x6D11440", Offset = "0x6D10440", VA = "0x6D11440")]
	private void ReleaseMouse(PointerEventData pointerEvent, GameObject currentOverGo)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x6D11940", Offset = "0x6D10940", VA = "0x6D11940", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x6D11C00", Offset = "0x6D10C00", VA = "0x6D11C00", Slot = "23")]
	public override void ActivateModule()
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x6D11D10", Offset = "0x6D10D10", VA = "0x6D11D10", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x6D11D20", Offset = "0x6D10D20", VA = "0x6D11D20", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x6D11F10", Offset = "0x6D10F10", VA = "0x6D11F10")]
	private bool ProcessTouchEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x6D12680", Offset = "0x6D11680", VA = "0x6D12680")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x6D123F0", Offset = "0x6D113F0", VA = "0x6D123F0")]
	protected bool SendSubmitEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x6D130C0", Offset = "0x6D120C0", VA = "0x6D130C0")]
	private Vector2 GetRawMoveVector()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x6D12150", Offset = "0x6D11150", VA = "0x6D12150")]
	protected bool SendMoveEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x6D12140", Offset = "0x6D11140", VA = "0x6D12140")]
	protected void ProcessMouseEvent()
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x6D13550", Offset = "0x6D12550", VA = "0x6D13550", Slot = "33")]
	[Obsolete("This method is no longer checked, overriding it with return true does nothing!")]
	protected virtual bool ForceAutoSelect()
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x6D13260", Offset = "0x6D12260", VA = "0x6D13260")]
	protected void ProcessMouseEvent(int id)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x6D11DC0", Offset = "0x6D10DC0", VA = "0x6D11DC0")]
	protected bool SendUpdateEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x6D13560", Offset = "0x6D12560", VA = "0x6D13560")]
	protected void ProcessMousePress(MouseButtonEventData data)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x6D13A90", Offset = "0x6D12A90", VA = "0x6D13A90")]
	protected GameObject GetCurrentFocusedGameObject()
	{
		return null;
	}
}
