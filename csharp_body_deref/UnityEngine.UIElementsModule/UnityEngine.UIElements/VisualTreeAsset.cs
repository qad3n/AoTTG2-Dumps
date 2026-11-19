// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeAsset
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B64490", Offset = "0x6B63490", VA = "0x6B64490")]
		public UsingEntry(string alias, string path)
		{
		}

		[Token(Token = "0x6002759")]
		[Address(RVA = "0x6B649A0", Offset = "0x6B639A0", VA = "0x6B649A0")]
		public UsingEntry(string alias, VisualTreeAsset asset)
		{
		}
	}

	[Token(Token = "0x200051D")]
	private class UsingEntryComparer : IComparer<UsingEntry>
	{
		[Token(Token = "0x600275B")]
		[Address(RVA = "0x6B66AE0", Offset = "0x6B65AE0", VA = "0x6B66AE0", Slot = "4")]
		public int Compare(UsingEntry x, UsingEntry y)
		{
			return default(int);
		}

		[Token(Token = "0x600275C")]
		[Address(RVA = "0x6B66AD0", Offset = "0x6B65AD0", VA = "0x6B66AD0")]
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
			[Address(RVA = "0x6B61370", Offset = "0x6B60370", VA = "0x6B61370")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A14")]
		public string path
		{
			[Token(Token = "0x600275E")]
			[Address(RVA = "0x6B66B00", Offset = "0x6B65B00", VA = "0x6B66B00")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A15")]
		public Object asset
		{
			[Token(Token = "0x600275F")]
			[Address(RVA = "0x6B61930", Offset = "0x6B60930", VA = "0x6B61930")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002760")]
		[Address(RVA = "0x6B61510", Offset = "0x6B60510", VA = "0x6B61510")]
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
			[Address(RVA = "0x6B670F0", Offset = "0x6B660F0", VA = "0x6B670F0", Slot = "6")]
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
			[Address(RVA = "0x6B67140", Offset = "0x6B66140", VA = "0x6B67140", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002763")]
		[Address(RVA = "0x6B652C0", Offset = "0x6B642C0", VA = "0x6B652C0")]
		[DebuggerHidden]
		public _003CDepthFirstTraversal_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002764")]
		[Address(RVA = "0x6B66B30", Offset = "0x6B65B30", VA = "0x6B66B30", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002765")]
		[Address(RVA = "0x6B66BE0", Offset = "0x6B65BE0", VA = "0x6B66BE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002766")]
		[Address(RVA = "0x6B67050", Offset = "0x6B66050", VA = "0x6B67050")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002768")]
		[Address(RVA = "0x6B67100", Offset = "0x6B66100", VA = "0x6B67100", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600276A")]
		[Address(RVA = "0x6B67150", Offset = "0x6B66150", VA = "0x6B67150", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<UxmlAsset> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EUxmlAsset_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600276B")]
		[Address(RVA = "0x6B67200", Offset = "0x6B66200", VA = "0x6B67200", Slot = "5")]
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
			[Address(RVA = "0x6B68170", Offset = "0x6B67170", VA = "0x6B68170", Slot = "6")]
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
			[Address(RVA = "0x6B681C0", Offset = "0x6B671C0", VA = "0x6B681C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002775")]
		[Address(RVA = "0x6B60B80", Offset = "0x6B5FB80", VA = "0x6B60B80")]
		[DebuggerHidden]
		public _003Cget_stylesheets_003Ed__40(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002776")]
		[Address(RVA = "0x6B67210", Offset = "0x6B66210", VA = "0x6B67210", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002777")]
		[Address(RVA = "0x6B67510", Offset = "0x6B66510", VA = "0x6B67510", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002778")]
		[Address(RVA = "0x6B68130", Offset = "0x6B67130", VA = "0x6B68130")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002779")]
		[Address(RVA = "0x6B680F0", Offset = "0x6B670F0", VA = "0x6B680F0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x600277A")]
		[Address(RVA = "0x6B680B0", Offset = "0x6B670B0", VA = "0x6B680B0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x600277B")]
		[Address(RVA = "0x6B68010", Offset = "0x6B67010", VA = "0x6B68010")]
		private void _003C_003Em__Finally4()
		{
		}

		[Token(Token = "0x600277C")]
		[Address(RVA = "0x6B68060", Offset = "0x6B67060", VA = "0x6B68060")]
		private void _003C_003Em__Finally5()
		{
		}

		[Token(Token = "0x600277E")]
		[Address(RVA = "0x6B68180", Offset = "0x6B67180", VA = "0x6B68180", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002780")]
		[Address(RVA = "0x6B681D0", Offset = "0x6B671D0", VA = "0x6B681D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<StyleSheet> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStyleSheet_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002781")]
		[Address(RVA = "0x6B68270", Offset = "0x6B67270", VA = "0x6B68270", Slot = "5")]
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
			[Address(RVA = "0x6B688C0", Offset = "0x6B678C0", VA = "0x6B688C0", Slot = "6")]
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
			[Address(RVA = "0x6B68910", Offset = "0x6B67910", VA = "0x6B68910", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002782")]
		[Address(RVA = "0x6B60920", Offset = "0x6B5F920", VA = "0x6B60920")]
		[DebuggerHidden]
		public _003Cget_templateDependencies_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002783")]
		[Address(RVA = "0x6B68280", Offset = "0x6B67280", VA = "0x6B68280", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002784")]
		[Address(RVA = "0x6B682E0", Offset = "0x6B672E0", VA = "0x6B682E0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002785")]
		[Address(RVA = "0x6B68880", Offset = "0x6B67880", VA = "0x6B68880")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002787")]
		[Address(RVA = "0x6B688D0", Offset = "0x6B678D0", VA = "0x6B688D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002789")]
		[Address(RVA = "0x6B68920", Offset = "0x6B67920", VA = "0x6B68920", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<VisualTreeAsset> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EVisualTreeAsset_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600278A")]
		[Address(RVA = "0x6B689C0", Offset = "0x6B679C0", VA = "0x6B689C0", Slot = "5")]
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
		[Address(RVA = "0x6B606C0", Offset = "0x6B5F6C0", VA = "0x6B606C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002715")]
		[Address(RVA = "0x6B606D0", Offset = "0x6B5F6D0", VA = "0x6B606D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A08")]
	internal bool hasEditorElements
	{
		[Token(Token = "0x6002716")]
		[Address(RVA = "0x6B606E0", Offset = "0x6B5F6E0", VA = "0x6B606E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002717")]
		[Address(RVA = "0x6B606F0", Offset = "0x6B5F6F0", VA = "0x6B606F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A09")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool importerWithUpdatedUrls
	{
		[Token(Token = "0x6002718")]
		[Address(RVA = "0x6B60700", Offset = "0x6B5F700", VA = "0x6B60700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002719")]
		[Address(RVA = "0x6B60710", Offset = "0x6B5F710", VA = "0x6B60710")]
		set
		{
		}
	}

	[Token(Token = "0x17000A0A")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x600271A")]
		[Address(RVA = "0x6B60720", Offset = "0x6B5F720", VA = "0x6B60720")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600271B")]
		[Address(RVA = "0x6B60730", Offset = "0x6B5F730", VA = "0x6B60730")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A0B")]
	internal List<UsingEntry> usings
	{
		[Token(Token = "0x600271D")]
		[Address(RVA = "0x6B608A0", Offset = "0x6B5F8A0", VA = "0x6B608A0")]
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
		[Address(RVA = "0x6B608B0", Offset = "0x6B5F8B0", VA = "0x6B608B0")]
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
		[Address(RVA = "0x6B609F0", Offset = "0x6B5F9F0", VA = "0x6B609F0")]
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
		[Address(RVA = "0x6B60A00", Offset = "0x6B5FA00", VA = "0x6B60A00")]
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
		[Address(RVA = "0x6B60B10", Offset = "0x6B5FB10", VA = "0x6B60B10")]
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
		[Address(RVA = "0x6B62160", Offset = "0x6B61160", VA = "0x6B62160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A11")]
	internal int contentContainerId
	{
		[Token(Token = "0x6002731")]
		[Address(RVA = "0x6B62170", Offset = "0x6B61170", VA = "0x6B62170")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002732")]
		[Address(RVA = "0x6B62180", Offset = "0x6B61180", VA = "0x6B62180")]
		set
		{
		}
	}

	[Token(Token = "0x17000A12")]
	public int contentHash
	{
		[Token(Token = "0x6002748")]
		[Address(RVA = "0x6B65220", Offset = "0x6B64220", VA = "0x6B65220")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002749")]
		[Address(RVA = "0x6B65230", Offset = "0x6B64230", VA = "0x6B65230")]
		set
		{
		}
	}

	[Token(Token = "0x600271C")]
	[Address(RVA = "0x6B60740", Offset = "0x6B5F740", VA = "0x6B60740")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GetNextChildSerialNumber()
	{
		return default(int);
	}

	[Token(Token = "0x600271F")]
	[Address(RVA = "0x6B60950", Offset = "0x6B5F950", VA = "0x6B60950")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleSheet GetOrCreateInlineStyleSheet()
	{
		return null;
	}

	[Token(Token = "0x6002722")]
	[Address(RVA = "0x6B60A80", Offset = "0x6B5FA80", VA = "0x6B60A80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetRootAsset(VisualElementAsset root)
	{
	}

	[Token(Token = "0x6002724")]
	[Address(RVA = "0x6B60BB0", Offset = "0x6B5FBB0", VA = "0x6B60BB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal UxmlObjectAsset AddUxmlObject(UxmlAsset parent, string fieldUxmlName, string fullTypeName, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
		return null;
	}

	[Token(Token = "0x6002725")]
	[Address(RVA = "0x6B60DA0", Offset = "0x6B5FDA0", VA = "0x6B60DA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GetNextUxmlAssetId(int parentId)
	{
		return default(int);
	}

	[Token(Token = "0x6002726")]
	[Address(RVA = "0x6B60E00", Offset = "0x6B5FE00", VA = "0x6B60E00")]
	private void Awake__Internal()
	{
	}

	[Token(Token = "0x6002727")]
	[Address(RVA = "0x6B60E10", Offset = "0x6B5FE10", VA = "0x6B60E10")]
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
	[Address(RVA = "0x6B610F0", Offset = "0x6B600F0", VA = "0x6B610F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool AssetEntryExists(string path, Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600272A")]
	[Address(RVA = "0x6B61410", Offset = "0x6B60410", VA = "0x6B61410")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterAssetEntry(string path, Type type, Object asset)
	{
	}

	[Token(Token = "0x600272B")]
	[Address(RVA = "0x6B615D0", Offset = "0x6B605D0", VA = "0x6B615D0")]
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
	[Address(RVA = "0x6B61660", Offset = "0x6B60660", VA = "0x6B61660")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Object GetAsset(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x600272E")]
	[Address(RVA = "0x6B61990", Offset = "0x6B60990", VA = "0x6B61990")]
	internal Type GetAssetType(string path)
	{
		return null;
	}

	[Token(Token = "0x600272F")]
	[Address(RVA = "0x6B61BA0", Offset = "0x6B60BA0", VA = "0x6B61BA0")]
	internal IBaseUxmlObjectFactory GetUxmlObjectFactory(UxmlObjectAsset uxmlObjectAsset)
	{
		return null;
	}

	[Token(Token = "0x6002733")]
	[Address(RVA = "0x6B62190", Offset = "0x6B61190", VA = "0x6B62190")]
	public TemplateContainer Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6002734")]
	[Address(RVA = "0x6B628D0", Offset = "0x6B618D0", VA = "0x6B628D0")]
	public TemplateContainer Instantiate(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6002735")]
	[Address(RVA = "0x6B62910", Offset = "0x6B61910", VA = "0x6B62910")]
	public TemplateContainer CloneTree()
	{
		return null;
	}

	[Token(Token = "0x6002736")]
	[Address(RVA = "0x6B62920", Offset = "0x6B61920", VA = "0x6B62920")]
	public TemplateContainer CloneTree(string bindingPath)
	{
		return null;
	}

	[Token(Token = "0x6002737")]
	[Address(RVA = "0x6B62960", Offset = "0x6B61960", VA = "0x6B62960")]
	public void CloneTree(VisualElement target)
	{
	}

	[Token(Token = "0x6002738")]
	[Address(RVA = "0x6B62980", Offset = "0x6B61980", VA = "0x6B62980")]
	public void CloneTree(VisualElement target, out int firstElementIndex, out int elementAddedCount)
	{
	}

	[Token(Token = "0x6002739")]
	[Address(RVA = "0x6B624B0", Offset = "0x6B614B0", VA = "0x6B624B0")]
	internal void CloneTree(VisualElement target, CreationContext cc)
	{
	}

	[Token(Token = "0x600273A")]
	[Address(RVA = "0x6B62FE0", Offset = "0x6B61FE0", VA = "0x6B62FE0")]
	private VisualElement CloneSetupRecursively(VisualElementAsset asset, CreationContext context)
	{
		return null;
	}

	[Token(Token = "0x600273B")]
	[Address(RVA = "0x6B64260", Offset = "0x6B63260", VA = "0x6B64260")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryGetSlotInsertionPoint(int insertionPointId, out string slotName)
	{
		return default(bool);
	}

	[Token(Token = "0x600273C")]
	[Address(RVA = "0x6B64310", Offset = "0x6B63310", VA = "0x6B64310")]
	internal bool TryGetUsingEntry(string templateName, out UsingEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x600273D")]
	[Address(RVA = "0x6B644D0", Offset = "0x6B634D0", VA = "0x6B644D0")]
	private void RemoveUsingEntry(UsingEntry entry)
	{
	}

	[Token(Token = "0x600273E")]
	[Address(RVA = "0x6B64510", Offset = "0x6B63510", VA = "0x6B64510")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualTreeAsset ResolveTemplate(string templateName)
	{
		return null;
	}

	[Token(Token = "0x600273F")]
	[Address(RVA = "0x6B64670", Offset = "0x6B63670", VA = "0x6B64670")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TemplateExists(string templateName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002740")]
	[Address(RVA = "0x6B64790", Offset = "0x6B63790", VA = "0x6B64790")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterTemplate(string templateName, string path)
	{
	}

	[Token(Token = "0x6002741")]
	[Address(RVA = "0x6B64920", Offset = "0x6B63920", VA = "0x6B64920")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RegisterTemplate(string templateName, VisualTreeAsset asset)
	{
	}

	[Token(Token = "0x6002742")]
	[Address(RVA = "0x6B649E0", Offset = "0x6B639E0", VA = "0x6B649E0")]
	internal bool TryRegisterTemplate(string templateName, VisualTreeAsset asset)
	{
		return default(bool);
	}

	[Token(Token = "0x6002743")]
	[Address(RVA = "0x6B64C90", Offset = "0x6B63C90", VA = "0x6B64C90")]
	internal bool TryUnregisterTemplate(string templateName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002744")]
	[Address(RVA = "0x6B64810", Offset = "0x6B63810", VA = "0x6B64810")]
	private void InsertUsingEntry(UsingEntry entry)
	{
	}

	[Token(Token = "0x6002745")]
	[Address(RVA = "0x6B63AB0", Offset = "0x6B62AB0", VA = "0x6B63AB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static VisualElement Create(VisualElementAsset asset, CreationContext ctx)
	{
		return null;
	}

	[Token(Token = "0x6002746")]
	[Address(RVA = "0x6B62B90", Offset = "0x6B61B90", VA = "0x6B62B90")]
	private static void AssignClassListFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x6002747")]
	[Address(RVA = "0x6B62C00", Offset = "0x6B61C00", VA = "0x6B62C00")]
	private static void AssignStyleSheetFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	[Token(Token = "0x600274A")]
	[Address(RVA = "0x6B60760", Offset = "0x6B5F760", VA = "0x6B60760")]
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
	[Address(RVA = "0x6B65240", Offset = "0x6B64240", VA = "0x6B65240")]
	[IteratorStateMachine(typeof(_003CDepthFirstTraversal_003Ed__88))]
	internal IEnumerable<UxmlAsset> DepthFirstTraversal(UxmlAsset asset)
	{
		return null;
	}

	[Token(Token = "0x600274D")]
	[Address(RVA = "0x6B652F0", Offset = "0x6B642F0", VA = "0x6B652F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int DepthFirstTraversalIndexOf(UxmlAsset uxmlAsset)
	{
		return default(int);
	}

	[Token(Token = "0x600274E")]
	[Address(RVA = "0x6B655F0", Offset = "0x6B645F0", VA = "0x6B655F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int GenerateNewId(VisualElementAsset vea)
	{
		return default(int);
	}

	[Token(Token = "0x600274F")]
	[Address(RVA = "0x6B65690", Offset = "0x6B64690", VA = "0x6B65690")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset AddElementToDocument(VisualElementAsset vea, VisualElementAsset parent)
	{
		return null;
	}

	[Token(Token = "0x6002750")]
	[Address(RVA = "0x6B65750", Offset = "0x6B64750", VA = "0x6B65750")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset ReparentElementInDocument(VisualElementAsset vea, VisualElementAsset newParent, int index = -1)
	{
		return null;
	}

	[Token(Token = "0x6002751")]
	[Address(RVA = "0x6B65990", Offset = "0x6B64990", VA = "0x6B65990")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void Swallow(VisualElementAsset parent, VisualTreeAsset other)
	{
	}

	[Token(Token = "0x6002752")]
	[Address(RVA = "0x6B65EE0", Offset = "0x6B64EE0", VA = "0x6B65EE0")]
	private static void UpdateUxmlObjectAssetsParentId(VisualElementAsset visualElementAsset)
	{
	}

	[Token(Token = "0x6002753")]
	[Address(RVA = "0x6B5E2C0", Offset = "0x6B5D2C0", VA = "0x6B5E2C0")]
	internal static void SwallowStyleRule(VisualTreeAsset previous, VisualTreeAsset next, VisualElementAsset vea)
	{
	}

	[Token(Token = "0x6002754")]
	[Address(RVA = "0x6B66150", Offset = "0x6B65150", VA = "0x6B66150")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElementAsset AddElementOfType(VisualElementAsset parent, string fullTypeName)
	{
		return null;
	}

	[Token(Token = "0x6002755")]
	[Address(RVA = "0x6B66840", Offset = "0x6B65840", VA = "0x6B66840")]
	public VisualTreeAsset()
	{
	}
}
