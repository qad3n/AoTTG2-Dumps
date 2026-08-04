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

[Token(Token = "0x20000C4")]
public abstract class BaseRaycaster : UIBehaviour
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x20")]
	private BaseRaycaster m_RootRaycaster;

	[Token(Token = "0x170001EE")]
	public abstract Camera eventCamera
	{
		[Token(Token = "0x600073E")]
		get;
	}

	[Token(Token = "0x170001EF")]
	[Obsolete("Please use sortOrderPriority and renderOrderPriority", false)]
	public virtual int priority
	{
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x5102620", Offset = "0x5102620", VA = "0x5102620", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F0")]
	public virtual int sortOrderPriority
	{
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x5102630", Offset = "0x5102630", VA = "0x5102630", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F1")]
	public virtual int renderOrderPriority
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x5102640", Offset = "0x5102640", VA = "0x5102640", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F2")]
	public BaseRaycaster rootRaycaster
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x50F70E0", Offset = "0x50F70E0", VA = "0x50F70E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600073D")]
	public abstract void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList);

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x5102650", Offset = "0x5102650", VA = "0x5102650", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x5102880", Offset = "0x5102880", VA = "0x5102880", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x51028E0", Offset = "0x51028E0", VA = "0x51028E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x5102940", Offset = "0x5102940", VA = "0x5102940", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x5102970", Offset = "0x5102970", VA = "0x5102970", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x50F4E40", Offset = "0x50F4E40", VA = "0x50F4E40")]
	protected BaseRaycaster()
	{
	}
}
