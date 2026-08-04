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
		[Address(RVA = "0x4FF0C50", Offset = "0x4FF0C50", VA = "0x4FF0C50")]
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
		[Address(RVA = "0x4FF0B20", Offset = "0x4FF0B20", VA = "0x4FF0B20", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011D")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x4FF0BB0", Offset = "0x4FF0BB0", VA = "0x4FF0BB0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400001A")]
	internal event Action changed
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x4FF0190", Offset = "0x4FF0190", VA = "0x4FF0190")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x4FF0220", Offset = "0x4FF0220", VA = "0x4FF0220")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x4FF02B0", Offset = "0x4FF02B0", VA = "0x4FF02B0", Slot = "11")]
	public IEnumerator<SortColumnDescription> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x4FF0340", Offset = "0x4FF0340", VA = "0x4FF0340", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x4FF03D0", Offset = "0x4FF03D0", VA = "0x4FF03D0", Slot = "6")]
	public void Add(SortColumnDescription item)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4FEDC00", Offset = "0x4FEDC00", VA = "0x4FEDC00", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4FF0990", Offset = "0x4FF0990", VA = "0x4FF0990", Slot = "8")]
	public bool Contains(SortColumnDescription item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4FF0A40", Offset = "0x4FF0A40", VA = "0x4FF0A40", Slot = "9")]
	public void CopyTo(SortColumnDescription[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4FF0760", Offset = "0x4FF0760", VA = "0x4FF0760", Slot = "10")]
	public bool Remove(SortColumnDescription desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4FF0B00", Offset = "0x4FF0B00", VA = "0x4FF0B00")]
	private void OnDescriptionChanged(SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4FF0480", Offset = "0x4FF0480", VA = "0x4FF0480")]
	public void Insert(int index, SortColumnDescription desc)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4FEE1A0", Offset = "0x4FEE1A0", VA = "0x4FEE1A0")]
	public SortColumnDescriptions()
	{
	}
}
