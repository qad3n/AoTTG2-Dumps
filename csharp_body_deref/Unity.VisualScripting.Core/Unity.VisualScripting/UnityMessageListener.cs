// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnityMessageListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C9")]
[AddComponentMenu("")]
[Obsolete("UnityMessageListener is deprecated and has been replaced by separate message listeners for each event, eg. UnityOnCollisionEnterMessageListener or UnityOnButtonClickMessageListener.")]
public sealed class UnityMessageListener : MessageListener, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IDropHandler, IScrollHandler, ISelectHandler, IDeselectHandler, ISubmitHandler, ICancelHandler, IMoveHandler
{
	[Token(Token = "0x6000499")]
	[Address(RVA = "0x2DBD0E0", Offset = "0x2DBB6E0", VA = "0x182DBD0E0")]
	private void Start()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x2DBB680", Offset = "0x2DB9C80", VA = "0x182DBB680")]
	public void AddGUIListeners()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x2DBC940", Offset = "0x2DBAF40", VA = "0x182DBC940", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x2DBC9D0", Offset = "0x2DBAFD0", VA = "0x182DBC9D0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x2DBC8B0", Offset = "0x2DBAEB0", VA = "0x182DBC8B0", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x2DBCA60", Offset = "0x2DBB060", VA = "0x182DBCA60", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x2DBC820", Offset = "0x2DBAE20", VA = "0x182DBC820", Slot = "8")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x2DBBB80", Offset = "0x2DBA180", VA = "0x182DBBB80", Slot = "9")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x2DBC120", Offset = "0x2DBA720", VA = "0x182DBC120", Slot = "10")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x2DBC240", Offset = "0x2DBA840", VA = "0x182DBC240", Slot = "11")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x2DBC1B0", Offset = "0x2DBA7B0", VA = "0x182DBC1B0", Slot = "12")]
	public void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x2DBCAF0", Offset = "0x2DBB0F0", VA = "0x182DBCAF0", Slot = "13")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x2DBCB80", Offset = "0x2DBB180", VA = "0x182DBCB80", Slot = "14")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x2DBC090", Offset = "0x2DBA690", VA = "0x182DBC090", Slot = "15")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x2DBCC10", Offset = "0x2DBB210", VA = "0x182DBCC10", Slot = "16")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x2DBBC10", Offset = "0x2DBA210", VA = "0x182DBBC10", Slot = "17")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x2DBC700", Offset = "0x2DBAD00", VA = "0x182DBC700", Slot = "18")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x2DBBAA0", Offset = "0x2DBA0A0", VA = "0x182DBBAA0")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x2DBBB10", Offset = "0x2DBA110", VA = "0x182DBBB10")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x2DBBD30", Offset = "0x2DBA330", VA = "0x182DBBD30")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x2DBBE50", Offset = "0x2DBA450", VA = "0x182DBBE50")]
	private void OnCollisionExit(Collision collision)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x2DBBF70", Offset = "0x2DBA570", VA = "0x182DBBF70")]
	private void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x2DBBCA0", Offset = "0x2DBA2A0", VA = "0x182DBBCA0")]
	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x2DBBDC0", Offset = "0x2DBA3C0", VA = "0x182DBBDC0")]
	private void OnCollisionExit2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x2DBBEE0", Offset = "0x2DBA4E0", VA = "0x182DBBEE0")]
	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x2DBC000", Offset = "0x2DBA600", VA = "0x182DBC000")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x2DBC360", Offset = "0x2DBA960", VA = "0x182DBC360")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x2DBC2D0", Offset = "0x2DBA8D0", VA = "0x182DBC2D0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x2DBC3F0", Offset = "0x2DBA9F0", VA = "0x182DBC3F0")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x2DBC460", Offset = "0x2DBAA60", VA = "0x182DBC460")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x2DBC4D0", Offset = "0x2DBAAD0", VA = "0x182DBC4D0")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x2DBC540", Offset = "0x2DBAB40", VA = "0x182DBC540")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x2DBC5B0", Offset = "0x2DBABB0", VA = "0x182DBC5B0")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x2DBC690", Offset = "0x2DBAC90", VA = "0x182DBC690")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x2DBC620", Offset = "0x2DBAC20", VA = "0x182DBC620")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x2DBC790", Offset = "0x2DBAD90", VA = "0x182DBC790")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x2DBCCA0", Offset = "0x2DBB2A0", VA = "0x182DBCCA0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x2DBCD10", Offset = "0x2DBB310", VA = "0x182DBCD10")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x2DBCE10", Offset = "0x2DBB410", VA = "0x182DBCE10")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x2DBCF30", Offset = "0x2DBB530", VA = "0x182DBCF30")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x2DBD050", Offset = "0x2DBB650", VA = "0x182DBD050")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x2DBCD80", Offset = "0x2DBB380", VA = "0x182DBCD80")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x2DBCEA0", Offset = "0x2DBB4A0", VA = "0x182DBCEA0")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x2DBCFC0", Offset = "0x2DBB5C0", VA = "0x182DBCFC0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public UnityMessageListener()
	{
	}
}
