using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200005D")]
public static class EventHooks
{
	[Token(Token = "0x4000092")]
	public const string Custom = "Custom";

	[Token(Token = "0x4000093")]
	public const string OnGUI = "OnGUI";

	[Token(Token = "0x4000094")]
	public const string OnApplicationFocus = "OnApplicationFocus";

	[Token(Token = "0x4000095")]
	public const string OnApplicationLostFocus = "OnApplicationLostFocus";

	[Token(Token = "0x4000096")]
	public const string OnApplicationPause = "OnApplicationPause";

	[Token(Token = "0x4000097")]
	public const string OnApplicationResume = "OnApplicationResume";

	[Token(Token = "0x4000098")]
	public const string OnApplicationQuit = "OnApplicationQuit";

	[Token(Token = "0x4000099")]
	public const string OnEnable = "OnEnable";

	[Token(Token = "0x400009A")]
	public const string Start = "Start";

	[Token(Token = "0x400009B")]
	public const string Update = "Update";

	[Token(Token = "0x400009C")]
	public const string FixedUpdate = "FixedUpdate";

	[Token(Token = "0x400009D")]
	public const string LateUpdate = "LateUpdate";

	[Token(Token = "0x400009E")]
	public const string OnDisable = "OnDisable";

	[Token(Token = "0x400009F")]
	public const string OnDestroy = "OnDestroy";

	[Token(Token = "0x40000A0")]
	public const string AnimationEvent = "AnimationEvent";

	[Token(Token = "0x40000A1")]
	public const string UnityEvent = "UnityEvent";

	[Token(Token = "0x40000A2")]
	public const string OnDrawGizmos = "OnDrawGizmos";

	[Token(Token = "0x40000A3")]
	public const string OnDrawGizmosSelected = "OnDrawGizmosSelected";

	[Token(Token = "0x40000A4")]
	public const string OnPointerEnter = "OnPointerEnter";

	[Token(Token = "0x40000A5")]
	public const string OnPointerExit = "OnPointerExit";

	[Token(Token = "0x40000A6")]
	public const string OnPointerDown = "OnPointerDown";

	[Token(Token = "0x40000A7")]
	public const string OnPointerUp = "OnPointerUp";

	[Token(Token = "0x40000A8")]
	public const string OnPointerClick = "OnPointerClick";

	[Token(Token = "0x40000A9")]
	public const string OnBeginDrag = "OnBeginDrag";

	[Token(Token = "0x40000AA")]
	public const string OnDrag = "OnDrag";

	[Token(Token = "0x40000AB")]
	public const string OnEndDrag = "OnEndDrag";

	[Token(Token = "0x40000AC")]
	public const string OnDrop = "OnDrop";

	[Token(Token = "0x40000AD")]
	public const string OnScroll = "OnScroll";

	[Token(Token = "0x40000AE")]
	public const string OnSelect = "OnSelect";

	[Token(Token = "0x40000AF")]
	public const string OnDeselect = "OnDeselect";

	[Token(Token = "0x40000B0")]
	public const string OnSubmit = "OnSubmit";

	[Token(Token = "0x40000B1")]
	public const string OnCancel = "OnCancel";

	[Token(Token = "0x40000B2")]
	public const string OnMove = "OnMove";

	[Token(Token = "0x40000B3")]
	public const string OnBecameInvisible = "OnBecameInvisible";

	[Token(Token = "0x40000B4")]
	public const string OnBecameVisible = "OnBecameVisible";

	[Token(Token = "0x40000B5")]
	public const string OnCollisionEnter = "OnCollisionEnter";

	[Token(Token = "0x40000B6")]
	public const string OnCollisionExit = "OnCollisionExit";

	[Token(Token = "0x40000B7")]
	public const string OnCollisionStay = "OnCollisionStay";

	[Token(Token = "0x40000B8")]
	public const string OnCollisionEnter2D = "OnCollisionEnter2D";

	[Token(Token = "0x40000B9")]
	public const string OnCollisionExit2D = "OnCollisionExit2D";

	[Token(Token = "0x40000BA")]
	public const string OnCollisionStay2D = "OnCollisionStay2D";

	[Token(Token = "0x40000BB")]
	public const string OnControllerColliderHit = "OnControllerColliderHit";

	[Token(Token = "0x40000BC")]
	public const string OnJointBreak = "OnJointBreak";

	[Token(Token = "0x40000BD")]
	public const string OnJointBreak2D = "OnJointBreak2D";

	[Token(Token = "0x40000BE")]
	public const string OnMouseDown = "OnMouseDown";

	[Token(Token = "0x40000BF")]
	public const string OnMouseDrag = "OnMouseDrag";

	[Token(Token = "0x40000C0")]
	public const string OnMouseEnter = "OnMouseEnter";

	[Token(Token = "0x40000C1")]
	public const string OnMouseExit = "OnMouseExit";

	[Token(Token = "0x40000C2")]
	public const string OnMouseOver = "OnMouseOver";

	[Token(Token = "0x40000C3")]
	public const string OnMouseUp = "OnMouseUp";

	[Token(Token = "0x40000C4")]
	public const string OnMouseUpAsButton = "OnMouseUpAsButton";

	[Token(Token = "0x40000C5")]
	public const string OnParticleCollision = "OnParticleCollision";

	[Token(Token = "0x40000C6")]
	public const string OnTransformChildrenChanged = "OnTransformChildrenChanged";

	[Token(Token = "0x40000C7")]
	public const string OnTransformParentChanged = "OnTransformParentChanged";

	[Token(Token = "0x40000C8")]
	public const string OnTriggerEnter = "OnTriggerEnter";

	[Token(Token = "0x40000C9")]
	public const string OnTriggerExit = "OnTriggerExit";

	[Token(Token = "0x40000CA")]
	public const string OnTriggerStay = "OnTriggerStay";

	[Token(Token = "0x40000CB")]
	public const string OnTriggerEnter2D = "OnTriggerEnter2D";

	[Token(Token = "0x40000CC")]
	public const string OnTriggerExit2D = "OnTriggerExit2D";

	[Token(Token = "0x40000CD")]
	public const string OnTriggerStay2D = "OnTriggerStay2D";

	[Token(Token = "0x40000CE")]
	public const string OnAnimatorMove = "OnAnimatorMove";

	[Token(Token = "0x40000CF")]
	public const string OnAnimatorIK = "OnAnimatorIK";

	[Token(Token = "0x40000D0")]
	public const string OnButtonClick = "OnButtonClick";

	[Token(Token = "0x40000D1")]
	public const string OnToggleValueChanged = "OnToggleValueChanged";

	[Token(Token = "0x40000D2")]
	public const string OnSliderValueChanged = "OnSliderValueChanged";

	[Token(Token = "0x40000D3")]
	public const string OnScrollbarValueChanged = "OnScrollbarValueChanged";

	[Token(Token = "0x40000D4")]
	public const string OnDropdownValueChanged = "OnDropdownValueChanged";

	[Token(Token = "0x40000D5")]
	public const string OnInputFieldValueChanged = "OnInputFieldValueChanged";

	[Token(Token = "0x40000D6")]
	public const string OnInputFieldEndEdit = "OnInputFieldEndEdit";

	[Token(Token = "0x40000D7")]
	public const string OnScrollRectValueChanged = "OnScrollRectValueChanged";
}
