// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAttributeDescription
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600264C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E2")]
	public IEnumerable<string> obsoleteNames
	{
		[Token(Token = "0x600264D")]
		[Address(RVA = "0x3155F70", Offset = "0x3154570", VA = "0x183155F70")]
		set
		{
		}
	}

	[Token(Token = "0x170009E3")]
	protected internal string type
	{
		[Token(Token = "0x600264E")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E4")]
	protected string typeNamespace
	{
		[Token(Token = "0x600264F")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E5")]
	public Use use
	{
		[Token(Token = "0x6002650")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009E6")]
	public UxmlTypeRestriction restriction
	{
		[Token(Token = "0x6002651")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600264A")]
	[Address(RVA = "0x3155F40", Offset = "0x3154540", VA = "0x183155F40")]
	protected UxmlAttributeDescription()
	{
	}

	[Token(Token = "0x6002652")]
	[Address(RVA = "0x3155540", Offset = "0x3153B40", VA = "0x183155540")]
	internal bool TryFindValueInAttributeOverrides(string elementName, CreationContext cc, List<TemplateAsset.AttributeOverride> attributeOverrides, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002653")]
	[Address(RVA = "0x3155E70", Offset = "0x3154470", VA = "0x183155E70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002654")]
	[Address(RVA = "0x3155880", Offset = "0x3153E80", VA = "0x183155880")]
	internal bool TryGetAttributeOverrideValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value, out VisualTreeAsset sourceAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6002655")]
	[Address(RVA = "0x3155EC0", Offset = "0x31544C0", VA = "0x183155EC0")]
	internal bool ValidateName()
	{
		return default(bool);
	}

	[Token(Token = "0x6002656")]
	[Address(RVA = "0x3155B50", Offset = "0x3154150", VA = "0x183155B50")]
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
