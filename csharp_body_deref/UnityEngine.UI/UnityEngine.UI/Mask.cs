// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Mask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50D50D0", Offset = "0x50D50D0", VA = "0x50D50D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	public bool showMaskGraphic
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x50D5130", Offset = "0x50D5130", VA = "0x50D5130")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x50D5140", Offset = "0x50D5140", VA = "0x50D5140")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public Graphic graphic
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x50D52A0", Offset = "0x50D52A0", VA = "0x50D52A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x50D5300", Offset = "0x50D5300", VA = "0x50D5300")]
	protected Mask()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x50D5310", Offset = "0x50D5310", VA = "0x50D5310", Slot = "19")]
	public virtual bool MaskEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x50D53F0", Offset = "0x50D53F0", VA = "0x50D53F0", Slot = "20")]
	[Obsolete("Not used anymore.")]
	public virtual void OnSiblingGraphicEnabledDisabled()
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x50D5400", Offset = "0x50D5400", VA = "0x50D5400", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x50D5990", Offset = "0x50D5990", VA = "0x50D5990", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x50D5D70", Offset = "0x50D5D70", VA = "0x50D5D70", Slot = "21")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x50D5E60", Offset = "0x50D5E60", VA = "0x50D5E60", Slot = "22")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}
}
