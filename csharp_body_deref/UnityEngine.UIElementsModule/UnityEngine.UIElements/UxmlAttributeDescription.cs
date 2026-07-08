using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200041C")]
public abstract class UxmlAttributeDescription
{
	[Token(Token = "0x200041D")]
	public enum Use
	{
		[Token(Token = "0x4000C87")]
		None,
		[Token(Token = "0x4000C88")]
		Optional,
		[Token(Token = "0x4000C89")]
		Prohibited,
		[Token(Token = "0x4000C8A")]
		Required
	}

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_ObsoleteNames;

	[Token(Token = "0x17000712")]
	public string name
	{
		[Token(Token = "0x6001A82")]
		[Address(RVA = "0x4C40F30", Offset = "0x4C40F30", VA = "0x4C40F30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A83")]
		[Address(RVA = "0x4C40F40", Offset = "0x4C40F40", VA = "0x4C40F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000713")]
	public IEnumerable<string> obsoleteNames
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x4C40F50", Offset = "0x4C40F50", VA = "0x4C40F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000714")]
	protected string type
	{
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x4C40FB0", Offset = "0x4C40FB0", VA = "0x4C40FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000715")]
	protected string typeNamespace
	{
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x4C40FC0", Offset = "0x4C40FC0", VA = "0x4C40FC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000716")]
	public Use use
	{
		[Token(Token = "0x6001A87")]
		[Address(RVA = "0x4C40FD0", Offset = "0x4C40FD0", VA = "0x4C40FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000717")]
	public UxmlTypeRestriction restriction
	{
		[Token(Token = "0x6001A88")]
		[Address(RVA = "0x4C40FE0", Offset = "0x4C40FE0", VA = "0x4C40FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x4C40F00", Offset = "0x4C40F00", VA = "0x4C40F00")]
	protected UxmlAttributeDescription()
	{
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x4C40FF0", Offset = "0x4C40FF0", VA = "0x4C40FF0")]
	internal bool TryFindValueInAttributeOverrides(string elementName, List<TemplateAsset.AttributeOverride> attributeOverrides, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x4C41250", Offset = "0x4C41250", VA = "0x4C41250")]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x4C41280", Offset = "0x4C41280", VA = "0x4C41280")]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value, out VisualTreeAsset sourceAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8C")]
	protected bool TryGetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue, ref T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8D")]
	protected T GetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue)
	{
		return (T)null;
	}
}
