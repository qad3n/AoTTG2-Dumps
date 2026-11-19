// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PhysicsDocumentPicker
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6C82010", Offset = "0x6C81010", VA = "0x6C82010")]
	private void Pick(Ray worldRay, float maxDistance, int layerMask, out Collider collider, out UIDocument document, out VisualElement pickedElement, out float distance)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x6C82D60", Offset = "0x6C81D60", VA = "0x6C82D60")]
	public bool TryPickWithCapture(int pointerId, Ray worldRay, float maxDistance, int layerMask, out Collider collider, out UIDocument document, out VisualElement elementUnderPointer, out float distance, out bool captured)
	{
		return default(bool);
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x6C82F80", Offset = "0x6C81F80", VA = "0x6C82F80")]
	private bool GetCapturingDocument(int pointerId, out UIDocument capturingDocument)
	{
		return default(bool);
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x6C83570", Offset = "0x6C82570", VA = "0x6C83570")]
	public PhysicsDocumentPicker()
	{
	}
}
