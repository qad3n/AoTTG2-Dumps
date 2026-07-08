using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000449")]
public class VisualTreeAsset : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x200044A")]
	internal struct UsingEntry
	{
		[Token(Token = "0x4000CC4")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly IComparer<UsingEntry> comparer;

		[Token(Token = "0x4000CC5")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string alias;

		[Token(Token = "0x4000CC6")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public string path;

		[Token(Token = "0x4000CC7")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		public VisualTreeAsset asset;

		[Token(Token = "0x6001B40")]
		[Address(RVA = "0x4C4B090", Offset = "0x4C4B090", VA = "0x4C4B090")]
		public UsingEntry(string alias, string path)
		{
		}
	}

	[Token(Token = "0x200044B")]
	private class UsingEntryComparer : IComparer<UsingEntry>
	{
		[Token(Token = "0x6001B42")]
		[Address(RVA = "0x4C4B6E0", Offset = "0x4C4B6E0", VA = "0x4C4B6E0", Slot = "4")]
		public int Compare(UsingEntry x, UsingEntry y)
		{
			return default(int);
		}

		[Token(Token = "0x6001B43")]
		[Address(RVA = "0x4C4B6D0", Offset = "0x4C4B6D0", VA = "0x4C4B6D0")]
		public UsingEntryComparer()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200044C")]
	internal struct SlotDefinition
	{
		[Token(Token = "0x4000CC8")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string name;

		[Token(Token = "0x4000CC9")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public int insertionPointId;
	}

	[Serializable]
	[Token(Token = "0x200044D")]
	internal struct SlotUsageEntry
	{
		[Token(Token = "0x4000CCA")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string slotName;

		[Token(Token = "0x4000CCB")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public int assetId;
	}

	[Serializable]
	[Token(Token = "0x200044E")]
	internal struct UxmlObjectEntry
	{
		[Token(Token = "0x4000CCC")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		public int parentId;

		[Token(Token = "0x4000CCD")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		public List<UxmlObjectAsset> uxmlObjectAssets;

		[Token(Token = "0x6001B44")]
		[Address(RVA = "0x4C47810", Offset = "0x4C47810", VA = "0x4C47810")]
		public UxmlObjectEntry(int parentId, List<UxmlObjectAsset> uxmlObjectAssets)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200044F")]
	private struct AssetEntry
	{
		[Token(Token = "0x4000CCE")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		private string m_Path;

		[Token(Token = "0x4000CCF")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		private string m_TypeFullName;

		[Token(Token = "0x4000CD0")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private LazyLoadReference<Object> m_AssetReference;

		[Token(Token = "0x4000CD1")]
		[FieldOffset(Offset = "0x14")]
		[SerializeField]
		private int m_InstanceID;

		[Token(Token = "0x4000CD2")]
		[FieldOffset(Offset = "0x18")]
		private Type m_CachedType;

		[Token(Token = "0x17000739")]
		public Type type
		{
			[Token(Token = "0x6001B45")]
			[Address(RVA = "0x4C47AE0", Offset = "0x4C47AE0", VA = "0x4C47AE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700073A")]
		public string path
		{
			[Token(Token = "0x6001B46")]
			[Address(RVA = "0x4C4B700", Offset = "0x4C4B700", VA = "0x4C4B700")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700073B")]
		public Object asset
		{
			[Token(Token = "0x6001B47")]
			[Address(RVA = "0x4C480D0", Offset = "0x4C480D0", VA = "0x4C480D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x4C47CE0", Offset = "0x4C47CE0", VA = "0x4C47CE0")]
		public AssetEntry(string path, Type type, Object asset)
		{
		}
	}

	[Token(Token = "0x2000452")]
	[CompilerGenerated]
	private sealed class _003Cget_stylesheets_003Ed__23 : IEnumerable<StyleSheet>, IEnumerable, IEnumerator<StyleSheet>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CD5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CD6")]
		[FieldOffset(Offset = "0x18")]
		private StyleSheet _003C_003E2__current;

		[Token(Token = "0x4000CD7")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000CD8")]
		[FieldOffset(Offset = "0x28")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x4000CD9")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<StyleSheet> _003Csent_003E5__1;

		[Token(Token = "0x4000CDA")]
		[FieldOffset(Offset = "0x38")]
		private List<VisualElementAsset>.Enumerator _003C_003Es__2;

		[Token(Token = "0x4000CDB")]
		[FieldOffset(Offset = "0x50")]
		private VisualElementAsset _003Cvea_003E5__3;

		[Token(Token = "0x4000CDC")]
		[FieldOffset(Offset = "0x58")]
		private List<StyleSheet>.Enumerator _003C_003Es__4;

		[Token(Token = "0x4000CDD")]
		[FieldOffset(Offset = "0x70")]
		private StyleSheet _003Cstylesheet_003E5__5;

		[Token(Token = "0x4000CDE")]
		[FieldOffset(Offset = "0x78")]
		private List<string>.Enumerator _003C_003Es__6;

		[Token(Token = "0x4000CDF")]
		[FieldOffset(Offset = "0x90")]
		private string _003CstylesheetPath_003E5__7;

		[Token(Token = "0x4000CE0")]
		[FieldOffset(Offset = "0x98")]
		private StyleSheet _003Cstylesheet_003E5__8;

		[Token(Token = "0x1700073C")]
		private StyleSheet System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EUIElements_002EStyleSheet_003E_002ECurrent
		{
			[Token(Token = "0x6001B51")]
			[Address(RVA = "0x4C4C380", Offset = "0x4C4C380", VA = "0x4C4C380", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700073D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001B53")]
			[Address(RVA = "0x4C4C3D0", Offset = "0x4C4C3D0", VA = "0x4C4C3D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x4C472A0", Offset = "0x4C472A0", VA = "0x4C472A0")]
		[DebuggerHidden]
		public _003Cget_stylesheets_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001B4C")]
		[Address(RVA = "0x4C4B730", Offset = "0x4C4B730", VA = "0x4C4B730", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001B4D")]
		[Address(RVA = "0x4C4B8D0", Offset = "0x4C4B8D0", VA = "0x4C4B8D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x4C4C340", Offset = "0x4C4C340", VA = "0x4C4C340")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x4C4C2C0", Offset = "0x4C4C2C0", VA = "0x4C4C2C0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x4C4C300", Offset = "0x4C4C300", VA = "0x4C4C300")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x4C4C390", Offset = "0x4C4C390", VA = "0x4C4C390", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x4C4C3E0", Offset = "0x4C4C3E0", VA = "0x4C4C3E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<StyleSheet> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStyleSheet_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001B55")]
		[Address(RVA = "0x4C4C480", Offset = "0x4C4C480", VA = "0x4C4C480", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000453")]
	[CompilerGenerated]
	private sealed class _003Cget_templateDependencies_003Ed__19 : IEnumerable<VisualTreeAsset>, IEnumerable, IEnumerator<VisualTreeAsset>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CE1")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CE2")]
		[FieldOffset(Offset = "0x18")]
		private VisualTreeAsset _003C_003E2__current;

		[Token(Token = "0x4000CE3")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000CE4")]
		[FieldOffset(Offset = "0x28")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x4000CE5")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<VisualTreeAsset> _003Csent_003E5__1;

		[Token(Token = "0x4000CE6")]
		[FieldOffset(Offset = "0x38")]
		private List<UsingEntry>.Enumerator _003C_003Es__2;

		[Token(Token = "0x4000CE7")]
		[FieldOffset(Offset = "0x60")]
		private UsingEntry _003Centry_003E5__3;

		[Token(Token = "0x4000CE8")]
		[FieldOffset(Offset = "0x78")]
		private VisualTreeAsset _003Cvta_003E5__4;

		[Token(Token = "0x1700073E")]
		private VisualTreeAsset System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EUIElements_002EVisualTreeAsset_003E_002ECurrent
		{
			[Token(Token = "0x6001B5A")]
			[Address(RVA = "0x4C4CBF0", Offset = "0x4C4CBF0", VA = "0x4C4CBF0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700073F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001B5C")]
			[Address(RVA = "0x4C4CC40", Offset = "0x4C4CC40", VA = "0x4C4CC40", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B56")]
		[Address(RVA = "0x4C471F0", Offset = "0x4C471F0", VA = "0x4C471F0")]
		[DebuggerHidden]
		public _003Cget_templateDependencies_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001B57")]
		[Address(RVA = "0x4C4C490", Offset = "0x4C4C490", VA = "0x4C4C490", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001B58")]
		[Address(RVA = "0x4C4C4F0", Offset = "0x4C4C4F0", VA = "0x4C4C4F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B59")]
		[Address(RVA = "0x4C4CBB0", Offset = "0x4C4CBB0", VA = "0x4C4CBB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001B5B")]
		[Address(RVA = "0x4C4CC00", Offset = "0x4C4CC00", VA = "0x4C4CC00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001B5D")]
		[Address(RVA = "0x4C4CC50", Offset = "0x4C4CC50", VA = "0x4C4CC50", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<VisualTreeAsset> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EVisualTreeAsset_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001B5E")]
		[Address(RVA = "0x4C4CCF0", Offset = "0x4C4CCF0", VA = "0x4C4CCF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x0")]
	internal static string LinkedVEAInTemplatePropertyName;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_ImportedWithErrors;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_ImportedWithWarnings;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, VisualElement> s_TemporarySlotInsertionPoints;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<UsingEntry> m_Usings;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal StyleSheet inlineSheet;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private List<VisualElementAsset> m_VisualElementAssets;

	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private List<TemplateAsset> m_TemplateAssets;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private List<UxmlObjectEntry> m_UxmlObjectEntries;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private List<int> m_UxmlObjectIds;

	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private List<AssetEntry> m_AssetEntries;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<SlotDefinition> m_Slots;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int m_ContentContainerId;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private int m_ContentHash;

	[Token(Token = "0x1700072E")]
	public bool importedWithErrors
	{
		[Token(Token = "0x6001B13")]
		[Address(RVA = "0x4C470C0", Offset = "0x4C470C0", VA = "0x4C470C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B14")]
		[Address(RVA = "0x4C470D0", Offset = "0x4C470D0", VA = "0x4C470D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700072F")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x4C470E0", Offset = "0x4C470E0", VA = "0x4C470E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x4C470F0", Offset = "0x4C470F0", VA = "0x4C470F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000730")]
	public IEnumerable<VisualTreeAsset> templateDependencies
	{
		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x4C47170", Offset = "0x4C47170", VA = "0x4C47170")]
		[IteratorStateMachine(typeof(_003Cget_templateDependencies_003Ed__19))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000731")]
	public IEnumerable<StyleSheet> stylesheets
	{
		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x4C47220", Offset = "0x4C47220", VA = "0x4C47220")]
		[IteratorStateMachine(typeof(_003Cget_stylesheets_003Ed__23))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000732")]
	internal List<VisualElementAsset> visualElementAssets
	{
		[Token(Token = "0x6001B1A")]
		[Address(RVA = "0x4C472D0", Offset = "0x4C472D0", VA = "0x4C472D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B1B")]
		[Address(RVA = "0x4C472E0", Offset = "0x4C472E0", VA = "0x4C472E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000733")]
	internal List<TemplateAsset> templateAssets
	{
		[Token(Token = "0x6001B1C")]
		[Address(RVA = "0x4C472F0", Offset = "0x4C472F0", VA = "0x4C472F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x4C47300", Offset = "0x4C47300", VA = "0x4C47300")]
		set
		{
		}
	}

	[Token(Token = "0x17000734")]
	internal List<UxmlObjectEntry> uxmlObjectEntries
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x4C47310", Offset = "0x4C47310", VA = "0x4C47310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000735")]
	internal List<int> uxmlObjectIds
	{
		[Token(Token = "0x6001B1F")]
		[Address(RVA = "0x4C47320", Offset = "0x4C47320", VA = "0x4C47320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000736")]
	internal List<SlotDefinition> slots
	{
		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x4C486A0", Offset = "0x4C486A0", VA = "0x4C486A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B29")]
		[Address(RVA = "0x4C486B0", Offset = "0x4C486B0", VA = "0x4C486B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000737")]
	internal int contentContainerId
	{
		[Token(Token = "0x6001B2A")]
		[Address(RVA = "0x4C486C0", Offset = "0x4C486C0", VA = "0x4C486C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B2B")]
		[Address(RVA = "0x4C486D0", Offset = "0x4C486D0", VA = "0x4C486D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000738")]
	public int contentHash
	{
		[Token(Token = "0x6001B3B")]
		[Address(RVA = "0x4C4B570", Offset = "0x4C4B570", VA = "0x4C4B570")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B3C")]
		[Address(RVA = "0x4C4B580", Offset = "0x4C4B580", VA = "0x4C4B580")]
		set
		{
		}
	}

	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x4C47100", Offset = "0x4C47100", VA = "0x4C47100")]
	internal int GetNextChildSerialNumber()
	{
		return default(int);
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x4C47330", Offset = "0x4C47330", VA = "0x4C47330")]
	internal void RegisterUxmlObject(UxmlObjectAsset uxmlObjectAsset)
	{
	}

	[Token(Token = "0x6001B21")]
	internal List<T> GetUxmlObjects<T>(IUxmlAttributes asset, CreationContext cc) where T : new()
	{
		return null;
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x4C47830", Offset = "0x4C47830", VA = "0x4C47830")]
	internal bool AssetEntryExists(string path, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x4C47B80", Offset = "0x4C47B80", VA = "0x4C47B80")]
	internal void RegisterAssetEntry(string path, Type type, Object asset)
	{
	}

	[Token(Token = "0x6001B24")]
	internal T GetAsset<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x4C47DA0", Offset = "0x4C47DA0", VA = "0x4C47DA0")]
	internal Object GetAsset(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x4C476A0", Offset = "0x4C476A0", VA = "0x4C476A0")]
	internal UxmlObjectEntry GetUxmlObjectEntry(int id)
	{
		return default(UxmlObjectEntry);
	}

	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x4C48130", Offset = "0x4C48130", VA = "0x4C48130")]
	internal IBaseUxmlObjectFactory GetUxmlObjectFactory(UxmlObjectAsset uxmlObjectAsset)
	{
		return null;
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x4C486E0", Offset = "0x4C486E0", VA = "0x4C486E0")]
	public TemplateContainer Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x4C49130", Offset = "0x4C49130", VA = "0x4C49130")]
	public TemplateContainer Instantiate(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x4C49170", Offset = "0x4C49170", VA = "0x4C49170")]
	public TemplateContainer CloneTree()
	{
		return null;
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x4C49180", Offset = "0x4C49180", VA = "0x4C49180")]
	public TemplateContainer CloneTree(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x4C491C0", Offset = "0x4C491C0", VA = "0x4C491C0")]
	public void CloneTree(VisualElement target)
	{
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x4C491E0", Offset = "0x4C491E0", VA = "0x4C491E0")]
	public void CloneTree(VisualElement target, out int firstElementIndex, out int elementAddedCount)
	{
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x4C48870", Offset = "0x4C48870", VA = "0x4C48870")]
	internal void CloneTree(VisualElement target, Dictionary<string, VisualElement> slotInsertionPoints, List<CreationContext.AttributeOverrideRange> attributeOverrides)
	{
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x4C49970", Offset = "0x4C49970", VA = "0x4C49970")]
	private VisualElement CloneSetupRecursively(VisualElementAsset root, Dictionary<int, List<VisualElementAsset>> idToChildren, CreationContext context)
	{
		return null;
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x4C4AED0", Offset = "0x4C4AED0", VA = "0x4C4AED0")]
	private static int CompareForOrder(VisualElementAsset a, VisualElementAsset b)
	{
		return default(int);
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x4C4AE10", Offset = "0x4C4AE10", VA = "0x4C4AE10")]
	internal bool TryGetSlotInsertionPoint(int insertionPointId, out string slotName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x4C4AF00", Offset = "0x4C4AF00", VA = "0x4C4AF00")]
	internal bool TryGetUsingEntry(string templateName, out UsingEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x4C4B0D0", Offset = "0x4C4B0D0", VA = "0x4C4B0D0")]
	internal VisualTreeAsset ResolveTemplate(string templateName)
	{
		return null;
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x4C4A700", Offset = "0x4C4A700", VA = "0x4C4A700")]
	internal static VisualElement Create(VisualElementAsset asset, CreationContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x4C493C0", Offset = "0x4C493C0", VA = "0x4C493C0")]
	private static void AssignClassListFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x4C49430", Offset = "0x4C49430", VA = "0x4C49430")]
	private static void AssignStyleSheetFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x4C4B590", Offset = "0x4C4B590", VA = "0x4C4B590")]
	public VisualTreeAsset()
	{
	}
}
