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
			[Address(RVA = "0x6D108D0", Offset = "0x6D0F8D0", VA = "0x6D108D0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600073E")]
			[Address(RVA = "0x6D108E0", Offset = "0x6D0F8E0", VA = "0x6D108E0")]
			set
			{
			}
		}

		[Token(Token = "0x170001F2")]
		public PointerEventData.InputButton button
		{
			[Token(Token = "0x600073F")]
			[Address(RVA = "0x6D108F0", Offset = "0x6D0F8F0", VA = "0x6D108F0")]
			get
			{
				return default(PointerEventData.InputButton);
			}
			[Token(Token = "0x6000740")]
			[Address(RVA = "0x6D10900", Offset = "0x6D0F900", VA = "0x6D10900")]
			set
			{
			}
		}

		[Token(Token = "0x6000741")]
		[Address(RVA = "0x6D10910", Offset = "0x6D0F910", VA = "0x6D10910")]
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
		[Address(RVA = "0x6D10920", Offset = "0x6D0F920", VA = "0x6D10920")]
		public bool AnyPressesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000743")]
		[Address(RVA = "0x6D109D0", Offset = "0x6D0F9D0", VA = "0x6D109D0")]
		public bool AnyReleasesThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000744")]
		[Address(RVA = "0x6D10A80", Offset = "0x6D0FA80", VA = "0x6D10A80")]
		public ButtonState GetButtonState(PointerEventData.InputButton button)
		{
			return null;
		}

		[Token(Token = "0x6000745")]
		[Address(RVA = "0x6D0FBF0", Offset = "0x6D0EBF0", VA = "0x6D0FBF0")]
		public void SetButtonState(PointerEventData.InputButton button, PointerEventData.FramePressState stateForMouseButton, PointerEventData data)
		{
		}

		[Token(Token = "0x6000746")]
		[Address(RVA = "0x6D10850", Offset = "0x6D0F850", VA = "0x6D10850")]
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
		[Address(RVA = "0x6D109C0", Offset = "0x6D0F9C0", VA = "0x6D109C0")]
		public bool PressedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000748")]
		[Address(RVA = "0x6D10A70", Offset = "0x6D0FA70", VA = "0x6D10A70")]
		public bool ReleasedThisFrame()
		{
			return default(bool);
		}

		[Token(Token = "0x6000749")]
		[Address(RVA = "0x6D10C20", Offset = "0x6D0FC20", VA = "0x6D10C20")]
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
	[Address(RVA = "0x6D0ED40", Offset = "0x6D0DD40", VA = "0x6D0ED40")]
	protected bool GetPointerData(int id, out PointerEventData data, bool create)
	{
		return default(bool);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x6D0EE30", Offset = "0x6D0DE30", VA = "0x6D0EE30")]
	protected void RemovePointerData(PointerEventData data)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x6D0EE90", Offset = "0x6D0DE90", VA = "0x6D0EE90")]
	protected PointerEventData GetTouchPointerEventData(Touch input, out bool pressed, out bool released)
	{
		return null;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x6D0F2C0", Offset = "0x6D0E2C0", VA = "0x6D0F2C0")]
	protected void CopyFromTo(PointerEventData from, PointerEventData to)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x6D0F3D0", Offset = "0x6D0E3D0", VA = "0x6D0F3D0")]
	protected PointerEventData.FramePressState StateForMouseButton(int buttonId)
	{
		return default(PointerEventData.FramePressState);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x6D0F450", Offset = "0x6D0E450", VA = "0x6D0F450", Slot = "29")]
	protected virtual MouseState GetMousePointerEventData()
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x6D0F470", Offset = "0x6D0E470", VA = "0x6D0F470", Slot = "30")]
	protected virtual MouseState GetMousePointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x6D0FC30", Offset = "0x6D0EC30", VA = "0x6D0FC30")]
	protected PointerEventData GetLastPointerEventData(int id)
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x6D0FCB0", Offset = "0x6D0ECB0", VA = "0x6D0FCB0")]
	private static bool ShouldStartDrag(Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold)
	{
		return default(bool);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x6D0FCE0", Offset = "0x6D0ECE0", VA = "0x6D0FCE0", Slot = "31")]
	protected virtual void ProcessMove(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x6D0FD20", Offset = "0x6D0ED20", VA = "0x6D0FD20", Slot = "32")]
	protected virtual void ProcessDrag(PointerEventData pointerEvent)
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x6D100D0", Offset = "0x6D0F0D0", VA = "0x6D100D0", Slot = "20")]
	public override bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x6D101D0", Offset = "0x6D0F1D0", VA = "0x6D101D0")]
	protected void ClearSelection()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x6D10380", Offset = "0x6D0F380", VA = "0x6D10380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x6D10600", Offset = "0x6D0F600", VA = "0x6D10600")]
	protected void DeselectIfSelectionChanged(GameObject currentOverGo, BaseEventData pointerEvent)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x6D106E0", Offset = "0x6D0F6E0", VA = "0x6D106E0")]
	protected PointerInputModule()
	{
	}
}
