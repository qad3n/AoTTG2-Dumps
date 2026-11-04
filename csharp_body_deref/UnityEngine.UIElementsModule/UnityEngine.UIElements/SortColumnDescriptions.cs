// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SortColumnDescriptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000125")]
[DefaultMember("Item")]
[UxmlObject]
public class SortColumnDescriptions : ICollection<SortColumnDescription>, IEnumerable<SortColumnDescription>, IEnumerable
{
	[Token(Token = "0x2000126")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : SortColumnDescriptions, new()
	{
		[Token(Token = "0x600089F")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000127")]
	[Obsolete("UxmlObjectFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory : UxmlObjectFactory<SortColumnDescriptions>
	{
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x3224F20", Offset = "0x3223520", VA = "0x183224F20")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000128")]
	[Obsolete("UxmlObjectTraits<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : SortColumnDescriptions
	{
		[Token(Token = "0x4000537")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlObjectListAttributeDescription<SortColumnDescription> m_SortColumnDescriptions;

		[Token(Token = "0x60008A1")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60008A2")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private readonly IList<SortColumnDescription> m_Descriptions;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_changed;

	[Token(Token = "0x17000195")]
	public int Count
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x3224A00", Offset = "0x3223000", VA = "0x183224A00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x3224A50", Offset = "0x3223050", VA = "0x183224A50", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000023")]
	internal event Action changed
	{
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x3224960", Offset = "0x3222F60", VA = "0x183224960")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x3224AA0", Offset = "0x32230A0", VA = "0x183224AA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x3224430", Offset = "0x3222A30", VA = "0x183224430", Slot = "11")]
	public IEnumerator<SortColumnDescription> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x3224430", Offset = "0x3222A30", VA = "0x183224430", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x3223F70", Offset = "0x3222570", VA = "0x183223F70", Slot = "6")]
	public void Add(SortColumnDescription item)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x3223FE0", Offset = "0x32225E0", VA = "0x183223FE0", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x3224300", Offset = "0x3222900", VA = "0x183224300", Slot = "8")]
	public bool Contains(SortColumnDescription item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x3224360", Offset = "0x3222960", VA = "0x183224360", Slot = "9")]
	public void CopyTo(SortColumnDescription[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x3224720", Offset = "0x3222D20", VA = "0x183224720", Slot = "10")]
	public bool Remove(SortColumnDescription desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2952A50", Offset = "0x2951050", VA = "0x182952A50")]
	private void OnDescriptionChanged(SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x3224480", Offset = "0x3222A80", VA = "0x183224480")]
	public void Insert(int index, SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x32248E0", Offset = "0x3222EE0", VA = "0x1832248E0")]
	public SortColumnDescriptions()
	{
	}
}
