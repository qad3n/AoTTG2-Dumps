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

[Token(Token = "0x20001F3")]
public struct StylePropertyNameCollection : IEnumerable<StylePropertyName>, IEnumerable
{
	[Token(Token = "0x20001F4")]
	public struct Enumerator : IEnumerator<StylePropertyName>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400070E")]
		[FieldOffset(Offset = "0x0")]
		private List<StylePropertyName>.Enumerator m_Enumerator;

		[Token(Token = "0x1700025B")]
		public StylePropertyName Current
		{
			[Token(Token = "0x6000CC8")]
			[Address(RVA = "0x503CBA0", Offset = "0x503CBA0", VA = "0x503CBA0", Slot = "4")]
			get
			{
				return default(StylePropertyName);
			}
		}

		[Token(Token = "0x1700025C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CC9")]
			[Address(RVA = "0x503CBD0", Offset = "0x503CBD0", VA = "0x503CBD0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x503C980", Offset = "0x503C980", VA = "0x503C980")]
		internal Enumerator(List<StylePropertyName>.Enumerator enumerator)
		{
		}

		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x503CB60", Offset = "0x503CB60", VA = "0x503CB60", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x503CC40", Offset = "0x503CC40", VA = "0x503CC40", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x503CC50", Offset = "0x503CC50", VA = "0x503CC50", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x0")]
	internal List<StylePropertyName> propertiesList;

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x503C8D0", Offset = "0x503C8D0", VA = "0x503C8D0")]
	internal StylePropertyNameCollection(List<StylePropertyName> list)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x503C8E0", Offset = "0x503C8E0", VA = "0x503C8E0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x503C9A0", Offset = "0x503C9A0", VA = "0x503C9A0", Slot = "4")]
	private IEnumerator<StylePropertyName> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStylePropertyName_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x503CA80", Offset = "0x503CA80", VA = "0x503CA80", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
