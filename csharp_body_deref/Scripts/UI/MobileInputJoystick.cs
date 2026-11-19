// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputJoystick
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputJoystick.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000741")]
public class MobileInputJoystick : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler, IInitializePotentialDragHandler
{
	[Token(Token = "0x4002476")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _base;

	[Token(Token = "0x4002477")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _handle;

	[Token(Token = "0x4002478")]
	[FieldOffset(Offset = "0x30")]
	private float _radius;

	[Token(Token = "0x4002479")]
	[FieldOffset(Offset = "0x34")]
	private float _reelOutActivationRadius;

	[Token(Token = "0x400247A")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _parentRect;

	[Token(Token = "0x400247B")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _restPosition;

	[Token(Token = "0x400247C")]
	[FieldOffset(Offset = "0x48")]
	private Image _image;

	[Token(Token = "0x400247D")]
	[FieldOffset(Offset = "0x50")]
	private Image _reelOutRingImage;

	[Token(Token = "0x400247E")]
	[FieldOffset(Offset = "0x58")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x400247F")]
	[FieldOffset(Offset = "0x60")]
	private MobileInputSkin _activeSkin;

	[Token(Token = "0x4002480")]
	[FieldOffset(Offset = "0x68")]
	private MobileInputSkin _reelRingSkin;

	[Token(Token = "0x4002481")]
	[FieldOffset(Offset = "0x70")]
	private MobileInputSkin _reelInSkin;

	[Token(Token = "0x4002482")]
	[FieldOffset(Offset = "0x78")]
	private MobileInputSkin _reelOutSkin;

	[Token(Token = "0x4002483")]
	[FieldOffset(Offset = "0x80")]
	private MobileInputSkin _appliedBaseSkin;

	[Token(Token = "0x4002484")]
	[FieldOffset(Offset = "0x88")]
	private MobileInputSkin _appliedRingSkin;

	[Token(Token = "0x4002485")]
	[FieldOffset(Offset = "0x90")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x4002486")]
	[FieldOffset(Offset = "0x94")]
	private int _pointerId;

	[Token(Token = "0x4002487")]
	[FieldOffset(Offset = "0x98")]
	private Camera _eventCamera;

	[Token(Token = "0x4002488")]
	[FieldOffset(Offset = "0xA0")]
	private bool _pressed;

	[Token(Token = "0x4002489")]
	[FieldOffset(Offset = "0xA4")]
	private float _reelInAngle;

	[Token(Token = "0x400248A")]
	[FieldOffset(Offset = "0xA8")]
	private float _reelOutAngle;

	[Token(Token = "0x17000C09")]
	public static MobileInputJoystick ActiveJoystick
	{
		[Token(Token = "0x6004665")]
		[Address(RVA = "0x5B6F5B0", Offset = "0x5B6E5B0", VA = "0x5B6F5B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004666")]
		[Address(RVA = "0x5B6F5F0", Offset = "0x5B6E5F0", VA = "0x5B6F5F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000C0A")]
	public bool PulledPastReelOutRing
	{
		[Token(Token = "0x6004667")]
		[Address(RVA = "0x5B6F640", Offset = "0x5B6E640", VA = "0x5B6F640")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004668")]
		[Address(RVA = "0x5B6F650", Offset = "0x5B6E650", VA = "0x5B6F650")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000C0B")]
	public float ReelInAngle
	{
		[Token(Token = "0x6004669")]
		[Address(RVA = "0x5B6F660", Offset = "0x5B6E660", VA = "0x5B6F660")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C0C")]
	public float ReelOutAngle
	{
		[Token(Token = "0x600466A")]
		[Address(RVA = "0x5B6F670", Offset = "0x5B6E670", VA = "0x5B6F670")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600466B")]
	[Address(RVA = "0x5B68B60", Offset = "0x5B67B60", VA = "0x5B68B60")]
	public void Setup(RectTransform joystickBase, RectTransform handle, float radius, Image reelOutRingImage, float reelOutActivationRadius, MobileInputSkin normalSkin, MobileInputSkin activeSkin, MobileInputSkin reelRingSkin, MobileInputSkin reelInSkin, MobileInputSkin reelOutSkin, MobileInputControlShape shape, float reelInAngle, float reelOutAngle)
	{
	}

	[Token(Token = "0x600466C")]
	[Address(RVA = "0x5B6F750", Offset = "0x5B6E750", VA = "0x5B6F750")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600466D")]
	[Address(RVA = "0x5B6F990", Offset = "0x5B6E990", VA = "0x5B6F990")]
	private void Update()
	{
	}

	[Token(Token = "0x600466E")]
	[Address(RVA = "0x5B6FBA0", Offset = "0x5B6EBA0", VA = "0x5B6FBA0", Slot = "7")]
	public void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600466F")]
	[Address(RVA = "0x5B6FBC0", Offset = "0x5B6EBC0", VA = "0x5B6FBC0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004670")]
	[Address(RVA = "0x5B6FF90", Offset = "0x5B6EF90", VA = "0x5B6FF90", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004671")]
	[Address(RVA = "0x5B70000", Offset = "0x5B6F000", VA = "0x5B70000", Slot = "6")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004672")]
	[Address(RVA = "0x5B6FE20", Offset = "0x5B6EE20", VA = "0x5B6FE20")]
	private void SetInput(Vector2 input, Vector2 localPoint)
	{
	}

	[Token(Token = "0x6004673")]
	[Address(RVA = "0x5B6F9F0", Offset = "0x5B6E9F0", VA = "0x5B6F9F0")]
	private void SetInputFromScreenPosition(Vector2 screenPosition)
	{
	}

	[Token(Token = "0x6004674")]
	[Address(RVA = "0x5B6F760", Offset = "0x5B6E760", VA = "0x5B6F760")]
	private void ResetJoystick()
	{
	}

	[Token(Token = "0x6004675")]
	[Address(RVA = "0x5B69850", Offset = "0x5B68850", VA = "0x5B69850")]
	public void SetReelRingColor(bool reelIn, bool reelOut)
	{
	}

	[Token(Token = "0x6004676")]
	[Address(RVA = "0x5B6F680", Offset = "0x5B6E680", VA = "0x5B6F680")]
	private void ApplyBaseSkin(MobileInputSkin skin)
	{
	}

	[Token(Token = "0x6004677")]
	[Address(RVA = "0x5B70030", Offset = "0x5B6F030", VA = "0x5B70030")]
	public MobileInputJoystick()
	{
	}
}
