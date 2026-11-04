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
		[Address(RVA = "0x306F110", Offset = "0x306D710", VA = "0x18306F110", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000044")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x306F0B0", Offset = "0x306D6B0", VA = "0x18306F0B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public bool ignoreReversedGraphics
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public BlockingObjects blockingObjects
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(BlockingObjects);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public LayerMask blockingMask
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	private Canvas canvas
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x306EF60", Offset = "0x306D560", VA = "0x18306EF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000049")]
	public override Camera eventCamera
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x306EFF0", Offset = "0x306D5F0", VA = "0x18306EFF0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x306EED0", Offset = "0x306D4D0", VA = "0x18306EED0")]
	protected GraphicRaycaster()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x306DFD0", Offset = "0x306C5D0", VA = "0x18306DFD0", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x306DA10", Offset = "0x306C010", VA = "0x18306DA10")]
	private static void Raycast(Canvas canvas, Camera eventCamera, Vector2 pointerPosition, IList<Graphic> foundGraphics, List<Graphic> results)
	{
	}
}
