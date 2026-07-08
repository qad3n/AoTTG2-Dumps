using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000ED")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class PopupField<T> : BasePopupField<T, T>
{
	[Token(Token = "0x40003D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty indexProperty;

	[Token(Token = "0x40003D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static List<char> s_Modifiers;

	[Token(Token = "0x40003D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_Index;

	[Token(Token = "0x40003D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40003DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40003DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700011E")]
	public virtual Func<T, string> formatSelectedValueCallback
	{
		[Token(Token = "0x6000674")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public virtual Func<T, string> formatListItemCallback
	{
		[Token(Token = "0x6000675")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public override T value
	{
		[Token(Token = "0x6000678")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000679")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	[CreateProperty]
	public int index
	{
		[Token(Token = "0x600067B")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600067C")]
		set
		{
		}
	}

	[Token(Token = "0x6000676")]
	internal override string GetValueToDisplay()
	{
		return null;
	}

	[Token(Token = "0x6000677")]
	internal override string GetListItemToDisplay(T value)
	{
		return null;
	}

	[Token(Token = "0x600067A")]
	public override void SetValueWithoutNotify(T newValue)
	{
	}

	[Token(Token = "0x600067D")]
	public PopupField([Optional] string label)
	{
	}

	[Token(Token = "0x600067E")]
	public PopupField(string label, List<T> choices, int defaultIndex, [Optional] Func<T, string> formatSelectedValueCallback, [Optional] Func<T, string> formatListItemCallback)
	{
	}

	[Token(Token = "0x600067F")]
	internal override void AddMenuItems(IGenericMenu menu)
	{
	}

	[Token(Token = "0x6000680")]
	private void ChangeValueFromMenu(T menuItem)
	{
	}
}
