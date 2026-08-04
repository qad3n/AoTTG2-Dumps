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

[Token(Token = "0x2000211")]
internal class UIDocumentList
{
	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x10")]
	internal List<UIDocument> m_AttachedUIDocuments;

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x50441C0", Offset = "0x50441C0", VA = "0x50441C0")]
	internal void RemoveFromListAndFromVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x5044230", Offset = "0x5044230", VA = "0x5044230")]
	internal void AddToListAndToVisualTree(UIDocument uiDocument, VisualElement visualTree, int firstInsertIndex = 0)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x5044140", Offset = "0x5044140", VA = "0x5044140")]
	public UIDocumentList()
	{
	}
}
