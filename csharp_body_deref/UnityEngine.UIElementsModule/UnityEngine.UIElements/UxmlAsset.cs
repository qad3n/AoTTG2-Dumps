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
		[Address(RVA = "0x4C43A40", Offset = "0x4C43A40", VA = "0x4C43A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000722")]
	public int id
	{
		[Token(Token = "0x6001AF4")]
		[Address(RVA = "0x4C43A50", Offset = "0x4C43A50", VA = "0x4C43A50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000723")]
	public int orderInDocument
	{
		[Token(Token = "0x6001AF5")]
		[Address(RVA = "0x4C43A60", Offset = "0x4C43A60", VA = "0x4C43A60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000724")]
	public int parentId
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x4C43A70", Offset = "0x4C43A70", VA = "0x4C43A70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x4C43A80", Offset = "0x4C43A80", VA = "0x4C43A80", Slot = "4")]
	public bool TryGetAttributeValue(string propertyName, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x4C43B50", Offset = "0x4C43B50", VA = "0x4C43B50")]
	public void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x4C43B60", Offset = "0x4C43B60", VA = "0x4C43B60")]
	private void SetOrAddProperty(string propertyName, string propertyValue)
	{
	}
}
