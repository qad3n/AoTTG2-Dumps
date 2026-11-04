// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementAsset
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x1CFDD50", Offset = "0x1CFC350", VA = "0x181CFDD50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002700")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009FF")]
	public string[] classes
	{
		[Token(Token = "0x6002701")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A00")]
	public List<string> stylesheetPaths
	{
		[Token(Token = "0x6002702")]
		[Address(RVA = "0x3163830", Offset = "0x3161E30", VA = "0x183163830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A01")]
	public bool hasStylesheetPaths
	{
		[Token(Token = "0x6002703")]
		[Address(RVA = "0x264D420", Offset = "0x264BA20", VA = "0x18264D420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A02")]
	public List<StyleSheet> stylesheets
	{
		[Token(Token = "0x6002704")]
		[Address(RVA = "0x31638B0", Offset = "0x3161EB0", VA = "0x1831638B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A03")]
	public bool hasStylesheets
	{
		[Token(Token = "0x6002705")]
		[Address(RVA = "0x3163820", Offset = "0x3161E20", VA = "0x183163820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A04")]
	public UxmlSerializedData serializedData
	{
		[Token(Token = "0x6002706")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
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
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002708")]
	[Address(RVA = "0x3163790", Offset = "0x3161D90", VA = "0x183163790")]
	public VisualElementAsset(string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x6002709")]
	[Address(RVA = "0x3162D70", Offset = "0x3161370", VA = "0x183162D70")]
	private static bool IdsPathMatchesAttributeOverrideIdsPath(List<int> idsPath, List<int> attributeOverrideIdsPath, int templateId)
	{
		return default(bool);
	}

	[Token(Token = "0x600270A")]
	[Address(RVA = "0x3162E90", Offset = "0x3161490", VA = "0x183162E90", Slot = "8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal virtual VisualElement Instantiate(CreationContext cc)
	{
		return null;
	}

	[Token(Token = "0x600270B")]
	[Address(RVA = "0x3162D00", Offset = "0x3161300", VA = "0x183162D00", Slot = "7")]
	internal override bool Accepts(UxmlAsset asset, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600270C")]
	[Address(RVA = "0x31636B0", Offset = "0x3161CB0", VA = "0x1831636B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600270D")]
	[Address(RVA = "0x3163580", Offset = "0x3161B80", VA = "0x183163580", Slot = "5")]
	private protected override void OnVisualTreeAssetChanged(VisualTreeAsset previousVta, VisualTreeAsset newVta)
	{
	}
}
