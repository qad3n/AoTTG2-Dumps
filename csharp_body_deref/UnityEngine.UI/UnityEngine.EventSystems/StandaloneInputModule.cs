// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.StandaloneInputModule
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
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
		[Address(RVA = "0x24BD3F0", Offset = "0x24BB9F0", VA = "0x1824BD3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x2C124F0", Offset = "0x2C10AF0", VA = "0x182C124F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	[Obsolete("forceModuleActive has been deprecated. There is no need to force the module awake as StandaloneInputModule works for all platforms")]
	public bool forceModuleActive
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x24BD3F0", Offset = "0x24BB9F0", VA = "0x1824BD3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x2C124F0", Offset = "0x2C10AF0", VA = "0x182C124F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	public float inputActionsPerSecond
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x1D98200", Offset = "0x1D96800", VA = "0x181D98200")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x1D98440", Offset = "0x1D96A40", VA = "0x181D98440")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	public float repeatDelay
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x1D98430", Offset = "0x1D96A30", VA = "0x181D98430")]
		set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string horizontalAxis
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string verticalAxis
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public string submitButton
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public string cancelButton
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		set
		{
		}
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x3302C10", Offset = "0x3301210", VA = "0x183302C10")]
	protected StandaloneInputModule()
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private bool ShouldIgnoreEventsOnNoFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x3302B90", Offset = "0x3301190", VA = "0x183302B90", Slot = "24")]
	public override void UpdateModule()
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x3301B80", Offset = "0x3300180", VA = "0x183301B80")]
	private void ReleasePointerDrags()
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x33017A0", Offset = "0x32FFDA0", VA = "0x1833017A0")]
	private void ReleaseMouse(PointerEventData pointerEvent, GameObject currentOverGo)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x33029A0", Offset = "0x3300FA0", VA = "0x1833029A0", Slot = "21")]
	public override bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x32FFC60", Offset = "0x32FE260", VA = "0x1832FFC60", Slot = "23")]
	public override void ActivateModule()
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x32FFDB0", Offset = "0x32FE3B0", VA = "0x1832FFDB0", Slot = "22")]
	public override void DeactivateModule()
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x33015C0", Offset = "0x32FFBC0", VA = "0x1833015C0", Slot = "17")]
	public override void Process()
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x3300660", Offset = "0x32FEC60", VA = "0x183300660")]
	private bool ProcessTouchEvents()
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x3300E60", Offset = "0x32FF460", VA = "0x183300E60")]
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x3302600", Offset = "0x3300C00", VA = "0x183302600")]
	protected bool SendSubmitEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x32FFDC0", Offset = "0x32FE3C0", VA = "0x1832FFDC0")]
	private Vector2 GetRawMoveVector()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x33022A0", Offset = "0x33008A0", VA = "0x1833022A0")]
	protected bool SendMoveEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x33001D0", Offset = "0x32FE7D0", VA = "0x1833001D0")]
	protected void ProcessMouseEvent()
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "33")]
	[Obsolete("This method is no longer checked, overriding it with return true does nothing!")]
	protected virtual bool ForceAutoSelect()
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x32FFF20", Offset = "0x32FE520", VA = "0x1832FFF20")]
	protected void ProcessMouseEvent(int id)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x3302850", Offset = "0x3300E50", VA = "0x183302850")]
	protected bool SendUpdateEventToSelectedObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x33001E0", Offset = "0x32FE7E0", VA = "0x1833001E0")]
	protected void ProcessMousePress(MouseButtonEventData data)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
	protected GameObject GetCurrentFocusedGameObject()
	{
		return null;
	}
}
