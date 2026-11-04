// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.AutoCompletePathVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x200065E")]
internal class AutoCompletePathVisitor : ITypeVisitor, IPropertyVisitor, IPropertyBagVisitor, IListPropertyVisitor
{
	[Token(Token = "0x200065F")]
	private class VisitContext
	{
		[Token(Token = "0x17000BAD")]
		public List<PropertyPathInfo> propertyPathInfos
		{
			[Token(Token = "0x6002EA7")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002EA8")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BAE")]
		public HashSet<Type> types
		{
			[Token(Token = "0x6002EA9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BAF")]
		public PropertyPath current
		{
			[Token(Token = "0x6002EAA")]
			[Address(RVA = "0x3209450", Offset = "0x3207A50", VA = "0x183209450")]
			[CompilerGenerated]
			get
			{
				return default(PropertyPath);
			}
			[Token(Token = "0x6002EAB")]
			[Address(RVA = "0x32094B0", Offset = "0x3207AB0", VA = "0x1832094B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BB0")]
		public int currentDepth
		{
			[Token(Token = "0x6002EAC")]
			[Address(RVA = "0x1AAAA90", Offset = "0x1AA9090", VA = "0x181AAAA90")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002EAD")]
			[Address(RVA = "0x1C5E460", Offset = "0x1C5CA60", VA = "0x181C5E460")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002EAE")]
		[Address(RVA = "0x32093D0", Offset = "0x32079D0", VA = "0x1832093D0")]
		public VisitContext()
		{
		}
	}

	[Token(Token = "0x2000660")]
	private struct InspectedTypeScope<TContainer> : IDisposable
	{
		[Token(Token = "0x4001850")]
		[FieldOffset(Offset = "0x0")]
		private VisitContext m_VisitContext;

		[Token(Token = "0x6002EAF")]
		public InspectedTypeScope(VisitContext context)
		{
		}

		[Token(Token = "0x6002EB0")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000661")]
	private struct VisitedPropertyScope : IDisposable
	{
		[Token(Token = "0x4001851")]
		[FieldOffset(Offset = "0x0")]
		private VisitContext m_VisitContext;

		[Token(Token = "0x6002EB1")]
		[Address(RVA = "0x3209A00", Offset = "0x3208000", VA = "0x183209A00")]
		public VisitedPropertyScope(VisitContext context, IProperty property)
		{
		}

		[Token(Token = "0x6002EB2")]
		[Address(RVA = "0x32096B0", Offset = "0x3207CB0", VA = "0x1832096B0")]
		public VisitedPropertyScope(VisitContext context, int index, Type type)
		{
		}

		[Token(Token = "0x6002EB3")]
		[Address(RVA = "0x3209510", Offset = "0x3207B10", VA = "0x183209510", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400184A")]
	[FieldOffset(Offset = "0x10")]
	private VisitContext m_VisitContext;

	[Token(Token = "0x17000BAC")]
	public int maxDepth
	{
		[Token(Token = "0x6002E9E")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002E9F")]
	[Address(RVA = "0x31FAFD0", Offset = "0x31F95D0", VA = "0x1831FAFD0")]
	private bool HasReachedEnd(Type containerType)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EA0")]
	[Address(RVA = "0x31FB050", Offset = "0x31F9650", VA = "0x1831FB050")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002EA1")]
	private void Unity_002EProperties_002EITypeVisitor_002EVisit<TContainer>()
	{
	}

	[Token(Token = "0x6002EA2")]
	private void Unity_002EProperties_002EIPropertyBagVisitor_002EVisit<TContainer>(IPropertyBag<TContainer> properties, ref TContainer container)
	{
	}

	[Token(Token = "0x6002EA3")]
	private void Unity_002EProperties_002EIPropertyVisitor_002EVisit<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container)
	{
	}

	[Token(Token = "0x6002EA4")]
	private void Unity_002EProperties_002EIListPropertyVisitor_002EVisit<TContainer, TList, TElement>(Property<TContainer, TList> property, ref TContainer container, ref TList list) where TList : IList<TElement>
	{
	}

	[Token(Token = "0x6002EA5")]
	[Address(RVA = "0x31FB120", Offset = "0x31F9720", VA = "0x1831FB120")]
	private void VisitPropertyType(Type type)
	{
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x31FB470", Offset = "0x31F9A70", VA = "0x1831FB470")]
	public AutoCompletePathVisitor()
	{
	}
}
