// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.TypePathVisitor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000662")]
internal class TypePathVisitor : ITypeVisitor, IPropertyBagVisitor, IPropertyVisitor
{
	[Token(Token = "0x4001855")]
	[FieldOffset(Offset = "0xB0")]
	private Type m_LastType;

	[Token(Token = "0x4001856")]
	[FieldOffset(Offset = "0xB8")]
	private int m_PathIndex;

	[Token(Token = "0x17000BB1")]
	public PropertyPath Path
	{
		[Token(Token = "0x6002EB4")]
		[Address(RVA = "0x6C00C60", Offset = "0x6BFFC60", VA = "0x6C00C60")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x6002EB5")]
		[Address(RVA = "0x6C00C80", Offset = "0x6BFFC80", VA = "0x6C00C80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB2")]
	private Type resolvedType
	{
		[Token(Token = "0x6002EB6")]
		[Address(RVA = "0x6C00CB0", Offset = "0x6BFFCB0", VA = "0x6C00CB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB3")]
	public VisitReturnCode ReturnCode
	{
		[Token(Token = "0x6002EB7")]
		[Address(RVA = "0x6C00CD0", Offset = "0x6BFFCD0", VA = "0x6C00CD0")]
		[CompilerGenerated]
		get
		{
			return default(VisitReturnCode);
		}
		[Token(Token = "0x6002EB8")]
		[Address(RVA = "0x6C00CE0", Offset = "0x6BFFCE0", VA = "0x6C00CE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6002EB9")]
	[Address(RVA = "0x6C00CF0", Offset = "0x6BFFCF0", VA = "0x6C00CF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002EBA")]
	private void Unity_002EProperties_002EIPropertyBagVisitor_002EVisit<TContainer>(IPropertyBag<TContainer> properties, ref TContainer container)
	{
	}

	[Token(Token = "0x6002EBB")]
	private void Unity_002EProperties_002EIPropertyVisitor_002EVisit<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container)
	{
	}

	[Token(Token = "0x6002EBC")]
	private void Unity_002EProperties_002EITypeVisitor_002EVisit<TContainer>()
	{
	}

	[Token(Token = "0x6002EBD")]
	[Address(RVA = "0x6C00D80", Offset = "0x6BFFD80", VA = "0x6C00D80")]
	private bool IsLastPartReached()
	{
		return default(bool);
	}

	[Token(Token = "0x6002EBE")]
	[Address(RVA = "0x6C00E10", Offset = "0x6BFFE10", VA = "0x6C00E10")]
	private static Type GetElementType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6002EBF")]
	[Address(RVA = "0x6C00FC0", Offset = "0x6BFFFC0", VA = "0x6C00FC0")]
	public TypePathVisitor()
	{
	}
}
