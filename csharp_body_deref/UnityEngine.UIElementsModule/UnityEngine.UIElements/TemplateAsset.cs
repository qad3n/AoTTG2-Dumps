// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TemplateAsset
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20004E1")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
internal class TemplateAsset : VisualElementAsset
{
	[Serializable]
	[Token(Token = "0x20004E2")]
	public struct AttributeOverride
	{
		[Token(Token = "0x40010C8")]
		[FieldOffset(Offset = "0x0")]
		public string m_ElementName;

		[Token(Token = "0x40010C9")]
		[FieldOffset(Offset = "0x8")]
		public string[] m_NamesPath;

		[Token(Token = "0x40010CA")]
		[FieldOffset(Offset = "0x10")]
		public string m_AttributeName;

		[Token(Token = "0x40010CB")]
		[FieldOffset(Offset = "0x18")]
		public string m_Value;

		[Token(Token = "0x6002646")]
		[Address(RVA = "0x313C460", Offset = "0x313AA60", VA = "0x18313C460")]
		public bool NamesPathMatchesElementNamesPath(IList<string> elementNamesPath)
		{
			return default(bool);
		}
	}

	[Serializable]
	[Token(Token = "0x20004E3")]
	public struct UxmlSerializedDataOverride
	{
		[Token(Token = "0x40010CC")]
		[FieldOffset(Offset = "0x0")]
		public int m_ElementId;

		[Token(Token = "0x40010CD")]
		[FieldOffset(Offset = "0x8")]
		public List<int> m_ElementIdsPath;

		[Token(Token = "0x40010CE")]
		[FieldOffset(Offset = "0x10")]
		[SerializeReference]
		public UxmlSerializedData m_SerializedData;
	}

	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string UxmlInstanceTypeName;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private string m_TemplateAlias;

	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private List<AttributeOverride> m_AttributeOverrides;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private List<VisualTreeAsset.SlotUsageEntry> m_SlotUsages;

	[Token(Token = "0x170009DE")]
	public string templateAlias
	{
		[Token(Token = "0x6002642")]
		[Address(RVA = "0x2E8E8C0", Offset = "0x2E8CEC0", VA = "0x182E8E8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009DF")]
	public List<AttributeOverride> attributeOverrides
	{
		[Token(Token = "0x6002643")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal List<VisualTreeAsset.SlotUsageEntry> slotUsages
	{
		[Token(Token = "0x6002644")]
		[Address(RVA = "0x1CCD790", Offset = "0x1CCBD90", VA = "0x181CCD790")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}
}
