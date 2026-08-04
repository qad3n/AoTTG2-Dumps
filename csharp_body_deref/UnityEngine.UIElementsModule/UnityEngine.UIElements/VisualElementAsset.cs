// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementAsset
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
		[Address(RVA = "0x4F6C5B0", Offset = "0x4F6C5B0", VA = "0x4F6C5B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000728")]
	public string[] classes
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x4F6C5C0", Offset = "0x4F6C5C0", VA = "0x4F6C5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000729")]
	public List<string> stylesheetPaths
	{
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x4F6C5D0", Offset = "0x4F6C5D0", VA = "0x4F6C5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072A")]
	public bool hasStylesheetPaths
	{
		[Token(Token = "0x6001B08")]
		[Address(RVA = "0x4F6C650", Offset = "0x4F6C650", VA = "0x4F6C650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700072B")]
	public List<StyleSheet> stylesheets
	{
		[Token(Token = "0x6001B09")]
		[Address(RVA = "0x4F6C660", Offset = "0x4F6C660", VA = "0x4F6C660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072C")]
	public bool hasStylesheets
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x4F6C6E0", Offset = "0x4F6C6E0", VA = "0x4F6C6E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x4F6C6F0", Offset = "0x4F6C6F0", VA = "0x4F6C6F0", Slot = "5")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x4F6C700", Offset = "0x4F6C700", VA = "0x4F6C700", Slot = "6")]
	public void OnAfterDeserialize()
	{
	}
}
