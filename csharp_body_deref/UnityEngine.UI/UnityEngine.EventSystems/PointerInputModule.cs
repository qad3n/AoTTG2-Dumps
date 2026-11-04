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

[Token(Token = "0x20000BD")]
public abstract class PointerInputModule : BaseInputModule
{
	[Token(Token = "0x20000BE")]
	protected class ButtonState
	{
		[Token(Token = "0x4000347")]
		[FieldOffset(Offset = "0x10")]
		private PointerEventData.InputButton m_Button;

		[Token(Token = "0x4000348")]
		[FieldOffset(Offset = "0x18")]
		private MouseButtonEventData m_EventData;

		[Token(Token = "0x170001F1")]
		public MouseButtonEventData eventData
		{
			[Token(Token = "0x600073D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x600073E")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			set
			{
			}
		}

		[Token(Token = "0x170001F2")]
		public PointerEventData.InputButton button
		{
			[Token(Token = "0x600073F")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(PointerEventData.InputButton);
			}
			[Token(Token = "0x6000740")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			set
			{
			}
		}

		[Token(Token = "0x6000741")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ButtonState()
		{
		}
	}

	[Token(Token = "0x20000BF")]
	protected class MouseState
	{
		[Token(Token = "0x4000349")]
		[FieldOffset(Offset = "0x10")]
		private List<ButtonState> m_TrackedButtons;

		[Token(Token = "0x6000742")]
		[Address(RVA = "0x32F6630", Offset = "0x32F4C30", VA = "0x1832F6630")]
		public bool AnyPressesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000743")]
		[Address(RVA = "0x32F66F0", Offset = "0x32F4CF0", VA = "0x1832F66F0")]
		public bool AnyReleasesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000744")]
		[Address(RVA = "0x32F67B0", Offset = "0x32F4DB0", VA = "0x1832F67B0")]
		public ButtonState GetButtonState(PointerEventData.InputButton button)
		{
			return null;
		}

		[Token(Token = "0x6000745")]
		[Address(RVA = "0x32F6960", Offset = "0x32F4F60", VA = "0x1832F6960")]
		public void SetButtonState(PointerEventData.InputButton button, PointerEventData.FramePressState stateForMouseButton, PointerEventData data)
		{
		}

		[Token(Token = "0x6000746")]
		[Address(RVA = "0x32F69C0", Offset = "0x32F4FC0", VA = "0x1832F69C0")]
		public MouseState()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	public class MouseButtonEventData
	{
		[Token(Token = "0x400034A")]
		[FieldOffset(Offset = "0x10")]
		public PointerEventData.FramePressState buttonState;

		[Token(Token = "0x400034B")]
		[FieldOffset(Offset = "0x18")]
		public PointerEventData buttonData;

		[Token(Token = "0x6000747")]
		[Address(RVA = "0x32F65F0", Offset = "0x32F4BF0", VA = "0x1832F65F0")]
		public bool PressedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000748")]
		[Address(RVA = "0x32F6610", Offset = "0x32F4C10", VA = "0x1832F6610")]
		public bool ReleasedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000749")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MouseButtonEventData()
		{
		}
	}

	[Token(Token = "0x4000341")]
	public const int kMouseLeftId = -1;

	[Token(Token = "0x4000342")]
	public const int kMouseRightId = -2;

	[Token(Token = "0x4000343")]
	public const int kMouseMiddleId = -3;

	[Token(Token = "0x4000344")]
	public const int kFakeTouchesId = -4;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x58")]
	protected Dictionary<int, PointerEventData> m_PointerData;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x60")]
	private readonly MouseState m_MouseState;

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x32FDA70", Offset = "0x32FC070", VA = "0x1832FDA70")]
	protected bool GetPointerData(int id, out PointerEventData data, bool create)
	{
		return default(bool);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x32FE5B0", Offset = "0x32FCBB0", VA = "0x1832FE5B0")]
	protected void RemovePointerData(PointerEventData data)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x32FDDA0", Offset = "0x32FC3A0", VA = "0x1832FDDA0")]
	protected PointerEventData GetTouchPointerEventData(Touch input, out bool pressed, out bool released)
	{
		return null;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x32FD050", Offset = "0x32FB650", VA = "0x1832FD050")]
	protected void CopyFromTo(PointerEventData from, PointerEventData to)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x32FE660", Offset = "0x32FCC60", VA = "0x1832FE660")]
	protected PointerEventData.FramePressState StateForMouseButton(int buttonId)
	{
		return default(PointerEventData.FramePressState);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x32FD2D0", Offset = "0x32FB8D0", VA = "0x1832FD2D0", Slot = "29")]
	protected virtual MouseState GetMousePointerEventData()
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x32FD2F0", Offset = "0x32FB8F0", VA = "0x1832FD2F0", Slot = "30")]
	protected virtual MouseState GetMousePointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x32FD2A0", Offset = "0x32FB8A0", VA = "0x1832FD2A0")]
	protected PointerEventData GetLastPointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x32FE610", Offset = "0x32FCC10", VA = "0x1832FE610")]
	private static bool ShouldStartDrag(Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold)
	{
		return default(bool);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x32FE550", Offset = "0x32FCB50", VA = "0x1832FE550", Slot = "31")]
	protected virtual void ProcessMove(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x32FE290", Offset = "0x32FC890", VA = "0x1832FE290", Slot = "32")]
	protected virtual void ProcessDrag(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x32FE200", Offset = "0x32FC800", VA = "0x1832FE200", Slot = "20")]
	public override bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x32FCEA0", Offset = "0x32FB4A0", VA = "0x1832FCEA0")]
	protected void ClearSelection()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x32FE720", Offset = "0x32FCD20", VA = "0x1832FE720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x32FD1D0", Offset = "0x32FB7D0", VA = "0x1832FD1D0")]
	protected void DeselectIfSelectionChanged(GameObject currentOverGo, BaseEventData pointerEvent)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x32FE980", Offset = "0x32FCF80", VA = "0x1832FE980")]
	protected PointerInputModule()
	{
	}
}
