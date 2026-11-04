// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyNameCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200023D")]
public struct StylePropertyNameCollection : IEnumerable<StylePropertyName>, IEnumerable
{
	[Token(Token = "0x200023E")]
	public struct Enumerator : IEnumerator<StylePropertyName>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400085C")]
		[FieldOffset(Offset = "0x0")]
		private List<StylePropertyName>.Enumerator m_Enumerator;

		[Token(Token = "0x170002E7")]
		public StylePropertyName Current
		{
			[Token(Token = "0x6000F0C")]
			[Address(RVA = "0x325B720", Offset = "0x3259D20", VA = "0x18325B720", Slot = "4")]
			get
			{
				return default(StylePropertyName);
			}
		}

		[Token(Token = "0x170002E8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F0D")]
			[Address(RVA = "0x325B6B0", Offset = "0x3259CB0", VA = "0x18325B6B0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0xEF41A0", Offset = "0xEF27A0", VA = "0x180EF41A0")]
		internal Enumerator(List<StylePropertyName>.Enumerator enumerator)
		{
		}

		[Token(Token = "0x6000F0B")]
		[Address(RVA = "0x325B670", Offset = "0x3259C70", VA = "0x18325B670", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F0E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x325B630", Offset = "0x3259C30", VA = "0x18325B630", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x0")]
	internal List<StylePropertyName> propertiesList;

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal StylePropertyNameCollection(List<StylePropertyName> list)
	{
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x326E260", Offset = "0x326C860", VA = "0x18326E260")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x326E300", Offset = "0x326C900", VA = "0x18326E300", Slot = "4")]
	private IEnumerator<StylePropertyName> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStylePropertyName_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x326E3C0", Offset = "0x326C9C0", VA = "0x18326E3C0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
