using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Token(Token = "0x200001F")]
[AddComponentMenu("Event/Graphic Raycaster")]
[RequireComponent(typeof(Canvas))]
public class GraphicRaycaster : BaseRaycaster
{
	[Token(Token = "0x2000020")]
	public enum BlockingObjects
	{
		[Token(Token = "0x400008C")]
		None,
		[Token(Token = "0x400008D")]
		TwoD,
		[Token(Token = "0x400008E")]
		ThreeD,
		[Token(Token = "0x400008F")]
		All
	}

	[Token(Token = "0x4000084")]
	protected const int kNoEventMaskSet = -1;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("ignoreReversedGraphics")]
	[SerializeField]
	private bool m_IgnoreReversedGraphics;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x2C")]
	[FormerlySerializedAs("blockingObjects")]
	[SerializeField]
	private BlockingObjects m_BlockingObjects;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected LayerMask m_BlockingMask;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x38")]
	private Canvas m_Canvas;

	[NonSerialized]
	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x40")]
	private List<Graphic> m_RaycastResults;

	[NonSerialized]
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<Graphic> s_SortedGraphics;

	[Token(Token = "0x17000043")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x4BD9E40", Offset = "0x4BD9E40", VA = "0x4BD9E40", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000044")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4BD9F20", Offset = "0x4BD9F20", VA = "0x4BD9F20", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public bool ignoreReversedGraphics
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4BD9F70", Offset = "0x4BD9F70", VA = "0x4BD9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4BD9F80", Offset = "0x4BD9F80", VA = "0x4BD9F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public BlockingObjects blockingObjects
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x4BD9F90", Offset = "0x4BD9F90", VA = "0x4BD9F90")]
		get
		{
			return default(BlockingObjects);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4BD9FA0", Offset = "0x4BD9FA0", VA = "0x4BD9FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public LayerMask blockingMask
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4BD9FB0", Offset = "0x4BD9FB0", VA = "0x4BD9FB0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4BD9FC0", Offset = "0x4BD9FC0", VA = "0x4BD9FC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	private Canvas canvas
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x4BD9E90", Offset = "0x4BD9E90", VA = "0x4BD9E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public override Camera eventCamera
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x4BDB910", Offset = "0x4BDB910", VA = "0x4BDB910", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4BD9FD0", Offset = "0x4BD9FD0", VA = "0x4BD9FD0")]
	protected GraphicRaycaster()
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4BDA060", Offset = "0x4BDA060", VA = "0x4BDA060", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4BDB230", Offset = "0x4BDB230", VA = "0x4BDB230")]
	private static void Raycast(Canvas canvas, Camera eventCamera, Vector2 pointerPosition, IList<Graphic> foundGraphics, List<Graphic> results)
	{
	}
}
