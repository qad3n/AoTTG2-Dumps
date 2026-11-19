// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocumentList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000281")]
internal class UIDocumentList
{
	[Token(Token = "0x4000962")]
	[FieldOffset(Offset = "0x10")]
	internal List<UIDocument> m_AttachedUIDocuments;

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x6C88EC0", Offset = "0x6C87EC0", VA = "0x6C88EC0")]
	internal void RemoveFromListAndFromVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x6C88F30", Offset = "0x6C87F30", VA = "0x6C88F30")]
	internal void AddToListAndToVisualTree(UIDocument uiDocument, VisualElement visualTree, bool ignoreContentContainer, int firstInsertIndex = 0)
	{
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x6C88E40", Offset = "0x6C87E40", VA = "0x6C88E40")]
	public UIDocumentList()
	{
	}
}
