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
		[Address(RVA = "0x50F5240", Offset = "0x50F5240", VA = "0x50F5240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F5")]
		[Address(RVA = "0x50F5250", Offset = "0x50F5250", VA = "0x50F5250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public GameObject lastPress
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x50F5260", Offset = "0x50F5260", VA = "0x50F5260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x50F5270", Offset = "0x50F5270", VA = "0x50F5270")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public GameObject rawPointerPress
	{
		[Token(Token = "0x60005F8")]
		[Address(RVA = "0x50F5280", Offset = "0x50F5280", VA = "0x50F5280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x50F5290", Offset = "0x50F5290", VA = "0x50F5290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public GameObject pointerDrag
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x50F52A0", Offset = "0x50F52A0", VA = "0x50F52A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x50F52B0", Offset = "0x50F52B0", VA = "0x50F52B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public GameObject pointerClick
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x50F52C0", Offset = "0x50F52C0", VA = "0x50F52C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x50F52D0", Offset = "0x50F52D0", VA = "0x50F52D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public RaycastResult pointerCurrentRaycast
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x50F52E0", Offset = "0x50F52E0", VA = "0x50F52E0")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x50F5320", Offset = "0x50F5320", VA = "0x50F5320")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public RaycastResult pointerPressRaycast
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x50F5360", Offset = "0x50F5360", VA = "0x50F5360")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x50F53A0", Offset = "0x50F53A0", VA = "0x50F53A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public bool eligibleForClick
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x50F53F0", Offset = "0x50F53F0", VA = "0x50F53F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x50F5400", Offset = "0x50F5400", VA = "0x50F5400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public int displayIndex
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x50F5410", Offset = "0x50F5410", VA = "0x50F5410")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x50F5420", Offset = "0x50F5420", VA = "0x50F5420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	public int pointerId
	{
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x50F5430", Offset = "0x50F5430", VA = "0x50F5430")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x50F5440", Offset = "0x50F5440", VA = "0x50F5440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019B")]
	public Vector2 position
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x50F5450", Offset = "0x50F5450", VA = "0x50F5450")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x50F5460", Offset = "0x50F5460", VA = "0x50F5460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019C")]
	public Vector2 delta
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x50F5470", Offset = "0x50F5470", VA = "0x50F5470")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x50F5480", Offset = "0x50F5480", VA = "0x50F5480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	public Vector2 pressPosition
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x50F5490", Offset = "0x50F5490", VA = "0x50F5490")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x50F54A0", Offset = "0x50F54A0", VA = "0x50F54A0")]
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
		[Address(RVA = "0x50F54B0", Offset = "0x50F54B0", VA = "0x50F54B0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x50F54D0", Offset = "0x50F54D0", VA = "0x50F54D0")]
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
		[Address(RVA = "0x50F54E0", Offset = "0x50F54E0", VA = "0x50F54E0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x50F5500", Offset = "0x50F5500", VA = "0x50F5500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public float clickTime
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x50F5510", Offset = "0x50F5510", VA = "0x50F5510")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x50F5520", Offset = "0x50F5520", VA = "0x50F5520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	public int clickCount
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x50F5530", Offset = "0x50F5530", VA = "0x50F5530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x50F5540", Offset = "0x50F5540", VA = "0x50F5540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public Vector2 scrollDelta
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x50F5550", Offset = "0x50F5550", VA = "0x50F5550")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x50F5560", Offset = "0x50F5560", VA = "0x50F5560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public bool useDragThreshold
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x50F5570", Offset = "0x50F5570", VA = "0x50F5570")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x50F5580", Offset = "0x50F5580", VA = "0x50F5580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public bool dragging
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x50F5590", Offset = "0x50F5590", VA = "0x50F5590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x50F55A0", Offset = "0x50F55A0", VA = "0x50F55A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public InputButton button
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x50F55B0", Offset = "0x50F55B0", VA = "0x50F55B0")]
		[CompilerGenerated]
		get
		{
			return default(InputButton);
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x50F55C0", Offset = "0x50F55C0", VA = "0x50F55C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public float pressure
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x50F55D0", Offset = "0x50F55D0", VA = "0x50F55D0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x50F55E0", Offset = "0x50F55E0", VA = "0x50F55E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x50F55F0", Offset = "0x50F55F0", VA = "0x50F55F0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x50F5600", Offset = "0x50F5600", VA = "0x50F5600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x50F5610", Offset = "0x50F5610", VA = "0x50F5610")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x50F5620", Offset = "0x50F5620", VA = "0x50F5620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public float azimuthAngle
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x50F5630", Offset = "0x50F5630", VA = "0x50F5630")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x50F5640", Offset = "0x50F5640", VA = "0x50F5640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public float twist
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x50F5650", Offset = "0x50F5650", VA = "0x50F5650")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x50F5660", Offset = "0x50F5660", VA = "0x50F5660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public Vector2 tilt
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x50F5670", Offset = "0x50F5670", VA = "0x50F5670")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x50F5680", Offset = "0x50F5680", VA = "0x50F5680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public PenStatus penStatus
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x50F5690", Offset = "0x50F5690", VA = "0x50F5690")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x50F56A0", Offset = "0x50F56A0", VA = "0x50F56A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public Vector2 radius
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x50F56B0", Offset = "0x50F56B0", VA = "0x50F56B0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x50F56C0", Offset = "0x50F56C0", VA = "0x50F56C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AE")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x50F56D0", Offset = "0x50F56D0", VA = "0x50F56D0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x50F56E0", Offset = "0x50F56E0", VA = "0x50F56E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public bool fullyExited
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x50F56F0", Offset = "0x50F56F0", VA = "0x50F56F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x50F5700", Offset = "0x50F5700", VA = "0x50F5700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public bool reentered
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x50F5710", Offset = "0x50F5710", VA = "0x50F5710")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x50F5720", Offset = "0x50F5720", VA = "0x50F5720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public Camera enterEventCamera
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x50F58D0", Offset = "0x50F58D0", VA = "0x50F58D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B2")]
	public Camera pressEventCamera
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x50F5960", Offset = "0x50F5960", VA = "0x50F5960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B3")]
	public GameObject pointerPress
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x50F59F0", Offset = "0x50F59F0", VA = "0x50F59F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x50F5A00", Offset = "0x50F5A00", VA = "0x50F5A00")]
		set
		{
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x50F5730", Offset = "0x50F5730", VA = "0x50F5730")]
	public PointerEventData(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x50F5890", Offset = "0x50F5890", VA = "0x50F5890")]
	public bool IsPointerMoving()
	{
		return default(bool);
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x50F58B0", Offset = "0x50F58B0", VA = "0x50F58B0")]
	public bool IsScrolling()
	{
		return default(bool);
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x50F5A80", Offset = "0x50F5A80", VA = "0x50F5A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
