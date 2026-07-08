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
		[Address(RVA = "0x49ABD60", Offset = "0x49ABD60", VA = "0x49ABD60", Slot = "39")]
		protected override string GetKeyForItem(Namespace item)
		{
			return null;
		}

		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x49ABB10", Offset = "0x49ABB10", VA = "0x49ABB10", Slot = "42")]
		public new bool TryGetValue(string key, out Namespace value)
		{
			return default(bool);
		}

		[Token(Token = "0x60006BF")]
		[Address(RVA = "0x49AB910", Offset = "0x49AB910", VA = "0x49AB910")]
		public Collection()
		{
		}

		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x49ABD80", Offset = "0x49ABD80", VA = "0x49ABD80", Slot = "40")]
		private Namespace Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002Eget_Item(string key)
		{
			return null;
		}

		[Token(Token = "0x60006C1")]
		[Address(RVA = "0x49ABDD0", Offset = "0x49ABDD0", VA = "0x49ABDD0", Slot = "43")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002EContains(string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60006C2")]
		[Address(RVA = "0x49ABE20", Offset = "0x49ABE20", VA = "0x49ABE20", Slot = "44")]
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
			[Address(RVA = "0x49AC460", Offset = "0x49AC460", VA = "0x49AC460", Slot = "6")]
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
			[Address(RVA = "0x49AC4B0", Offset = "0x49AC4B0", VA = "0x49AC4B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006C3")]
		[Address(RVA = "0x49AB7A0", Offset = "0x49AB7A0", VA = "0x49AB7A0")]
		[DebuggerHidden]
		public _003CAndAncestors_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x49ABE70", Offset = "0x49ABE70", VA = "0x49ABE70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006C5")]
		[Address(RVA = "0x49ABF20", Offset = "0x49ABF20", VA = "0x49ABF20", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006C6")]
		[Address(RVA = "0x49AC3C0", Offset = "0x49AC3C0", VA = "0x49AC3C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006C8")]
		[Address(RVA = "0x49AC470", Offset = "0x49AC470", VA = "0x49AC470", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x49AC4C0", Offset = "0x49AC4C0", VA = "0x49AC4C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x49AC560", Offset = "0x49AC560", VA = "0x49AC560", Slot = "5")]
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
			[Address(RVA = "0x49AC690", Offset = "0x49AC690", VA = "0x49AC690", Slot = "6")]
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
			[Address(RVA = "0x49AC6E0", Offset = "0x49AC6E0", VA = "0x49AC6E0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x49AB6F0", Offset = "0x49AB6F0", VA = "0x49AB6F0")]
		[DebuggerHidden]
		public _003Cget_Ancestors_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x49AC570", Offset = "0x49AC570", VA = "0x49AC570", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x49AC580", Offset = "0x49AC580", VA = "0x49AC580", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x49AC6A0", Offset = "0x49AC6A0", VA = "0x49AC6A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x49AC6F0", Offset = "0x49AC6F0", VA = "0x49AC6F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x49AC790", Offset = "0x49AC790", VA = "0x49AC790", Slot = "5")]
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
		[Address(RVA = "0x49AB610", Offset = "0x49AB610", VA = "0x49AB610")]
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
		[Address(RVA = "0x49AB620", Offset = "0x49AB620", VA = "0x49AB620")]
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
		[Address(RVA = "0x49AB630", Offset = "0x49AB630", VA = "0x49AB630")]
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
		[Address(RVA = "0x49AB640", Offset = "0x49AB640", VA = "0x49AB640")]
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
		[Address(RVA = "0x49AB650", Offset = "0x49AB650", VA = "0x49AB650")]
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
		[Address(RVA = "0x49AB660", Offset = "0x49AB660", VA = "0x49AB660")]
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
		[Address(RVA = "0x49AB670", Offset = "0x49AB670", VA = "0x49AB670")]
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
		[Address(RVA = "0x49AB950", Offset = "0x49AB950", VA = "0x49AB950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x49AB320", Offset = "0x49AB320", VA = "0x49AB320")]
	private Namespace(string fullName)
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x49AB720", Offset = "0x49AB720", VA = "0x49AB720")]
	[IteratorStateMachine(typeof(_003CAndAncestors_003Ed__21))]
	public IEnumerable<Namespace> AndAncestors()
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x49AB7D0", Offset = "0x49AB7D0", VA = "0x49AB7D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x49AB7F0", Offset = "0x49AB7F0", VA = "0x49AB7F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x49AB800", Offset = "0x49AB800", VA = "0x49AB800")]
	static Namespace()
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x49AB9C0", Offset = "0x49AB9C0", VA = "0x49AB9C0")]
	public static Namespace FromFullName(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x49ABBF0", Offset = "0x49ABBF0", VA = "0x49ABBF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x49AB5B0", Offset = "0x49AB5B0", VA = "0x49AB5B0")]
	public static implicit operator Namespace(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x49ABCA0", Offset = "0x49ABCA0", VA = "0x49ABCA0")]
	public static implicit operator string(Namespace @namespace)
	{
		return null;
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x49ABC70", Offset = "0x49ABC70", VA = "0x49ABC70")]
	public static bool operator ==(Namespace a, Namespace b)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x49ABCC0", Offset = "0x49ABCC0", VA = "0x49ABCC0")]
	public static bool operator !=(Namespace a, Namespace b)
	{
		return default(bool);
	}
}
