using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001E")]
public class KeyValueCollectionPropertyBag<TDictionary, TKey, TValue> : PropertyBag<TDictionary>, IPropertyBag<TDictionary>, IPropertyBag where TDictionary : IDictionary<TKey, TValue>
{
	[Token(Token = "0x200001F")]
	private class KeyValuePairProperty : Property<TDictionary, KeyValuePair<TKey, TValue>>
	{
		[Token(Token = "0x17000018")]
		public override string Name
		{
			[Token(Token = "0x600005A")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000019")]
		public TKey Key
		{
			[Token(Token = "0x600005B")]
			[CompilerGenerated]
			get
			{
				return (TKey)null;
			}
		}

		[Token(Token = "0x600005C")]
		public KeyValuePairProperty()
		{
		}
	}

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private readonly KeyValuePairProperty m_KeyValuePairProperty;

	[Token(Token = "0x6000059")]
	public KeyValueCollectionPropertyBag()
	{
	}
}
