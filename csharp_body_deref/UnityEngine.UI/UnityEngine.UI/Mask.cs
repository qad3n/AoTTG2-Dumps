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

[Token(Token = "0x2000053")]
[AddComponentMenu("UI (Canvas)/Mask", 13)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("Mask")]
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

	[Token(Token = "0x170000D6")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000340")]
		[Address(RVA = "0x6CE51F0", Offset = "0x6CE41F0", VA = "0x6CE51F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	public bool showMaskGraphic
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x6CE5250", Offset = "0x6CE4250", VA = "0x6CE5250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x6CE5260", Offset = "0x6CE4260", VA = "0x6CE5260")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public Graphic graphic
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x6CE53C0", Offset = "0x6CE43C0", VA = "0x6CE53C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x6CE5420", Offset = "0x6CE4420", VA = "0x6CE5420")]
	protected Mask()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x6CE5430", Offset = "0x6CE4430", VA = "0x6CE5430", Slot = "19")]
	public virtual bool MaskEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x6CE5510", Offset = "0x6CE4510", VA = "0x6CE5510", Slot = "20")]
	[Obsolete("Not used anymore.")]
	public virtual void OnSiblingGraphicEnabledDisabled()
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x6CE5520", Offset = "0x6CE4520", VA = "0x6CE5520", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x6CE5AB0", Offset = "0x6CE4AB0", VA = "0x6CE5AB0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x6CE5E90", Offset = "0x6CE4E90", VA = "0x6CE5E90", Slot = "21")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x6CE5F90", Offset = "0x6CE4F90", VA = "0x6CE5F90", Slot = "22")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}
}
