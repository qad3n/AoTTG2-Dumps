// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.TypePathVisitor
// Update status: NEW in this game update
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
		[Address(RVA = "0x153EC70", Offset = "0x153D270", VA = "0x18153EC70")]
		[CompilerGenerated]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x6002EB5")]
		[Address(RVA = "0x3208430", Offset = "0x3206A30", VA = "0x183208430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB2")]
	private Type resolvedType
	{
		[Token(Token = "0x6002EB6")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB3")]
	public VisitReturnCode ReturnCode
	{
		[Token(Token = "0x6002EB7")]
		[Address(RVA = "0x266C1E0", Offset = "0x266A7E0", VA = "0x18266C1E0")]
		[CompilerGenerated]
		get
		{
			return default(VisitReturnCode);
		}
		[Token(Token = "0x6002EB8")]
		[Address(RVA = "0x2B9B710", Offset = "0x2B99D10", VA = "0x182B9B710")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6002EB9")]
	[Address(RVA = "0x32083A0", Offset = "0x32069A0", VA = "0x1832083A0")]
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
	[Address(RVA = "0x3208300", Offset = "0x3206900", VA = "0x183208300")]
	private bool IsLastPartReached()
	{
		return default(bool);
	}

	[Token(Token = "0x6002EBE")]
	[Address(RVA = "0x3208140", Offset = "0x3206740", VA = "0x183208140")]
	private static Type GetElementType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6002EBF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TypePathVisitor()
	{
	}
}
