// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.PointerInputModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x50FE340", Offset = "0x50FE340", VA = "0x50FE340")]
			get
			{
				return null;
			}
			[Token(Token = "0x60006FA")]
			[Address(RVA = "0x50FE350", Offset = "0x50FE350", VA = "0x50FE350")]
			set
			{
			}
		}

		[Token(Token = "0x170001E2")]
		public PointerEventData.InputButton button
		{
			[Token(Token = "0x60006FB")]
			[Address(RVA = "0x50FE360", Offset = "0x50FE360", VA = "0x50FE360")]
			get
			{
				return default(PointerEventData.InputButton);
			}
			[Token(Token = "0x60006FC")]
			[Address(RVA = "0x50FE370", Offset = "0x50FE370", VA = "0x50FE370")]
			set
			{
			}
		}

		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x50FE380", Offset = "0x50FE380", VA = "0x50FE380")]
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
		[Address(RVA = "0x50FE390", Offset = "0x50FE390", VA = "0x50FE390")]
		public bool AnyPressesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x60006FF")]
		[Address(RVA = "0x50FE440", Offset = "0x50FE440", VA = "0x50FE440")]
		public bool AnyReleasesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000700")]
		[Address(RVA = "0x50FE4F0", Offset = "0x50FE4F0", VA = "0x50FE4F0")]
		public ButtonState GetButtonState(PointerEventData.InputButton button)
		{
			return null;
		}

		[Token(Token = "0x6000701")]
		[Address(RVA = "0x50FD5D0", Offset = "0x50FD5D0", VA = "0x50FD5D0")]
		public void SetButtonState(PointerEventData.InputButton button, PointerEventData.FramePressState stateForMouseButton, PointerEventData data)
		{
		}

		[Token(Token = "0x6000702")]
		[Address(RVA = "0x50FE2C0", Offset = "0x50FE2C0", VA = "0x50FE2C0")]
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
		[Address(RVA = "0x50FE430", Offset = "0x50FE430", VA = "0x50FE430")]
		public bool PressedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000704")]
		[Address(RVA = "0x50FE4E0", Offset = "0x50FE4E0", VA = "0x50FE4E0")]
		public bool ReleasedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000705")]
		[Address(RVA = "0x50FE690", Offset = "0x50FE690", VA = "0x50FE690")]
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
	[Address(RVA = "0x50FC750", Offset = "0x50FC750", VA = "0x50FC750")]
	protected bool GetPointerData(int id, out PointerEventData data, bool create)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x50FC840", Offset = "0x50FC840", VA = "0x50FC840")]
	protected void RemovePointerData(PointerEventData data)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x50FC8A0", Offset = "0x50FC8A0", VA = "0x50FC8A0")]
	protected PointerEventData GetTouchPointerEventData(Touch input, out bool pressed, out bool released)
	{
		return null;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x50FCD20", Offset = "0x50FCD20", VA = "0x50FCD20")]
	protected void CopyFromTo(PointerEventData from, PointerEventData to)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x50FCE00", Offset = "0x50FCE00", VA = "0x50FCE00")]
	protected PointerEventData.FramePressState StateForMouseButton(int buttonId)
	{
		return default(PointerEventData.FramePressState);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x50FCE80", Offset = "0x50FCE80", VA = "0x50FCE80", Slot = "27")]
	protected virtual MouseState GetMousePointerEventData()
	{
		return null;
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x50FCEA0", Offset = "0x50FCEA0", VA = "0x50FCEA0", Slot = "28")]
	protected virtual MouseState GetMousePointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x50FD610", Offset = "0x50FD610", VA = "0x50FD610")]
	protected PointerEventData GetLastPointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x50FD690", Offset = "0x50FD690", VA = "0x50FD690")]
	private static bool ShouldStartDrag(Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x50FD6C0", Offset = "0x50FD6C0", VA = "0x50FD6C0", Slot = "29")]
	protected virtual void ProcessMove(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x50FD700", Offset = "0x50FD700", VA = "0x50FD700", Slot = "30")]
	protected virtual void ProcessDrag(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x50FDAB0", Offset = "0x50FDAB0", VA = "0x50FDAB0", Slot = "20")]
	public override bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x50FDBB0", Offset = "0x50FDBB0", VA = "0x50FDBB0")]
	protected void ClearSelection()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x50FDD80", Offset = "0x50FDD80", VA = "0x50FDD80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x50FE070", Offset = "0x50FE070", VA = "0x50FE070")]
	protected void DeselectIfSelectionChanged(GameObject currentOverGo, BaseEventData pointerEvent)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x50FE150", Offset = "0x50FE150", VA = "0x50FE150")]
	protected PointerInputModule()
	{
	}
}
