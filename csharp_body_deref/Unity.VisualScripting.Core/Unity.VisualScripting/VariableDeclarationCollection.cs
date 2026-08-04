// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariableDeclarationCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D669A0", Offset = "0x4D669A0", VA = "0x4D669A0", Slot = "39")]
	protected override string GetKeyForItem(VariableDeclaration item)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x4D669C0", Offset = "0x4D669C0", VA = "0x4D669C0")]
	public void EditorRename(VariableDeclaration item, string newName)
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x4D66A10", Offset = "0x4D66A10", VA = "0x4D66A10", Slot = "42")]
	public new bool TryGetValue(string key, out VariableDeclaration value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x4D66AF0", Offset = "0x4D66AF0", VA = "0x4D66AF0")]
	public VariableDeclarationCollection()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x4D66B30", Offset = "0x4D66B30", VA = "0x4D66B30", Slot = "40")]
	private VariableDeclaration Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002Eget_Item(string key)
	{
		return null;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4D66B80", Offset = "0x4D66B80", VA = "0x4D66B80", Slot = "43")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002EContains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4D66BD0", Offset = "0x4D66BD0", VA = "0x4D66BD0", Slot = "44")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002ERemove(string key)
	{
		return default(bool);
	}
}
