// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAttributeDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F68860", Offset = "0x4F68860", VA = "0x4F68860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A83")]
		[Address(RVA = "0x4F68870", Offset = "0x4F68870", VA = "0x4F68870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000713")]
	public IEnumerable<string> obsoleteNames
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x4F68880", Offset = "0x4F68880", VA = "0x4F68880")]
		set
		{
		}
	}

	[Token(Token = "0x17000714")]
	protected string type
	{
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x4F688E0", Offset = "0x4F688E0", VA = "0x4F688E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000715")]
	protected string typeNamespace
	{
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x4F688F0", Offset = "0x4F688F0", VA = "0x4F688F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000716")]
	public Use use
	{
		[Token(Token = "0x6001A87")]
		[Address(RVA = "0x4F68900", Offset = "0x4F68900", VA = "0x4F68900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000717")]
	public UxmlTypeRestriction restriction
	{
		[Token(Token = "0x6001A88")]
		[Address(RVA = "0x4F68910", Offset = "0x4F68910", VA = "0x4F68910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x4F68830", Offset = "0x4F68830", VA = "0x4F68830")]
	protected UxmlAttributeDescription()
	{
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x4F68920", Offset = "0x4F68920", VA = "0x4F68920")]
	internal bool TryFindValueInAttributeOverrides(string elementName, List<TemplateAsset.AttributeOverride> attributeOverrides, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x4F68B80", Offset = "0x4F68B80", VA = "0x4F68B80")]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x4F68BB0", Offset = "0x4F68BB0", VA = "0x4F68BB0")]
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
