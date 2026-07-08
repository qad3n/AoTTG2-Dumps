using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20000E9")]
[DefaultMember("Item")]
public class SortColumnDescriptions : ICollection<SortColumnDescription>, IEnumerable<SortColumnDescription>, IEnumerable
{
	[Token(Token = "0x20000EA")]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : SortColumnDescriptions, new()
	{
		[Token(Token = "0x6000670")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000EB")]
	internal class UxmlObjectFactory : UxmlObjectFactory<SortColumnDescriptions>
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x4CC9320", Offset = "0x4CC9320", VA = "0x4CC9320")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000EC")]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : SortColumnDescriptions
	{
		[Token(Token = "0x40003D5")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlObjectListAttributeDescription<SortColumnDescription> m_SortColumnDescriptions;

		[Token(Token = "0x6000672")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000673")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private readonly IList<SortColumnDescription> m_Descriptions;

	[Token(Token = "0x1700011C")]
	public int Count
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x4CC91F0", Offset = "0x4CC91F0", VA = "0x4CC91F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011D")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x4CC9280", Offset = "0x4CC9280", VA = "0x4CC9280", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400001A")]
	internal event Action changed
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x4CC8860", Offset = "0x4CC8860", VA = "0x4CC8860")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x4CC88F0", Offset = "0x4CC88F0", VA = "0x4CC88F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4CC8980", Offset = "0x4CC8980", VA = "0x4CC8980", Slot = "11")]
	public IEnumerator<SortColumnDescription> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4CC8A10", Offset = "0x4CC8A10", VA = "0x4CC8A10", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4CC8AA0", Offset = "0x4CC8AA0", VA = "0x4CC8AA0", Slot = "6")]
	public void Add(SortColumnDescription item)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4CC62D0", Offset = "0x4CC62D0", VA = "0x4CC62D0", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4CC9060", Offset = "0x4CC9060", VA = "0x4CC9060", Slot = "8")]
	public bool Contains(SortColumnDescription item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4CC9110", Offset = "0x4CC9110", VA = "0x4CC9110", Slot = "9")]
	public void CopyTo(SortColumnDescription[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4CC8E30", Offset = "0x4CC8E30", VA = "0x4CC8E30", Slot = "10")]
	public bool Remove(SortColumnDescription desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4CC91D0", Offset = "0x4CC91D0", VA = "0x4CC91D0")]
	private void OnDescriptionChanged(SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4CC8B50", Offset = "0x4CC8B50", VA = "0x4CC8B50")]
	public void Insert(int index, SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4CC6870", Offset = "0x4CC6870", VA = "0x4CC6870")]
	public SortColumnDescriptions()
	{
	}
}
