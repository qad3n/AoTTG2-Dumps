// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Graphic
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A6A430", Offset = "0x6A69430", VA = "0x6A6A430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public virtual Color color
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x6A6A510", Offset = "0x6A69510", VA = "0x6A6A510", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x6A6A520", Offset = "0x6A69520", VA = "0x6A6A520", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public virtual bool raycastTarget
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x6A6A550", Offset = "0x6A69550", VA = "0x6A6A550", Slot = "24")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x6A6A560", Offset = "0x6A69560", VA = "0x6A6A560", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Vector4 raycastPadding
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x6A6AAB0", Offset = "0x6A69AB0", VA = "0x6A6AAB0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x6A6AAC0", Offset = "0x6A69AC0", VA = "0x6A6AAC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	protected bool useLegacyMeshGeneration
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x6A6AAD0", Offset = "0x6A69AD0", VA = "0x6A6AAD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x6A6AAE0", Offset = "0x6A69AE0", VA = "0x6A6AAE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int depth
	{
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x6A6B940", Offset = "0x6A6A940", VA = "0x6A6B940")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x6A6AE80", Offset = "0x6A69E80", VA = "0x6A6AE80", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Canvas canvas
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x6A6A6B0", Offset = "0x6A696B0", VA = "0x6A6A6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x6A6B960", Offset = "0x6A6A960", VA = "0x6A6B960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual Material defaultMaterial
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x6A6BA10", Offset = "0x6A6AA10", VA = "0x6A6BA10", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual Material material
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x6A6BA70", Offset = "0x6A6AA70", VA = "0x6A6BA70", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x6A6BAF0", Offset = "0x6A6AAF0", VA = "0x6A6BAF0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual Material materialForRendering
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x6A6BB80", Offset = "0x6A6AB80", VA = "0x6A6BB80", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public virtual Texture mainTexture
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x6A6BD50", Offset = "0x6A6AD50", VA = "0x6A6BD50", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	protected static Mesh workerMesh
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x6A6D300", Offset = "0x6A6C300", VA = "0x6A6D300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x6A6AAF0", Offset = "0x6A69AF0", VA = "0x6A6AAF0")]
	protected Graphic()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x6A6ABC0", Offset = "0x6A69BC0", VA = "0x6A6ABC0", Slot = "26")]
	public virtual void SetAllDirty()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x6A6AD80", Offset = "0x6A69D80", VA = "0x6A6AD80", Slot = "27")]
	public virtual void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x6A6AEF0", Offset = "0x6A69EF0", VA = "0x6A6AEF0", Slot = "28")]
	public virtual void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x6A6AFE0", Offset = "0x6A69FE0", VA = "0x6A6AFE0", Slot = "29")]
	public virtual void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x6A6AC30", Offset = "0x6A69C30", VA = "0x6A6AC30")]
	public void SetRaycastDirty()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x6A6B0D0", Offset = "0x6A6A0D0", VA = "0x6A6B0D0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x6A6B1D0", Offset = "0x6A6A1D0", VA = "0x6A6B1D0", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x6A6B4C0", Offset = "0x6A6A4C0", VA = "0x6A6B4C0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x6A6B5C0", Offset = "0x6A6A5C0", VA = "0x6A6B5C0")]
	private void CacheCanvas()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6A6BDC0", Offset = "0x6A6ADC0", VA = "0x6A6BDC0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x6A6BF30", Offset = "0x6A6AF30", VA = "0x6A6BF30", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6A6C2A0", Offset = "0x6A6B2A0", VA = "0x6A6C2A0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x6A6C3F0", Offset = "0x6A6B3F0", VA = "0x6A6C3F0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x6A6C580", Offset = "0x6A6B580", VA = "0x6A6C580", Slot = "36")]
	public virtual void OnCullingChanged()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x6A6C660", Offset = "0x6A6B660", VA = "0x6A6C660", Slot = "37")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6A6C720", Offset = "0x6A6B720", VA = "0x6A6C720", Slot = "38")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x6A6C730", Offset = "0x6A6B730", VA = "0x6A6C730", Slot = "39")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x6A6C740", Offset = "0x6A6B740", VA = "0x6A6C740", Slot = "40")]
	protected virtual void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x6A6C800", Offset = "0x6A6B800", VA = "0x6A6C800", Slot = "41")]
	protected virtual void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x6A6CD70", Offset = "0x6A6BD70", VA = "0x6A6CD70")]
	private void DoMeshGeneration()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x6A6C820", Offset = "0x6A6B820", VA = "0x6A6C820")]
	private void DoLegacyMeshGeneration()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6A6D430", Offset = "0x6A6C430", VA = "0x6A6D430", Slot = "42")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use OnPopulateMesh instead.", true)]
	protected virtual void OnFillVBO(List<UIVertex> vbo)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x6A6D440", Offset = "0x6A6C440", VA = "0x6A6D440", Slot = "43")]
	[Obsolete("Use OnPopulateMesh(VertexHelper vh) instead.", false)]
	protected virtual void OnPopulateMesh(Mesh m)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x6A6D4D0", Offset = "0x6A6C4D0", VA = "0x6A6D4D0", Slot = "44")]
	protected virtual void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6A6D9A0", Offset = "0x6A6C9A0", VA = "0x6A6D9A0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6A6D9C0", Offset = "0x6A6C9C0", VA = "0x6A6D9C0", Slot = "45")]
	public virtual void SetNativeSize()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x6A6D9D0", Offset = "0x6A6C9D0", VA = "0x6A6D9D0", Slot = "46")]
	public virtual bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x6A6D9E0", Offset = "0x6A6C9E0", VA = "0x6A6D9E0")]
	protected bool Raycast(Vector2 sp, Camera eventCamera, bool ignoreMasks)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6A6E060", Offset = "0x6A6D060", VA = "0x6A6E060")]
	public Vector2 PixelAdjustPoint(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6A6D630", Offset = "0x6A6C630", VA = "0x6A6D630")]
	public Rect GetPixelAdjustedRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6A6E2F0", Offset = "0x6A6D2F0", VA = "0x6A6E2F0", Slot = "47")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6A6E310", Offset = "0x6A6D310", VA = "0x6A6E310", Slot = "48")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6A6E5D0", Offset = "0x6A6D5D0", VA = "0x6A6E5D0")]
	private static Color CreateColorFromAlpha(float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x6A6E5E0", Offset = "0x6A6D5E0", VA = "0x6A6E5E0", Slot = "49")]
	public virtual void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x6A6E690", Offset = "0x6A6D690", VA = "0x6A6E690")]
	public void RegisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x6A6E710", Offset = "0x6A6D710", VA = "0x6A6E710")]
	public void UnregisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x6A6E790", Offset = "0x6A6D790", VA = "0x6A6E790")]
	public void RegisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x6A6E810", Offset = "0x6A6D810", VA = "0x6A6E810")]
	public void UnregisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x6A6E890", Offset = "0x6A6D890", VA = "0x6A6E890")]
	public void RegisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x6A6E910", Offset = "0x6A6D910", VA = "0x6A6E910")]
	public void UnregisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x6A6EA40", Offset = "0x6A6DA40", VA = "0x6A6EA40", Slot = "18")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
