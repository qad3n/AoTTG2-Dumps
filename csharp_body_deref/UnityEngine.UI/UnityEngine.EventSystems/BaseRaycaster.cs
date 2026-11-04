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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public virtual int sortOrderPriority
	{
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x32F2360", Offset = "0x32F0960", VA = "0x1832F2360", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	public virtual int renderOrderPriority
	{
		[Token(Token = "0x600078B")]
		[Address(RVA = "0x32F2360", Offset = "0x32F0960", VA = "0x1832F2360", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000204")]
	public BaseRaycaster rootRaycaster
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x32F2370", Offset = "0x32F0970", VA = "0x1832F2370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000787")]
	public abstract void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList);

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x32F2150", Offset = "0x32F0750", VA = "0x1832F2150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x32F2000", Offset = "0x32F0600", VA = "0x1832F2000", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x32F1F00", Offset = "0x32F0500", VA = "0x1832F1F00", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x32F1EE0", Offset = "0x32F04E0", VA = "0x1832F1EE0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x32F1EE0", Offset = "0x32F04E0", VA = "0x1832F1EE0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected BaseRaycaster()
	{
	}
}
