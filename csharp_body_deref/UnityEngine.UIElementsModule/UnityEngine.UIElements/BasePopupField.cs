// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BasePopupField
// Update status: CHANGED in this game update
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

[Token(Token = "0x200007A")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class BasePopupField<TValueType, TValueChoice> : BaseField<TValueType>
{
	[Token(Token = "0x200007B")]
	private class PopupTextElement : TextElement
	{
		[Token(Token = "0x60003E8")]
		protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
		{
			return default(Vector2);
		}

		[Token(Token = "0x60003E9")]
		public PopupTextElement()
		{
		}
	}

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId choicesProperty;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId textProperty;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x0")]
	internal List<TValueChoice> m_Choices;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x0")]
	private TextElement m_TextElement;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_ArrowElement;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x0")]
	private IVisualElementScheduledItem m_ScheduledShowMenuItem;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TValueChoice, string> m_FormatSelectedValueCallback;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x0")]
	internal Func<TValueChoice, string> m_FormatListItemCallback;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x0")]
	internal Func<AbstractGenericMenu> createMenuCallback;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x0")]
	internal AbstractGenericMenu m_GenericMenu;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x0")]
	internal bool m_AutoCloseMenu;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string textUssClassName;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string arrowUssClassName;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000AC")]
	protected TextElement textElement
	{
		[Token(Token = "0x60003D6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	[CreateProperty]
	public virtual List<TValueChoice> choices
	{
		[Token(Token = "0x60003DA")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003DB")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	[CreateProperty(ReadOnly = true)]
	public string text
	{
		[Token(Token = "0x60003DD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D7")]
	internal abstract string GetValueToDisplay();

	[Token(Token = "0x60003D8")]
	internal abstract string GetListItemToDisplay(TValueType item);

	[Token(Token = "0x60003D9")]
	internal abstract void AddMenuItems(AbstractGenericMenu menu);

	[Token(Token = "0x60003DC")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x60003DE")]
	internal BasePopupField(string label)
	{
	}

	[Token(Token = "0x60003DF")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60003E0")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60003E1")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60003E2")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E3")]
	private void ProcessPointerDown<T>(PointerEventBase<T> evt) where T : PointerEventBase<T>, new()
	{
	}

	[Token(Token = "0x60003E4")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x60003E5")]
	internal void ShowMenu()
	{
	}

	[Token(Token = "0x60003E6")]
	protected override void UpdateMixedValueContent()
	{
	}
}
