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
		[Token(Token = "0x60006C7")]
		[Address(RVA = "0x67BF050", Offset = "0x67BE050", VA = "0x67BF050", Slot = "39")]
		protected override string GetKeyForItem(Namespace item)
		{
			return null;
		}

		[Token(Token = "0x60006C8")]
		[Address(RVA = "0x67BEE00", Offset = "0x67BDE00", VA = "0x67BEE00", Slot = "42")]
		public new bool TryGetValue(string key, out Namespace value)
		{
			return default(bool);
		}

		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x67BEBF0", Offset = "0x67BDBF0", VA = "0x67BEBF0")]
		public Collection()
		{
		}

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x67BF070", Offset = "0x67BE070", VA = "0x67BF070", Slot = "40")]
		private Namespace Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002Eget_Item(string key)
		{
			return null;
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x67BF0C0", Offset = "0x67BE0C0", VA = "0x67BF0C0", Slot = "43")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002EContains(string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x67BF110", Offset = "0x67BE110", VA = "0x67BF110", Slot = "44")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002ERemove(string key)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000101")]
	[CompilerGenerated]
	private sealed class _003CAndAncestors_003Ed__21 : IEnumerable<Namespace>, IEnumerable, IEnumerator<Namespace>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D8")]
		[FieldOffset(Offset = "0x18")]
		private Namespace _003C_003E2__current;

		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x28")]
		public Namespace _003C_003E4__this;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<Namespace> _003C_003E7__wrap1;

		[Token(Token = "0x1700016B")]
		private Namespace System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002ENamespace_003E_002ECurrent
		{
			[Token(Token = "0x60006D1")]
			[Address(RVA = "0x67BF690", Offset = "0x67BE690", VA = "0x67BF690", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006D3")]
			[Address(RVA = "0x67BF6E0", Offset = "0x67BE6E0", VA = "0x67BF6E0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x67BEA80", Offset = "0x67BDA80", VA = "0x67BEA80")]
		[DebuggerHidden]
		public _003CAndAncestors_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x67BF160", Offset = "0x67BE160", VA = "0x67BF160", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x67BF210", Offset = "0x67BE210", VA = "0x67BF210", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x67BF5F0", Offset = "0x67BE5F0", VA = "0x67BF5F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x67BF6A0", Offset = "0x67BE6A0", VA = "0x67BF6A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x67BF6F0", Offset = "0x67BE6F0", VA = "0x67BF6F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x67BF790", Offset = "0x67BE790", VA = "0x67BF790", Slot = "5")]
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
		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x18")]
		private Namespace _003C_003E2__current;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x28")]
		public Namespace _003C_003E4__this;

		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x30")]
		private Namespace _003Cancestor_003E5__2;

		[Token(Token = "0x1700016D")]
		private Namespace System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002ENamespace_003E_002ECurrent
		{
			[Token(Token = "0x60006D9")]
			[Address(RVA = "0x67BF8C0", Offset = "0x67BE8C0", VA = "0x67BF8C0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60006DB")]
			[Address(RVA = "0x67BF910", Offset = "0x67BE910", VA = "0x67BF910", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x67BE9E0", Offset = "0x67BD9E0", VA = "0x67BE9E0")]
		[DebuggerHidden]
		public _003Cget_Ancestors_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x67BF7A0", Offset = "0x67BE7A0", VA = "0x67BF7A0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x67BF7B0", Offset = "0x67BE7B0", VA = "0x67BF7B0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x67BF8D0", Offset = "0x67BE8D0", VA = "0x67BF8D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x67BF920", Offset = "0x67BE920", VA = "0x67BF920", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x67BF9C0", Offset = "0x67BE9C0", VA = "0x67BF9C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Collection collection;

	[Token(Token = "0x17000163")]
	public Namespace Root
	{
		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x67BE910", Offset = "0x67BD910", VA = "0x67BE910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public Namespace Parent
	{
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x67BE920", Offset = "0x67BD920", VA = "0x67BE920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public string FullName
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x67BE930", Offset = "0x67BD930", VA = "0x67BE930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	public string Name
	{
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x67BE940", Offset = "0x67BD940", VA = "0x67BE940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000167")]
	public bool IsRoot
	{
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x67BE950", Offset = "0x67BD950", VA = "0x67BE950")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000168")]
	public bool IsGlobal
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x67BE960", Offset = "0x67BD960", VA = "0x67BE960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000169")]
	public IEnumerable<Namespace> Ancestors
	{
		[Token(Token = "0x60006BB")]
		[Address(RVA = "0x67BE970", Offset = "0x67BD970", VA = "0x67BE970")]
		[IteratorStateMachine(typeof(_003Cget_Ancestors_003Ed__20))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public static Namespace Global
	{
		[Token(Token = "0x60006C0")]
		[Address(RVA = "0x67BEC30", Offset = "0x67BDC30", VA = "0x67BEC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x67BE620", Offset = "0x67BD620", VA = "0x67BE620")]
	private Namespace(string fullName)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x67BEA10", Offset = "0x67BDA10", VA = "0x67BEA10")]
	[IteratorStateMachine(typeof(_003CAndAncestors_003Ed__21))]
	public IEnumerable<Namespace> AndAncestors()
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x67BEAB0", Offset = "0x67BDAB0", VA = "0x67BEAB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x67BEAD0", Offset = "0x67BDAD0", VA = "0x67BEAD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x67BEAE0", Offset = "0x67BDAE0", VA = "0x67BEAE0")]
	static Namespace()
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x67BECA0", Offset = "0x67BDCA0", VA = "0x67BECA0")]
	public static Namespace FromFullName(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x67BEEE0", Offset = "0x67BDEE0", VA = "0x67BEEE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x67BE8B0", Offset = "0x67BD8B0", VA = "0x67BE8B0")]
	public static implicit operator Namespace(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x67BEF90", Offset = "0x67BDF90", VA = "0x67BEF90")]
	public static implicit operator string(Namespace @namespace)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x67BEF60", Offset = "0x67BDF60", VA = "0x67BEF60")]
	public static bool operator ==(Namespace a, Namespace b)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x67BEFB0", Offset = "0x67BDFB0", VA = "0x67BEFB0")]
	public static bool operator !=(Namespace a, Namespace b)
	{
		return default(bool);
	}
}
