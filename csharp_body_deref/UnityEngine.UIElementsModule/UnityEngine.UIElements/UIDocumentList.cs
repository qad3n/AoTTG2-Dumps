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
	[Address(RVA = "0x4D1C890", Offset = "0x4D1C890", VA = "0x4D1C890")]
	internal void RemoveFromListAndFromVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x4D1C900", Offset = "0x4D1C900", VA = "0x4D1C900")]
	internal void AddToListAndToVisualTree(UIDocument uiDocument, VisualElement visualTree, int firstInsertIndex = 0)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x4D1C810", Offset = "0x4D1C810", VA = "0x4D1C810")]
	public UIDocumentList()
	{
	}
}
