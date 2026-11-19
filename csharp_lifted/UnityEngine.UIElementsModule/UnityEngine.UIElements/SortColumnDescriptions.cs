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
		[Address(RVA = "0x6C26580", Offset = "0x6C25580", VA = "0x6C26580")]
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
		[Address(RVA = "0x6C26450", Offset = "0x6C25450", VA = "0x6C26450", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x6C264E0", Offset = "0x6C254E0", VA = "0x6C264E0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000023")]
	internal event Action changed
	{
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x6C25AC0", Offset = "0x6C24AC0", VA = "0x6C25AC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x6C25B50", Offset = "0x6C24B50", VA = "0x6C25B50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x6C25BE0", Offset = "0x6C24BE0", VA = "0x6C25BE0", Slot = "11")]
	public IEnumerator<SortColumnDescription> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x6C25C70", Offset = "0x6C24C70", VA = "0x6C25C70", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x6C25D00", Offset = "0x6C24D00", VA = "0x6C25D00", Slot = "6")]
	public void Add(SortColumnDescription item)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x6C22780", Offset = "0x6C21780", VA = "0x6C22780", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x6C262C0", Offset = "0x6C252C0", VA = "0x6C262C0", Slot = "8")]
	public bool Contains(SortColumnDescription item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x6C26370", Offset = "0x6C25370", VA = "0x6C26370", Slot = "9")]
	public void CopyTo(SortColumnDescription[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x6C260A0", Offset = "0x6C250A0", VA = "0x6C260A0", Slot = "10")]
	public bool Remove(SortColumnDescription desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x6C26430", Offset = "0x6C25430", VA = "0x6C26430")]
	private void OnDescriptionChanged(SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x6C25DC0", Offset = "0x6C24DC0", VA = "0x6C25DC0")]
	public void Insert(int index, SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x6C22D50", Offset = "0x6C21D50", VA = "0x6C22D50")]
	public SortColumnDescriptions()
	{
	}
}
