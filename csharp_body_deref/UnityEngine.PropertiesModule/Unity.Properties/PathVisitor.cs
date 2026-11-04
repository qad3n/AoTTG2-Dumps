// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PathVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000057")]
public abstract class PathVisitor : IPropertyBagVisitor, IPropertyVisitor
{
	[Token(Token = "0x2000058")]
	private readonly struct PropertyScope : IDisposable
	{
		[Token(Token = "0x400007E")]
		[FieldOffset(Offset = "0x0")]
		private readonly PathVisitor m_Visitor;

		[Token(Token = "0x400007F")]
		[FieldOffset(Offset = "0x8")]
		private readonly IProperty m_Property;

		[Token(Token = "0x6000148")]
		[Address(RVA = "0x2FF1D40", Offset = "0x2FF0340", VA = "0x182FF1D40")]
		public PropertyScope(PathVisitor visitor, IProperty property)
		{
		}

		[Token(Token = "0x6000149")]
		[Address(RVA = "0x2FF1D10", Offset = "0x2FF0310", VA = "0x182FF1D10", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x10")]
	private int m_PathIndex;

	[Token(Token = "0x1700003B")]
	public PropertyPath Path
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x2FEB690", Offset = "0x2FE9C90", VA = "0x182FEB690")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2FEB6F0", Offset = "0x2FE9CF0", VA = "0x182FEB6F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	private IProperty Property
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool ReadonlyVisit
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x560590", Offset = "0x55EB90", VA = "0x180560590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x560600", Offset = "0x55EC00", VA = "0x180560600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public VisitReturnCode ReturnCode
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x1AAAB30", Offset = "0x1AA9130", VA = "0x181AAAB30")]
		[CompilerGenerated]
		get
		{
			return default(VisitReturnCode);
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x2C12350", Offset = "0x2C10950", VA = "0x182C12350")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2FEB630", Offset = "0x2FE9C30", VA = "0x182FEB630", Slot = "6")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000144")]
	private void Unity_002EProperties_002EIPropertyBagVisitor_002EVisit<TContainer>(IPropertyBag<TContainer> properties, ref TContainer container)
	{
	}

	[Token(Token = "0x6000145")]
	private void Unity_002EProperties_002EIPropertyVisitor_002EVisit<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container)
	{
	}

	[Token(Token = "0x6000146")]
	protected virtual void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected PathVisitor()
	{
	}
}
