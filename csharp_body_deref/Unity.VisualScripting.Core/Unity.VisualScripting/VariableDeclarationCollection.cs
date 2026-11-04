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
	[Token(Token = "0x600112E")]
	[Address(RVA = "0x18D9D00", Offset = "0x18D8300", VA = "0x1818D9D00", Slot = "39")]
	protected override string GetKeyForItem(VariableDeclaration item)
	{
		return null;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x2E5A910", Offset = "0x2E58F10", VA = "0x182E5A910")]
	public void EditorRename(VariableDeclaration item, string newName)
	{
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x2E5A970", Offset = "0x2E58F70", VA = "0x182E5A970", Slot = "42")]
	public new bool TryGetValue(string key, out VariableDeclaration value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x2E5AB60", Offset = "0x2E59160", VA = "0x182E5AB60")]
	public VariableDeclarationCollection()
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x2E5AB10", Offset = "0x2E59110", VA = "0x182E5AB10", Slot = "40")]
	private VariableDeclaration Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002Eget_Item(string key)
	{
		return null;
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x2E5AA70", Offset = "0x2E59070", VA = "0x182E5AA70", Slot = "43")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002EContains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x2E5AAC0", Offset = "0x2E590C0", VA = "0x182E5AAC0", Slot = "44")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EString_002CUnity_002EVisualScripting_002EVariableDeclaration_003E_002ERemove(string key)
	{
		return default(bool);
	}
}
