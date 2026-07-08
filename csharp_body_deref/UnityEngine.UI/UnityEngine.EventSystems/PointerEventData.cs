using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x2000099")]
public class PointerEventData : BaseEventData
{
	[Token(Token = "0x200009A")]
	public enum InputButton
	{
		[Token(Token = "0x40002D0")]
		Left,
		[Token(Token = "0x40002D1")]
		Right,
		[Token(Token = "0x40002D2")]
		Middle
	}

	[Token(Token = "0x200009B")]
	public enum FramePressState
	{
		[Token(Token = "0x40002D4")]
		Pressed,
		[Token(Token = "0x40002D5")]
		Released,
		[Token(Token = "0x40002D6")]
		PressedAndReleased,
		[Token(Token = "0x40002D7")]
		NotChanged
	}

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x28")]
	private GameObject m_PointerPress;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0xF0")]
	public List<GameObject> hovered;

	[Token(Token = "0x17000191")]
	public GameObject pointerEnter
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x4DCD8F0", Offset = "0x4DCD8F0", VA = "0x4DCD8F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x4DCD900", Offset = "0x4DCD900", VA = "0x4DCD900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public GameObject lastPress
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x4DCD910", Offset = "0x4DCD910", VA = "0x4DCD910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x4DCD920", Offset = "0x4DCD920", VA = "0x4DCD920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public GameObject rawPointerPress
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x4DCD930", Offset = "0x4DCD930", VA = "0x4DCD930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x4DCD940", Offset = "0x4DCD940", VA = "0x4DCD940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public GameObject pointerDrag
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x4DCD950", Offset = "0x4DCD950", VA = "0x4DCD950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x4DCD960", Offset = "0x4DCD960", VA = "0x4DCD960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public GameObject pointerClick
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x4DCD970", Offset = "0x4DCD970", VA = "0x4DCD970")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x4DCD980", Offset = "0x4DCD980", VA = "0x4DCD980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public RaycastResult pointerCurrentRaycast
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x4DCD990", Offset = "0x4DCD990", VA = "0x4DCD990")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x4DCD9D0", Offset = "0x4DCD9D0", VA = "0x4DCD9D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public RaycastResult pointerPressRaycast
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x4DCDA10", Offset = "0x4DCDA10", VA = "0x4DCDA10")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x4DCDA50", Offset = "0x4DCDA50", VA = "0x4DCDA50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public bool eligibleForClick
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x4DCDAA0", Offset = "0x4DCDAA0", VA = "0x4DCDAA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x4DCDAB0", Offset = "0x4DCDAB0", VA = "0x4DCDAB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public int displayIndex
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x4DCDAC0", Offset = "0x4DCDAC0", VA = "0x4DCDAC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x4DCDAD0", Offset = "0x4DCDAD0", VA = "0x4DCDAD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int pointerId
	{
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x4DCDAE0", Offset = "0x4DCDAE0", VA = "0x4DCDAE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x4DCDAF0", Offset = "0x4DCDAF0", VA = "0x4DCDAF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public Vector2 position
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x4DCDB00", Offset = "0x4DCDB00", VA = "0x4DCDB00")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x4DCDB10", Offset = "0x4DCDB10", VA = "0x4DCDB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public Vector2 delta
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x4DCDB20", Offset = "0x4DCDB20", VA = "0x4DCDB20")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x4DCDB30", Offset = "0x4DCDB30", VA = "0x4DCDB30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public Vector2 pressPosition
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x4DCDB40", Offset = "0x4DCDB40", VA = "0x4DCDB40")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x4DCDB50", Offset = "0x4DCDB50", VA = "0x4DCDB50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	[Obsolete("Use either pointerCurrentRaycast.worldPosition or pointerPressRaycast.worldPosition")]
	public Vector3 worldPosition
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x4DCDB60", Offset = "0x4DCDB60", VA = "0x4DCDB60")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x4DCDB80", Offset = "0x4DCDB80", VA = "0x4DCDB80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	[Obsolete("Use either pointerCurrentRaycast.worldNormal or pointerPressRaycast.worldNormal")]
	public Vector3 worldNormal
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x4DCDB90", Offset = "0x4DCDB90", VA = "0x4DCDB90")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x4DCDBB0", Offset = "0x4DCDBB0", VA = "0x4DCDBB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public float clickTime
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x4DCDBC0", Offset = "0x4DCDBC0", VA = "0x4DCDBC0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x4DCDBD0", Offset = "0x4DCDBD0", VA = "0x4DCDBD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	public int clickCount
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x4DCDBE0", Offset = "0x4DCDBE0", VA = "0x4DCDBE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x4DCDBF0", Offset = "0x4DCDBF0", VA = "0x4DCDBF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public Vector2 scrollDelta
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x4DCDC00", Offset = "0x4DCDC00", VA = "0x4DCDC00")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x4DCDC10", Offset = "0x4DCDC10", VA = "0x4DCDC10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public bool useDragThreshold
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x4DCDC20", Offset = "0x4DCDC20", VA = "0x4DCDC20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x4DCDC30", Offset = "0x4DCDC30", VA = "0x4DCDC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public bool dragging
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x4DCDC40", Offset = "0x4DCDC40", VA = "0x4DCDC40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x4DCDC50", Offset = "0x4DCDC50", VA = "0x4DCDC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public InputButton button
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x4DCDC60", Offset = "0x4DCDC60", VA = "0x4DCDC60")]
		[CompilerGenerated]
		get
		{
			return default(InputButton);
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x4DCDC70", Offset = "0x4DCDC70", VA = "0x4DCDC70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public float pressure
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x4DCDC80", Offset = "0x4DCDC80", VA = "0x4DCDC80")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x4DCDC90", Offset = "0x4DCDC90", VA = "0x4DCDC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x4DCDCA0", Offset = "0x4DCDCA0", VA = "0x4DCDCA0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x4DCDCB0", Offset = "0x4DCDCB0", VA = "0x4DCDCB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x4DCDCC0", Offset = "0x4DCDCC0", VA = "0x4DCDCC0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x4DCDCD0", Offset = "0x4DCDCD0", VA = "0x4DCDCD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public float azimuthAngle
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x4DCDCE0", Offset = "0x4DCDCE0", VA = "0x4DCDCE0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x4DCDCF0", Offset = "0x4DCDCF0", VA = "0x4DCDCF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public float twist
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x4DCDD00", Offset = "0x4DCDD00", VA = "0x4DCDD00")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x4DCDD10", Offset = "0x4DCDD10", VA = "0x4DCDD10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public Vector2 tilt
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x4DCDD20", Offset = "0x4DCDD20", VA = "0x4DCDD20")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x4DCDD30", Offset = "0x4DCDD30", VA = "0x4DCDD30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public PenStatus penStatus
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x4DCDD40", Offset = "0x4DCDD40", VA = "0x4DCDD40")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x4DCDD50", Offset = "0x4DCDD50", VA = "0x4DCDD50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public Vector2 radius
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x4DCDD60", Offset = "0x4DCDD60", VA = "0x4DCDD60")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x4DCDD70", Offset = "0x4DCDD70", VA = "0x4DCDD70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x4DCDD80", Offset = "0x4DCDD80", VA = "0x4DCDD80")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x4DCDD90", Offset = "0x4DCDD90", VA = "0x4DCDD90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public bool fullyExited
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x4DCDDA0", Offset = "0x4DCDDA0", VA = "0x4DCDDA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x4DCDDB0", Offset = "0x4DCDDB0", VA = "0x4DCDDB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public bool reentered
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x4DCDDC0", Offset = "0x4DCDDC0", VA = "0x4DCDDC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x4DCDDD0", Offset = "0x4DCDDD0", VA = "0x4DCDDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public Camera enterEventCamera
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x4DCDF80", Offset = "0x4DCDF80", VA = "0x4DCDF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B2")]
	public Camera pressEventCamera
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x4DCE010", Offset = "0x4DCE010", VA = "0x4DCE010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B3")]
	public GameObject pointerPress
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x4DCE0A0", Offset = "0x4DCE0A0", VA = "0x4DCE0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x4DCE0B0", Offset = "0x4DCE0B0", VA = "0x4DCE0B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4DCDDE0", Offset = "0x4DCDDE0", VA = "0x4DCDDE0")]
	public PointerEventData(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x4DCDF40", Offset = "0x4DCDF40", VA = "0x4DCDF40")]
	public bool IsPointerMoving()
	{
		return default(bool);
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4DCDF60", Offset = "0x4DCDF60", VA = "0x4DCDF60")]
	public bool IsScrolling()
	{
		return default(bool);
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4DCE130", Offset = "0x4DCE130", VA = "0x4DCE130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
