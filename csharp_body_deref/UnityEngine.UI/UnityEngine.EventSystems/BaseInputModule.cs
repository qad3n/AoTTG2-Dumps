// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseInputModule
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6D0D520", Offset = "0x6D0C520", VA = "0x6D0D520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x6D0D530", Offset = "0x6D0C530", VA = "0x6D0D530")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public BaseInput input
	{
		[Token(Token = "0x6000715")]
		[Address(RVA = "0x6D0D540", Offset = "0x6D0C540", VA = "0x6D0D540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EF")]
	public BaseInput inputOverride
	{
		[Token(Token = "0x6000716")]
		[Address(RVA = "0x6D0D780", Offset = "0x6D0C780", VA = "0x6D0D780")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000717")]
		[Address(RVA = "0x6D0D790", Offset = "0x6D0C790", VA = "0x6D0D790")]
		set
		{
		}
	}

	[Token(Token = "0x170001F0")]
	protected EventSystem eventSystem
	{
		[Token(Token = "0x6000718")]
		[Address(RVA = "0x6D0D7A0", Offset = "0x6D0C7A0", VA = "0x6D0D7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x6D0D7B0", Offset = "0x6D0C7B0", VA = "0x6D0D7B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x6D0D810", Offset = "0x6D0C810", VA = "0x6D0D810", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600071B")]
	public abstract void Process();

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x6D0D830", Offset = "0x6D0C830", VA = "0x6D0D830")]
	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates)
	{
		return default(RaycastResult);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x6D0D980", Offset = "0x6D0C980", VA = "0x6D0D980")]
	protected static MoveDirection DetermineMoveDirection(float x, float y)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x6D0D9E0", Offset = "0x6D0C9E0", VA = "0x6D0D9E0")]
	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x6D0DA40", Offset = "0x6D0CA40", VA = "0x6D0DA40")]
	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2)
	{
		return null;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x6D0DC00", Offset = "0x6D0CC00", VA = "0x6D0DC00")]
	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x6D0E920", Offset = "0x6D0D920", VA = "0x6D0E920", Slot = "18")]
	protected virtual AxisEventData GetAxisEventData(float x, float y, float moveDeadZone)
	{
		return null;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x6D0EAA0", Offset = "0x6D0DAA0", VA = "0x6D0EAA0", Slot = "19")]
	protected virtual BaseEventData GetBaseEventData()
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x6D0EB50", Offset = "0x6D0DB50", VA = "0x6D0EB50", Slot = "20")]
	public virtual bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x6D0EB60", Offset = "0x6D0DB60", VA = "0x6D0EB60", Slot = "21")]
	public virtual bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x6D0EBA0", Offset = "0x6D0DBA0", VA = "0x6D0EBA0", Slot = "22")]
	public virtual void DeactivateModule()
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x6D0EBB0", Offset = "0x6D0DBB0", VA = "0x6D0EBB0", Slot = "23")]
	public virtual void ActivateModule()
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x6D0EBC0", Offset = "0x6D0DBC0", VA = "0x6D0EBC0", Slot = "24")]
	public virtual void UpdateModule()
	{
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x6D0EBD0", Offset = "0x6D0DBD0", VA = "0x6D0EBD0", Slot = "25")]
	public virtual bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x6D0EBE0", Offset = "0x6D0DBE0", VA = "0x6D0EBE0", Slot = "26")]
	public virtual int ConvertUIToolkitPointerId(PointerEventData sourcePointerData)
	{
		return default(int);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x6D0EC70", Offset = "0x6D0DC70", VA = "0x6D0EC70", Slot = "27")]
	public virtual Vector2 ConvertPointerEventScrollDeltaToTicks(Vector2 scrollDelta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x6D0ECB0", Offset = "0x6D0DCB0", VA = "0x6D0ECB0", Slot = "28")]
	public virtual NavigationDeviceType GetNavigationEventDeviceType(BaseEventData eventData)
	{
		return default(NavigationDeviceType);
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x6D0ECC0", Offset = "0x6D0DCC0", VA = "0x6D0ECC0")]
	protected BaseInputModule()
	{
	}
}
