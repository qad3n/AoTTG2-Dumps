// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PopupField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000129")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class PopupField<T> : BasePopupField<T, T>
{
	[Token(Token = "0x4000538")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId indexProperty;

	[Token(Token = "0x4000539")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_Index;

	[Token(Token = "0x400053A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400053B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400053C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000197")]
	public virtual Func<T, string> formatSelectedValueCallback
	{
		[Token(Token = "0x60008A3")]
		set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public virtual Func<T, string> formatListItemCallback
	{
		[Token(Token = "0x60008A4")]
		set
		{
		}
	}

	[Token(Token = "0x17000199")]
	public override T value
	{
		[Token(Token = "0x60008A7")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60008A8")]
		set
		{
		}
	}

	[Token(Token = "0x1700019A")]
	[CreateProperty]
	public int index
	{
		[Token(Token = "0x60008AA")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008AB")]
		set
		{
		}
	}

	[Token(Token = "0x60008A5")]
	internal override string GetValueToDisplay()
	{
		return null;
	}

	[Token(Token = "0x60008A6")]
	internal override string GetListItemToDisplay(T value)
	{
		return null;
	}

	[Token(Token = "0x60008A9")]
	public override void SetValueWithoutNotify(T newValue)
	{
	}

	[Token(Token = "0x60008AC")]
	public PopupField([Optional] string label)
	{
	}

	[Token(Token = "0x60008AD")]
	public PopupField(string label, List<T> choices, int defaultIndex, [Optional] Func<T, string> formatSelectedValueCallback, [Optional] Func<T, string> formatListItemCallback)
	{
	}

	[Token(Token = "0x60008AE")]
	internal override void AddMenuItems(AbstractGenericMenu menu)
	{
	}

	[Token(Token = "0x60008AF")]
	internal void SetIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x60008B0")]
	private void ChangeValueFromMenu(T menuItem)
	{
	}
}
