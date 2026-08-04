// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BasePopupField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000046")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class BasePopupField<TValueType, TValueChoice> : BaseField<TValueType>
{
	[Token(Token = "0x2000047")]
	private class PopupTextElement : TextElement
	{
		[Token(Token = "0x6000258")]
		protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
		{
			return default(Vector2);
		}

		[Token(Token = "0x6000259")]
		public PopupTextElement()
		{
		}
	}

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty choicesProperty;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty textProperty;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x0")]
	internal List<TValueChoice> m_Choices;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_ArrowElement;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TValueChoice, string> m_FormatSelectedValueCallback;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TValueChoice, string> m_FormatListItemCallback;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x0")]
	internal Func<IGenericMenu> createMenuCallback;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string textUssClassName;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string arrowUssClassName;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700005A")]
	protected TextElement textElement
	{
		[Token(Token = "0x6000247")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	[CreateProperty]
	public virtual List<TValueChoice> choices
	{
		[Token(Token = "0x600024B")]
		get
		{
			return null;
		}
		[Token(Token = "0x600024C")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	[CreateProperty(ReadOnly = true)]
	public string text
	{
		[Token(Token = "0x600024E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000248")]
	internal abstract string GetValueToDisplay();

	[Token(Token = "0x6000249")]
	internal abstract string GetListItemToDisplay(TValueType item);

	[Token(Token = "0x600024A")]
	internal abstract void AddMenuItems(IGenericMenu menu);

	[Token(Token = "0x600024D")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x600024F")]
	internal BasePopupField(string label)
	{
	}

	[Token(Token = "0x6000250")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000251")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000252")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x6000254")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000255")]
	internal void ShowMenu()
	{
	}

	[Token(Token = "0x6000256")]
	protected override void UpdateMixedValueContent()
	{
	}
}
