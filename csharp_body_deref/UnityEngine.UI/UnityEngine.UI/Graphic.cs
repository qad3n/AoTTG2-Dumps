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

[Token(Token = "0x200001E")]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
public abstract class Graphic : UIBehaviour, ICanvasElement
{
	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_DefaultUI;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x8")]
	protected static Texture2D s_WhiteTexture;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("m_Mat")]
	[SerializeField]
	protected Material m_Material;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Color m_Color;

	[NonSerialized]
	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x38")]
	protected bool m_SkipLayoutUpdate;

	[NonSerialized]
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x39")]
	protected bool m_SkipMaterialUpdate;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x3A")]
	[SerializeField]
	private bool m_RaycastTarget;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x3B")]
	private bool m_RaycastTargetCache;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private Vector4 m_RaycastPadding;

	[NonSerialized]
	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x50")]
	private RectTransform m_RectTransform;

	[NonSerialized]
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x58")]
	private CanvasRenderer m_CanvasRenderer;

	[NonSerialized]
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x60")]
	private Canvas m_Canvas;

	[NonSerialized]
	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x68")]
	private bool m_VertsDirty;

	[NonSerialized]
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x69")]
	private bool m_MaterialDirty;

	[NonSerialized]
	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x70")]
	protected UnityAction m_OnDirtyLayoutCallback;

	[NonSerialized]
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x78")]
	protected UnityAction m_OnDirtyVertsCallback;

	[NonSerialized]
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x80")]
	protected UnityAction m_OnDirtyMaterialCallback;

	[NonSerialized]
	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x10")]
	protected static Mesh s_Mesh;

	[NonSerialized]
	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly VertexHelper s_VertexHelper;

	[NonSerialized]
	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x88")]
	protected Mesh m_CachedMesh;

	[NonSerialized]
	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x90")]
	protected Vector2[] m_CachedUvs;

	[NonSerialized]
	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x98")]
	private readonly TweenRunner<ColorTween> m_ColorTweenRunner;

	[Token(Token = "0x17000035")]
	public static Material defaultGraphicMaterial
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x4BD5A10", Offset = "0x4BD5A10", VA = "0x4BD5A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public virtual Color color
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x4BD5AF0", Offset = "0x4BD5AF0", VA = "0x4BD5AF0", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x4BD5B00", Offset = "0x4BD5B00", VA = "0x4BD5B00", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public virtual bool raycastTarget
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4BD5B30", Offset = "0x4BD5B30", VA = "0x4BD5B30", Slot = "24")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4BD5B40", Offset = "0x4BD5B40", VA = "0x4BD5B40", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Vector4 raycastPadding
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4BD6090", Offset = "0x4BD6090", VA = "0x4BD6090")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4BD60A0", Offset = "0x4BD60A0", VA = "0x4BD60A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	protected bool useLegacyMeshGeneration
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4BD60B0", Offset = "0x4BD60B0", VA = "0x4BD60B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x4BD60C0", Offset = "0x4BD60C0", VA = "0x4BD60C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int depth
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x4BD6F20", Offset = "0x4BD6F20", VA = "0x4BD6F20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4BD6450", Offset = "0x4BD6450", VA = "0x4BD6450", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Canvas canvas
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4BD5C90", Offset = "0x4BD5C90", VA = "0x4BD5C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4BD6F40", Offset = "0x4BD6F40", VA = "0x4BD6F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual Material defaultMaterial
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4BD6FF0", Offset = "0x4BD6FF0", VA = "0x4BD6FF0", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual Material material
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4BD7050", Offset = "0x4BD7050", VA = "0x4BD7050", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4BD70D0", Offset = "0x4BD70D0", VA = "0x4BD70D0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual Material materialForRendering
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4BD7160", Offset = "0x4BD7160", VA = "0x4BD7160", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public virtual Texture mainTexture
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4BD7340", Offset = "0x4BD7340", VA = "0x4BD7340", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	protected static Mesh workerMesh
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4BD8810", Offset = "0x4BD8810", VA = "0x4BD8810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4BD60D0", Offset = "0x4BD60D0", VA = "0x4BD60D0")]
	protected Graphic()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4BD61A0", Offset = "0x4BD61A0", VA = "0x4BD61A0", Slot = "26")]
	public virtual void SetAllDirty()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4BD6350", Offset = "0x4BD6350", VA = "0x4BD6350", Slot = "27")]
	public virtual void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4BD64C0", Offset = "0x4BD64C0", VA = "0x4BD64C0", Slot = "28")]
	public virtual void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4BD65B0", Offset = "0x4BD65B0", VA = "0x4BD65B0", Slot = "29")]
	public virtual void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4BD6200", Offset = "0x4BD6200", VA = "0x4BD6200")]
	public void SetRaycastDirty()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4BD66A0", Offset = "0x4BD66A0", VA = "0x4BD66A0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4BD67A0", Offset = "0x4BD67A0", VA = "0x4BD67A0", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4BD6A90", Offset = "0x4BD6A90", VA = "0x4BD6A90", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4BD6B90", Offset = "0x4BD6B90", VA = "0x4BD6B90")]
	private void CacheCanvas()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4BD73B0", Offset = "0x4BD73B0", VA = "0x4BD73B0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4BD7520", Offset = "0x4BD7520", VA = "0x4BD7520", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4BD7890", Offset = "0x4BD7890", VA = "0x4BD7890", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4BD79E0", Offset = "0x4BD79E0", VA = "0x4BD79E0", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4BD7B70", Offset = "0x4BD7B70", VA = "0x4BD7B70", Slot = "36")]
	public virtual void OnCullingChanged()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4BD7C50", Offset = "0x4BD7C50", VA = "0x4BD7C50", Slot = "37")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4BD7D10", Offset = "0x4BD7D10", VA = "0x4BD7D10", Slot = "38")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4BD7D20", Offset = "0x4BD7D20", VA = "0x4BD7D20", Slot = "39")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4BD7D30", Offset = "0x4BD7D30", VA = "0x4BD7D30", Slot = "40")]
	protected virtual void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4BD7DF0", Offset = "0x4BD7DF0", VA = "0x4BD7DF0", Slot = "41")]
	protected virtual void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4BD82E0", Offset = "0x4BD82E0", VA = "0x4BD82E0")]
	private void DoMeshGeneration()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4BD7E00", Offset = "0x4BD7E00", VA = "0x4BD7E00")]
	private void DoLegacyMeshGeneration()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4BD8940", Offset = "0x4BD8940", VA = "0x4BD8940", Slot = "42")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use OnPopulateMesh instead.", true)]
	protected virtual void OnFillVBO(List<UIVertex> vbo)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4BD8950", Offset = "0x4BD8950", VA = "0x4BD8950", Slot = "43")]
	[Obsolete("Use OnPopulateMesh(VertexHelper vh) instead.", false)]
	protected virtual void OnPopulateMesh(Mesh m)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4BD89E0", Offset = "0x4BD89E0", VA = "0x4BD89E0", Slot = "44")]
	protected virtual void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4BD8E90", Offset = "0x4BD8E90", VA = "0x4BD8E90", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4BD8EB0", Offset = "0x4BD8EB0", VA = "0x4BD8EB0", Slot = "45")]
	public virtual void SetNativeSize()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4BD8EC0", Offset = "0x4BD8EC0", VA = "0x4BD8EC0", Slot = "46")]
	public virtual bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4BD93E0", Offset = "0x4BD93E0", VA = "0x4BD93E0")]
	public Vector2 PixelAdjustPoint(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4BD8B20", Offset = "0x4BD8B20", VA = "0x4BD8B20")]
	public Rect GetPixelAdjustedRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4BD9670", Offset = "0x4BD9670", VA = "0x4BD9670", Slot = "47")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4BD9690", Offset = "0x4BD9690", VA = "0x4BD9690", Slot = "48")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4BD99B0", Offset = "0x4BD99B0", VA = "0x4BD99B0")]
	private static Color CreateColorFromAlpha(float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4BD99D0", Offset = "0x4BD99D0", VA = "0x4BD99D0", Slot = "49")]
	public virtual void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4BD9A80", Offset = "0x4BD9A80", VA = "0x4BD9A80")]
	public void RegisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4BD9B00", Offset = "0x4BD9B00", VA = "0x4BD9B00")]
	public void UnregisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4BD9B80", Offset = "0x4BD9B80", VA = "0x4BD9B80")]
	public void RegisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4BD9C00", Offset = "0x4BD9C00", VA = "0x4BD9C00")]
	public void UnregisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4BD9C80", Offset = "0x4BD9C80", VA = "0x4BD9C80")]
	public void RegisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4BD9D00", Offset = "0x4BD9D00", VA = "0x4BD9D00")]
	public void UnregisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4BD9E30", Offset = "0x4BD9E30", VA = "0x4BD9E30", Slot = "18")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
