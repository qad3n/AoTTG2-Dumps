using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C7")]
[AddComponentMenu("Event/Physics Raycaster")]
[RequireComponent(typeof(Camera))]
public class PhysicsRaycaster : BaseRaycaster
{
	[Token(Token = "0x20000C8")]
	private class RaycastHitComparer : IComparer<RaycastHit>
	{
		[Token(Token = "0x4000359")]
		[FieldOffset(Offset = "0x0")]
		public static RaycastHitComparer instance;

		[Token(Token = "0x600075A")]
		[Address(RVA = "0x4DDC750", Offset = "0x4DDC750", VA = "0x4DDC750", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x600075B")]
		[Address(RVA = "0x4DDC780", Offset = "0x4DDC780", VA = "0x4DDC780")]
		public RaycastHitComparer()
		{
		}
	}

	[Token(Token = "0x4000353")]
	protected const int kNoEventMaskSet = -1;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x28")]
	protected Camera m_EventCamera;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected LayerMask m_EventMask;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	protected int m_MaxRayIntersections;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x38")]
	protected int m_LastMaxRayIntersections;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x40")]
	private RaycastHit[] m_Hits;

	[Token(Token = "0x170001F5")]
	public override Camera eventCamera
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x4DDBFC0", Offset = "0x4DDBFC0", VA = "0x4DDBFC0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	public virtual int depth
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x4DDC090", Offset = "0x4DDC090", VA = "0x4DDC090", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F7")]
	public int finalEventMask
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x4DDBF10", Offset = "0x4DDBF10", VA = "0x4DDBF10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F8")]
	public LayerMask eventMask
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x4DDC130", Offset = "0x4DDC130", VA = "0x4DDC130")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x4DDC140", Offset = "0x4DDC140", VA = "0x4DDC140")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public int maxRayIntersections
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x4DDC150", Offset = "0x4DDC150", VA = "0x4DDC150")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x4DDC160", Offset = "0x4DDC160", VA = "0x4DDC160")]
		set
		{
		}
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4DDB1D0", Offset = "0x4DDB1D0", VA = "0x4DDB1D0")]
	protected PhysicsRaycaster()
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x4DDBBD0", Offset = "0x4DDBBD0", VA = "0x4DDBBD0")]
	protected bool ComputeRayAndDistance(PointerEventData eventData, ref Ray ray, ref int eventDisplayIndex, ref float distanceToClipPlane)
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x4DDC170", Offset = "0x4DDC170", VA = "0x4DDC170", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
