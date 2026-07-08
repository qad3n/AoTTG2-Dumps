using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000BB")]
public abstract class PointerInputModule : BaseInputModule
{
	[Token(Token = "0x20000BC")]
	protected class ButtonState
	{
		[Token(Token = "0x4000322")]
		[FieldOffset(Offset = "0x10")]
		private PointerEventData.InputButton m_Button;

		[Token(Token = "0x4000323")]
		[FieldOffset(Offset = "0x18")]
		private MouseButtonEventData m_EventData;

		[Token(Token = "0x170001E1")]
		public MouseButtonEventData eventData
		{
			[Token(Token = "0x60006F9")]
			[Address(RVA = "0x4DD69F0", Offset = "0x4DD69F0", VA = "0x4DD69F0")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006FA")]
			[Address(RVA = "0x4DD6A00", Offset = "0x4DD6A00", VA = "0x4DD6A00")]
			set
			{
			}
		}

		[Token(Token = "0x170001E2")]
		public PointerEventData.InputButton button
		{
			[Token(Token = "0x60006FB")]
			[Address(RVA = "0x4DD6A10", Offset = "0x4DD6A10", VA = "0x4DD6A10")]
			get
			{
				return default(PointerEventData.InputButton);
			}
			[Token(Token = "0x60006FC")]
			[Address(RVA = "0x4DD6A20", Offset = "0x4DD6A20", VA = "0x4DD6A20")]
			set
			{
			}
		}

		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x4DD6A30", Offset = "0x4DD6A30", VA = "0x4DD6A30")]
		public ButtonState()
		{
		}
	}

	[Token(Token = "0x20000BD")]
	protected class MouseState
	{
		[Token(Token = "0x4000324")]
		[FieldOffset(Offset = "0x10")]
		private List<ButtonState> m_TrackedButtons;

		[Token(Token = "0x60006FE")]
		[Address(RVA = "0x4DD6A40", Offset = "0x4DD6A40", VA = "0x4DD6A40")]
		public bool AnyPressesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x60006FF")]
		[Address(RVA = "0x4DD6AF0", Offset = "0x4DD6AF0", VA = "0x4DD6AF0")]
		public bool AnyReleasesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000700")]
		[Address(RVA = "0x4DD6BA0", Offset = "0x4DD6BA0", VA = "0x4DD6BA0")]
		public ButtonState GetButtonState(PointerEventData.InputButton button)
		{
			return null;
		}

		[Token(Token = "0x6000701")]
		[Address(RVA = "0x4DD5C80", Offset = "0x4DD5C80", VA = "0x4DD5C80")]
		public void SetButtonState(PointerEventData.InputButton button, PointerEventData.FramePressState stateForMouseButton, PointerEventData data)
		{
		}

		[Token(Token = "0x6000702")]
		[Address(RVA = "0x4DD6970", Offset = "0x4DD6970", VA = "0x4DD6970")]
		public MouseState()
		{
		}
	}

	[Token(Token = "0x20000BE")]
	public class MouseButtonEventData
	{
		[Token(Token = "0x4000325")]
		[FieldOffset(Offset = "0x10")]
		public PointerEventData.FramePressState buttonState;

		[Token(Token = "0x4000326")]
		[FieldOffset(Offset = "0x18")]
		public PointerEventData buttonData;

		[Token(Token = "0x6000703")]
		[Address(RVA = "0x4DD6AE0", Offset = "0x4DD6AE0", VA = "0x4DD6AE0")]
		public bool PressedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000704")]
		[Address(RVA = "0x4DD6B90", Offset = "0x4DD6B90", VA = "0x4DD6B90")]
		public bool ReleasedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000705")]
		[Address(RVA = "0x4DD6D40", Offset = "0x4DD6D40", VA = "0x4DD6D40")]
		public MouseButtonEventData()
		{
		}
	}

	[Token(Token = "0x400031C")]
	public const int kMouseLeftId = -1;

	[Token(Token = "0x400031D")]
	public const int kMouseRightId = -2;

	[Token(Token = "0x400031E")]
	public const int kMouseMiddleId = -3;

	[Token(Token = "0x400031F")]
	public const int kFakeTouchesId = -4;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x58")]
	protected Dictionary<int, PointerEventData> m_PointerData;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x60")]
	private readonly MouseState m_MouseState;

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4DD4E00", Offset = "0x4DD4E00", VA = "0x4DD4E00")]
	protected bool GetPointerData(int id, out PointerEventData data, bool create)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4DD4EF0", Offset = "0x4DD4EF0", VA = "0x4DD4EF0")]
	protected void RemovePointerData(PointerEventData data)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4DD4F50", Offset = "0x4DD4F50", VA = "0x4DD4F50")]
	protected PointerEventData GetTouchPointerEventData(Touch input, out bool pressed, out bool released)
	{
		return null;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4DD53D0", Offset = "0x4DD53D0", VA = "0x4DD53D0")]
	protected void CopyFromTo(PointerEventData from, PointerEventData to)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4DD54B0", Offset = "0x4DD54B0", VA = "0x4DD54B0")]
	protected PointerEventData.FramePressState StateForMouseButton(int buttonId)
	{
		return default(PointerEventData.FramePressState);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4DD5530", Offset = "0x4DD5530", VA = "0x4DD5530", Slot = "27")]
	protected virtual MouseState GetMousePointerEventData()
	{
		return null;
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4DD5550", Offset = "0x4DD5550", VA = "0x4DD5550", Slot = "28")]
	protected virtual MouseState GetMousePointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4DD5CC0", Offset = "0x4DD5CC0", VA = "0x4DD5CC0")]
	protected PointerEventData GetLastPointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4DD5D40", Offset = "0x4DD5D40", VA = "0x4DD5D40")]
	private static bool ShouldStartDrag(Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4DD5D70", Offset = "0x4DD5D70", VA = "0x4DD5D70", Slot = "29")]
	protected virtual void ProcessMove(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4DD5DB0", Offset = "0x4DD5DB0", VA = "0x4DD5DB0", Slot = "30")]
	protected virtual void ProcessDrag(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4DD6160", Offset = "0x4DD6160", VA = "0x4DD6160", Slot = "20")]
	public override bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4DD6260", Offset = "0x4DD6260", VA = "0x4DD6260")]
	protected void ClearSelection()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4DD6430", Offset = "0x4DD6430", VA = "0x4DD6430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4DD6720", Offset = "0x4DD6720", VA = "0x4DD6720")]
	protected void DeselectIfSelectionChanged(GameObject currentOverGo, BaseEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4DD6800", Offset = "0x4DD6800", VA = "0x4DD6800")]
	protected PointerInputModule()
	{
	}
}
