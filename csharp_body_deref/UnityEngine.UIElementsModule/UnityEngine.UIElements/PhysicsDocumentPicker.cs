// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PhysicsDocumentPicker
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000268")]
internal class PhysicsDocumentPicker
{
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x3283860", Offset = "0x3281E60", VA = "0x183283860")]
	private void Pick(Ray worldRay, float maxDistance, int layerMask, out Collider collider, out UIDocument document, out VisualElement pickedElement, out float distance)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x3283910", Offset = "0x3281F10", VA = "0x183283910")]
	public bool TryPickWithCapture(int pointerId, Ray worldRay, float maxDistance, int layerMask, out Collider collider, out UIDocument document, out VisualElement elementUnderPointer, out float distance, out bool captured)
	{
		return default(bool);
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x3283670", Offset = "0x3281C70", VA = "0x183283670")]
	private bool GetCapturingDocument(int pointerId, out UIDocument capturingDocument)
	{
		return default(bool);
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PhysicsDocumentPicker()
	{
	}
}
