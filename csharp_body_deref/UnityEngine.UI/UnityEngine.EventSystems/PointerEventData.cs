// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.PointerEventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x200009B")]
public class PointerEventData : BaseEventData
{
	[Token(Token = "0x200009C")]
	public enum InputButton
	{
		[Token(Token = "0x40002F3")]
		Left,
		[Token(Token = "0x40002F4")]
		Right,
		[Token(Token = "0x40002F5")]
		Middle
	}

	[Token(Token = "0x200009D")]
	public enum FramePressState
	{
		[Token(Token = "0x40002F7")]
		Pressed,
		[Token(Token = "0x40002F8")]
		Released,
		[Token(Token = "0x40002F9")]
		PressedAndReleased,
		[Token(Token = "0x40002FA")]
		NotChanged
	}

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x28")]
	private GameObject m_PointerPress;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x130")]
	public List<GameObject> hovered;

	[Token(Token = "0x170001A1")]
	public GameObject pointerEnter
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x6D07CF0", Offset = "0x6D06CF0", VA = "0x6D07CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x6D07D00", Offset = "0x6D06D00", VA = "0x6D07D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public GameObject lastPress
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x6D07D10", Offset = "0x6D06D10", VA = "0x6D07D10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x6D07D20", Offset = "0x6D06D20", VA = "0x6D07D20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public GameObject rawPointerPress
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x6D07D30", Offset = "0x6D06D30", VA = "0x6D07D30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x6D07D40", Offset = "0x6D06D40", VA = "0x6D07D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public GameObject pointerDrag
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x6D07D50", Offset = "0x6D06D50", VA = "0x6D07D50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x6D07D60", Offset = "0x6D06D60", VA = "0x6D07D60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public GameObject pointerClick
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x6D07D70", Offset = "0x6D06D70", VA = "0x6D07D70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x6D07D80", Offset = "0x6D06D80", VA = "0x6D07D80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public RaycastResult pointerCurrentRaycast
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x6D07D90", Offset = "0x6D06D90", VA = "0x6D07D90")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x6D07DE0", Offset = "0x6D06DE0", VA = "0x6D07DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public RaycastResult pointerPressRaycast
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x6D07E40", Offset = "0x6D06E40", VA = "0x6D07E40")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x6D07E90", Offset = "0x6D06E90", VA = "0x6D07E90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public bool eligibleForClick
	{
		[Token(Token = "0x6000649")]
		[Address(RVA = "0x6D07F00", Offset = "0x6D06F00", VA = "0x6D07F00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x6D07F10", Offset = "0x6D06F10", VA = "0x6D07F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public int displayIndex
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x6D07F20", Offset = "0x6D06F20", VA = "0x6D07F20")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x6D07F30", Offset = "0x6D06F30", VA = "0x6D07F30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public int pointerId
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x6D07F40", Offset = "0x6D06F40", VA = "0x6D07F40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x6D07F50", Offset = "0x6D06F50", VA = "0x6D07F50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public Vector2 position
	{
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x6D07F60", Offset = "0x6D06F60", VA = "0x6D07F60")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x6D07F70", Offset = "0x6D06F70", VA = "0x6D07F70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public Vector2 delta
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x6D07F80", Offset = "0x6D06F80", VA = "0x6D07F80")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x6D07F90", Offset = "0x6D06F90", VA = "0x6D07F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public Vector2 pressPosition
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x6D07FA0", Offset = "0x6D06FA0", VA = "0x6D07FA0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x6D07FB0", Offset = "0x6D06FB0", VA = "0x6D07FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	[Obsolete("Use either pointerCurrentRaycast.worldPosition or pointerPressRaycast.worldPosition")]
	public Vector3 worldPosition
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x6D07FC0", Offset = "0x6D06FC0", VA = "0x6D07FC0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x6D07FE0", Offset = "0x6D06FE0", VA = "0x6D07FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	[Obsolete("Use either pointerCurrentRaycast.worldNormal or pointerPressRaycast.worldNormal")]
	public Vector3 worldNormal
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x6D07FF0", Offset = "0x6D06FF0", VA = "0x6D07FF0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x6D08010", Offset = "0x6D07010", VA = "0x6D08010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public float clickTime
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x6D08020", Offset = "0x6D07020", VA = "0x6D08020")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x6D08030", Offset = "0x6D07030", VA = "0x6D08030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public int clickCount
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x6D08040", Offset = "0x6D07040", VA = "0x6D08040")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x6D08050", Offset = "0x6D07050", VA = "0x6D08050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public Vector2 scrollDelta
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x6D08060", Offset = "0x6D07060", VA = "0x6D08060")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x6D08070", Offset = "0x6D07070", VA = "0x6D08070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public bool useDragThreshold
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x6D08080", Offset = "0x6D07080", VA = "0x6D08080")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000660")]
		[Address(RVA = "0x6D08090", Offset = "0x6D07090", VA = "0x6D08090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B4")]
	public bool dragging
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x6D080A0", Offset = "0x6D070A0", VA = "0x6D080A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x6D080B0", Offset = "0x6D070B0", VA = "0x6D080B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	public InputButton button
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x6D080C0", Offset = "0x6D070C0", VA = "0x6D080C0")]
		[CompilerGenerated]
		get
		{
			return default(InputButton);
		}
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x6D080D0", Offset = "0x6D070D0", VA = "0x6D080D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public float pressure
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x6D080E0", Offset = "0x6D070E0", VA = "0x6D080E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x6D080F0", Offset = "0x6D070F0", VA = "0x6D080F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x6D08100", Offset = "0x6D07100", VA = "0x6D08100")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x6D08110", Offset = "0x6D07110", VA = "0x6D08110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x6D08120", Offset = "0x6D07120", VA = "0x6D08120")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x6D08130", Offset = "0x6D07130", VA = "0x6D08130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	public float azimuthAngle
	{
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x6D08140", Offset = "0x6D07140", VA = "0x6D08140")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x6D08150", Offset = "0x6D07150", VA = "0x6D08150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	public float twist
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x6D08160", Offset = "0x6D07160", VA = "0x6D08160")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x6D08170", Offset = "0x6D07170", VA = "0x6D08170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	public Vector2 tilt
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x6D08180", Offset = "0x6D07180", VA = "0x6D08180")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000670")]
		[Address(RVA = "0x6D08190", Offset = "0x6D07190", VA = "0x6D08190")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BC")]
	public PenStatus penStatus
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x6D081A0", Offset = "0x6D071A0", VA = "0x6D081A0")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x6D081B0", Offset = "0x6D071B0", VA = "0x6D081B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	public Vector2 radius
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x6D081C0", Offset = "0x6D071C0", VA = "0x6D081C0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x6D081D0", Offset = "0x6D071D0", VA = "0x6D081D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BE")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x6D081E0", Offset = "0x6D071E0", VA = "0x6D081E0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x6D081F0", Offset = "0x6D071F0", VA = "0x6D081F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	public bool fullyExited
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x6D08200", Offset = "0x6D07200", VA = "0x6D08200")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x6D08210", Offset = "0x6D07210", VA = "0x6D08210")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C0")]
	public bool reentered
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x6D08220", Offset = "0x6D07220", VA = "0x6D08220")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x6D08230", Offset = "0x6D07230", VA = "0x6D08230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C1")]
	public Camera enterEventCamera
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x6D083F0", Offset = "0x6D073F0", VA = "0x6D083F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public Camera pressEventCamera
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x6D020D0", Offset = "0x6D010D0", VA = "0x6D020D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public GameObject pointerPress
	{
		[Token(Token = "0x6000680")]
		[Address(RVA = "0x6D08480", Offset = "0x6D07480", VA = "0x6D08480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x6D08490", Offset = "0x6D07490", VA = "0x6D08490")]
		set
		{
		}
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x6D08240", Offset = "0x6D07240", VA = "0x6D08240")]
	public PointerEventData(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x6D083B0", Offset = "0x6D073B0", VA = "0x6D083B0")]
	public bool IsPointerMoving()
	{
		return default(bool);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x6D083D0", Offset = "0x6D073D0", VA = "0x6D083D0")]
	public bool IsScrolling()
	{
		return default(bool);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x6D08520", Offset = "0x6D07520", VA = "0x6D08520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
