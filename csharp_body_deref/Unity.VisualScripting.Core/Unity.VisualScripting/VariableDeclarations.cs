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
		[Address(RVA = "0x4A416B0", Offset = "0x4A416B0", VA = "0x4A416B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x4A416C0", Offset = "0x4A416C0", VA = "0x4A416C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	private ICloner Unity_002EVisualScripting_002EISpecifiesCloner_002Ecloner
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x4A42470", Offset = "0x4A42470", VA = "0x4A42470", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4A41560", Offset = "0x4A41560", VA = "0x4A41560")]
	public VariableDeclarations()
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x4A42160", Offset = "0x4A42160", VA = "0x4A42160")]
	public void Set([InspectorVariableName(ActionDirection.Set)] string variable, object value)
	{
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x4A42060", Offset = "0x4A42060", VA = "0x4A42060")]
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
	[Address(RVA = "0x4A42290", Offset = "0x4A42290", VA = "0x4A42290")]
	public object Get([InspectorVariableName(ActionDirection.Get)] string variable, Type expectedType)
	{
		return null;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x4A42300", Offset = "0x4A42300", VA = "0x4A42300")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4A415F0", Offset = "0x4A415F0", VA = "0x4A415F0")]
	public bool IsDefined([InspectorVariableName(ActionDirection.Any)] string variable)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4A42340", Offset = "0x4A42340", VA = "0x4A42340")]
	public VariableDeclaration GetDeclaration(string variable)
	{
		return null;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x4A416D0", Offset = "0x4A416D0", VA = "0x4A416D0", Slot = "4")]
	public IEnumerator<VariableDeclaration> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x4A423E0", Offset = "0x4A423E0", VA = "0x4A423E0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
