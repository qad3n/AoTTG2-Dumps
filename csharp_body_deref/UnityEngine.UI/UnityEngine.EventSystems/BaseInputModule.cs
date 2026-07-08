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
		[Address(RVA = "0x4DD36A0", Offset = "0x4DD36A0", VA = "0x4DD36A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x4DD36B0", Offset = "0x4DD36B0", VA = "0x4DD36B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DE")]
	public BaseInput input
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x4DD36C0", Offset = "0x4DD36C0", VA = "0x4DD36C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public BaseInput inputOverride
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x4DD3900", Offset = "0x4DD3900", VA = "0x4DD3900")]
		get
		{
			return null;
		}
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x4DD3910", Offset = "0x4DD3910", VA = "0x4DD3910")]
		set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	protected EventSystem eventSystem
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x4DD3920", Offset = "0x4DD3920", VA = "0x4DD3920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4DD3930", Offset = "0x4DD3930", VA = "0x4DD3930", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4DD3990", Offset = "0x4DD3990", VA = "0x4DD3990", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006D9")]
	public abstract void Process();

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4DD39B0", Offset = "0x4DD39B0", VA = "0x4DD39B0")]
	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates)
	{
		return default(RaycastResult);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4DD3AE0", Offset = "0x4DD3AE0", VA = "0x4DD3AE0")]
	protected static MoveDirection DetermineMoveDirection(float x, float y)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4DD3B40", Offset = "0x4DD3B40", VA = "0x4DD3B40")]
	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone)
	{
		return default(MoveDirection);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4DD3BA0", Offset = "0x4DD3BA0", VA = "0x4DD3BA0")]
	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2)
	{
		return null;
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4DD3D60", Offset = "0x4DD3D60", VA = "0x4DD3D60")]
	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4DD4A40", Offset = "0x4DD4A40", VA = "0x4DD4A40", Slot = "18")]
	protected virtual AxisEventData GetAxisEventData(float x, float y, float moveDeadZone)
	{
		return null;
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4DD4BC0", Offset = "0x4DD4BC0", VA = "0x4DD4BC0", Slot = "19")]
	protected virtual BaseEventData GetBaseEventData()
	{
		return null;
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4DD4C70", Offset = "0x4DD4C70", VA = "0x4DD4C70", Slot = "20")]
	public virtual bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4DD4C80", Offset = "0x4DD4C80", VA = "0x4DD4C80", Slot = "21")]
	public virtual bool ShouldActivateModule()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4DD4CC0", Offset = "0x4DD4CC0", VA = "0x4DD4CC0", Slot = "22")]
	public virtual void DeactivateModule()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4DD4CD0", Offset = "0x4DD4CD0", VA = "0x4DD4CD0", Slot = "23")]
	public virtual void ActivateModule()
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4DD4CE0", Offset = "0x4DD4CE0", VA = "0x4DD4CE0", Slot = "24")]
	public virtual void UpdateModule()
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4DD4CF0", Offset = "0x4DD4CF0", VA = "0x4DD4CF0", Slot = "25")]
	public virtual bool IsModuleSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4DD4D00", Offset = "0x4DD4D00", VA = "0x4DD4D00", Slot = "26")]
	public virtual int ConvertUIToolkitPointerId(PointerEventData sourcePointerData)
	{
		return default(int);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4DD4D80", Offset = "0x4DD4D80", VA = "0x4DD4D80")]
	protected BaseInputModule()
	{
	}
}
