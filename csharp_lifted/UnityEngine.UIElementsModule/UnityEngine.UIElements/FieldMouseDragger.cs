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

[Token(Token = "0x200024B")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class FieldMouseDragger<T> : BaseFieldMouseDragger
{
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x0")]
	private readonly IValueField<T> m_DrivenField;

	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_DragElement;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x0")]
	private Rect m_DragHotZone;

	[Token(Token = "0x170002EB")]
	public bool dragging
	{
		[Token(Token = "0x6000F37")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F38")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002EC")]
	public T startValue
	{
		[Token(Token = "0x6000F39")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000F3A")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F36")]
	public FieldMouseDragger(IValueField<T> drivenField)
	{
	}

	[Token(Token = "0x6000F3B")]
	public sealed override void SetDragZone(VisualElement dragElement, Rect hotZone)
	{
	}

	[Token(Token = "0x6000F3C")]
	private bool CanStartDrag(int button, Vector2 localPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F3D")]
	private void UpdateValueOnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000F3E")]
	private void ProcessDownEvent(EventBase evt)
	{
	}

	[Token(Token = "0x6000F3F")]
	private void UpdateValueOnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000F40")]
	private void ProcessMoveEvent(bool shiftKey, bool altKey, Vector2 deltaPosition)
	{
	}

	[Token(Token = "0x6000F41")]
	private void UpdateValueOnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000F42")]
	private void ProcessUpEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6000F43")]
	private void UpdateValueOnKeyDown(KeyDownEvent evt)
	{
	}
}
