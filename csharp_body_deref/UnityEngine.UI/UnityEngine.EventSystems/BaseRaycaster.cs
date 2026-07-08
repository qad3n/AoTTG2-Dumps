using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C5")]
public abstract class BaseRaycaster : UIBehaviour
{
	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x20")]
	private BaseRaycaster m_RootRaycaster;

	[Token(Token = "0x170001F0")]
	public abstract Camera eventCamera
	{
		[Token(Token = "0x6000743")]
		get;
	}

	[Token(Token = "0x170001F1")]
	[Obsolete("Please use sortOrderPriority and renderOrderPriority", false)]
	public virtual int priority
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x4DDAE30", Offset = "0x4DDAE30", VA = "0x4DDAE30", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F2")]
	public virtual int sortOrderPriority
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x4DDAE40", Offset = "0x4DDAE40", VA = "0x4DDAE40", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F3")]
	public virtual int renderOrderPriority
	{
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x4DDAE50", Offset = "0x4DDAE50", VA = "0x4DDAE50", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F4")]
	public BaseRaycaster rootRaycaster
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x4DCF790", Offset = "0x4DCF790", VA = "0x4DCF790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000742")]
	public abstract void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList);

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4DDAE60", Offset = "0x4DDAE60", VA = "0x4DDAE60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4DDB090", Offset = "0x4DDB090", VA = "0x4DDB090", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4DDB0F0", Offset = "0x4DDB0F0", VA = "0x4DDB0F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4DDB150", Offset = "0x4DDB150", VA = "0x4DDB150", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4DDB180", Offset = "0x4DDB180", VA = "0x4DDB180", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x4DCD4F0", Offset = "0x4DCD4F0", VA = "0x4DCD4F0")]
	protected BaseRaycaster()
	{
	}
}
