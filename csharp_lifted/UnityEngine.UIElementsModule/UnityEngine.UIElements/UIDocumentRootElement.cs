// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocumentRootElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000282")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
internal class UIDocumentRootElement : TemplateContainer
{
	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x2F0")]
	public readonly UIDocument document;

	[Token(Token = "0x1700036D")]
	internal UIRenderer uiRenderer
	{
		[Token(Token = "0x6001104")]
		[Address(RVA = "0x6C8A770", Offset = "0x6C89770", VA = "0x6C8A770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001105")]
		[Address(RVA = "0x6C8A780", Offset = "0x6C89780", VA = "0x6C8A780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x6C8A7A0", Offset = "0x6C897A0", VA = "0x6C8A7A0")]
	public UIDocumentRootElement(UIDocument document, VisualTreeAsset sourceAsset)
	{
	}
}
