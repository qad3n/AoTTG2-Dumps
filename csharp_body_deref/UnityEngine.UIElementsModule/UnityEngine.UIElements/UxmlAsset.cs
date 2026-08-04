// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlAsset
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
[Token(Token = "0x2000441")]
internal class UxmlAsset : IUxmlAttributes
{
	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_FullTypeName;

	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_Id;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private int m_OrderInDocument;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_ParentId;

	[Token(Token = "0x4000CAA")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	protected List<string> m_Properties;

	[Token(Token = "0x17000721")]
	public string fullTypeName
	{
		[Token(Token = "0x6001AF3")]
		[Address(RVA = "0x4F6B370", Offset = "0x4F6B370", VA = "0x4F6B370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000722")]
	public int id
	{
		[Token(Token = "0x6001AF4")]
		[Address(RVA = "0x4F6B380", Offset = "0x4F6B380", VA = "0x4F6B380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000723")]
	public int orderInDocument
	{
		[Token(Token = "0x6001AF5")]
		[Address(RVA = "0x4F6B390", Offset = "0x4F6B390", VA = "0x4F6B390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000724")]
	public int parentId
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x4F6B3A0", Offset = "0x4F6B3A0", VA = "0x4F6B3A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x4F6B3B0", Offset = "0x4F6B3B0", VA = "0x4F6B3B0", Slot = "4")]
	public bool TryGetAttributeValue(string propertyName, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x4F6B480", Offset = "0x4F6B480", VA = "0x4F6B480")]
	public void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x4F6B490", Offset = "0x4F6B490", VA = "0x4F6B490")]
	private void SetOrAddProperty(string propertyName, string propertyValue)
	{
	}
}
