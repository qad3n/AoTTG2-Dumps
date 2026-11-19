// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.AspectRatioFitter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x2000038")]
[AddComponentMenu("Layout/Aspect Ratio Fitter", 142)]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("AspectRatioFitter")]
public class AspectRatioFitter : UIBehaviour, ILayoutSelfController, ILayoutController
{
	[Token(Token = "0x2000039")]
	public enum AspectMode
	{
		[Token(Token = "0x400012D")]
		None,
		[Token(Token = "0x400012E")]
		WidthControlsHeight,
		[Token(Token = "0x400012F")]
		HeightControlsWidth,
		[Token(Token = "0x4000130")]
		FitInParent,
		[Token(Token = "0x4000131")]
		EnvelopeParent
	}

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AspectMode m_AspectMode;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float m_AspectRatio;

	[NonSerialized]
	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform m_Rect;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x30")]
	private bool m_DelayedSetDirty;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x31")]
	private bool m_DoesParentExist;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x32")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x17000099")]
	public AspectMode aspectMode
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x6CDC2F0", Offset = "0x6CDB2F0", VA = "0x6CDC2F0")]
		get
		{
			return default(AspectMode);
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x6CDC300", Offset = "0x6CDB300", VA = "0x6CDC300")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public float aspectRatio
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x6CDC370", Offset = "0x6CDB370", VA = "0x6CDC370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x6CDC380", Offset = "0x6CDB380", VA = "0x6CDC380")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x6CDC3E0", Offset = "0x6CDB3E0", VA = "0x6CDC3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x6CDC470", Offset = "0x6CDB470", VA = "0x6CDC470")]
	protected AspectRatioFitter()
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x6CDC480", Offset = "0x6CDB480", VA = "0x6CDC480", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x6CDC510", Offset = "0x6CDB510", VA = "0x6CDC510", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x6CDC620", Offset = "0x6CDB620", VA = "0x6CDC620", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x6CDCB10", Offset = "0x6CDBB10", VA = "0x6CDCB10", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x6CDCBA0", Offset = "0x6CDBBA0", VA = "0x6CDCBA0", Slot = "19")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x6CDCBB0", Offset = "0x6CDBBB0", VA = "0x6CDCBB0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x6CDCBC0", Offset = "0x6CDBBC0", VA = "0x6CDCBC0")]
	private void UpdateRect()
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x6CDD040", Offset = "0x6CDC040", VA = "0x6CDD040")]
	private float GetSizeDeltaToProduceSize(float size, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x6CDCF20", Offset = "0x6CDBF20", VA = "0x6CDCF20")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x6CDD130", Offset = "0x6CDC130", VA = "0x6CDD130", Slot = "20")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x6CDD140", Offset = "0x6CDC140", VA = "0x6CDD140", Slot = "21")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x6CDC360", Offset = "0x6CDB360", VA = "0x6CDC360")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x6CDC550", Offset = "0x6CDB550", VA = "0x6CDC550")]
	public bool IsComponentValidOnObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x6CDC600", Offset = "0x6CDB600", VA = "0x6CDC600")]
	public bool IsAspectModeValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x6CDD150", Offset = "0x6CDC150", VA = "0x6CDD150")]
	private bool DoesParentExists()
	{
		return default(bool);
	}
}
