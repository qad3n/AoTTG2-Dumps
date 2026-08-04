// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.SetPropertyBagBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000025")]
public class SetPropertyBagBase<TSet, TElement> : PropertyBag<TSet>, IPropertyBag<TSet>, IPropertyBag where TSet : ISet<TElement>
{
	[Token(Token = "0x2000026")]
	private class SetElementProperty : Property<TSet, TElement>
	{
		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x0")]
		internal TElement m_Value;

		[Token(Token = "0x1700001D")]
		public override string Name
		{
			[Token(Token = "0x6000073")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000074")]
		public SetElementProperty()
		{
		}
	}

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private readonly SetElementProperty m_Property;

	[Token(Token = "0x6000072")]
	public SetPropertyBagBase()
	{
	}
}
