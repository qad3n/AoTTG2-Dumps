// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAsset
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
[Token(Token = "0x2000511")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal abstract class UxmlAsset : IUxmlAttributes
{
	[Token(Token = "0x4001103")]
	public const string NullNodeType = "null";

	[Token(Token = "0x4001104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_FullTypeName;

	[Token(Token = "0x4001105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private UxmlNamespaceDefinition m_XmlNamespace;

	[Token(Token = "0x4001106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private int m_Id;

	[Token(Token = "0x4001107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[HideInInspector]
	[SerializeReference]
	private UxmlAsset m_Parent;

	[Token(Token = "0x4001108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeReference]
	private List<UxmlAsset> m_Children;

	[Token(Token = "0x4001109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	private VisualTreeAsset m_VisualTreeAsset;

	[Token(Token = "0x400110A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	private List<UxmlNamespaceDefinition> m_NamespaceDefinitions;

	[Token(Token = "0x400110B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	protected List<UxmlProperty> m_Properties;

	[Token(Token = "0x170009F2")]
	public string fullTypeName
	{
		[Token(Token = "0x60026CC")]
		[Address(RVA = "0x6B5AD90", Offset = "0x6B59D90", VA = "0x6B5AD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F3")]
	public int id
	{
		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x6B5ADA0", Offset = "0x6B59DA0", VA = "0x6B5ADA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x6B5ADB0", Offset = "0x6B59DB0", VA = "0x6B5ADB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009F4")]
	public bool isRoot
	{
		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x6B5ADC0", Offset = "0x6B59DC0", VA = "0x6B5ADC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009F5")]
	public UxmlAsset parentAsset
	{
		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x6B5AE70", Offset = "0x6B59E70", VA = "0x6B5AE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F6")]
	internal VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x60026D1")]
		[Address(RVA = "0x6B5AE80", Offset = "0x6B59E80", VA = "0x6B5AE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F7")]
	public int childCount
	{
		[Token(Token = "0x60026D2")]
		[Address(RVA = "0x6B5AE90", Offset = "0x6B59E90", VA = "0x6B5AE90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170009F8")]
	public UxmlAsset this[int index]
	{
		[Token(Token = "0x60026D3")]
		[Address(RVA = "0x6B5AED0", Offset = "0x6B59ED0", VA = "0x6B5AED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F9")]
	public List<UxmlNamespaceDefinition> namespaceDefinitions
	{
		[Token(Token = "0x60026D4")]
		[Address(RVA = "0x6B5AF20", Offset = "0x6B59F20", VA = "0x6B5AF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026CB")]
	[Address(RVA = "0x6B5AD40", Offset = "0x6B59D40", VA = "0x6B5AD40")]
	public UxmlAsset(string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x60026D5")]
	[Address(RVA = "0x6B5AFA0", Offset = "0x6B59FA0", VA = "0x6B5AFA0")]
	public void GetChildrenUxmlObjectAssets(List<UxmlObjectAsset> children)
	{
	}

	[Token(Token = "0x60026D6")]
	[Address(RVA = "0x6B5B150", Offset = "0x6B5A150", VA = "0x6B5B150")]
	public UxmlObjectAsset GetField(string fieldName)
	{
		return null;
	}

	[Token(Token = "0x60026D7")]
	[Address(RVA = "0x6B5B270", Offset = "0x6B5A270", VA = "0x6B5B270")]
	internal void SetVisualTreeAssetWithOutNotify(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x60026D8")]
	[Address(RVA = "0x6B5B280", Offset = "0x6B5A280", VA = "0x6B5B280")]
	internal void SetVisualTreeAsset(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x60026D9")]
	[Address(RVA = "0x6B5B430", Offset = "0x6B5A430", VA = "0x6B5B430")]
	public void Add(UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DA")]
	[Address(RVA = "0x6B5B4D0", Offset = "0x6B5A4D0", VA = "0x6B5B4D0")]
	public void Insert(int index, UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DB")]
	[Address(RVA = "0x6B5B990", Offset = "0x6B5A990", VA = "0x6B5B990")]
	private void InsertInChildren(int index, UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DC")]
	[Address(RVA = "0x6B5BB00", Offset = "0x6B5AB00", VA = "0x6B5BB00")]
	private void RemoveFromChildren(UxmlAsset child)
	{
	}

	[Token(Token = "0x60026DD")]
	[Address(RVA = "0x6B5BBE0", Offset = "0x6B5ABE0", VA = "0x6B5BBE0")]
	private void RemoveFromChildren(int index)
	{
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x6B5BA40", Offset = "0x6B5AA40", VA = "0x6B5BA40")]
	private void SetParent(UxmlAsset parent)
	{
	}

	[Token(Token = "0x60026DF")]
	[Address(RVA = "0x6B5BC30", Offset = "0x6B5AC30", VA = "0x6B5BC30", Slot = "5")]
	private protected virtual void OnVisualTreeAssetChanged(VisualTreeAsset previousVta, VisualTreeAsset newVta)
	{
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x6B5BB90", Offset = "0x6B5AB90", VA = "0x6B5BB90")]
	public int IndexOf(UxmlAsset asset)
	{
		return default(int);
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x6B5B7D0", Offset = "0x6B5A7D0", VA = "0x6B5B7D0")]
	public bool IsAncestorOf(UxmlAsset other)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x6B5BC40", Offset = "0x6B5AC40", VA = "0x6B5BC40", Slot = "6")]
	public virtual bool HasParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x6B5BC50", Offset = "0x6B5AC50", VA = "0x6B5BC50", Slot = "4")]
	public bool TryGetAttributeValue(string propertyName, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x6B58800", Offset = "0x6B57800", VA = "0x6B58800")]
	public void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x6B58730", Offset = "0x6B57730", VA = "0x6B58730")]
	public void RemoveAttribute(string attributeName)
	{
	}

	[Token(Token = "0x60026E6")]
	[Address(RVA = "0x6B5BD10", Offset = "0x6B5AD10", VA = "0x6B5BD10")]
	private void SetOrAddProperty(string propertyName, string propertyValue)
	{
	}

	[Token(Token = "0x60026E7")]
	internal abstract bool Accepts(UxmlAsset asset, out string errorMessage);

	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x6B5BF40", Offset = "0x6B5AF40", VA = "0x6B5BF40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
