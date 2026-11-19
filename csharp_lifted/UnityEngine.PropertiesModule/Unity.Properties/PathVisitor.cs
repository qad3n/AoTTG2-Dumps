// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PathVisitor
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69E9C80", Offset = "0x69E8C80", VA = "0x69E9C80")]
		public PropertyScope(PathVisitor visitor, IProperty property)
		{
		}

		[Token(Token = "0x6000149")]
		[Address(RVA = "0x69E9CE0", Offset = "0x69E8CE0", VA = "0x69E9CE0", Slot = "4")]
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
		[Address(RVA = "0x69E9BC0", Offset = "0x69E8BC0", VA = "0x69E9BC0")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x69E9BE0", Offset = "0x69E8BE0", VA = "0x69E9BE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	private IProperty Property
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x69E9C10", Offset = "0x69E8C10", VA = "0x69E9C10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x69E9C20", Offset = "0x69E8C20", VA = "0x69E9C20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool ReadonlyVisit
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x69E9C40", Offset = "0x69E8C40", VA = "0x69E9C40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x69E9C50", Offset = "0x69E8C50", VA = "0x69E9C50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public VisitReturnCode ReturnCode
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x69E9C60", Offset = "0x69E8C60", VA = "0x69E9C60")]
		[CompilerGenerated]
		get
		{
			return default(VisitReturnCode);
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x69E9C70", Offset = "0x69E8C70", VA = "0x69E9C70")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x69E4500", Offset = "0x69E3500", VA = "0x69E4500", Slot = "6")]
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
	[Address(RVA = "0x69E4570", Offset = "0x69E3570", VA = "0x69E4570")]
	protected PathVisitor()
	{
	}
}
