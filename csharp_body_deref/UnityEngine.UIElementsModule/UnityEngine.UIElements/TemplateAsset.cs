// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TemplateAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200041A")]
internal class TemplateAsset : VisualElementAsset
{
	[Serializable]
	[Token(Token = "0x200041B")]
	public struct AttributeOverride
	{
		[Token(Token = "0x4000C7D")]
		[FieldOffset(Offset = "0x0")]
		public string m_ElementName;

		[Token(Token = "0x4000C7E")]
		[FieldOffset(Offset = "0x8")]
		public string m_AttributeName;

		[Token(Token = "0x4000C7F")]
		[FieldOffset(Offset = "0x10")]
		public string m_Value;
	}

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private string m_TemplateAlias;

	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private List<AttributeOverride> m_AttributeOverrides;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private List<VisualTreeAsset.SlotUsageEntry> m_SlotUsages;

	[Token(Token = "0x17000710")]
	public List<AttributeOverride> attributeOverrides
	{
		[Token(Token = "0x6001A7F")]
		[Address(RVA = "0x4F50160", Offset = "0x4F50160", VA = "0x4F50160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000711")]
	internal List<VisualTreeAsset.SlotUsageEntry> slotUsages
	{
		[Token(Token = "0x6001A80")]
		[Address(RVA = "0x4F68820", Offset = "0x4F68820", VA = "0x4F68820")]
		get
		{
			return null;
		}
	}
}
