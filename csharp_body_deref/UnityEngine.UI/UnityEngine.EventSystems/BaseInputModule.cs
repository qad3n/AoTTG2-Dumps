// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseInputModule
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000BB")]
[RequireComponent(typeof(EventSystem))]
public abstract class BaseInputModule : UIBehaviour
{
	[NonSerialized]
	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x20")]
	protected List<RaycastResult> m_RaycastResultCache;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_SendPointerHoverToParent;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x30")]
	private AxisEventData m_AxisEventData;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x38")]
	private EventSystem m_EventSystem;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x40")]
	private BaseEventData m_BaseEventData;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x48")]
	protected BaseInput m_InputOverride;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x50")]
	private BaseInput m_DefaultInput;

	[Token(Token = "0x170001ED")]
	protected internal bool sendPointerHoverToParent
	{
		[Token(Token = "0x6000713")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000714")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public BaseInput input
	{
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x32F1C70", Offset = "0x32F0270", VA = "0x1832F1C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EF")]
	public BaseInput inputOverride
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x170001F0")]
	protected EventSystem eventSystem
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x32F1B50", Offset = "0x32F0150", VA = "0x1832F1B50", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x32F1B30", Offset = "0x32F0130", VA = "0x1832F1B30", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600071B")]
	public abstract void Process();

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x32F0CA0", Offset = "0x32EF2A0", VA = "0x1832F0CA0")]
	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates)
	{
		return default(RaycastResult);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x32F0B00", Offset = "0x32EF100", VA = "0x1832F0B00")]
	protected static MoveDirection DetermineMoveDirection(float x, float y)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x32F0A70", Offset = "0x32EF070", VA = "0x1832F0A70")]
	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x32F0B10", Offset = "0x32EF110", VA = "0x1832F0B10")]
	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2)
	{
		return null;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x32F1000", Offset = "0x32EF600", VA = "0x1832F1000")]
	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x32F0E00", Offset = "0x32EF400", VA = "0x1832F0E00", Slot = "18")]
	protected virtual AxisEventData GetAxisEventData(float x, float y, float moveDeadZone)
	{
		return null;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x32F0F50", Offset = "0x32EF550", VA = "0x1832F0F50", Slot = "19")]
	protected virtual BaseEventData GetBaseEventData()
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "20")]
	public virtual bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x32F1BB0", Offset = "0x32F01B0", VA = "0x1832F1BB0", Slot = "21")]
	public virtual bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
	public virtual void DeactivateModule()
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "23")]
	public virtual void ActivateModule()
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "24")]
	public virtual void UpdateModule()
	{
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "25")]
	public virtual bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x32F09D0", Offset = "0x32EEFD0", VA = "0x1832F09D0", Slot = "26")]
	public virtual int ConvertUIToolkitPointerId(PointerEventData sourcePointerData)
	{
		return default(int);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x32F0960", Offset = "0x32EEF60", VA = "0x1832F0960", Slot = "27")]
	public virtual Vector2 ConvertPointerEventScrollDeltaToTicks(Vector2 scrollDelta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "28")]
	public virtual NavigationDeviceType GetNavigationEventDeviceType(BaseEventData eventData)
	{
		return default(NavigationDeviceType);
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x32F1BF0", Offset = "0x32F01F0", VA = "0x1832F1BF0")]
	protected BaseInputModule()
	{
	}
}
