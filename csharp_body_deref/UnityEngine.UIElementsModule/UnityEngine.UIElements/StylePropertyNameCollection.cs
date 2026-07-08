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
			[Address(RVA = "0x4D15270", Offset = "0x4D15270", VA = "0x4D15270", Slot = "4")]
			get
			{
				return default(StylePropertyName);
			}
		}

		[Token(Token = "0x1700025C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CC9")]
			[Address(RVA = "0x4D152A0", Offset = "0x4D152A0", VA = "0x4D152A0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x4D15050", Offset = "0x4D15050", VA = "0x4D15050")]
		internal Enumerator(List<StylePropertyName>.Enumerator enumerator)
		{
		}

		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x4D15230", Offset = "0x4D15230", VA = "0x4D15230", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x4D15310", Offset = "0x4D15310", VA = "0x4D15310", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x4D15320", Offset = "0x4D15320", VA = "0x4D15320", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x0")]
	internal List<StylePropertyName> propertiesList;

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4D14FA0", Offset = "0x4D14FA0", VA = "0x4D14FA0")]
	internal StylePropertyNameCollection(List<StylePropertyName> list)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4D14FB0", Offset = "0x4D14FB0", VA = "0x4D14FB0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4D15070", Offset = "0x4D15070", VA = "0x4D15070", Slot = "4")]
	private IEnumerator<StylePropertyName> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EUIElements_002EStylePropertyName_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4D15150", Offset = "0x4D15150", VA = "0x4D15150", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
