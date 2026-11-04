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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(AspectMode);
		}
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x32C31C0", Offset = "0x32C17C0", VA = "0x1832C31C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public float aspectRatio
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x18A4260", Offset = "0x18A2860", VA = "0x1818A4260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x32C3220", Offset = "0x32C1820", VA = "0x1832C3220")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x32C3130", Offset = "0x32C1730", VA = "0x1832C3130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x32C3120", Offset = "0x32C1720", VA = "0x1832C3120")]
	protected AspectRatioFitter()
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x32C2B10", Offset = "0x32C1110", VA = "0x1832C2B10", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x32C2C60", Offset = "0x32C1260", VA = "0x1832C2C60", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x32C2A90", Offset = "0x32C1090", VA = "0x1832C2A90", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x32C2BC0", Offset = "0x32C11C0", VA = "0x1832C2BC0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x32C3100", Offset = "0x32C1700", VA = "0x1832C3100", Slot = "19")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x32C2BB0", Offset = "0x32C11B0", VA = "0x1832C2BB0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x32C2CB0", Offset = "0x32C12B0", VA = "0x1832C2CB0")]
	private void UpdateRect()
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x32C27F0", Offset = "0x32C0DF0", VA = "0x1832C27F0")]
	private float GetSizeDeltaToProduceSize(float size, int axis)
	{
		return default(float);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x32C26C0", Offset = "0x32C0CC0", VA = "0x1832C26C0")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x32C2BB0", Offset = "0x32C11B0", VA = "0x1832C2BB0")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x32C29E0", Offset = "0x32C0FE0", VA = "0x1832C29E0")]
	public bool IsComponentValidOnObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x32C29C0", Offset = "0x32C0FC0", VA = "0x1832C29C0")]
	public bool IsAspectModeValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
	private bool DoesParentExists()
	{
		return default(bool);
	}
}
