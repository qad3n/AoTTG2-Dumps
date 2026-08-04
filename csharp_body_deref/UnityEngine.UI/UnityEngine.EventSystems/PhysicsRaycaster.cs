// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.PhysicsRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C6")]
[AddComponentMenu("Event/Physics Raycaster")]
[RequireComponent(typeof(Camera))]
public class PhysicsRaycaster : BaseRaycaster
{
	[Token(Token = "0x20000C7")]
	private class RaycastHitComparer : IComparer<RaycastHit>
	{
		[Token(Token = "0x400034C")]
		[FieldOffset(Offset = "0x0")]
		public static RaycastHitComparer instance;

		[Token(Token = "0x6000755")]
		[Address(RVA = "0x5103F40", Offset = "0x5103F40", VA = "0x5103F40", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x6000756")]
		[Address(RVA = "0x5103F70", Offset = "0x5103F70", VA = "0x5103F70")]
		public RaycastHitComparer()
		{
		}
	}

	[Token(Token = "0x4000346")]
	protected const int kNoEventMaskSet = -1;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x28")]
	protected Camera m_EventCamera;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected LayerMask m_EventMask;

	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	protected int m_MaxRayIntersections;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x38")]
	protected int m_LastMaxRayIntersections;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x40")]
	private RaycastHit[] m_Hits;

	[Token(Token = "0x170001F3")]
	public override Camera eventCamera
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x51037B0", Offset = "0x51037B0", VA = "0x51037B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public virtual int depth
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x5103880", Offset = "0x5103880", VA = "0x5103880", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F5")]
	public int finalEventMask
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x5103700", Offset = "0x5103700", VA = "0x5103700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F6")]
	public LayerMask eventMask
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x5103920", Offset = "0x5103920", VA = "0x5103920")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x5103930", Offset = "0x5103930", VA = "0x5103930")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	public int maxRayIntersections
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x5103940", Offset = "0x5103940", VA = "0x5103940")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x5103950", Offset = "0x5103950", VA = "0x5103950")]
		set
		{
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x51029C0", Offset = "0x51029C0", VA = "0x51029C0")]
	protected PhysicsRaycaster()
	{
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x51033C0", Offset = "0x51033C0", VA = "0x51033C0")]
	protected bool ComputeRayAndDistance(PointerEventData eventData, ref Ray ray, ref int eventDisplayIndex, ref float distanceToClipPlane)
	{
		return default(bool);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x5103960", Offset = "0x5103960", VA = "0x5103960", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
