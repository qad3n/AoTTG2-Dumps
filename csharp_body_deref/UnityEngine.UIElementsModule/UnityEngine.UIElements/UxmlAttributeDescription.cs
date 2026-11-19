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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004E5")]
public abstract class UxmlAttributeDescription
{
	[Token(Token = "0x20004E6")]
	public enum Use
	{
		[Token(Token = "0x40010D6")]
		None,
		[Token(Token = "0x40010D7")]
		Optional,
		[Token(Token = "0x40010D8")]
		Prohibited,
		[Token(Token = "0x40010D9")]
		Required
	}

	[Token(Token = "0x40010D0")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_ObsoleteNames;

	[Token(Token = "0x170009E1")]
	public string name
	{
		[Token(Token = "0x600264B")]
		[Address(RVA = "0x6B57A90", Offset = "0x6B56A90", VA = "0x6B57A90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600264C")]
		[Address(RVA = "0x6B57AA0", Offset = "0x6B56AA0", VA = "0x6B57AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E2")]
	public IEnumerable<string> obsoleteNames
	{
		[Token(Token = "0x600264D")]
		[Address(RVA = "0x6B57AB0", Offset = "0x6B56AB0", VA = "0x6B57AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009E3")]
	protected internal string type
	{
		[Token(Token = "0x600264E")]
		[Address(RVA = "0x6B57B30", Offset = "0x6B56B30", VA = "0x6B57B30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E4")]
	protected string typeNamespace
	{
		[Token(Token = "0x600264F")]
		[Address(RVA = "0x6B57B40", Offset = "0x6B56B40", VA = "0x6B57B40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E5")]
	public Use use
	{
		[Token(Token = "0x6002650")]
		[Address(RVA = "0x6B57B50", Offset = "0x6B56B50", VA = "0x6B57B50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E6")]
	public UxmlTypeRestriction restriction
	{
		[Token(Token = "0x6002651")]
		[Address(RVA = "0x6B57B60", Offset = "0x6B56B60", VA = "0x6B57B60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600264A")]
	[Address(RVA = "0x6B57A60", Offset = "0x6B56A60", VA = "0x6B57A60")]
	protected UxmlAttributeDescription()
	{
	}

	[Token(Token = "0x6002652")]
	[Address(RVA = "0x6B57B70", Offset = "0x6B56B70", VA = "0x6B57B70")]
	internal bool TryFindValueInAttributeOverrides(string elementName, CreationContext cc, List<TemplateAsset.AttributeOverride> attributeOverrides, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002653")]
	[Address(RVA = "0x6B57EE0", Offset = "0x6B56EE0", VA = "0x6B57EE0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002654")]
	[Address(RVA = "0x6B583B0", Offset = "0x6B573B0", VA = "0x6B583B0")]
	internal bool TryGetAttributeOverrideValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value, out VisualTreeAsset sourceAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6002655")]
	[Address(RVA = "0x6B586A0", Offset = "0x6B576A0", VA = "0x6B586A0")]
	internal bool ValidateName()
	{
		return default(bool);
	}

	[Token(Token = "0x6002656")]
	[Address(RVA = "0x6B57F30", Offset = "0x6B56F30", VA = "0x6B57F30")]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value, out VisualTreeAsset sourceAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6002657")]
	protected bool TryGetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue, ref T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002658")]
	protected T GetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue)
	{
		return (T)null;
	}
}
