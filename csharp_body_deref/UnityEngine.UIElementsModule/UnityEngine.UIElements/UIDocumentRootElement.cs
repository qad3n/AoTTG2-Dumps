// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocumentRootElement
// Update status: NEW in this game update
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
		[Address(RVA = "0x3206DC0", Offset = "0x32053C0", VA = "0x183206DC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001105")]
		[Address(RVA = "0x3206E90", Offset = "0x3205490", VA = "0x183206E90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x3286930", Offset = "0x3284F30", VA = "0x183286930")]
	public UIDocumentRootElement(UIDocument document, VisualTreeAsset sourceAsset)
	{
	}
}
