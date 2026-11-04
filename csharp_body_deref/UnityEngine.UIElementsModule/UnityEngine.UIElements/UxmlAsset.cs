// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAsset
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F3")]
	public int id
	{
		[Token(Token = "0x60026CD")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60026CE")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x170009F4")]
	public bool isRoot
	{
		[Token(Token = "0x60026CF")]
		[Address(RVA = "0x3155400", Offset = "0x3153A00", VA = "0x183155400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009F5")]
	public UxmlAsset parentAsset
	{
		[Token(Token = "0x60026D0")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F6")]
	internal VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x60026D1")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F7")]
	public int childCount
	{
		[Token(Token = "0x60026D2")]
		[Address(RVA = "0x31553C0", Offset = "0x31539C0", VA = "0x1831553C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170009F8")]
	public UxmlAsset this[int index]
	{
		[Token(Token = "0x60026D3")]
		[Address(RVA = "0x3155360", Offset = "0x3153960", VA = "0x183155360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F9")]
	public List<UxmlNamespaceDefinition> namespaceDefinitions
	{
		[Token(Token = "0x60026D4")]
		[Address(RVA = "0x31554C0", Offset = "0x3153AC0", VA = "0x1831554C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026CB")]
	[Address(RVA = "0xE55120", Offset = "0xE53720", VA = "0x180E55120")]
	public UxmlAsset(string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x60026D5")]
	[Address(RVA = "0x3154250", Offset = "0x3152850", VA = "0x183154250")]
	public void GetChildrenUxmlObjectAssets(List<UxmlObjectAsset> children)
	{
	}

	[Token(Token = "0x60026D6")]
	[Address(RVA = "0x3154390", Offset = "0x3152990", VA = "0x183154390")]
	public UxmlObjectAsset GetField(string fieldName)
	{
		return null;
	}

	[Token(Token = "0x60026D7")]
	[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
	internal void SetVisualTreeAssetWithOutNotify(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x60026D8")]
	[Address(RVA = "0x3155080", Offset = "0x3153680", VA = "0x183155080")]
	internal void SetVisualTreeAsset(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x60026D9")]
	[Address(RVA = "0x31541A0", Offset = "0x31527A0", VA = "0x1831541A0")]
	public void Add(UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DA")]
	[Address(RVA = "0x31545D0", Offset = "0x3152BD0", VA = "0x1831545D0")]
	public void Insert(int index, UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DB")]
	[Address(RVA = "0x3154510", Offset = "0x3152B10", VA = "0x183154510")]
	private void InsertInChildren(int index, UxmlAsset asset)
	{
	}

	[Token(Token = "0x60026DC")]
	[Address(RVA = "0x3154C80", Offset = "0x3153280", VA = "0x183154C80")]
	private void RemoveFromChildren(UxmlAsset child)
	{
	}

	[Token(Token = "0x60026DD")]
	[Address(RVA = "0x3154D10", Offset = "0x3153310", VA = "0x183154D10")]
	private void RemoveFromChildren(int index)
	{
	}

	[Token(Token = "0x60026DE")]
	[Address(RVA = "0x3154FC0", Offset = "0x31535C0", VA = "0x183154FC0")]
	private void SetParent(UxmlAsset parent)
	{
	}

	[Token(Token = "0x60026DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	private protected virtual void OnVisualTreeAssetChanged(VisualTreeAsset previousVta, VisualTreeAsset newVta)
	{
	}

	[Token(Token = "0x60026E0")]
	[Address(RVA = "0x31544B0", Offset = "0x3152AB0", VA = "0x1831544B0")]
	public int IndexOf(UxmlAsset asset)
	{
		return default(int);
	}

	[Token(Token = "0x60026E1")]
	[Address(RVA = "0x3154A10", Offset = "0x3153010", VA = "0x183154A10")]
	public bool IsAncestorOf(UxmlAsset other)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E2")]
	[Address(RVA = "0x1A1E5D0", Offset = "0x1A1CBD0", VA = "0x181A1E5D0", Slot = "6")]
	public virtual bool HasParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60026E3")]
	[Address(RVA = "0x3155270", Offset = "0x3153870", VA = "0x183155270", Slot = "4")]
	public bool TryGetAttributeValue(string propertyName, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60026E4")]
	[Address(RVA = "0x3154D70", Offset = "0x3153370", VA = "0x183154D70")]
	public void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60026E5")]
	[Address(RVA = "0x3154BB0", Offset = "0x31531B0", VA = "0x183154BB0")]
	public void RemoveAttribute(string attributeName)
	{
	}

	[Token(Token = "0x60026E6")]
	[Address(RVA = "0x3154D80", Offset = "0x3153380", VA = "0x183154D80")]
	private void SetOrAddProperty(string propertyName, string propertyValue)
	{
	}

	[Token(Token = "0x60026E7")]
	internal abstract bool Accepts(UxmlAsset asset, out string errorMessage);

	[Token(Token = "0x60026E8")]
	[Address(RVA = "0x3155200", Offset = "0x3153800", VA = "0x183155200", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
