using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D3")]
[SerializationVersion("A", new Type[] { })]
public sealed class VariableDeclarationCollection : KeyedCollection<string, VariableDeclaration>, IKeyedCollection<string, VariableDeclaration>, ICollection<VariableDeclaration>, IEnumerable<VariableDeclaration>, IEnumerable
{
	[Token(Token = "0x6001121")]
	[Address(RVA = "0x4A41DE0", Offset = "0x4A41DE0", VA = "0x4A41DE0", Slot = "39")]
	protected override string GetKeyForItem(VariableDeclaration item)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x4A41E00", Offset = "0x4A41E00", VA = "0x4A41E00")]
	public void EditorRename(VariableDeclaration item, string newName)
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x4A41E50", Offset = "0x4A41E50", VA = "0x4A41E50", Slot = "42")]
	public new bool TryGetValue(string key, out VariableDeclaration value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x4A41F30", Offset = "0x4A41F30", VA = "0x4A41F30")]
	public VariableDeclarationCollection()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x4A41F70", Offset = "0x4A41F70", VA = "0x4A41F70", Slot = "40")]
	private VariableDeclaration Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002Eget_Item(string key)
	{
		return null;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4A41FC0", Offset = "0x4A41FC0", VA = "0x4A41FC0", Slot = "43")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002EContains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4A42010", Offset = "0x4A42010", VA = "0x4A42010", Slot = "44")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002ERemove(string key)
	{
		return default(bool);
	}
}
