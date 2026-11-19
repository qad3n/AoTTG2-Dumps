// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.AutoCompletePathVisitor
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6C00810", Offset = "0x6BFF810", VA = "0x6C00810")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002EA8")]
			[Address(RVA = "0x6C00820", Offset = "0x6BFF820", VA = "0x6C00820")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BAE")]
		public HashSet<Type> types
		{
			[Token(Token = "0x6002EA9")]
			[Address(RVA = "0x6C00830", Offset = "0x6BFF830", VA = "0x6C00830")]
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
			[Address(RVA = "0x6C00840", Offset = "0x6BFF840", VA = "0x6C00840")]
			[CompilerGenerated]
			get
			{
				return default(PropertyPath);
			}
			[Token(Token = "0x6002EAB")]
			[Address(RVA = "0x6C00860", Offset = "0x6BFF860", VA = "0x6C00860")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BB0")]
		public int currentDepth
		{
			[Token(Token = "0x6002EAC")]
			[Address(RVA = "0x6C00890", Offset = "0x6BFF890", VA = "0x6C00890")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002EAD")]
			[Address(RVA = "0x6C008A0", Offset = "0x6BFF8A0", VA = "0x6C008A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002EAE")]
		[Address(RVA = "0x6C00790", Offset = "0x6BFF790", VA = "0x6C00790")]
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
		[Address(RVA = "0x6C008B0", Offset = "0x6BFF8B0", VA = "0x6C008B0")]
		public VisitedPropertyScope(VisitContext context, IProperty property)
		{
		}

		[Token(Token = "0x6002EB2")]
		[Address(RVA = "0x6C003F0", Offset = "0x6BFF3F0", VA = "0x6C003F0")]
		public VisitedPropertyScope(VisitContext context, int index, Type type)
		{
		}

		[Token(Token = "0x6002EB3")]
		[Address(RVA = "0x6C00BC0", Offset = "0x6BFFBC0", VA = "0x6C00BC0", Slot = "4")]
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
		[Address(RVA = "0x6BFFD00", Offset = "0x6BFED00", VA = "0x6BFFD00")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002E9F")]
	[Address(RVA = "0x6BFFD10", Offset = "0x6BFED10", VA = "0x6BFFD10")]
	private bool HasReachedEnd(Type containerType)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EA0")]
	[Address(RVA = "0x6BFFD80", Offset = "0x6BFED80", VA = "0x6BFFD80")]
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
	[Address(RVA = "0x6BFFE40", Offset = "0x6BFEE40", VA = "0x6BFFE40")]
	private void VisitPropertyType(Type type)
	{
	}

	[Token(Token = "0x6002EA6")]
	[Address(RVA = "0x6C006D0", Offset = "0x6BFF6D0", VA = "0x6C006D0")]
	public AutoCompletePathVisitor()
	{
	}
}
