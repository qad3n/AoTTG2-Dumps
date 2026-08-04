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
	[Token(Token = "0x4000949")]
	[FieldOffset(Offset = "0x10")]
	public VariableKind Kind;

	[Token(Token = "0x400094A")]
	[FieldOffset(Offset = "0x18")]
	[Serialize]
	[InspectorWide(true)]
	private VariableDeclarationCollection collection;

	[Token(Token = "0x400094B")]
	[FieldOffset(Offset = "0x20")]
	internal Action OnVariableChanged;

	[Token(Token = "0x170001EB")]
	public object this[[InspectorVariableName(ActionDirection.Any)] string variable]
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x4D66270", Offset = "0x4D66270", VA = "0x4D66270")]
		get
		{
			return null;
		}
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x4D66280", Offset = "0x4D66280", VA = "0x4D66280")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	private ICloner Unity_002EVisualScripting_002EISpecifiesCloner_002Ecloner
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x4D67030", Offset = "0x4D67030", VA = "0x4D67030", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4D66120", Offset = "0x4D66120", VA = "0x4D66120")]
	public VariableDeclarations()
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x4D66D20", Offset = "0x4D66D20", VA = "0x4D66D20")]
	public void Set([InspectorVariableName(ActionDirection.Set)] string variable, object value)
	{
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x4D66C20", Offset = "0x4D66C20", VA = "0x4D66C20")]
	public object Get([InspectorVariableName(ActionDirection.Get)] string variable)
	{
		return null;
	}

	[Token(Token = "0x600112D")]
	public T Get<T>([InspectorVariableName(ActionDirection.Get)] string variable)
	{
		return (T)null;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x4D66E50", Offset = "0x4D66E50", VA = "0x4D66E50")]
	public object Get([InspectorVariableName(ActionDirection.Get)] string variable, Type expectedType)
	{
		return null;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x4D66EC0", Offset = "0x4D66EC0", VA = "0x4D66EC0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4D661B0", Offset = "0x4D661B0", VA = "0x4D661B0")]
	public bool IsDefined([InspectorVariableName(ActionDirection.Any)] string variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4D66F00", Offset = "0x4D66F00", VA = "0x4D66F00")]
	public VariableDeclaration GetDeclaration(string variable)
	{
		return null;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x4D66290", Offset = "0x4D66290", VA = "0x4D66290", Slot = "4")]
	public IEnumerator<VariableDeclaration> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x4D66FA0", Offset = "0x4D66FA0", VA = "0x4D66FA0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
