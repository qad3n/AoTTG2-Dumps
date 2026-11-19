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
	[Address(RVA = "0x67A6870", Offset = "0x67A5870", VA = "0x67A6870")]
	private void Start()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x67A6880", Offset = "0x67A5880", VA = "0x67A6880")]
	public void AddGUIListeners()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x67A6CF0", Offset = "0x67A5CF0", VA = "0x67A6CF0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x67A6D80", Offset = "0x67A5D80", VA = "0x67A6D80", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x67A6E10", Offset = "0x67A5E10", VA = "0x67A6E10", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x67A6EA0", Offset = "0x67A5EA0", VA = "0x67A6EA0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x67A6F30", Offset = "0x67A5F30", VA = "0x67A6F30", Slot = "8")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x67A6FC0", Offset = "0x67A5FC0", VA = "0x67A6FC0", Slot = "9")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x67A7050", Offset = "0x67A6050", VA = "0x67A7050", Slot = "10")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x67A70E0", Offset = "0x67A60E0", VA = "0x67A70E0", Slot = "11")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x67A7170", Offset = "0x67A6170", VA = "0x67A7170", Slot = "12")]
	public void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x67A7200", Offset = "0x67A6200", VA = "0x67A7200", Slot = "13")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x67A7290", Offset = "0x67A6290", VA = "0x67A7290", Slot = "14")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x67A7320", Offset = "0x67A6320", VA = "0x67A7320", Slot = "15")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x67A73B0", Offset = "0x67A63B0", VA = "0x67A73B0", Slot = "16")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x67A7440", Offset = "0x67A6440", VA = "0x67A7440", Slot = "17")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x67A74D0", Offset = "0x67A64D0", VA = "0x67A74D0", Slot = "18")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x67A7560", Offset = "0x67A6560", VA = "0x67A7560")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x67A75D0", Offset = "0x67A65D0", VA = "0x67A75D0")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x67A7640", Offset = "0x67A6640", VA = "0x67A7640")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x67A76D0", Offset = "0x67A66D0", VA = "0x67A76D0")]
	private void OnCollisionExit(Collision collision)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x67A7760", Offset = "0x67A6760", VA = "0x67A7760")]
	private void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x67A77F0", Offset = "0x67A67F0", VA = "0x67A77F0")]
	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x67A7880", Offset = "0x67A6880", VA = "0x67A7880")]
	private void OnCollisionExit2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x67A7910", Offset = "0x67A6910", VA = "0x67A7910")]
	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x67A79A0", Offset = "0x67A69A0", VA = "0x67A79A0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x67A7A30", Offset = "0x67A6A30", VA = "0x67A7A30")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x67A7AC0", Offset = "0x67A6AC0", VA = "0x67A7AC0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x67A7B50", Offset = "0x67A6B50", VA = "0x67A7B50")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x67A7BC0", Offset = "0x67A6BC0", VA = "0x67A7BC0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x67A7C30", Offset = "0x67A6C30", VA = "0x67A7C30")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x67A7CA0", Offset = "0x67A6CA0", VA = "0x67A7CA0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x67A7D10", Offset = "0x67A6D10", VA = "0x67A7D10")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x67A7D80", Offset = "0x67A6D80", VA = "0x67A7D80")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x67A7DF0", Offset = "0x67A6DF0", VA = "0x67A7DF0")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x67A7E60", Offset = "0x67A6E60", VA = "0x67A7E60")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x67A7EF0", Offset = "0x67A6EF0", VA = "0x67A7EF0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x67A7F60", Offset = "0x67A6F60", VA = "0x67A7F60")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x67A7FD0", Offset = "0x67A6FD0", VA = "0x67A7FD0")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x67A8060", Offset = "0x67A7060", VA = "0x67A8060")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x67A80F0", Offset = "0x67A70F0", VA = "0x67A80F0")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x67A8180", Offset = "0x67A7180", VA = "0x67A8180")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x67A8210", Offset = "0x67A7210", VA = "0x67A8210")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x67A82A0", Offset = "0x67A72A0", VA = "0x67A82A0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x67A8330", Offset = "0x67A7330", VA = "0x67A8330")]
	public UnityMessageListener()
	{
	}
}
