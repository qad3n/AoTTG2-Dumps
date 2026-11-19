// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariableDeclarations
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D4")]
[SerializationVersion("A", new Type[] { })]
public sealed class VariableDeclarations : IEnumerable<VariableDeclaration>, IEnumerable, ISpecifiesCloner
{
	[Token(Token = "0x4000947")]
	[FieldOffset(Offset = "0x10")]
	public VariableKind Kind;

	[Token(Token = "0x4000948")]
	[FieldOffset(Offset = "0x18")]
	[Serialize]
	[InspectorWide(true)]
	private VariableDeclarationCollection collection;

	[Token(Token = "0x4000949")]
	[FieldOffset(Offset = "0x20")]
	internal Action OnVariableChanged;

	[Token(Token = "0x170001EE")]
	public object this[[InspectorVariableName(ActionDirection.Any)] string variable]
	{
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x68501B0", Offset = "0x684F1B0", VA = "0x68501B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001137")]
		[Address(RVA = "0x68501C0", Offset = "0x684F1C0", VA = "0x68501C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	private ICloner Unity_002EVisualScripting_002EISpecifiesCloner_002Ecloner
	{
		[Token(Token = "0x6001141")]
		[Address(RVA = "0x6850F70", Offset = "0x684FF70", VA = "0x6850F70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x6850060", Offset = "0x684F060", VA = "0x6850060")]
	public VariableDeclarations()
	{
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x6850C60", Offset = "0x684FC60", VA = "0x6850C60")]
	public void Set([InspectorVariableName(ActionDirection.Set)] string variable, object value)
	{
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x6850B60", Offset = "0x684FB60", VA = "0x6850B60")]
	public object Get([InspectorVariableName(ActionDirection.Get)] string variable)
	{
		return null;
	}

	[Token(Token = "0x600113A")]
	public T Get<T>([InspectorVariableName(ActionDirection.Get)] string variable)
	{
		return (T)null;
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x6850D90", Offset = "0x684FD90", VA = "0x6850D90")]
	public object Get([InspectorVariableName(ActionDirection.Get)] string variable, Type expectedType)
	{
		return null;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x6850E00", Offset = "0x684FE00", VA = "0x6850E00")]
	public void Clear()
	{
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x68500F0", Offset = "0x684F0F0", VA = "0x68500F0")]
	public bool IsDefined([InspectorVariableName(ActionDirection.Any)] string variable)
	{
		return default(bool);
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x6850E40", Offset = "0x684FE40", VA = "0x6850E40")]
	public VariableDeclaration GetDeclaration(string variable)
	{
		return null;
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x68501D0", Offset = "0x684F1D0", VA = "0x68501D0", Slot = "4")]
	public IEnumerator<VariableDeclaration> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x6850EE0", Offset = "0x684FEE0", VA = "0x6850EE0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
