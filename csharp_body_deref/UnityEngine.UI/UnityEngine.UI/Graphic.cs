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
		[Address(RVA = "0x4EFD340", Offset = "0x4EFD340", VA = "0x4EFD340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public virtual Color color
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x4EFD420", Offset = "0x4EFD420", VA = "0x4EFD420", Slot = "22")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x4EFD430", Offset = "0x4EFD430", VA = "0x4EFD430", Slot = "23")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public virtual bool raycastTarget
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4EFD460", Offset = "0x4EFD460", VA = "0x4EFD460", Slot = "24")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4EFD470", Offset = "0x4EFD470", VA = "0x4EFD470", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Vector4 raycastPadding
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4EFD9C0", Offset = "0x4EFD9C0", VA = "0x4EFD9C0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4EFD9D0", Offset = "0x4EFD9D0", VA = "0x4EFD9D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	protected bool useLegacyMeshGeneration
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4EFD9E0", Offset = "0x4EFD9E0", VA = "0x4EFD9E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x4EFD9F0", Offset = "0x4EFD9F0", VA = "0x4EFD9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int depth
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x4EFE850", Offset = "0x4EFE850", VA = "0x4EFE850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4EFDD80", Offset = "0x4EFDD80", VA = "0x4EFDD80", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public Canvas canvas
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4EFD5C0", Offset = "0x4EFD5C0", VA = "0x4EFD5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public CanvasRenderer canvasRenderer
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4EFE870", Offset = "0x4EFE870", VA = "0x4EFE870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public virtual Material defaultMaterial
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4EFE920", Offset = "0x4EFE920", VA = "0x4EFE920", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public virtual Material material
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4EFE980", Offset = "0x4EFE980", VA = "0x4EFE980", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4EFEA00", Offset = "0x4EFEA00", VA = "0x4EFEA00", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public virtual Material materialForRendering
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4EFEA90", Offset = "0x4EFEA90", VA = "0x4EFEA90", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public virtual Texture mainTexture
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4EFEC70", Offset = "0x4EFEC70", VA = "0x4EFEC70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	protected static Mesh workerMesh
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4F00140", Offset = "0x4F00140", VA = "0x4F00140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4EFDA00", Offset = "0x4EFDA00", VA = "0x4EFDA00")]
	protected Graphic()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4EFDAD0", Offset = "0x4EFDAD0", VA = "0x4EFDAD0", Slot = "26")]
	public virtual void SetAllDirty()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4EFDC80", Offset = "0x4EFDC80", VA = "0x4EFDC80", Slot = "27")]
	public virtual void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4EFDDF0", Offset = "0x4EFDDF0", VA = "0x4EFDDF0", Slot = "28")]
	public virtual void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4EFDEE0", Offset = "0x4EFDEE0", VA = "0x4EFDEE0", Slot = "29")]
	public virtual void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4EFDB30", Offset = "0x4EFDB30", VA = "0x4EFDB30")]
	public void SetRaycastDirty()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4EFDFD0", Offset = "0x4EFDFD0", VA = "0x4EFDFD0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4EFE0D0", Offset = "0x4EFE0D0", VA = "0x4EFE0D0", Slot = "11")]
	protected override void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4EFE3C0", Offset = "0x4EFE3C0", VA = "0x4EFE3C0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4EFE4C0", Offset = "0x4EFE4C0", VA = "0x4EFE4C0")]
	private void CacheCanvas()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4EFECE0", Offset = "0x4EFECE0", VA = "0x4EFECE0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4EFEE50", Offset = "0x4EFEE50", VA = "0x4EFEE50", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4EFF1C0", Offset = "0x4EFF1C0", VA = "0x4EFF1C0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4EFF310", Offset = "0x4EFF310", VA = "0x4EFF310", Slot = "15")]
	protected override void OnCanvasHierarchyChanged()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4EFF4A0", Offset = "0x4EFF4A0", VA = "0x4EFF4A0", Slot = "36")]
	public virtual void OnCullingChanged()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4EFF580", Offset = "0x4EFF580", VA = "0x4EFF580", Slot = "37")]
	public virtual void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4EFF640", Offset = "0x4EFF640", VA = "0x4EFF640", Slot = "38")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4EFF650", Offset = "0x4EFF650", VA = "0x4EFF650", Slot = "39")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4EFF660", Offset = "0x4EFF660", VA = "0x4EFF660", Slot = "40")]
	protected virtual void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4EFF720", Offset = "0x4EFF720", VA = "0x4EFF720", Slot = "41")]
	protected virtual void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4EFFC10", Offset = "0x4EFFC10", VA = "0x4EFFC10")]
	private void DoMeshGeneration()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4EFF730", Offset = "0x4EFF730", VA = "0x4EFF730")]
	private void DoLegacyMeshGeneration()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4F00270", Offset = "0x4F00270", VA = "0x4F00270", Slot = "42")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use OnPopulateMesh instead.", true)]
	protected virtual void OnFillVBO(List<UIVertex> vbo)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4F00280", Offset = "0x4F00280", VA = "0x4F00280", Slot = "43")]
	[Obsolete("Use OnPopulateMesh(VertexHelper vh) instead.", false)]
	protected virtual void OnPopulateMesh(Mesh m)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4F00310", Offset = "0x4F00310", VA = "0x4F00310", Slot = "44")]
	protected virtual void OnPopulateMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4F007C0", Offset = "0x4F007C0", VA = "0x4F007C0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4F007E0", Offset = "0x4F007E0", VA = "0x4F007E0", Slot = "45")]
	public virtual void SetNativeSize()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4F007F0", Offset = "0x4F007F0", VA = "0x4F007F0", Slot = "46")]
	public virtual bool Raycast(Vector2 sp, Camera eventCamera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4F00D10", Offset = "0x4F00D10", VA = "0x4F00D10")]
	public Vector2 PixelAdjustPoint(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4F00450", Offset = "0x4F00450", VA = "0x4F00450")]
	public Rect GetPixelAdjustedRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4F00FA0", Offset = "0x4F00FA0", VA = "0x4F00FA0", Slot = "47")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4F00FC0", Offset = "0x4F00FC0", VA = "0x4F00FC0", Slot = "48")]
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4F012E0", Offset = "0x4F012E0", VA = "0x4F012E0")]
	private static Color CreateColorFromAlpha(float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4F01300", Offset = "0x4F01300", VA = "0x4F01300", Slot = "49")]
	public virtual void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4F013B0", Offset = "0x4F013B0", VA = "0x4F013B0")]
	public void RegisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4F01430", Offset = "0x4F01430", VA = "0x4F01430")]
	public void UnregisterDirtyLayoutCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4F014B0", Offset = "0x4F014B0", VA = "0x4F014B0")]
	public void RegisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4F01530", Offset = "0x4F01530", VA = "0x4F01530")]
	public void UnregisterDirtyVerticesCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4F015B0", Offset = "0x4F015B0", VA = "0x4F015B0")]
	public void RegisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4F01630", Offset = "0x4F01630", VA = "0x4F01630")]
	public void UnregisterDirtyMaterialCallback(UnityAction action)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4F01760", Offset = "0x4F01760", VA = "0x4F01760", Slot = "18")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
