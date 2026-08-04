// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Namespace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000FF")]
public sealed class Namespace
{
	[Token(Token = "0x2000100")]
	private class Collection : KeyedCollection<string, Namespace>, IKeyedCollection<string, Namespace>, ICollection<Namespace>, IEnumerable<Namespace>, IEnumerable
	{
		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4CD0930", Offset = "0x4CD0930", VA = "0x4CD0930", Slot = "39")]
		protected override string GetKeyForItem(Namespace item)
		{
			return null;
		}

		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4CD06E0", Offset = "0x4CD06E0", VA = "0x4CD06E0", Slot = "42")]
		public new bool TryGetValue(string key, out Namespace value)
		{
			return default(bool);
		}

		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x4CD04E0", Offset = "0x4CD04E0", VA = "0x4CD04E0")]
		public Collection()
		{
		}

		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x4CD0950", Offset = "0x4CD0950", VA = "0x4CD0950", Slot = "40")]
		private Namespace Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002Eget_Item(string key)
		{
			return null;
		}

		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x4CD09A0", Offset = "0x4CD09A0", VA = "0x4CD09A0", Slot = "43")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002EContains(string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x4CD09F0", Offset = "0x4CD09F0", VA = "0x4CD09F0", Slot = "44")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002ERemove(string key)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000101")]
	[CompilerGenerated]
	private sealed class _003CAndAncestors_003Ed__21 : IEnumerable<Namespace>, IEnumerable, IEnumerator<Namespace>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x18")]
		private Namespace _003C_003E2__current;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x28")]
		public Namespace _003C_003E4__this;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<Namespace> _003C_003E7__wrap1;

		[Token(Token = "0x17000168")]
		private Namespace System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002ENamespace_003E_002ECurrent
		{
			[Token(Token = "0x60006C7")]
			[Address(RVA = "0x4CD1030", Offset = "0x4CD1030", VA = "0x4CD1030", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000169")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006C9")]
			[Address(RVA = "0x4CD1080", Offset = "0x4CD1080", VA = "0x4CD1080", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x4CD0370", Offset = "0x4CD0370", VA = "0x4CD0370")]
		[DebuggerHidden]
		public _003CAndAncestors_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x4CD0A40", Offset = "0x4CD0A40", VA = "0x4CD0A40", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006C5")]
		[Address(RVA = "0x4CD0AF0", Offset = "0x4CD0AF0", VA = "0x4CD0AF0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006C6")]
		[Address(RVA = "0x4CD0F90", Offset = "0x4CD0F90", VA = "0x4CD0F90")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006C8")]
		[Address(RVA = "0x4CD1040", Offset = "0x4CD1040", VA = "0x4CD1040", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x4CD1090", Offset = "0x4CD1090", VA = "0x4CD1090", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x4CD1130", Offset = "0x4CD1130", VA = "0x4CD1130", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000102")]
	[CompilerGenerated]
	private sealed class _003Cget_Ancestors_003Ed__20 : IEnumerable<Namespace>, IEnumerable, IEnumerator<Namespace>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x18")]
		private Namespace _003C_003E2__current;

		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x28")]
		public Namespace _003C_003E4__this;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x30")]
		private Namespace _003Cancestor_003E5__2;

		[Token(Token = "0x1700016A")]
		private Namespace System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002ENamespace_003E_002ECurrent
		{
			[Token(Token = "0x60006CF")]
			[Address(RVA = "0x4CD1260", Offset = "0x4CD1260", VA = "0x4CD1260", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006D1")]
			[Address(RVA = "0x4CD12B0", Offset = "0x4CD12B0", VA = "0x4CD12B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x4CD02C0", Offset = "0x4CD02C0", VA = "0x4CD02C0")]
		[DebuggerHidden]
		public _003Cget_Ancestors_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x4CD1140", Offset = "0x4CD1140", VA = "0x4CD1140", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x4CD1150", Offset = "0x4CD1150", VA = "0x4CD1150", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x4CD1270", Offset = "0x4CD1270", VA = "0x4CD1270", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x4CD12C0", Offset = "0x4CD12C0", VA = "0x4CD12C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x4CD1360", Offset = "0x4CD1360", VA = "0x4CD1360", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Collection collection;

	[Token(Token = "0x17000160")]
	public Namespace Root
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x4CD01E0", Offset = "0x4CD01E0", VA = "0x4CD01E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000161")]
	public Namespace Parent
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x4CD01F0", Offset = "0x4CD01F0", VA = "0x4CD01F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public string FullName
	{
		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x4CD0200", Offset = "0x4CD0200", VA = "0x4CD0200")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000163")]
	public string Name
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x4CD0210", Offset = "0x4CD0210", VA = "0x4CD0210")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public bool IsRoot
	{
		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x4CD0220", Offset = "0x4CD0220", VA = "0x4CD0220")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000165")]
	public bool IsGlobal
	{
		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x4CD0230", Offset = "0x4CD0230", VA = "0x4CD0230")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000166")]
	public IEnumerable<Namespace> Ancestors
	{
		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x4CD0240", Offset = "0x4CD0240", VA = "0x4CD0240")]
		[IteratorStateMachine(typeof(_003Cget_Ancestors_003Ed__20))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public static Namespace Global
	{
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x4CD0520", Offset = "0x4CD0520", VA = "0x4CD0520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4CCFEF0", Offset = "0x4CCFEF0", VA = "0x4CCFEF0")]
	private Namespace(string fullName)
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x4CD02F0", Offset = "0x4CD02F0", VA = "0x4CD02F0")]
	[IteratorStateMachine(typeof(_003CAndAncestors_003Ed__21))]
	public IEnumerable<Namespace> AndAncestors()
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x4CD03A0", Offset = "0x4CD03A0", VA = "0x4CD03A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x4CD03C0", Offset = "0x4CD03C0", VA = "0x4CD03C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x4CD03D0", Offset = "0x4CD03D0", VA = "0x4CD03D0")]
	static Namespace()
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4CD0590", Offset = "0x4CD0590", VA = "0x4CD0590")]
	public static Namespace FromFullName(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4CD07C0", Offset = "0x4CD07C0", VA = "0x4CD07C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4CD0180", Offset = "0x4CD0180", VA = "0x4CD0180")]
	public static implicit operator Namespace(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4CD0870", Offset = "0x4CD0870", VA = "0x4CD0870")]
	public static implicit operator string(Namespace @namespace)
	{
		return null;
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4CD0840", Offset = "0x4CD0840", VA = "0x4CD0840")]
	public static bool operator ==(Namespace a, Namespace b)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x4CD0890", Offset = "0x4CD0890", VA = "0x4CD0890")]
	public static bool operator !=(Namespace a, Namespace b)
	{
		return default(bool);
	}
}
