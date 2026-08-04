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
		[Address(RVA = "0x4F01770", Offset = "0x4F01770", VA = "0x4F01770", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000044")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4F01850", Offset = "0x4F01850", VA = "0x4F01850", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public bool ignoreReversedGraphics
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4F018A0", Offset = "0x4F018A0", VA = "0x4F018A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4F018B0", Offset = "0x4F018B0", VA = "0x4F018B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public BlockingObjects blockingObjects
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x4F018C0", Offset = "0x4F018C0", VA = "0x4F018C0")]
		get
		{
			return default(BlockingObjects);
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4F018D0", Offset = "0x4F018D0", VA = "0x4F018D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public LayerMask blockingMask
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4F018E0", Offset = "0x4F018E0", VA = "0x4F018E0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4F018F0", Offset = "0x4F018F0", VA = "0x4F018F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	private Canvas canvas
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x4F017C0", Offset = "0x4F017C0", VA = "0x4F017C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public override Camera eventCamera
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x4F03240", Offset = "0x4F03240", VA = "0x4F03240", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4F01900", Offset = "0x4F01900", VA = "0x4F01900")]
	protected GraphicRaycaster()
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4F01990", Offset = "0x4F01990", VA = "0x4F01990", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4F02B60", Offset = "0x4F02B60", VA = "0x4F02B60")]
	private static void Raycast(Canvas canvas, Camera eventCamera, Vector2 pointerPosition, IList<Graphic> foundGraphics, List<Graphic> results)
	{
	}
}
