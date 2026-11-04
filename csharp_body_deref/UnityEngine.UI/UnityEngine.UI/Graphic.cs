// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Graphic
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.UI.CoroutineTween;

namespace UnityEngine.UI;

[Token(Token = "0x200001C")]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
public abstract class Graphic : UIBehaviour, ICanvasElement
{
	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_DefaultUI;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x8")]
	protected static Texture2D s_WhiteTexture;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("m_Mat")]
	[SerializeField]
	protected Material m_Material;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Color m_Color;

	[NonSerialized]
	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x38")]
	protected bool m_SkipLayoutUpdate;

	[NonSerialized]
	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x39")]
	protected bool m_SkipMaterialUpdate;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x3A")]
	[SerializeField]
	private bool m_RaycastTarget;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x3B")]
	private bool m_RaycastTargetCache;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private Vector4 m_RaycastPadding;

	[NonSerialized]
	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform m_RectTransform;

	[NonSerialized]
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x58")]
	private CanvasRenderer m_CanvasRenderer;

	[NonSerialized]
	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x60")]
	private Canvas m_Canvas;

	[NonSerialized]
	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x68")]
	private bool m_VertsDirty;

	[NonSerialized]
	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x69")]
	private bool m_MaterialDirty;

	[NonSerialized]
	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x70")]
	protected UnityAction m_OnDirtyLayoutCallback;

	[NonSerialized]
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction m_OnDirtyVertsCallback;

	[NonSerialized]
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x80")]
	protected UnityAction m_OnDirtyMaterialCallback;

	[NonSerialized]
	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x10")]
	protected static Mesh s_Mesh;

	[NonSerialized]
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x18")]
	private static readonly VertexHelper s_VertexHelper;

	[NonSerialized]
	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x88")]
	protected Mesh m_CachedMesh;

	[NonSerialized]
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x90")]
	protected Vector2[] m_CachedUvs;

	[NonSerialized]
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x98")]
	private readonly TweenRunner<ColorTween> m_ColorTweenRunner;

	[Token(Token = "0x17000035")]
	public static Material defaultGraphicMaterial
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x3073530", Offset = "0x3071B30", VA = "0x183073530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public virtual Color color
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x3073BB0", Offset = "0x30721B0", VA = "0x183073BB0", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public virtual bool raycastTarget
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10", Slot = "24")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x3073CA0", Offset = "0x30722A0", VA = "0x183073CA0", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Vector4 raycastPadding
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x20CA6D0", Offset = "0x20C8CD0", VA = "0x1820CA6D0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3073C90", Offset = "0x3072290", VA = "0x183073C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	protected bool useLegacyMeshGeneration
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x1B90350", Offset = "0x1B8E950", VA = "0x181B90350")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x1C5E4B0", Offset = "0x1C5CAB0", VA = "0x181C5E4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int depth
	{
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3073750", Offset = "0x3071D50", VA = "0x183073750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3073A00", Offset = "0x3072000", VA = "0x183073A00", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Canvas canvas
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x30734C0", Offset = "0x3071AC0", VA = "0x1830734C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x3073420", Offset = "0x3071A20", VA = "0x183073420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual Material defaultMaterial
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x3073630", Offset = "0x3071C30", VA = "0x183073630", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual Material material
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x3073980", Offset = "0x3071F80", VA = "0x183073980", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x3073C00", Offset = "0x3072200", VA = "0x183073C00", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual Material materialForRendering
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x30737D0", Offset = "0x3071DD0", VA = "0x1830737D0", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public virtual Texture mainTexture
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x3073780", Offset = "0x3071D80", VA = "0x183073780", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	protected static Mesh workerMesh
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x3073A60", Offset = "0x3072060", VA = "0x183073A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3073340", Offset = "0x3071940", VA = "0x183073340")]
	protected Graphic()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3072BB0", Offset = "0x30711B0", VA = "0x183072BB0", Slot = "26")]
	public virtual void SetAllDirty()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3072C20", Offset = "0x3071220", VA = "0x183072C20", Slot = "27")]
	public virtual void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3072EC0", Offset = "0x30714C0", VA = "0x183072EC0", Slot = "28")]
	public virtual void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3072D00", Offset = "0x3071300", VA = "0x183072D00", Slot = "29")]
	public virtual void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3072DE0", Offset = "0x30713E0", VA = "0x183072DE0")]
	public void SetRaycastDirty()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3071FE0", Offset = "0x30705E0", VA = "0x183071FE0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3071540", Offset = "0x306FB40", VA = "0x183071540", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x30720D0", Offset = "0x30706D0", VA = "0x1830720D0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3070360", Offset = "0x306E960", VA = "0x183070360")]
	private void CacheCanvas()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3071BA0", Offset = "0x30701A0", VA = "0x183071BA0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x30719E0", Offset = "0x306FFE0", VA = "0x1830719E0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3071880", Offset = "0x306FE80", VA = "0x183071880", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3071660", Offset = "0x306FC60", VA = "0x183071660", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x30717B0", Offset = "0x306FDB0", VA = "0x1830717B0", Slot = "36")]
	public virtual void OnCullingChanged()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x30728E0", Offset = "0x3070EE0", VA = "0x1830728E0", Slot = "37")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "38")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "39")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x30731A0", Offset = "0x30717A0", VA = "0x1830731A0", Slot = "40")]
	protected virtual void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3073180", Offset = "0x3071780", VA = "0x183073180", Slot = "41")]
	protected virtual void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3070DD0", Offset = "0x306F3D0", VA = "0x183070DD0")]
	private void DoMeshGeneration()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x30708C0", Offset = "0x306EEC0", VA = "0x1830708C0")]
	private void DoLegacyMeshGeneration()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "42")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use OnPopulateMesh instead.", true)]
	protected virtual void OnFillVBO(List<UIVertex> vbo)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3071D30", Offset = "0x3070330", VA = "0x183071D30", Slot = "43")]
	[Obsolete("Use OnPopulateMesh(VertexHelper vh) instead.", false)]
	protected virtual void OnPopulateMesh(Mesh m)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3071DD0", Offset = "0x30703D0", VA = "0x183071DD0", Slot = "44")]
	protected virtual void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x279A340", Offset = "0x2798940", VA = "0x18279A340", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "45")]
	public virtual void SetNativeSize()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x30728C0", Offset = "0x3070EC0", VA = "0x1830728C0", Slot = "46")]
	public virtual bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3072320", Offset = "0x3070920", VA = "0x183072320")]
	protected bool Raycast(Vector2 sp, Camera eventCamera, bool ignoreMasks)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3072190", Offset = "0x3070790", VA = "0x183072190")]
	public Vector2 PixelAdjustPoint(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3071350", Offset = "0x306F950", VA = "0x183071350")]
	public Rect GetPixelAdjustedRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3070880", Offset = "0x306EE80", VA = "0x183070880", Slot = "47")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x30705C0", Offset = "0x306EBC0", VA = "0x1830705C0", Slot = "48")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x30704F0", Offset = "0x306EAF0", VA = "0x1830704F0")]
	private static Color CreateColorFromAlpha(float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3070510", Offset = "0x306EB10", VA = "0x183070510", Slot = "49")]
	public virtual void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x30729C0", Offset = "0x3070FC0", VA = "0x1830729C0")]
	public void RegisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3072F90", Offset = "0x3071590", VA = "0x183072F90")]
	public void UnregisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3072B10", Offset = "0x3071110", VA = "0x183072B10")]
	public void RegisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x30730E0", Offset = "0x30716E0", VA = "0x1830730E0")]
	public void UnregisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3072A60", Offset = "0x3071060", VA = "0x183072A60")]
	public void RegisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3073030", Offset = "0x3071630", VA = "0x183073030")]
	public void UnregisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "18")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
