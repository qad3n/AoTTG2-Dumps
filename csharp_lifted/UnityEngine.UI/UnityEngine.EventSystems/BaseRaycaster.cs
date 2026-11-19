// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.BaseRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C7")]
public abstract class BaseRaycaster : UIBehaviour
{
	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x20")]
	private BaseRaycaster m_RootRaycaster;

	[Token(Token = "0x17000200")]
	public abstract Camera eventCamera
	{
		[Token(Token = "0x6000788")]
		get;
	}

	[Token(Token = "0x17000201")]
	[Obsolete("Please use sortOrderPriority and renderOrderPriority", false)]
	public virtual int priority
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x6D15320", Offset = "0x6D14320", VA = "0x6D15320", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public virtual int sortOrderPriority
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x6D15330", Offset = "0x6D14330", VA = "0x6D15330", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	public virtual int renderOrderPriority
	{
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x6D15340", Offset = "0x6D14340", VA = "0x6D15340", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000204")]
	public BaseRaycaster rootRaycaster
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x6D09AD0", Offset = "0x6D08AD0", VA = "0x6D09AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000787")]
	public abstract void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList);

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x6D15350", Offset = "0x6D14350", VA = "0x6D15350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x6D15590", Offset = "0x6D14590", VA = "0x6D15590", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x6D155F0", Offset = "0x6D145F0", VA = "0x6D155F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x6D15650", Offset = "0x6D14650", VA = "0x6D15650", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x6D15680", Offset = "0x6D14680", VA = "0x6D15680", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x6D052F0", Offset = "0x6D042F0", VA = "0x6D052F0")]
	protected BaseRaycaster()
	{
	}
}
