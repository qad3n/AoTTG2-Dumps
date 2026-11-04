// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeAsset
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Pool;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200051B")]
[HelpURL("UIE-VisualTree-landing")]
public class VisualTreeAsset : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x200051C")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal struct UsingEntry
	{
		[Token(Token = "0x4001130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal static readonly IComparer<UsingEntry> comparer;

		[Token(Token = "0x4001131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string alias;

		[Token(Token = "0x4001132")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		public string path;

		[Token(Token = "0x4001133")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		public VisualTreeAsset asset;

		[Token(Token = "0x6002758")]
		[Address(RVA = "0x3160A00", Offset = "0x315F000", VA = "0x183160A00")]
		public UsingEntry(string alias, string path)
		{
		}

		[Token(Token = "0x6002759")]
		[Address(RVA = "0x3160A50", Offset = "0x315F050", VA = "0x183160A50")]
		public UsingEntry(string alias, VisualTreeAsset asset)
		{
		}
	}

	[Token(Token = "0x200051D")]
	private class UsingEntryComparer : IComparer<UsingEntry>
	{
		[Token(Token = "0x600275B")]
		[Address(RVA = "0x3160960", Offset = "0x315EF60", VA = "0x183160960", Slot = "4")]
		public int Compare(UsingEntry x, UsingEntry y)
		{
			return default(int);
		}

		[Token(Token = "0x600275C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UsingEntryComparer()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200051E")]
	internal struct SlotDefinition
	{
		[Token(Token = "0x4001134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string name;

		[Token(Token = "0x4001135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		public int insertionPointId;
	}

	[Serializable]
	[Token(Token = "0x200051F")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal struct SlotUsageEntry
	{
		[Token(Token = "0x4001136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		public string slotName;

		[Token(Token = "0x4001137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		public int assetId;
	}

	[Serializable]
	[Token(Token = "0x2000520")]
	private struct AssetEntry
	{
		[Token(Token = "0x4001138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private string m_Path;

		[Token(Token = "0x4001139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private string m_TypeFullName;

		[Token(Token = "0x400113A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		private LazyLoadReference<Object> m_AssetReference;

		[Token(Token = "0x400113B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		[SerializeField]
		private int m_InstanceID;

		[Token(Token = "0x400113C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Type m_CachedType;

		[Token(Token = "0x17000A13")]
		public Type type
		{
			[Token(Token = "0x600275D")]
			[Address(RVA = "0x315ABB0", Offset = "0x31591B0", VA = "0x18315ABB0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A14")]
		public string path
		{
			[Token(Token = "0x600275E")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A15")]
		public Object asset
		{
			[Token(Token = "0x600275F")]
			[Address(RVA = "0x315AB40", Offset = "0x3159140", VA = "0x18315AB40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002760")]
		[Address(RVA = "0x315AA80", Offset = "0x3159080", VA = "0x18315AA80")]
		public AssetEntry(string path, Type type, Object asset)
		{
		}
	}

	[Token(Token = "0x2000523")]
	[CompilerGenerated]
	private sealed class _003CDepthFirstTraversal_003Ed__88 : IEnumerable<UxmlAsset>, IEnumerable, IEnumerator<UxmlAsset>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400113F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private UxmlAsset _003C_003E2__current;

		[Token(Token = "0x4001141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UxmlAsset asset;

		[Token(Token = "0x4001143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public UxmlAsset _003C_003E3__asset;

		[Token(Token = "0x4001144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x4001145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__1;

		[Token(Token = "0x4001146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private IEnumerator<UxmlAsset> _003C_003Es__2;

		[Token(Token = "0x4001147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UxmlAsset _003Cchild_003E5__3;

		[Token(Token = "0x17000A16")]
		private UxmlAsset System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EUIElements_002EUxmlAsset_003E_002ECurrent
		{
			[Token(Token = "0x6002767")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A17")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002769")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002763")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CDepthFirstTraversal_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002764")]
		[Address(RVA = "0x315E8B0", Offset = "0x315CEB0", VA = "0x18315E8B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002765")]
		[Address(RVA = "0x315E4D0", Offset = "0x315CAD0", VA = "0x18315E4D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002766")]
		[Address(RVA = "0x315E940", Offset = "0x315CF40", VA = "0x18315E940")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002768")]
		[Address(RVA = "0x315E870", Offset = "0x315CE70", VA = "0x18315E870", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600276A")]
		[Address(RVA = "0x315E7C0", Offset = "0x315CDC0", VA = "0x18315E7C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<UxmlAsset> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EUxmlAsset_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600276B")]
		[Address(RVA = "0x315E7C0", Offset = "0x315CDC0", VA = "0x18315E7C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000524")]
	[CompilerGenerated]
	private sealed class _003CDepthFirstTraversalOfType_003Ed__87<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001148")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x400114A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400114B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x400114C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerable<UxmlAsset> _003Celements_003E5__1;

		[Token(Token = "0x400114D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerator<UxmlAsset> _003C_003Es__2;

		[Token(Token = "0x400114E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private UxmlAsset _003Celement_003E5__3;

		[Token(Token = "0x400114F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003CtElement_003E5__4;

		[Token(Token = "0x17000A18")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6002770")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000A19")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002772")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600276C")]
		[DebuggerHidden]
		public _003CDepthFirstTraversalOfType_003Ed__87(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600276D")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600276E")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600276F")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002771")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002773")]
		[DebuggerHidden]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002774")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000525")]
	[CompilerGenerated]
	private sealed class _003Cget_stylesheets_003Ed__40 : IEnumerable<StyleSheet>, IEnumerable, IEnumerator<StyleSheet>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private StyleSheet _003C_003E2__current;

		[Token(Token = "0x4001152")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001153")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x4001154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private PooledObject<HashSet<StyleSheet>> _003CsetHandle_003E5__1;

		[Token(Token = "0x4001155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private HashSet<StyleSheet> _003Csent_003E5__2;

		[Token(Token = "0x4001156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private PooledObject<List<UxmlAsset>> _003C__003E5__3;

		[Token(Token = "0x4001157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private List<UxmlAsset> _003Clist_003E5__4;

		[Token(Token = "0x4001158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private List<UxmlAsset>.Enumerator _003C_003Es__5;

		[Token(Token = "0x4001159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private UxmlAsset _003Casset_003E5__6;

		[Token(Token = "0x400115A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private VisualElementAsset _003Cvea_003E5__7;

		[Token(Token = "0x400115B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<StyleSheet>.Enumerator _003C_003Es__8;

		[Token(Token = "0x400115C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		private StyleSheet _003Cstylesheet_003E5__9;

		[Token(Token = "0x400115D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		private List<string>.Enumerator _003C_003Es__10;

		[Token(Token = "0x400115E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		private string _003CstylesheetPath_003E5__11;

		[Token(Token = "0x400115F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
		private StyleSheet _003Cstylesheet_003E5__12;

		[Token(Token = "0x17000A1A")]
		private StyleSheet System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EUIElements_002EStyleSheet_003E_002ECurrent
		{
			[Token(Token = "0x600277D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A1B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600277F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002775")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_stylesheets_003Ed__40(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002776")]
		[Address(RVA = "0x315FC50", Offset = "0x315E250", VA = "0x18315FC50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002777")]
		[Address(RVA = "0x315F030", Offset = "0x315D630", VA = "0x18315F030", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002778")]
		[Address(RVA = "0x315FF10", Offset = "0x315E510", VA = "0x18315FF10")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002779")]
		[Address(RVA = "0x315FF60", Offset = "0x315E560", VA = "0x18315FF60")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x600277A")]
		[Address(RVA = "0x315FFB0", Offset = "0x315E5B0", VA = "0x18315FFB0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x600277B")]
		[Address(RVA = "0x3160000", Offset = "0x315E600", VA = "0x183160000")]
		private void _003C_003Em__Finally4()
		{
		}

		[Token(Token = "0x600277C")]
		[Address(RVA = "0x3160050", Offset = "0x315E650", VA = "0x183160050")]
		private void _003C_003Em__Finally5()
		{
		}

		[Token(Token = "0x600277E")]
		[Address(RVA = "0x315FC10", Offset = "0x315E210", VA = "0x18315FC10", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002780")]
		[Address(RVA = "0x315FB70", Offset = "0x315E170", VA = "0x18315FB70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<StyleSheet> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStyleSheet_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002781")]
		[Address(RVA = "0x315FB70", Offset = "0x315E170", VA = "0x18315FB70", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000526")]
	[CompilerGenerated]
	private sealed class _003Cget_templateDependencies_003Ed__30 : IEnumerable<VisualTreeAsset>, IEnumerable, IEnumerator<VisualTreeAsset>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private VisualTreeAsset _003C_003E2__current;

		[Token(Token = "0x4001162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public VisualTreeAsset _003C_003E4__this;

		[Token(Token = "0x4001164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private HashSet<VisualTreeAsset> _003Csent_003E5__1;

		[Token(Token = "0x4001165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private List<UsingEntry>.Enumerator _003C_003Es__2;

		[Token(Token = "0x4001166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UsingEntry _003Centry_003E5__3;

		[Token(Token = "0x4001167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private VisualTreeAsset _003Cvta_003E5__4;

		[Token(Token = "0x17000A1C")]
		private VisualTreeAsset System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EUIElements_002EVisualTreeAsset_003E_002ECurrent
		{
			[Token(Token = "0x6002786")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A1D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002788")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002782")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_templateDependencies_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002783")]
		[Address(RVA = "0x31607A0", Offset = "0x315EDA0", VA = "0x1831607A0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002784")]
		[Address(RVA = "0x31600A0", Offset = "0x315E6A0", VA = "0x1831600A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002785")]
		[Address(RVA = "0x3160830", Offset = "0x315EE30", VA = "0x183160830")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002787")]
		[Address(RVA = "0x3160760", Offset = "0x315ED60", VA = "0x183160760", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002789")]
		[Address(RVA = "0x31606C0", Offset = "0x315ECC0", VA = "0x1831606C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<VisualTreeAsset> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EVisualTreeAsset_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600278A")]
		[Address(RVA = "0x31606C0", Offset = "0x315ECC0", VA = "0x1831606C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4001121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static string NoRegisteredFactoryErrorMessage;

	[Token(Token = "0x4001122")]
	internal const string TemplateAliasExistsError = "VisualTreeAsset: could not register a template alias for asset `{0}`, alias is already defined for asset '{1}'";

	[Token(Token = "0x4001123")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_ImportedWithErrors;

	[Token(Token = "0x4001124")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_HasEditorElements;

	[Token(Token = "0x4001125")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A")]
	[SerializeField]
	private bool m_HasUpdatedUrls;

	[Token(Token = "0x4001126")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B")]
	[SerializeField]
	private bool m_ImportedWithWarnings;

	[Token(Token = "0x4001127")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, VisualElement> s_TemporarySlotInsertionPoints;

	[Token(Token = "0x4001128")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<int> s_VeaIdsPath;

	[Token(Token = "0x4001129")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<UsingEntry> m_Usings;

	[Token(Token = "0x400112A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[SerializeField]
	internal StyleSheet inlineSheet;

	[Token(Token = "0x400112B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeReference]
	private VisualElementAsset m_VisualTree;

	[Token(Token = "0x400112C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	private List<AssetEntry> m_AssetEntries;

	[Token(Token = "0x400112D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	private List<SlotDefinition> m_Slots;

	[Token(Token = "0x400112E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	private int m_ContentContainerId;

	[Token(Token = "0x400112F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private int m_ContentHash;

	[Token(Token = "0x17000A07")]
	public bool importedWithErrors
	{
		[Token(Token = "0x6002714")]
		[Address(RVA = "0x2E85230", Offset = "0x2E83830", VA = "0x182E85230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002715")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A08")]
	internal bool hasEditorElements
	{
		[Token(Token = "0x6002716")]
		[Address(RVA = "0x2E85210", Offset = "0x2E83810", VA = "0x182E85210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002717")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		set
		{
		}
	}

	[Token(Token = "0x17000A09")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool importerWithUpdatedUrls
	{
		[Token(Token = "0x6002718")]
		[Address(RVA = "0x2E85220", Offset = "0x2E83820", VA = "0x182E85220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002719")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000A0A")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x600271A")]
		[Address(RVA = "0x2E926D0", Offset = "0x2E90CD0", VA = "0x182E926D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600271B")]
		[Address(RVA = "0x2DD7CD0", Offset = "0x2DD62D0", VA = "0x182DD7CD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A0B")]
	internal List<UsingEntry> usings
	{
		[Token(Token = "0x600271D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A0C")]
	public IEnumerable<VisualTreeAsset> templateDependencies
	{
		[Token(Token = "0x600271E")]
		[Address(RVA = "0x316FF10", Offset = "0x316E510", VA = "0x18316FF10")]
		[IteratorStateMachine(typeof(_003Cget_templateDependencies_003Ed__30))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A0D")]
	internal VisualElementAsset visualTreeNoAlloc
	{
		[Token(Token = "0x6002720")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A0E")]
	internal VisualElementAsset visualTree
	{
		[Token(Token = "0x6002721")]
		[Address(RVA = "0x316FF90", Offset = "0x316E590", VA = "0x18316FF90")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A0F")]
	public IEnumerable<StyleSheet> stylesheets
	{
		[Token(Token = "0x6002723")]
		[Address(RVA = "0x316FE90", Offset = "0x316E490", VA = "0x18316FE90")]
		[IteratorStateMachine(typeof(_003Cget_stylesheets_003Ed__40))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A10")]
	internal List<SlotDefinition> slots
	{
		[Token(Token = "0x6002730")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A11")]
	internal int contentContainerId
	{
		[Token(Token = "0x6002731")]
		[Address(RVA = "0x2E926C0", Offset = "0x2E90CC0", VA = "0x182E926C0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002732")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A12")]
	public int contentHash
	{
		[Token(Token = "0x6002748")]
		[Address(RVA = "0x2E8A620", Offset = "0x2E88C20", VA = "0x182E8A620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002749")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		set
		{
		}
	}

	[Token(Token = "0x600271C")]
	[Address(RVA = "0x316D4A0", Offset = "0x316BAA0", VA = "0x18316D4A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GetNextChildSerialNumber()
	{
		return default(int);
	}

	[Token(Token = "0x600271F")]
	[Address(RVA = "0x316D5C0", Offset = "0x316BBC0", VA = "0x18316D5C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleSheet GetOrCreateInlineStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x6002722")]
	[Address(RVA = "0x316E450", Offset = "0x316CA50", VA = "0x18316E450")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetRootAsset(VisualElementAsset root)
	{
	}

	[Token(Token = "0x6002724")]
	[Address(RVA = "0x316ADD0", Offset = "0x31693D0", VA = "0x18316ADD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal UxmlObjectAsset AddUxmlObject(UxmlAsset parent, string fieldUxmlName, string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
		return null;
	}

	[Token(Token = "0x6002725")]
	[Address(RVA = "0x316D510", Offset = "0x316BB10", VA = "0x18316D510")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GetNextUxmlAssetId(int parentId)
	{
		return default(int);
	}

	[Token(Token = "0x6002726")]
	[Address(RVA = "0x316B550", Offset = "0x3169B50", VA = "0x18316B550")]
	private void Awake__Internal()
	{
	}

	[Token(Token = "0x6002727")]
	[Address(RVA = "0x316E4E0", Offset = "0x316CAE0", VA = "0x18316E4E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetupReferences()
	{
	}

	[Token(Token = "0x6002728")]
	internal List<T> GetUxmlObjects<T>(IUxmlAttributes asset, CreationContext cc) where T : new()
	{
		return null;
	}

	[Token(Token = "0x6002729")]
	[Address(RVA = "0x316AF90", Offset = "0x3169590", VA = "0x18316AF90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool AssetEntryExists(string path, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600272A")]
	[Address(RVA = "0x316DED0", Offset = "0x316C4D0", VA = "0x18316DED0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterAssetEntry(string path, Type type, Object asset)
	{
	}

	[Token(Token = "0x600272B")]
	[Address(RVA = "0x316EE10", Offset = "0x316D410", VA = "0x18316EE10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void TransferAssetEntries(VisualTreeAsset otherVta)
	{
	}

	[Token(Token = "0x600272C")]
	internal T GetAsset<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x600272D")]
	[Address(RVA = "0x316D290", Offset = "0x316B890", VA = "0x18316D290")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Object GetAsset(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x600272E")]
	[Address(RVA = "0x316D100", Offset = "0x316B700", VA = "0x18316D100")]
	internal Type GetAssetType(string path)
	{
		return null;
	}

	[Token(Token = "0x600272F")]
	[Address(RVA = "0x316D660", Offset = "0x316BC60", VA = "0x18316D660")]
	internal IBaseUxmlObjectFactory GetUxmlObjectFactory(UxmlObjectAsset uxmlObjectAsset)
	{
		return null;
	}

	[Token(Token = "0x6002733")]
	[Address(RVA = "0x316DC80", Offset = "0x316C280", VA = "0x18316DC80")]
	public TemplateContainer Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6002734")]
	[Address(RVA = "0x316C330", Offset = "0x316A930", VA = "0x18316C330")]
	public TemplateContainer Instantiate(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6002735")]
	[Address(RVA = "0x316C630", Offset = "0x316AC30", VA = "0x18316C630")]
	public TemplateContainer CloneTree()
	{
		return null;
	}

	[Token(Token = "0x6002736")]
	[Address(RVA = "0x316C330", Offset = "0x316A930", VA = "0x18316C330")]
	public TemplateContainer CloneTree(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6002737")]
	[Address(RVA = "0x316C300", Offset = "0x316A900", VA = "0x18316C300")]
	public void CloneTree(VisualElement target)
	{
	}

	[Token(Token = "0x6002738")]
	[Address(RVA = "0x316C380", Offset = "0x316A980", VA = "0x18316C380")]
	public void CloneTree(VisualElement target, out int firstElementIndex, out int elementAddedCount)
	{
	}

	[Token(Token = "0x6002739")]
	[Address(RVA = "0x316BF60", Offset = "0x316A560", VA = "0x18316BF60")]
	internal void CloneTree(VisualElement target, CreationContext cc)
	{
	}

	[Token(Token = "0x600273A")]
	[Address(RVA = "0x316B560", Offset = "0x3169B60", VA = "0x18316B560")]
	private VisualElement CloneSetupRecursively(VisualElementAsset asset, CreationContext context)
	{
		return null;
	}

	[Token(Token = "0x600273B")]
	[Address(RVA = "0x316EEA0", Offset = "0x316D4A0", VA = "0x18316EEA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryGetSlotInsertionPoint(int insertionPointId, out string slotName)
	{
		return default(bool);
	}

	[Token(Token = "0x600273C")]
	[Address(RVA = "0x316EF70", Offset = "0x316D570", VA = "0x18316EF70")]
	internal bool TryGetUsingEntry(string templateName, out UsingEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x600273D")]
	[Address(RVA = "0x316E150", Offset = "0x316C750", VA = "0x18316E150")]
	private void RemoveUsingEntry(UsingEntry entry)
	{
	}

	[Token(Token = "0x600273E")]
	[Address(RVA = "0x316E2E0", Offset = "0x316C8E0", VA = "0x18316E2E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualTreeAsset ResolveTemplate(string templateName)
	{
		return null;
	}

	[Token(Token = "0x600273F")]
	[Address(RVA = "0x316ECC0", Offset = "0x316D2C0", VA = "0x18316ECC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TemplateExists(string templateName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002740")]
	[Address(RVA = "0x316E0D0", Offset = "0x316C6D0", VA = "0x18316E0D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterTemplate(string templateName, string path)
	{
	}

	[Token(Token = "0x6002741")]
	[Address(RVA = "0x316E050", Offset = "0x316C650", VA = "0x18316E050")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterTemplate(string templateName, VisualTreeAsset asset)
	{
	}

	[Token(Token = "0x6002742")]
	[Address(RVA = "0x316F120", Offset = "0x316D720", VA = "0x18316F120")]
	internal bool TryRegisterTemplate(string templateName, VisualTreeAsset asset)
	{
		return default(bool);
	}

	[Token(Token = "0x6002743")]
	[Address(RVA = "0x316F4E0", Offset = "0x316DAE0", VA = "0x18316F4E0")]
	internal bool TryUnregisterTemplate(string templateName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002744")]
	[Address(RVA = "0x316DB90", Offset = "0x316C190", VA = "0x18316DB90")]
	private void InsertUsingEntry(UsingEntry entry)
	{
	}

	[Token(Token = "0x6002745")]
	[Address(RVA = "0x316C640", Offset = "0x316AC40", VA = "0x18316C640")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static VisualElement Create(VisualElementAsset asset, CreationContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6002746")]
	[Address(RVA = "0x316B140", Offset = "0x3169740", VA = "0x18316B140")]
	private static void AssignClassListFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x6002747")]
	[Address(RVA = "0x316B1C0", Offset = "0x31697C0", VA = "0x18316B1C0")]
	private static void AssignStyleSheetFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x600274A")]
	[Address(RVA = "0x316CF10", Offset = "0x316B510", VA = "0x18316CF10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal IEnumerable<UxmlAsset> DepthFirstTraversal()
	{
		return null;
	}

	[Token(Token = "0x600274B")]
	[IteratorStateMachine(typeof(_003CDepthFirstTraversalOfType_003Ed__87<>))]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal IEnumerable<T> DepthFirstTraversalOfType<T>()
	{
		return null;
	}

	[Token(Token = "0x600274C")]
	[Address(RVA = "0x316CF70", Offset = "0x316B570", VA = "0x18316CF70")]
	[IteratorStateMachine(typeof(_003CDepthFirstTraversal_003Ed__88))]
	internal IEnumerable<UxmlAsset> DepthFirstTraversal(UxmlAsset asset)
	{
		return null;
	}

	[Token(Token = "0x600274D")]
	[Address(RVA = "0x316CD70", Offset = "0x316B370", VA = "0x18316CD70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int DepthFirstTraversalIndexOf(UxmlAsset uxmlAsset)
	{
		return default(int);
	}

	[Token(Token = "0x600274E")]
	[Address(RVA = "0x316D000", Offset = "0x316B600", VA = "0x18316D000")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GenerateNewId(VisualElementAsset vea)
	{
		return default(int);
	}

	[Token(Token = "0x600274F")]
	[Address(RVA = "0x316AD60", Offset = "0x3169360", VA = "0x18316AD60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset AddElementToDocument(VisualElementAsset vea, VisualElementAsset parent)
	{
		return null;
	}

	[Token(Token = "0x6002750")]
	[Address(RVA = "0x316E1C0", Offset = "0x316C7C0", VA = "0x18316E1C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset ReparentElementInDocument(VisualElementAsset vea, VisualElementAsset newParent, int index = -1)
	{
		return null;
	}

	[Token(Token = "0x6002751")]
	[Address(RVA = "0x316E920", Offset = "0x316CF20", VA = "0x18316E920")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void Swallow(VisualElementAsset parent, VisualTreeAsset other)
	{
	}

	[Token(Token = "0x6002752")]
	[Address(RVA = "0x316FA40", Offset = "0x316E040", VA = "0x18316FA40")]
	private static void UpdateUxmlObjectAssetsParentId(VisualElementAsset visualElementAsset)
	{
	}

	[Token(Token = "0x6002753")]
	[Address(RVA = "0x316E6E0", Offset = "0x316CCE0", VA = "0x18316E6E0")]
	internal static void SwallowStyleRule(VisualTreeAsset previous, VisualTreeAsset next, VisualElementAsset vea)
	{
	}

	[Token(Token = "0x6002754")]
	[Address(RVA = "0x316AC50", Offset = "0x3169250", VA = "0x18316AC50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset AddElementOfType(VisualElementAsset parent, string fullTypeName)
	{
		return null;
	}

	[Token(Token = "0x6002755")]
	[Address(RVA = "0x316FD80", Offset = "0x316E380", VA = "0x18316FD80")]
	public VisualTreeAsset()
	{
	}
}
