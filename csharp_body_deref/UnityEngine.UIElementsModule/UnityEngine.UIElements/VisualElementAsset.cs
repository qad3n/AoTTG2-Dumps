// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000519")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
internal class VisualElementAsset : UxmlAsset
{
	[Token(Token = "0x4001118")]
	internal const string k_LostInlineStyles = "VisualElementAsset previously had inline styles that were lost.";

	[Token(Token = "0x4001119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private int m_RuleIndex;

	[Token(Token = "0x400111A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	private string[] m_Classes;

	[Token(Token = "0x400111B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private List<string> m_StylesheetPaths;

	[Token(Token = "0x400111C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private List<StyleSheet> m_Stylesheets;

	[Token(Token = "0x400111D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeReference]
	private UxmlSerializedData m_SerializedData;

	[Token(Token = "0x400111E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private bool m_SkipClone;

	[Token(Token = "0x170009FE")]
	public int ruleIndex
	{
		[Token(Token = "0x60026FF")]
		[Address(RVA = "0x6B5D1E0", Offset = "0x6B5C1E0", VA = "0x6B5D1E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002700")]
		[Address(RVA = "0x6B5D1F0", Offset = "0x6B5C1F0", VA = "0x6B5D1F0")]
		set
		{
		}
	}

	[Token(Token = "0x170009FF")]
	public string[] classes
	{
		[Token(Token = "0x6002701")]
		[Address(RVA = "0x6B5D200", Offset = "0x6B5C200", VA = "0x6B5D200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A00")]
	public List<string> stylesheetPaths
	{
		[Token(Token = "0x6002702")]
		[Address(RVA = "0x6B5D210", Offset = "0x6B5C210", VA = "0x6B5D210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A01")]
	public bool hasStylesheetPaths
	{
		[Token(Token = "0x6002703")]
		[Address(RVA = "0x6B5D290", Offset = "0x6B5C290", VA = "0x6B5D290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A02")]
	public List<StyleSheet> stylesheets
	{
		[Token(Token = "0x6002704")]
		[Address(RVA = "0x6B5D2A0", Offset = "0x6B5C2A0", VA = "0x6B5D2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A03")]
	public bool hasStylesheets
	{
		[Token(Token = "0x6002705")]
		[Address(RVA = "0x6B5D320", Offset = "0x6B5C320", VA = "0x6B5D320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A04")]
	public UxmlSerializedData serializedData
	{
		[Token(Token = "0x6002706")]
		[Address(RVA = "0x6B5D330", Offset = "0x6B5C330", VA = "0x6B5D330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A05")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool skipClone
	{
		[Token(Token = "0x6002707")]
		[Address(RVA = "0x6B5D340", Offset = "0x6B5C340", VA = "0x6B5D340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002708")]
	[Address(RVA = "0x6B5D350", Offset = "0x6B5C350", VA = "0x6B5D350")]
	public VisualElementAsset(string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x6002709")]
	[Address(RVA = "0x6B5D450", Offset = "0x6B5C450", VA = "0x6B5D450")]
	private static bool IdsPathMatchesAttributeOverrideIdsPath(List<int> idsPath, List<int> attributeOverrideIdsPath, int templateId)
	{
		return default(bool);
	}

	[Token(Token = "0x600270A")]
	[Address(RVA = "0x6B5D560", Offset = "0x6B5C560", VA = "0x6B5D560", Slot = "8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal virtual VisualElement Instantiate(CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x600270B")]
	[Address(RVA = "0x6B5E030", Offset = "0x6B5D030", VA = "0x6B5E030", Slot = "7")]
	internal override bool Accepts(UxmlAsset asset, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600270C")]
	[Address(RVA = "0x6B5E0A0", Offset = "0x6B5D0A0", VA = "0x6B5E0A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600270D")]
	[Address(RVA = "0x6B5E190", Offset = "0x6B5D190", VA = "0x6B5E190", Slot = "5")]
	private protected override void OnVisualTreeAssetChanged(VisualTreeAsset previousVta, VisualTreeAsset newVta)
	{
	}
}
