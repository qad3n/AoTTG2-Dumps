using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x2000055")]
[AddComponentMenu("UI/Mask", 13)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
public class Mask : UIBehaviour, ICanvasRaycastFilter, IMaterialModifier
{
	[NonSerialized]
	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform m_RectTransform;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_ShowMaskGraphic;

	[NonSerialized]
	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x30")]
	private Graphic m_Graphic;

	[NonSerialized]
	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x38")]
	private Material m_MaskMaterial;

	[NonSerialized]
	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x40")]
	private Material m_UnmaskMaterial;

	[Token(Token = "0x170000D5")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x4DAD7A0", Offset = "0x4DAD7A0", VA = "0x4DAD7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	public bool showMaskGraphic
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x4DAD800", Offset = "0x4DAD800", VA = "0x4DAD800")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x4DAD810", Offset = "0x4DAD810", VA = "0x4DAD810")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public Graphic graphic
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x4DAD970", Offset = "0x4DAD970", VA = "0x4DAD970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4DAD9D0", Offset = "0x4DAD9D0", VA = "0x4DAD9D0")]
	protected Mask()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4DAD9E0", Offset = "0x4DAD9E0", VA = "0x4DAD9E0", Slot = "19")]
	public virtual bool MaskEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4DADAC0", Offset = "0x4DADAC0", VA = "0x4DADAC0", Slot = "20")]
	[Obsolete("Not used anymore.")]
	public virtual void OnSiblingGraphicEnabledDisabled()
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4DADAD0", Offset = "0x4DADAD0", VA = "0x4DADAD0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4DAE060", Offset = "0x4DAE060", VA = "0x4DAE060", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x4DAE440", Offset = "0x4DAE440", VA = "0x4DAE440", Slot = "21")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4DAE530", Offset = "0x4DAE530", VA = "0x4DAE530", Slot = "22")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}
}
