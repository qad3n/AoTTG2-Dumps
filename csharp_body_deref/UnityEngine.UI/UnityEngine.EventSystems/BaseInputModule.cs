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

[Token(Token = "0x20000BA")]
[RequireComponent(typeof(EventSystem))]
public abstract class BaseInputModule : UIBehaviour
{
	[NonSerialized]
	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x20")]
	protected List<RaycastResult> m_RaycastResultCache;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_SendPointerHoverToParent;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x30")]
	private AxisEventData m_AxisEventData;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x38")]
	private EventSystem m_EventSystem;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x40")]
	private BaseEventData m_BaseEventData;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x48")]
	protected BaseInput m_InputOverride;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x50")]
	private BaseInput m_DefaultInput;

	[Token(Token = "0x170001DD")]
	internal bool sendPointerHoverToParent
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x50FAFF0", Offset = "0x50FAFF0", VA = "0x50FAFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x50FB000", Offset = "0x50FB000", VA = "0x50FB000")]
		set
		{
		}
	}

	[Token(Token = "0x170001DE")]
	public BaseInput input
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x50FB010", Offset = "0x50FB010", VA = "0x50FB010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public BaseInput inputOverride
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x50FB250", Offset = "0x50FB250", VA = "0x50FB250")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x50FB260", Offset = "0x50FB260", VA = "0x50FB260")]
		set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	protected EventSystem eventSystem
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x50FB270", Offset = "0x50FB270", VA = "0x50FB270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x50FB280", Offset = "0x50FB280", VA = "0x50FB280", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x50FB2E0", Offset = "0x50FB2E0", VA = "0x50FB2E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006D9")]
	public abstract void Process();

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x50FB300", Offset = "0x50FB300", VA = "0x50FB300")]
	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates)
	{
		return default(RaycastResult);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x50FB430", Offset = "0x50FB430", VA = "0x50FB430")]
	protected static MoveDirection DetermineMoveDirection(float x, float y)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x50FB490", Offset = "0x50FB490", VA = "0x50FB490")]
	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x50FB4F0", Offset = "0x50FB4F0", VA = "0x50FB4F0")]
	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2)
	{
		return null;
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x50FB6B0", Offset = "0x50FB6B0", VA = "0x50FB6B0")]
	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x50FC390", Offset = "0x50FC390", VA = "0x50FC390", Slot = "18")]
	protected virtual AxisEventData GetAxisEventData(float x, float y, float moveDeadZone)
	{
		return null;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x50FC510", Offset = "0x50FC510", VA = "0x50FC510", Slot = "19")]
	protected virtual BaseEventData GetBaseEventData()
	{
		return null;
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x50FC5C0", Offset = "0x50FC5C0", VA = "0x50FC5C0", Slot = "20")]
	public virtual bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x50FC5D0", Offset = "0x50FC5D0", VA = "0x50FC5D0", Slot = "21")]
	public virtual bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x50FC610", Offset = "0x50FC610", VA = "0x50FC610", Slot = "22")]
	public virtual void DeactivateModule()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x50FC620", Offset = "0x50FC620", VA = "0x50FC620", Slot = "23")]
	public virtual void ActivateModule()
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x50FC630", Offset = "0x50FC630", VA = "0x50FC630", Slot = "24")]
	public virtual void UpdateModule()
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x50FC640", Offset = "0x50FC640", VA = "0x50FC640", Slot = "25")]
	public virtual bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x50FC650", Offset = "0x50FC650", VA = "0x50FC650", Slot = "26")]
	public virtual int ConvertUIToolkitPointerId(PointerEventData sourcePointerData)
	{
		return default(int);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x50FC6D0", Offset = "0x50FC6D0", VA = "0x50FC6D0")]
	protected BaseInputModule()
	{
	}
}
