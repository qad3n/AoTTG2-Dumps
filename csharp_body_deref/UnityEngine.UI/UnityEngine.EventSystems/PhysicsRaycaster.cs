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

[Token(Token = "0x20000C9")]
[AddComponentMenu("Event/Physics Raycaster")]
[RequireComponent(typeof(Camera))]
[UnityEngine.UGUIHelpURL("PhysicsRaycaster")]
public class PhysicsRaycaster : BaseRaycaster
{
	[Token(Token = "0x20000CA")]
	private class RaycastHitComparer : IComparer<RaycastHit>
	{
		[Token(Token = "0x4000381")]
		[FieldOffset(Offset = "0x0")]
		public static RaycastHitComparer instance;

		[Token(Token = "0x600079F")]
		[Address(RVA = "0x2336490", Offset = "0x2334A90", VA = "0x182336490", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public RaycastHitComparer()
		{
		}
	}

	[Token(Token = "0x400037B")]
	protected const int kNoEventMaskSet = -1;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x28")]
	protected Camera m_EventCamera;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected LayerMask m_EventMask;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	protected int m_MaxRayIntersections;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x38")]
	protected int m_LastMaxRayIntersections;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x40")]
	private RaycastHit[] m_Hits;

	[Token(Token = "0x17000205")]
	public override Camera eventCamera
	{
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x32FAE80", Offset = "0x32F9480", VA = "0x1832FAE80", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public virtual int depth
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x32FADD0", Offset = "0x32F93D0", VA = "0x1832FADD0", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000207")]
	public int finalEventMask
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x32FAF50", Offset = "0x32F9550", VA = "0x1832FAF50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000208")]
	public LayerMask eventMask
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x17000209")]
	public int maxRayIntersections
	{
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x32FA490", Offset = "0x32F8A90", VA = "0x1832FA490")]
	protected PhysicsRaycaster()
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x32FA4C0", Offset = "0x32F8AC0", VA = "0x1832FA4C0")]
	protected bool ComputeRayAndDistance(PointerEventData eventData, ref Ray ray, ref int eventDisplayIndex, ref float distanceToClipPlane)
	{
		return default(bool);
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x32FA890", Offset = "0x32F8E90", VA = "0x1832FA890", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
