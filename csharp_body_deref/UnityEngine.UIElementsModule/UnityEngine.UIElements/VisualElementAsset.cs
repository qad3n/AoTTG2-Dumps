using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000447")]
internal class VisualElementAsset : UxmlAsset, ISerializationCallbackReceiver
{
	[Token(Token = "0x4000CAD")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000CAE")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int m_RuleIndex;

	[Token(Token = "0x4000CAF")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private string m_Text;

	[Token(Token = "0x4000CB0")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private PickingMode m_PickingMode;

	[Token(Token = "0x4000CB1")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private string[] m_Classes;

	[Token(Token = "0x4000CB2")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<string> m_StylesheetPaths;

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private List<StyleSheet> m_Stylesheets;

	[Token(Token = "0x17000727")]
	public int ruleIndex
	{
		[Token(Token = "0x6001B05")]
		[Address(RVA = "0x4C44C80", Offset = "0x4C44C80", VA = "0x4C44C80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000728")]
	public string[] classes
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x4C44C90", Offset = "0x4C44C90", VA = "0x4C44C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000729")]
	public List<string> stylesheetPaths
	{
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x4C44CA0", Offset = "0x4C44CA0", VA = "0x4C44CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072A")]
	public bool hasStylesheetPaths
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x4C44D20", Offset = "0x4C44D20", VA = "0x4C44D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700072B")]
	public List<StyleSheet> stylesheets
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x4C44D30", Offset = "0x4C44D30", VA = "0x4C44D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072C")]
	public bool hasStylesheets
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x4C44DB0", Offset = "0x4C44DB0", VA = "0x4C44DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x4C44DC0", Offset = "0x4C44DC0", VA = "0x4C44DC0", Slot = "5")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x4C44DD0", Offset = "0x4C44DD0", VA = "0x4C44DD0", Slot = "6")]
	public void OnAfterDeserialize()
	{
	}
}
