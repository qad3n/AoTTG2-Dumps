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
	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4CB7D70", Offset = "0x4CB7D70", VA = "0x4CB7D70")]
	private void Start()
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4CB7D80", Offset = "0x4CB7D80", VA = "0x4CB7D80")]
	public void AddGUIListeners()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4CB81F0", Offset = "0x4CB81F0", VA = "0x4CB81F0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4CB8280", Offset = "0x4CB8280", VA = "0x4CB8280", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4CB8310", Offset = "0x4CB8310", VA = "0x4CB8310", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4CB83A0", Offset = "0x4CB83A0", VA = "0x4CB83A0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4CB8430", Offset = "0x4CB8430", VA = "0x4CB8430", Slot = "8")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4CB84C0", Offset = "0x4CB84C0", VA = "0x4CB84C0", Slot = "9")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4CB8550", Offset = "0x4CB8550", VA = "0x4CB8550", Slot = "10")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4CB85E0", Offset = "0x4CB85E0", VA = "0x4CB85E0", Slot = "11")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4CB8670", Offset = "0x4CB8670", VA = "0x4CB8670", Slot = "12")]
	public void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4CB8700", Offset = "0x4CB8700", VA = "0x4CB8700", Slot = "13")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4CB8790", Offset = "0x4CB8790", VA = "0x4CB8790", Slot = "14")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4CB8820", Offset = "0x4CB8820", VA = "0x4CB8820", Slot = "15")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4CB88B0", Offset = "0x4CB88B0", VA = "0x4CB88B0", Slot = "16")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4CB8940", Offset = "0x4CB8940", VA = "0x4CB8940", Slot = "17")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4CB89D0", Offset = "0x4CB89D0", VA = "0x4CB89D0", Slot = "18")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4CB8A60", Offset = "0x4CB8A60", VA = "0x4CB8A60")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4CB8AD0", Offset = "0x4CB8AD0", VA = "0x4CB8AD0")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4CB8B40", Offset = "0x4CB8B40", VA = "0x4CB8B40")]
	private void OnCollisionEnter(Collision collision)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4CB8BD0", Offset = "0x4CB8BD0", VA = "0x4CB8BD0")]
	private void OnCollisionExit(Collision collision)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4CB8C60", Offset = "0x4CB8C60", VA = "0x4CB8C60")]
	private void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4CB8CF0", Offset = "0x4CB8CF0", VA = "0x4CB8CF0")]
	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4CB8D80", Offset = "0x4CB8D80", VA = "0x4CB8D80")]
	private void OnCollisionExit2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4CB8E10", Offset = "0x4CB8E10", VA = "0x4CB8E10")]
	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4CB8EA0", Offset = "0x4CB8EA0", VA = "0x4CB8EA0")]
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4CB8F30", Offset = "0x4CB8F30", VA = "0x4CB8F30")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4CB8FC0", Offset = "0x4CB8FC0", VA = "0x4CB8FC0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4CB9050", Offset = "0x4CB9050", VA = "0x4CB9050")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4CB90C0", Offset = "0x4CB90C0", VA = "0x4CB90C0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4CB9130", Offset = "0x4CB9130", VA = "0x4CB9130")]
	private void OnMouseEnter()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4CB91A0", Offset = "0x4CB91A0", VA = "0x4CB91A0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4CB9210", Offset = "0x4CB9210", VA = "0x4CB9210")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4CB9280", Offset = "0x4CB9280", VA = "0x4CB9280")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4CB92F0", Offset = "0x4CB92F0", VA = "0x4CB92F0")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4CB9360", Offset = "0x4CB9360", VA = "0x4CB9360")]
	private void OnParticleCollision(GameObject other)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4CB93F0", Offset = "0x4CB93F0", VA = "0x4CB93F0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4CB9460", Offset = "0x4CB9460", VA = "0x4CB9460")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4CB94D0", Offset = "0x4CB94D0", VA = "0x4CB94D0")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4CB9560", Offset = "0x4CB9560", VA = "0x4CB9560")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4CB95F0", Offset = "0x4CB95F0", VA = "0x4CB95F0")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4CB9680", Offset = "0x4CB9680", VA = "0x4CB9680")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4CB9710", Offset = "0x4CB9710", VA = "0x4CB9710")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4CB97A0", Offset = "0x4CB97A0", VA = "0x4CB97A0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4CB9830", Offset = "0x4CB9830", VA = "0x4CB9830")]
	public UnityMessageListener()
	{
	}
}
