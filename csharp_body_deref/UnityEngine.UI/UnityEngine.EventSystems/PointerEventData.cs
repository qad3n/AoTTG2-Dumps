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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public GameObject lastPress
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public GameObject rawPointerPress
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A4")]
	public GameObject pointerDrag
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000642")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A5")]
	public GameObject pointerClick
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000644")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A6")]
	public RaycastResult pointerCurrentRaycast
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x32FBAE0", Offset = "0x32FA0E0", VA = "0x1832FBAE0")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x32FBE30", Offset = "0x32FA430", VA = "0x1832FBE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public RaycastResult pointerPressRaycast
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x32FBB40", Offset = "0x32FA140", VA = "0x1832FBB40")]
		[CompilerGenerated]
		get
		{
			return default(RaycastResult);
		}
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x32FBE90", Offset = "0x32FA490", VA = "0x1832FBE90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public bool eligibleForClick
	{
		[Token(Token = "0x6000649")]
		[Address(RVA = "0x32FBA10", Offset = "0x32FA010", VA = "0x1832FBA10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x32FBE00", Offset = "0x32FA400", VA = "0x1832FBE00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public int displayIndex
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x32FB9F0", Offset = "0x32F9FF0", VA = "0x1832FB9F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x32FBDE0", Offset = "0x32FA3E0", VA = "0x1832FBDE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	public int pointerId
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x32FBB30", Offset = "0x32FA130", VA = "0x1832FBB30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x32FBE80", Offset = "0x32FA480", VA = "0x1832FBE80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	public Vector2 position
	{
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x32FBB90", Offset = "0x32FA190", VA = "0x1832FBB90")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x32FBF80", Offset = "0x32FA580", VA = "0x1832FBF80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	public Vector2 delta
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x32FB9D0", Offset = "0x32F9FD0", VA = "0x1832FB9D0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x32FBDD0", Offset = "0x32FA3D0", VA = "0x1832FBDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	public Vector2 pressPosition
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x32FBC50", Offset = "0x32FA250", VA = "0x1832FBC50")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x32FBF90", Offset = "0x32FA590", VA = "0x1832FBF90")]
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
		[Address(RVA = "0x32FBD60", Offset = "0x32FA360", VA = "0x1832FBD60")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x32FC040", Offset = "0x32FA640", VA = "0x1832FC040")]
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
		[Address(RVA = "0x32FBD40", Offset = "0x32FA340", VA = "0x1832FBD40")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x32FC020", Offset = "0x32FA620", VA = "0x1832FC020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public float clickTime
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x32FB9C0", Offset = "0x32F9FC0", VA = "0x1832FB9C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x32FBDC0", Offset = "0x32FA3C0", VA = "0x1832FBDC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public int clickCount
	{
		[Token(Token = "0x600065B")]
		[Address(RVA = "0x2602C40", Offset = "0x2601240", VA = "0x182602C40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x32FBDB0", Offset = "0x32FA3B0", VA = "0x1832FBDB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public Vector2 scrollDelta
	{
		[Token(Token = "0x600065D")]
		[Address(RVA = "0x32FBCD0", Offset = "0x32FA2D0", VA = "0x1832FBCD0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x32FBFE0", Offset = "0x32FA5E0", VA = "0x1832FBFE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public bool useDragThreshold
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x32FBD30", Offset = "0x32FA330", VA = "0x1832FBD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000660")]
		[Address(RVA = "0x319B010", Offset = "0x3199610", VA = "0x18319B010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B4")]
	public bool dragging
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x32FBA00", Offset = "0x32FA000", VA = "0x1832FBA00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x32FBDF0", Offset = "0x32FA3F0", VA = "0x1832FBDF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	public InputButton button
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x2D07410", Offset = "0x2D05A10", VA = "0x182D07410")]
		[CompilerGenerated]
		get
		{
			return default(InputButton);
		}
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x32FBDA0", Offset = "0x32FA3A0", VA = "0x1832FBDA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public float pressure
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x32FBC70", Offset = "0x32FA270", VA = "0x1832FBC70")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x32FBFA0", Offset = "0x32FA5A0", VA = "0x1832FBFA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public float tangentialPressure
	{
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x32FBCF0", Offset = "0x32FA2F0", VA = "0x1832FBCF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x32FBFF0", Offset = "0x32FA5F0", VA = "0x1832FBFF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	public float altitudeAngle
	{
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x32FB9B0", Offset = "0x32F9FB0", VA = "0x1832FB9B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x32FBD80", Offset = "0x32FA380", VA = "0x1832FBD80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	public float azimuthAngle
	{
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x2AF7E10", Offset = "0x2AF6410", VA = "0x182AF7E10")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x32FBD90", Offset = "0x32FA390", VA = "0x1832FBD90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	public float twist
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x32FBD20", Offset = "0x32FA320", VA = "0x1832FBD20")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x32FC010", Offset = "0x32FA610", VA = "0x1832FC010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	public Vector2 tilt
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x32FBD00", Offset = "0x32FA300", VA = "0x1832FBD00")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000670")]
		[Address(RVA = "0x32FC000", Offset = "0x32FA600", VA = "0x1832FC000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BC")]
	public PenStatus penStatus
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x32FBAD0", Offset = "0x32FA0D0", VA = "0x1832FBAD0")]
		[CompilerGenerated]
		get
		{
			return default(PenStatus);
		}
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x32FBE20", Offset = "0x32FA420", VA = "0x1832FBE20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	public Vector2 radius
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x32FBCA0", Offset = "0x32FA2A0", VA = "0x1832FBCA0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x32FBFC0", Offset = "0x32FA5C0", VA = "0x1832FBFC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BE")]
	public Vector2 radiusVariance
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x32FBC80", Offset = "0x32FA280", VA = "0x1832FBC80")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x32FBFB0", Offset = "0x32FA5B0", VA = "0x1832FBFB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	public bool fullyExited
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x32FBAC0", Offset = "0x32FA0C0", VA = "0x1832FBAC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x32FBE10", Offset = "0x32FA410", VA = "0x1832FBE10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C0")]
	public bool reentered
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x32FBCC0", Offset = "0x32FA2C0", VA = "0x1832FBCC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x32FBFD0", Offset = "0x32FA5D0", VA = "0x1832FBFD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C1")]
	public Camera enterEventCamera
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x32FBA20", Offset = "0x32FA020", VA = "0x1832FBA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public Camera pressEventCamera
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x32FBBB0", Offset = "0x32FA1B0", VA = "0x1832FBBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public GameObject pointerPress
	{
		[Token(Token = "0x6000680")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x32FBEF0", Offset = "0x32FA4F0", VA = "0x1832FBEF0")]
		set
		{
		}
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x32FB750", Offset = "0x32F9D50", VA = "0x1832FB750")]
	public PointerEventData(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x32FB010", Offset = "0x32F9610", VA = "0x1832FB010")]
	public bool IsPointerMoving()
	{
		return default(bool);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x32FB040", Offset = "0x32F9640", VA = "0x1832FB040")]
	public bool IsScrolling()
	{
		return default(bool);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x32FB070", Offset = "0x32F9670", VA = "0x1832FB070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
