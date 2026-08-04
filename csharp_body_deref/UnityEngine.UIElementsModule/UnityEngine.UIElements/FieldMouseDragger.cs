// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FieldMouseDragger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000201")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class FieldMouseDragger<T> : BaseFieldMouseDragger
{
	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x0")]
	private readonly IValueField<T> m_DrivenField;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_DragElement;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x0")]
	private Rect m_DragHotZone;

	[Token(Token = "0x1700025F")]
	public bool dragging
	{
		[Token(Token = "0x6000CF3")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CF4")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000260")]
	public T startValue
	{
		[Token(Token = "0x6000CF5")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000CF6")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000CF2")]
	public FieldMouseDragger(IValueField<T> drivenField)
	{
	}

	[Token(Token = "0x6000CF7")]
	public sealed override void SetDragZone(VisualElement dragElement, Rect hotZone)
	{
	}

	[Token(Token = "0x6000CF8")]
	private bool CanStartDrag(int button, Vector2 localPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	private void UpdateValueOnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000CFA")]
	private void ProcessDownEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000CFB")]
	private void UpdateValueOnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000CFC")]
	private void ProcessMoveEvent(bool shiftKey, bool altKey, Vector2 deltaPosition)
	{
	}

	[Token(Token = "0x6000CFD")]
	private void UpdateValueOnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000CFE")]
	private void ProcessUpEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6000CFF")]
	private void UpdateValueOnKeyDown(KeyDownEvent evt)
	{
	}
}
