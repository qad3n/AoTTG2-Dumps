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
		[Address(RVA = "0x2465FD0", Offset = "0x24645D0", VA = "0x182465FD0", Slot = "39")]
		protected override string GetKeyForItem(Namespace item)
		{
			return null;
		}

		[Token(Token = "0x60006C8")]
		[Address(RVA = "0x2DC9A40", Offset = "0x2DC8040", VA = "0x182DC9A40", Slot = "42")]
		public new bool TryGetValue(string key, out Namespace value)
		{
			return default(bool);
		}

		[Token(Token = "0x60006C9")]
		[Address(RVA = "0x2DC9C30", Offset = "0x2DC8230", VA = "0x182DC9C30")]
		public Collection()
		{
		}

		[Token(Token = "0x60006CA")]
		[Address(RVA = "0x2DC9BE0", Offset = "0x2DC81E0", VA = "0x182DC9BE0", Slot = "40")]
		private Namespace Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002Eget_Item(string key)
		{
			return null;
		}

		[Token(Token = "0x60006CB")]
		[Address(RVA = "0x2DC9B40", Offset = "0x2DC8140", VA = "0x182DC9B40", Slot = "43")]
		private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002ENamespace_003E_002EContains(string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x2DC9B90", Offset = "0x2DC8190", VA = "0x182DC9B90", Slot = "44")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CAndAncestors_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x2DDCBC0", Offset = "0x2DDB1C0", VA = "0x182DDCBC0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x2DDC7F0", Offset = "0x2DDADF0", VA = "0x182DDC7F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x2DDCC50", Offset = "0x2DDB250", VA = "0x182DDCC50")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x2DDCB80", Offset = "0x2DDB180", VA = "0x182DDCB80", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x2DDCAE0", Offset = "0x2DDB0E0", VA = "0x182DDCAE0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x2DDCAE0", Offset = "0x2DDB0E0", VA = "0x182DDCAE0", Slot = "5")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_Ancestors_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x2DE22D0", Offset = "0x2DE08D0", VA = "0x182DE22D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x2DE2460", Offset = "0x2DE0A60", VA = "0x182DE2460", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x2DE23C0", Offset = "0x2DE09C0", VA = "0x182DE23C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Namespace> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002ENamespace_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x2DE23C0", Offset = "0x2DE09C0", VA = "0x182DE23C0", Slot = "5")]
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
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
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
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
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
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
		[Address(RVA = "0x2DDC4E0", Offset = "0x2DDAAE0", VA = "0x182DDC4E0")]
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
		[Address(RVA = "0x2DDC560", Offset = "0x2DDAB60", VA = "0x182DDC560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x2DDC2B0", Offset = "0x2DDA8B0", VA = "0x182DDC2B0")]
	private Namespace(string fullName)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x2DDBE30", Offset = "0x2DDA430", VA = "0x182DDBE30")]
	[IteratorStateMachine(typeof(_003CAndAncestors_003Ed__21))]
	public IEnumerable<Namespace> AndAncestors()
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x2DDC170", Offset = "0x2DDA770", VA = "0x182DDC170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x2DDC190", Offset = "0x2DDA790", VA = "0x182DDC190")]
	static Namespace()
	{
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x2DDBF40", Offset = "0x2DDA540", VA = "0x182DDBF40")]
	public static Namespace FromFullName(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x2DDBEB0", Offset = "0x2DDA4B0", VA = "0x182DDBEB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x2DDC5B0", Offset = "0x2DDABB0", VA = "0x182DDC5B0")]
	public static implicit operator Namespace(string fullName)
	{
		return null;
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x2DDC600", Offset = "0x2DDAC00", VA = "0x182DDC600")]
	public static implicit operator string(Namespace @namespace)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(Namespace a, Namespace b)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x2DDC620", Offset = "0x2DDAC20", VA = "0x182DDC620")]
	public static bool operator !=(Namespace a, Namespace b)
	{
		return default(bool);
	}
}
