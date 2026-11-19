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
		[Address(RVA = "0x6D16D50", Offset = "0x6D15D50", VA = "0x6D16D50", Slot = "4")]
		public int Compare(RaycastHit x, RaycastHit y)
		{
			return default(int);
		}

		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x6D16D80", Offset = "0x6D15D80", VA = "0x6D16D80")]
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
		[Address(RVA = "0x6D16650", Offset = "0x6D15650", VA = "0x6D16650", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public virtual int depth
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x6D16720", Offset = "0x6D15720", VA = "0x6D16720", Slot = "22")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000207")]
	public int finalEventMask
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x6D165A0", Offset = "0x6D155A0", VA = "0x6D165A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000208")]
	public LayerMask eventMask
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x6D167C0", Offset = "0x6D157C0", VA = "0x6D167C0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x6D167D0", Offset = "0x6D157D0", VA = "0x6D167D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000209")]
	public int maxRayIntersections
	{
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x6D167E0", Offset = "0x6D157E0", VA = "0x6D167E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x6D167F0", Offset = "0x6D157F0", VA = "0x6D167F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x6D156D0", Offset = "0x6D146D0", VA = "0x6D156D0")]
	protected PhysicsRaycaster()
	{
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x6D161C0", Offset = "0x6D151C0", VA = "0x6D161C0")]
	protected bool ComputeRayAndDistance(PointerEventData eventData, ref Ray ray, ref int eventDisplayIndex, ref float distanceToClipPlane)
	{
		return default(bool);
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x6D16800", Offset = "0x6D15800", VA = "0x6D16800", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
