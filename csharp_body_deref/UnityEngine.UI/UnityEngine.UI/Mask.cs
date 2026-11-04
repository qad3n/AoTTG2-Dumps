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
		[Address(RVA = "0x32D7B40", Offset = "0x32D6140", VA = "0x1832D7B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	public bool showMaskGraphic
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x32D7BB0", Offset = "0x32D61B0", VA = "0x1832D7BB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public Graphic graphic
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x32D7AD0", Offset = "0x32D60D0", VA = "0x1832D7AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x32D7AC0", Offset = "0x32D60C0", VA = "0x1832D7AC0")]
	protected Mask()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x32D7420", Offset = "0x32D5A20", VA = "0x1832D7420", Slot = "19")]
	public virtual bool MaskEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	[Obsolete("Not used anymore.")]
	public virtual void OnSiblingGraphicEnabledDisabled()
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x32D7840", Offset = "0x32D5E40", VA = "0x1832D7840", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x32D74E0", Offset = "0x32D5AE0", VA = "0x1832D74E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x32D7330", Offset = "0x32D5930", VA = "0x1832D7330", Slot = "21")]
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x32D7020", Offset = "0x32D5620", VA = "0x1832D7020", Slot = "22")]
	public virtual Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}
}
