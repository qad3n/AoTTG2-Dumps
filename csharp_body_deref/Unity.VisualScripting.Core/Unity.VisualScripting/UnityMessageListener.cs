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
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x49931A0", Offset = "0x49931A0", VA = "0x49931A0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x49931B0", Offset = "0x49931B0", VA = "0x49931B0")]
	public void AddGUIListeners()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4993620", Offset = "0x4993620", VA = "0x4993620", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x49936B0", Offset = "0x49936B0", VA = "0x49936B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4993740", Offset = "0x4993740", VA = "0x4993740", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x49937D0", Offset = "0x49937D0", VA = "0x49937D0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4993860", Offset = "0x4993860", VA = "0x4993860", Slot = "8")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x49938F0", Offset = "0x49938F0", VA = "0x49938F0", Slot = "9")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4993980", Offset = "0x4993980", VA = "0x4993980", Slot = "10")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4993A10", Offset = "0x4993A10", VA = "0x4993A10", Slot = "11")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4993AA0", Offset = "0x4993AA0", VA = "0x4993AA0", Slot = "12")]
	public void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4993B30", Offset = "0x4993B30", VA = "0x4993B30", Slot = "13")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4993BC0", Offset = "0x4993BC0", VA = "0x4993BC0", Slot = "14")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4993C50", Offset = "0x4993C50", VA = "0x4993C50", Slot = "15")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4993CE0", Offset = "0x4993CE0", VA = "0x4993CE0", Slot = "16")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4993D70", Offset = "0x4993D70", VA = "0x4993D70", Slot = "17")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4993E00", Offset = "0x4993E00", VA = "0x4993E00", Slot = "18")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4993E90", Offset = "0x4993E90", VA = "0x4993E90")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4993F00", Offset = "0x4993F00", VA = "0x4993F00")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4993F70", Offset = "0x4993F70", VA = "0x4993F70")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4994000", Offset = "0x4994000", VA = "0x4994000")]
	private void OnCollisionExit(Collision collision)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4994090", Offset = "0x4994090", VA = "0x4994090")]
	private void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4994120", Offset = "0x4994120", VA = "0x4994120")]
	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x49941B0", Offset = "0x49941B0", VA = "0x49941B0")]
	private void OnCollisionExit2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4994240", Offset = "0x4994240", VA = "0x4994240")]
	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x49942D0", Offset = "0x49942D0", VA = "0x49942D0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4994360", Offset = "0x4994360", VA = "0x4994360")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x49943F0", Offset = "0x49943F0", VA = "0x49943F0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4994480", Offset = "0x4994480", VA = "0x4994480")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x49944F0", Offset = "0x49944F0", VA = "0x49944F0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4994560", Offset = "0x4994560", VA = "0x4994560")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x49945D0", Offset = "0x49945D0", VA = "0x49945D0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4994640", Offset = "0x4994640", VA = "0x4994640")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x49946B0", Offset = "0x49946B0", VA = "0x49946B0")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4994720", Offset = "0x4994720", VA = "0x4994720")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4994790", Offset = "0x4994790", VA = "0x4994790")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4994820", Offset = "0x4994820", VA = "0x4994820")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4994890", Offset = "0x4994890", VA = "0x4994890")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4994900", Offset = "0x4994900", VA = "0x4994900")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4994990", Offset = "0x4994990", VA = "0x4994990")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4994A20", Offset = "0x4994A20", VA = "0x4994A20")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4994AB0", Offset = "0x4994AB0", VA = "0x4994AB0")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4994B40", Offset = "0x4994B40", VA = "0x4994B40")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4994BD0", Offset = "0x4994BD0", VA = "0x4994BD0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4994C60", Offset = "0x4994C60", VA = "0x4994C60")]
	public UnityMessageListener()
	{
	}
}
