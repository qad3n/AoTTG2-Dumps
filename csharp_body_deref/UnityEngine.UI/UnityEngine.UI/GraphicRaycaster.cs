// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.GraphicRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x200001D")]
[AddComponentMenu("Event/Graphic Raycaster")]
[RequireComponent(typeof(Canvas))]
[UnityEngine.UGUIHelpURL("GraphicRaycaster")]
public class GraphicRaycaster : BaseRaycaster
{
	[Token(Token = "0x200001E")]
	public enum BlockingObjects
	{
		[Token(Token = "0x4000087")]
		None,
		[Token(Token = "0x4000088")]
		TwoD,
		[Token(Token = "0x4000089")]
		ThreeD,
		[Token(Token = "0x400008A")]
		All
	}

	[Token(Token = "0x400007F")]
	protected const int kNoEventMaskSet = -1;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("ignoreReversedGraphics")]
	[SerializeField]
	private bool m_IgnoreReversedGraphics;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x2C")]
	[FormerlySerializedAs("blockingObjects")]
	[SerializeField]
	private BlockingObjects m_BlockingObjects;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected LayerMask m_BlockingMask;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x38")]
	private Canvas m_Canvas;

	[NonSerialized]
	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x40")]
	private List<Graphic> m_RaycastResults;

	[NonSerialized]
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<Graphic> s_SortedGraphics;

	[Token(Token = "0x17000043")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x6A6EA50", Offset = "0x6A6DA50", VA = "0x6A6EA50", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000044")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x6A6EB30", Offset = "0x6A6DB30", VA = "0x6A6EB30", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public bool ignoreReversedGraphics
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x6A6EB80", Offset = "0x6A6DB80", VA = "0x6A6EB80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x6A6EB90", Offset = "0x6A6DB90", VA = "0x6A6EB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public BlockingObjects blockingObjects
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x6A6EBA0", Offset = "0x6A6DBA0", VA = "0x6A6EBA0")]
		get
		{
			return default(BlockingObjects);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x6A6EBB0", Offset = "0x6A6DBB0", VA = "0x6A6EBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public LayerMask blockingMask
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x6A6EBC0", Offset = "0x6A6DBC0", VA = "0x6A6EBC0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x6A6EBD0", Offset = "0x6A6DBD0", VA = "0x6A6EBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	private Canvas canvas
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x6A6EAA0", Offset = "0x6A6DAA0", VA = "0x6A6EAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public override Camera eventCamera
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x6A70280", Offset = "0x6A6F280", VA = "0x6A70280", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x6A6EBE0", Offset = "0x6A6DBE0", VA = "0x6A6EBE0")]
	protected GraphicRaycaster()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x6A6EC70", Offset = "0x6A6DC70", VA = "0x6A6EC70", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x6A6FBA0", Offset = "0x6A6EBA0", VA = "0x6A6FBA0")]
	private static void Raycast(Canvas canvas, Camera eventCamera, Vector2 pointerPosition, IList<Graphic> foundGraphics, List<Graphic> results)
	{
	}
}
